# C++ HelloWorld – GitHub Actions CI/CD

A minimal C++ HelloWorld project with an automated **CI/CD pipeline** using **GitHub Actions**.  
Every push automatically **builds**, **tests**, and **uploads artifacts**.

---

## ⚙️ CI/CD Workflow

The pipeline runs on:

- Push to `main`
- Pull requests
- Manual trigger (`workflow_dispatch`)

It performs:

- Build using `g++`
- Run the application
- Run basic tests
- Upload compiled binary as an artifact

---


