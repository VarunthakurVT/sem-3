# Git Stash: Save, Restore, Apply, List, and Clear Temporary Changes

September 9, 2026·11:38 AM·9m 55s

### Play Audio

0:00

10:14

SummaryTranscriptNotes

Edit

## Overview

Short practical Git lesson focused on temporarily saving incomplete work with `git stash`

Participants: instructor and students, including Varun and other students addressed during the class

Critical outcomes:

`git stash pop` restores changes and removes them from the stash stack

`git stash apply` restores changes while keeping the stash record

Students must practise the commands and bring laptops to the next class

## Temporarily Saving Incomplete Work with Git Stash

`git stash` temporarily stores uncommitted file changes when work is incomplete or the developer must switch branches, stop working, or handle another task

Stashed files move into a stack-like storage area, where Git keeps a record of the saved changes

A typical scenario involves updating a file, leaving the code unfinished, and stashing it before switching to another task or branch

The stash output shows the stash reference and information related to the branch and files involved

Stashing is temporary storage rather than a normal commit

Stashed changes do not appear in the regular `git log` history

## Restoring Changes: `pop` Versus `apply`

`git stash pop` brings the latest stashed changes back into the working files as modified changes

`git stash pop` removes the restored record from the stash stack after applying it

`git stash apply` brings the stashed changes back into the working files but keeps the original record in the stash stack

The core difference is:

`pop`: changes appear in the working directory and are removed from the stash

`apply`: changes appear in the working directory and remain in the stash

A student confirmed that `apply` keeps the changes in both places: the modified files and the stash stack

Stash entries are handled using stack behavior: the most recently pushed stash is retrieved first

## Managing Multiple Stashes

`git stash list` displays all stash entries currently saved in the repository

Multiple files or changes can be stashed separately, creating multiple stack entries

To practise the difference between `pop` and `apply`, students were instructed to:

Update one file and stash it

Update another file and stash it again

Use `git stash pop`

Run `git stash list` to observe that the popped entry is removed

Use `git stash apply`

Run `git stash list` again to confirm that the applied entry remains

`git stash clear` deletes all stash entries from the repository

Clearing the stash removes every saved stash record, so the stored changes cannot be recovered through the stash

## Practical Class Instructions and Attendance

Students were asked to execute the commands themselves to understand the difference between `pop`, `apply`, and `list`

Several students were instructed to bring laptops to the next class, including Khushi, Gautam, Aryan, Bhavya, and others addressed by the instructor

Aman Thakur was called out for not completing the class activity and talking during the lesson

The instructor checked students such as Varun, Kartik, Mayank, and Namrata regarding the class activity and attendance

Attendance required students to be present in class

The instructor also questioned whether students were paying attention to the explanation of testing