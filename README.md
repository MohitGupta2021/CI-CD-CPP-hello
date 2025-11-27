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
# SUMMARY: HOW GITHUB ACTIONS WORK
  1) You push code → GitHub detects it
  2) GitHub Actions starts a workflow run
  3) It creates a fresh Linux VM
  4) It executes each step:
    ✔ Pull repo
    ✔ Install tools
    ✔ CMake configure
    ✔ Build
    ✔ Test
    ✔ Static analysis
    ✔ Save artifacts

  5) Shows results in GitHub Action UI


