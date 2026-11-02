# Binary Tree Array Representation and Dan Utsav Announcement

September 30, 2026·3:54 PM·27m 10s

### Play Audio

0:00

28:08

SummaryTranscriptNotes

Edit

## Overview: Data-Structures Class and Campus Announcements

A classroom session covering binary-tree array representation, followed by a campus donation announcement and class logistics

Participants: an instructor, students, and Meenal, who introduced the Dan Utsav announcement

Critical outcomes:

For 1-based array indexing, a node at index `i` has parent `⌊i/2⌋`, left child `2i`, and right child `2i + 1`

Array representation suits complete and almost-complete binary trees; linked representation is generally preferred otherwise

Dan Utsav donations were accepted at the DSW office through 5 October

## Binary-Tree Array Representation and Index Rules

The instructor reviewed how to store a binary tree in an array, emphasizing that the index relationships make it possible to find parents and children without recursive links.

With 1-based indexing:

Parent index: `⌊i/2⌋`

Left-child index: `2i`

Right-child index: `2i + 1`

Floor division is important when finding a parent, particularly for odd-numbered indices.

Starting at index 0 changes the formulas and can create confusion; shifting to 1-based indexing was suggested as a simpler approach.

Array storage preserves the tree’s positional structure, including empty slots where nodes are absent. The examples highlighted that left and right placement matters, even when two trees have similar numbers of nodes.

Complete and almost-complete binary trees are good fits for arrays because they use space efficiently. Since such trees are uncommon in general, linked representation is usually preferred.

## Dan Utsav Donation Information

Meenal introduced Dan Utsav as a festival observed across India from 2 October to 8 October, with donations being coordinated with the Goonj NGO.

Books, clothes, shoes, and other usable items could be donated; items should be in good condition.

Donations could be taken to the DSW office on the second floor of A Block, with collection running through 5 October.

Other activities mentioned included a blood-donation camp, Smile Day, and Walk in the Shoes.

## Class Timing, Coursework, and Administrative Chatter

Students and the instructor informally considered whether to move class to an earlier time, including 9 a.m.; changing the schedule would require majority support, and no change was confirmed.

The remaining conversation included brief references to coursework, exam sets and marks, a UI/UX design/PPT, and attendance. No clear decisions or additional commitments were established.