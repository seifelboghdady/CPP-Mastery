import os

# الإعدادات - الفولدرات اللي السكربت هيتجاهلها
EXCLUDE_DIRS = {'.git', '.github', 'Scripts'}
CPP_EXTENSION = '.cpp'

def generate_readme():
    content = "# 🚀 Problem Solving Journey\n\n"
    content += "Welcome to my automated portfolio for competitive programming. This README is updated automatically by a GitHub Action.\n\n"
    
    # قسم الإحصائيات (Stats Dashboard)
    stats = {}
    problems_list = []

    # المسح الشامل للفولدرات
    for root, dirs, files in os.walk('.'):
        dirs[:] = [d for d in dirs if d not in EXCLUDE_DIRS]
        
        for file in files:
            if file.endswith(CPP_EXTENSION):
                # استخراج البيانات
                path = os.path.join(root, file)
                category = root.split(os.sep)[1] if os.sep in root else "General"
                problem_name = file.replace(CPP_EXTENSION, "").replace("_", " ")
                
                # تحديث الروابط لتكون متوافقة مع GitHub
                github_link = f"./{path.replace(os.sep, '/')}"
                
                problems_list.append({
                    "name": problem_name,
                    "category": category,
                    "link": github_link
                })
                
                stats[category] = stats.get(category, 0) + 1

    # إضافة لوحة الإحصائيات للـ README
    content += "## 📊 Statistics\n"
    content += "| Category | Solved |\n|--- | ---|\n"
    for cat, count in stats.items():
        content += f"| **{cat}** | {count} |\n"
    content += f"| **Total** | **{len(problems_list)}** |\n\n"

    # إضافة الجدول الرئيسي
    content += "## 📚 Problem Archive\n"
    content += "| # | Problem Name | Category | Solution |\n"
    content += "|---|--------------|----------|----------|\n"
    
    for i, prob in enumerate(reversed(problems_list), 1): # الأحدث يظهر أولاً
        content += f"| {i} | {prob['name']} | {prob['category']} | [View Code]({prob['link']}) |\n"

    # كتابة الملف
    with open("README.md", "w", encoding="utf-8") as f:
        f.write(content)

if __name__ == "__main__":
    generate_readme()