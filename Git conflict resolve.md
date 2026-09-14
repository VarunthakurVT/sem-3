	




# stash
	   to save before complition of the feature 
	   use case to switch between branches
	code 
	```
	git stash 
	git stash pop modified 
	```
	
	

To resolve a merge conflict in Git, follow these steps in your terminal:

### 1. Identify the Conflicted Files

Check which files have conflicts:

Bash

```
git status
```

Look for files listed under **"Unmerged paths"**.

### 2. Open and Edit the Conflicted Files

Open each conflicted file in your text editor (such as VS Code). Git marks the conflicting code like this:

Plaintext

```
<<<<<<< HEAD
Your current branch changes
=======
Incoming branch changes
>>>>>>> branch-name
```

- Everything between `<<<<<<< HEAD` and `=======` is **your local version**.
    
- Everything between `=======` and `>>>>>>> branch-name` is the **incoming version**.
    

**To resolve:**

1. Decide which code to keep (your changes, incoming changes, or a combination of both).
    
2. Delete the conflict markers (`<<<<<<<`, `=======`, `>>>>>>>`) completely.
    
3. Save the file.
    

### 3. Stage and Commit the Resolution

Once you have resolved and saved all affected files:

Bash

```
# 1. Stage the resolved files
git add .

# 2. Complete the merge or rebase
git commit -m "Resolved merge conflicts"
```

_(Note: If you are resolving conflicts during a rebase instead of a merge, run `git rebase --continue` instead of `git commit`)._

### Quick Shortcuts & Alternatives

- **Accept all local/your changes for a file:**
    
    Bash
    
    ```
    git checkout --ours path/to/file
    git add path/to/file
    ```
    
- **Accept all incoming/their changes for a file:**
    
    Bash
    
    ```
    git checkout --theirs path/to/file
    git add path/to/file
    ```
    
- **Cancel the merge entirely (go back to safety):**
    
    Bash
    
    ```
    git merge --abort
    ```