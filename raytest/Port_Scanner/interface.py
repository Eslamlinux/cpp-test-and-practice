import subprocess

def check_port(ip, port):
    # تشغيل برنامج الـ C++ المترجم وتمرير الوسائط له
    result = subprocess.run(['./scanner', ip, str(port)], capture_output=True, text=True)
    
    # قراءة ما طبعه برنامج الـ C++
    status = result.stdout.strip()
    return status

# تجربة الأداة

entrip = input("enter the ip: ")
target_ip = entrip # جوجل كمثال
target_port = 53      # منفذ DNS

print(f"Checking {target_ip}:{target_port} ...")
status = check_port(target_ip, target_port)

if status == "OPEN":
    print(f"[*] Port {target_port} is OPEN! ✅")
else:
    print(f"[!] Port {target_port} is CLOSED. ❌")