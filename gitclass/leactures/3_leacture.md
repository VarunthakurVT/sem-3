# Git Branching Practice: Master, Status, Switching, Commits, and Merge Workflow


## Overview

Practical Git lesson focused on creating branches and safely managing changes across a main branch and feature branches

Participants: an instructor and student(s); individual speaker identities are not clearly established

Critical outcomes:

Keep the main/master branch unchanged while developing separate features

Use the `*` marker to identify the currently active branch
```
*main 
 master
```

Switch branches before editing or committing, then merge completed work only after verification
``` 
Git switch master
```

## Creating Separate Feature Branches

**WhatsApp project example**: The initial project remains unchanged as the main version.

To see a list of all your branches:
```
git branch
```

To see both local and remote branches:
```
git branch -a
```
Separate branches are created for independent features:
```
git branch status
```
A `status` branch for the Status feature
```
git status
```
A `communities` branch for the Communities feature
```
git branch communities
```
Each team works on its assigned branch and repeatedly commits and runs the project to verify that the changes work correctly.

Completed and verified work is merged back into the main branch when appropriate.

Students were asked to create and inspect a branch using the Git branch workflow.
``` 
git merge status
```
## Understanding Branch Listings and the Current Branch

`master` represents the main branch; the instructor explained that `main` and `master` refer to the same general role in this lesson.

The branch list should show the main branch and the newly created feature branches.

The `*` symbol identifies the branch that is currently checked out and receiving active work.
```
*main 
 master
```

The current branch must be checked before making a commit.

Committing feature changes directly to `master` can damage or destabilize the main project.

## Switching Branches Before Editing

The required workflow is to switch to the branch where the work belongs before creating or modifying files.

The branch-switch command uses the target branch name, such as the `status` branch.
```
git switch status
```

After switching, running `git branch` confirms the active branch by showing the `*` marker.

Students were instructed to switch between branches and open the project folder after each switch to observe the results.

## Observing Files and Changes Across Branches

The practice exercise involved creating a new file in the `status` branch while leaving the old branch unchanged.

Students were asked to compare the contents of the same project folder after switching between branches.

Existing project files may appear when viewing different branches because they are part of the shared project history.

A newly created or modified file becomes visible as a branch-specific change after it is made and committed on that branch.

Changes made on one branch do not appear in another branch until the branches are merged.

The instructor emphasized testing this behavior by adding or editing files and switching back to `master`.

## Committing and Verifying Branch-Specific Work

A file such as `test.html` was suggested for the edit-and-commit exercise.

Students were asked to confirm the active branch before committing.

The lesson included questions about committing without staging and about the correct commit message.

The intended sequence was:

Switch to the feature branch

Create or edit a file

Stage or commit the change according to the demonstrated command flow

Switch back to `master`

Verify that the feature change is not present there before merging

Merge instructions were deferred until the branch creation, switching, editing, and verification exercises were completed.

---

## Action items

**Students**: Create the required feature branches and verify them with `git branch`

**Students**: Switch between `master` and the feature branch, checking the `*` marker each time

**Students**: Create or edit a test file on the feature branch, commit it, and compare the folder contents across branches

**Students**: Avoid making feature changes directly on `master`; practice merging only after verification