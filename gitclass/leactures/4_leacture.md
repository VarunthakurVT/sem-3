# Git Branching, Commit, Merge, Push/Pull, Rename, and Git Ignore Class

August 26, 2026·11:11 AM·35m 47s


## Overview

Practical Git lesson covering branch cleanup, commits, merging, collaboration, remote synchronization, branch renaming, and `.gitignore`

One instructor with multiple students; Varun and other students were addressed during demonstrations and attendance

Critical outcomes:

Students should retain only `master` and one additional branch before practicing

The branching exercise requires separate commits in `master` and the other branch, followed by a merge

`git pull` is used to retrieve current remote changes before continuing collaborative work

Branch renaming and `git ignore` were introduced as additional Git commands

## Branch Cleanup and Initial Setup

`git branch` displays the available local branches and should be run first to verify the setup

Only two branches should remain: `master` and one other branch, identified in the exercise as `D1`

Extra branches should be removed with:

`git branch -d branch-name`

Branch deletion must be performed after switching to `master`; the instructor emphasized that an extra branch should not be deleted while currently working on it

The instructor asked students to keep mobile phones silent during class and postpone doubts until the end

## Creating Separate Commits in Master and the Working Branch

The exercise begins with the student positioned on `master`

A file must be updated before a commit can be created:

Modify one file

Run `git status` to identify the changed file

Run `git add file-name`

Create the commit with `git commit -m "commit in master"`

The same process must be repeated on the other branch:

Switch branches using `git switch branch-name`

Update a file

Run `git status`

Stage the file with `git add file-name`

Commit using the message `commit in branch`

The instructor clarified that students should not update all four files for this exercise; using separate changes helps demonstrate the merge process

## Merging the Branch and Checking the Result

After committing on the second branch, students must switch back to `master`:

`git switch master`

The branch is merged into `master` with:

`git merge branch-name`

A merge may show an editor or message prompt; the instructor referred to exiting it with `Esc` followed by `:wq`

Updating the same original file in both branches can create a merge conflict

A successful merge may display a merge-success message; after merging, students should run `git log` to confirm that the commits and file history are present

No additional commit is required merely because the merge completed successfully if the branch changes were already committed

## Why Branching Is Used in Software Projects

Branching protects the active or production version of a website or application while new features are developed separately

A branch acts as a copy of the main project where developers can modify and test new functionality without affecting `master`

Features should be committed and tested in the separate branch before being merged into the main project

After a successful merge, the combined code can be built, hosted, uploaded to GitHub, and released as a new version

Collaboration requires checking for changes made by other developers before uploading local work; another contributor may have uploaded newer features first

## Remote Commands, Branch Renaming, and Git Ignore

`git push` uploads local commits or changes to the remote repository

`git pull` retrieves the current version from the remote repository and is important when multiple people are working on the same project

Branch renaming was introduced with the format:

`git branch old-name new-name`

An error such as “branch name already exists” means the requested new branch name is already in use; students were advised to read the error and verify the branch state

The instructor corrected confusion between `git switch` and other command syntax, including the placement of options such as `-m`

`git remote add` was mentioned in response to a student’s question, but the main demonstrated remote operation was `git push`

`git ignore` was introduced as another important Git topic for preventing selected files from being tracked, though its detailed syntax was not covered in the transcript

## Classroom Administration and Unrelated Conversation

Students asked whether notes had been prepared and whether the displayed Git steps were clear

The class was identified as the second class, with a reference to EVS

Attendance was called for many students, including Varun, who responded “Yes sir”

The final portion included informal classroom conversation about books, cards, appearance, drawings, and other unrelated remarks

---

## Action items

**Students**: Run `git branch` and delete extra branches so only `master` and one additional branch remain

**Students**: Complete the exercise using `commit in master`, `commit in branch`, and a merge into `master`

**Students**: Use `git status`, `git add`, `git commit -m`, `git switch`, `git merge`, and `git log` in the demonstrated sequence

**Students**: Practice `git pull`, branch renaming, and the introductory `git ignore` command