	# Git Tags: Creating, Annotating, Deleting, and Inspecting Commit History

September 2, 2026·11:14 AM·36m 6s

### Play Audio

0:00

37:03

SummaryTranscriptNotes

Edit

## Overview

Practical Git lesson covering tags, commit IDs, annotated tags, deletion, and tag-specific history inspection

One instructor and multiple students; individual student identities are mostly unclear

Critical outcomes:

Tags identify specific commits such as `v1.0.1`, `v1.1`, or `1.8`

`git show <tag-name>` displays the history and changes associated with one tagged commit

Annotated tags can include messages using `git tag -a <tag-name> -m "message"`

## Creating Tags After Commits

Git tags are labels attached to commits, commonly used for version markers such as `v1.0.1`, `v1.1`, or `1.8`

A commit must exist before it can be tagged:

Update a file

Stage and commit the change

Create a tag for that commit

Basic tag creation uses:

`git tag <tag-name>`

Example version-style names included `v1.0.1`, `v1.1`, and `1.8`

The tag points to the selected commit rather than creating a separate copy of the project

Students asked whether staging could be bypassed and a file could be taken directly; the lesson returned to the normal add-and-commit workflow

---

## Finding Commit IDs and Tagging Older Commits

`git log --oneline` lists commits in a compact format containing each commit’s ID and message

The commit ID must be copied when tagging a previous or specific commit

A previous commit can be tagged with:

`git tag <tag-name> <commit-ID>`

Example workflow:

Run `git log --oneline`

Copy the ID of the required commit

Run `git tag <tag-name> <ID>`

This method allows both older commits and newer commits to receive tags

Running `git tag` without additional arguments lists the tags currently created in the repository

The instructor demonstrated that a tag becomes visible after the tag command is executed and the tag list is checked again

---

## Viewing Tagged Commits and Specific History

`git log` displays the broader commit history, which can become difficult to navigate when a project contains many commits

`git show <tag-name>` displays the commit details and changes associated with one specific tag

A tagged commit’s output can include:

The tagged commit

Its message

The changes made at that point

Related commit details

`git show` is useful when only one historical point is required instead of reading the complete log

The instructor emphasized that a large project may contain thousands of commits, making tags useful for jumping directly to important release or milestone points

Tagging a commit creates a practical reference to a specific project state, such as a release version or milestone

---

## Deleting Tags and Understanding Tag Names

A tag can be deleted with:

`git tag -d <tag-name>`

The deletion command removes the tag reference, not the underlying commit

A student asked about changing a tag name; the explanation indicated that renaming was not practically necessary for the exercise

The focus remained on creating a correctly named tag and attaching it to the intended commit

Tag names should be chosen clearly so that the referenced version or milestone is easy to identify

---

## Annotated Tags with Messages

Lightweight tags store a simple reference to a commit, while annotated tags include an explanatory message

Annotated tag syntax uses:

`git tag -a <tag-name> -m "message"`

The `-a` option creates an annotated tag

The `-m` option supplies the tag message

Example message wording included `"A new version release"` and `"V 1.8 release"`

The tag name must be separate from the message

A new tag name, such as `v1.9`, should be used when the existing tag name already exists

Annotated tags make the purpose of a tag clearer, especially for release versions and major project milestones

`git show <tag-name>` can be used afterward to inspect the annotated tag and its message

---

## Git Help and Reviewing Commit Changes

Git’s built-in help can be used to check command syntax and options:

`git help <command-name>`

The instructor suggested using help documentation to understand tag options such as `-a`, `-m`, and other flags

The normal workflow for testing a tag-related change remains:

Modify a file

Run `git add .`

Commit the change

Create or inspect the tag

To inspect changes associated with a commit, `git show` can be used with the commit reference or tag

To obtain a compact list of commits and their IDs, use:

`git log --oneline`

To view tag references alongside the log, the class also referred to:

`git log --decorate`

The instructor clarified that a tag reference helps connect a readable version name to an otherwise difficult-to-remember commit ID

---

## Practice and Classroom Setup

Students practiced creating tags on existing commits and verifying them through `git tag`, `git log`, and `git show`

Several demonstrations involved identifying the correct commit ID, entering a tag name, pressing Enter, and rerunning the command to confirm the result

A temporary display and HDMI connection issue interrupted the demonstration; students and the instructor adjusted the display connection and zoomed the terminal or presentation

The session ended with a check for doubts and a roll call that included multiple student names, including Varun, but the transcript does not establish which students actively spoke
[[gitclass/leactures/12_lecture|12_lecture]]