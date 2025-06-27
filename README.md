# 🧠 C2 GitHub – Educational Command & Control Over GitHub

> ⚠️ **This is a proof-of-concept tool made for educational purposes only. It is full of bugs and limitations. Use at your own risk.**

---

## 🧬 What is this?

`GavedupC2` is an experimental tool that helps you create remote control (C2) systems over GitHub. The payload will connect to your GitHub repository, download new commands, and execute them. The results (logs) will be uploaded back to GitHub.

---

## 🧪 Features

- ☁️ Fetch commands from GitHub repo
- 💾 Automatically log results to GitHub (`logs/*.txt`)
- 💻 Execute commands like:

- `info_advanced` – collect machine information
- `http_attack` – send HTTP request to target IP

---

## ⚙️ Build Instructions (Windows only)

Requirements:

- MinGW
- libcurl (Windows build)
- Internet

```bash
# Clone repo
git clone https://github.com/ken3009le/GavedUP_c2.git
cd GavedUP_c2

# Compile payload (silent, no console)
mingw32-make clean
mingw32-make
```

> If the build fails due to `Permission denied`, make sure there is no `payload.exe` running in the background (`taskkill /F /IM payload.exe`).

---

## 🚨 Warning

- ❌ Not guaranteed to work – code is incomplete, has many bugs.

- 🔥 May be detected by antivirus.

- 🤕 Do not use in a live environment.

- 🧱 Not responsible if you cause errors, damage, or violate GitHub terms.

---

## 🧷 Legal Disclaimer

> This project is intended for **educational and research purposes only**.

> The authors and contributors are **not responsible for any misuse**.

> Use this code at your own risk. Do not use on machines you do not own or have permission to test on.

---

## 📡 How It Works

- `payload.exe` copies itself to `%APPDATA%`, runs in the background.

- Every 3 seconds, it checks the command file in the GitHub repo.
- If there is a new command: parse, execute, log the result back to GitHub.

---

## 🧪 Sample Command Format (GitHub content)

```text
feature:info_advanced
```

Or:

```text
feature:http_attack 192.168.1.1:80
```

---

## 💬 Contact

You can fork or open an issue if you want to edit, upgrade, or discuss.
Author: **ken3009le**
Repo: [https://github.com/ken3009le/GavedupC2](https://github.com/ken3009le/GavedupC2)
