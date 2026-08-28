# Git Installation, Git Bash Commands, and First Repository Lab Session

## Overview: Git and Command-Line Lab Class

Practical education session introducing Git as a version control system and checking student installations


Students were asked to verify Git installation and version on Windows, macOS, or Linux

Core Git workflow will cover repository initialization, branches, add, commit, push, pull, clone, and patch

The instructor planned to continue repository creation and initialization in the next class

## Git Installation and Version Verification

Git was introduced as a version control system for managing changes, collaborating, and handling storage efficiently


Windows users were instructed to open Command Prompt and run the Git version command

macOS and Linux users were told to open Terminal and run the same version check command --
```
git --version
```


A student reported having an older Git version, shown as **5.3**, with no visible update option

Reinstalling Git was suggested if updating was not available

Students discussed an additional “M W” download or environment-related requirement that might need to be installed separately

Installation settings may require selecting an option to download or configure the tool for a virtual environment

---

## Git Bash, Local Repositories, and Authentication

A local repository can be created by making a folder and initializing Git inside it


Windows students were advised to right-click the project folder and open it directly in Git Bash

Opening Git Bash from the project directory avoids manually entering the full path

Repository initialization creates the local Git structure, after which branches and project files can be managed

The basic workflow was described as:
First initializing repo by this command
```
git init
```

Add the files that should be tracked
``` 
git add .
```


Commit changes using Git commit commands
``` 
git commit -m "i do the commit"
```

Push final changes to a remote repository
```
git push origin main
```

Git authentication may be required when connecting a local project to a remote Git repository 
To authenticate use this command 
```
git config --global user.name "Varun Thakur"
```
This is for the username 
for email do this 
```
git comfig --global user.email "vtthakurvarun@gmail.com"
```

`.gitignore` was identified as the file used to exclude selected files from being tracked or uploaded

Git Bash was recommended because some commands may not work identically in Command Prompt or PowerShell

---

## First Unit Scope and Expected Examination Topics

The first unit was described as relatively small, covering installation, basic help usage, and command history

The instructor estimated that students could complete the material in approximately one or two weeks

Expected examination topics include:

Definition of Git

Definition of a version control system

Checking the installed Git version

Explaining how to push code

Commands expected in the course include `add`, `clone`, `init`, `branch`, `commit`, `push`, and `pull`

Patch usage was briefly connected with contributing to repositories, particularly in open-source development

Students asked whether all commands would be taught; the instructor indicated that most of the important commands would be covered

---

## Help, History, Directory Creation, and Command-Line Practice

`git help` was demonstrated as a way to access Git command documentation

Students practiced entering help commands and clarifying the correct spacing and syntax

Command cancellation was associated with ```

```
Ctrl+C
```


Directory creation was explained using `mkdir` or `MKDIR`

The directory command pattern was given as `mkdir <directory-name>`

A new directory can be created by supplying either a folder name or an appropriate path

Students practiced checking directories and navigating between them

`ls` was mentioned for listing directory contents

Students encountered confusion between Git commands and general shell commands, including attempts to use commands that were not recognized

Deleting directories or files remained unclear for some students, especially when using Windows command-line tools

The instructor cautioned students not to run unknown commands because an incorrect command could damage or disrupt the system

---

## Class Logistics and Next Session

Several students lacked laptops during the session, limiting the practical work that could be completed

The instructor decided to begin the teaching portion from the next class so students could prepare properly

The next practical focus will be initializing a new repository and creating a repository workflow

Students were encouraged to complete installation, version verification, and environment setup at home

The class also discussed an upcoming lab and whether students should move to another scheduled session

---

## Action items

**Students**: Verify Git installation and version using Command Prompt or Terminal, and complete any missing environment setup

**Students**: Practice opening the project folder in Git Bash and using basic commands such as `git help`, `mkdir`, `ls`, `init`, `add`, and `commit`

**Instructor**: Continue with repository initialization and new repository creation in the next class

**Instructor**: Share or prepare class notes covering the Git definitions, commands, and workflows