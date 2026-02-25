import os
import urllib.parse

EXCLUDE_DIRS = {'.git', '.github', 'Scripts'}
CPP_EXTENSION = '.cpp'

def generate_readme():
    content = "# 🚀 Problem Solving Journey\n\n"
    content += "Welcome to my automated portfolio. This README is updated automatically.\n\n"
    
    stats = {}
    problems_list = []

    for root, dirs, files in os.walk('.'):
        dirs[:] = [d for d in dirs if d not in EXCLUDE_DIRS]
        
        for file in files:
            if file.endswith(CPP_EXTENSION):
                path = os.path.join(root, file)
                relative_path = path.replace(os.sep, '/')
                if relative_path.startswith('./'):
                    relative_path = relative_path[2:]
                
                encoded_path = urllib.parse.quote(relative_path)
                github_link = f"./{encoded_path}"
                
                # تحليل المسار لاستخراج التصنيفات
                path_parts = root.split(os.sep)
                # Category 1: المجلد الأب (مثلاً Codeforces)
                category1 = path_parts[1] if len(path_parts) > 1 else "General"
                # Category 2: المجلد الفرعي مباشرة (مثلاً Strings أو Loops)
                category2 = path_parts[-1] if len(path_parts) > 1 else "-"
                
                problem_name = file.replace(CPP_EXTENSION, "").replace("-", " ").replace("_", " ")
                
                problems_list.append({
                    "name": problem_name,
                    "cat1": category1,
                    "cat2": category2,
                    "link": github_link
                })
                
                # الإحصائيات بناءً على المنصة الأساسية
                stats[category1] = stats.get(category1, 0) + 1

    # قسم الإحصائيات
    content += "## 📊 Statistics\n"
    content += "| Platform | Solved |\n|--- | ---|\n"
    for cat, count in stats.items():
        content += f"| **{cat}** | {count} |\n"
    content += f"| **Total** | **{len(problems_list)}** |\n\n"

    # الجدول الجديد بـ 5 أعمدة
    content += "## 📚 Problem Archive\n"
    content += "| # | Problem Name | Platform | Topic | Solution |\n"
    content += "|---|--------------|----------|-------|----------|\n"
    
    # ترتيب من الأحدث للأقدم
    for i, prob in enumerate(reversed(problems_list), 1):
        content += f"| {i} | {prob['name']} | {prob['cat1']} | `{prob['cat2']}` | [View Code]({prob['link']}) |\n"

    with open("README.md", "w", encoding="utf-8") as f:
        f.write(content)

if __name__ == "__main__":
    generate_readme()