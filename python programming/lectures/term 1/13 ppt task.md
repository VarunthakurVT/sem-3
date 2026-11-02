# Python Packages


A **package** is a directory (folder) that contains multiple modules, usually with an `__init__.py` file, so related code can be organized and imported together.

- A package is essentially a folder that contains an __init__.py file and one or more Python files (modules).
- Allows modules to be easily shared and distributed across different applications.
- ****Package:**** A directory containing modules and a special __init__.py file.

## Creating and Accessing Packages

1. ****Create a Directory:**** create a folder that will act as the package root.
2. ****Add Modules:**** Inside the directory, add Python files (modules). Each module can contain related functions or classes.
3. ****Add __init__.py:**** add an __init__.py file to the directory. This file tells Python that the directory should be treated as a package.
4. ****Create Sub-packages (Optional):**** One can organize code further by creating subdirectories with their own __init__.py files.
5. ****Import Modules:**** Modules or functions inside the package can be imported using dot notation, for example:
from mypackage.module1 import greet




## A Simple Package Example

### Folder structure

```
project/
├── main.py
└── greetings/
    ├── __init__.py
    └── hello.py
```

### Code

**greetings/hello.py**

python

```python
def say_hello(name):
    return "Hello, " + name
```

**greetings/**init**.py** (can be empty)

**main.py**

python

```python
from greetings.hello import say_hello

print(say_hello("Anitya Sir"))
```

### Run it

```
python main.py
```

**Output:**

```
Hello, Anitya Sir
```


1. **Predefined (built-in):** ships with Python, e.g. `math`, `os`
2. **User-defined:** created by you, e.g. `greetings`
3. **Third-party:** installed with `pip`, e.g. `numpy`, `requests`

| predefined    |                         |
| ------------- | ----------------------- |
| `math`        | Math operations         |
| `random`      | Random values           |
| `datetime`    | Dates and time          |
| `os`          | Files, folders, system  |
| `sys`         | Python interpreter info |
| `json`        | JSON data               |
| `collections` | Special containers      |
| `time`        | Delays, timestamps      |
| `re`          | Regular expressions     |
| `urllib`      | Web requests (basic)    |
no pip is needed

| Category                        | Main packages                                                      | Purpose                                      |     |
| ------------------------------- | ------------------------------------------------------------------ | -------------------------------------------- | --- |
| **Web frameworks**              | Flask, Django, FastAPI, Pyramid, Tornado, Falcon, CherryPy, Bottle | Build websites and APIs                      |     |
| **Statistical analysis**        | NumPy, Pandas, SciPy, XGBoost, StatsModels                         | Data handling, math, and statistics          |     |
| **Data visualization**          | Matplotlib, Seaborn, Plotly, Bokeh, Altair, Dash                   | Charts, plots, and dashboards                |     |
| **Deep learning**               | Scikit-learn, TensorFlow, PyTorch, Keras, Fastai                   | Train ML models and neural networks          |     |
| **NLP**                         | NLTK, spaCy, Transformers, TextBlob, FastText                      | Understand and process text                  |     |
| **Generative AI**               | Keras, Pillow, ImageIO, GPy, Fastai                                | Create and edit images and generated content |     |
| **Computer vision**             | OpenCV, scikit-image, Dlib, Mahotas                                | Image and video processing                   |     |
| **GUI applications**            | Tkinter, PyQt5, Kivy, PySide, PySimpleGUI                          | Desktop app windows and buttons              |     |
| **Web scraping and automation** | Requests, BeautifulSoup, Selenium, Scrapy, PyAutoGUI, schedule     | Collect web data and automate tasks          |     |
| **Game development**            | PyGame, Pyglet, Arcade                                             | 2D games, graphics, and sound                |     |
|                                 |                                                                    |                                              |     |
pip is needed




# Python Modules


A **module** is a single Python file (`.py`) that contains code such as functions, classes, and variables, which can be reused in other programs.

## Create a Module

To create a module, write the desired code and save that in a file with .py extension.

****Example:**** Let's create a calc.py in which we define two functions, one add and another subtract.

# calc.py

def add(x, y):

    return (x+y)

​

def subtract(x, y):

    return (x-y)

This is all that is required to create a module.

## Import module

Modules can be used in another file using the import statement. When Python sees an import, it loads the module if it exists in the interpreter’s search path. Below is the syntax to import a module:

> import module

****Example:**** Here, we are importing the ****calc**** that we created earlier to perform add operation.

`import calc print(calc.add(10, 2))`

****Output****

> 12

****Explanation:**** import calc loads the module and calc.add() accesses a function through dot notation.

## Types of Import Statements

****1. Import From Module:**** This allows importing specific functions, classes, or variables rather than the whole module.

from math import sqrt, factorial

print(sqrt(16))

print(factorial(6))

  
**Output**

4.0
720

****Explanation:**** Only sqrt and factorial are brought into the local namespace, so the prefix math. is not required.

****2. Import All Names:**** * imports everything from a module into the current namespace.

from math import *

print(sqrt(16))

print(factorial(6))

  
**Output**

4.0
720

****Explanation:**** Every public name of math becomes directly accessible. (Not recommended in large projects due to namespace conflicts.)

****3. Import With Alias:**** You can shorten a module's name using as.

import math as m

print(m.pi)

  
**Output**

3.141592653589793

****Explanation:**** math is accessed through the shorter alias m.

## Types of Modules

Python provides several kinds of modules. Each type plays a different role in application development.

****1. Built-in Modules:**** These come bundled with Python and require no installation - ****e.g****., math, random, os.

import random

print(random.randint(1, 5))

  
**Output**

4

****Explanation:**** random.randint() returns a random number within the given range.

****2. User-Defined Modules:**** These are modules you create yourself, such as ****calc.py****.

import calc

print(calc.subtract(20, 5))

****Output****

> 15

****Explanation:**** The module is created manually and then imported into another script.

****3. External (Third-Party) Modules:**** These modules are installed using pip - ****e.g.****, NumPy, Pandas, Requests.

`import requests r = requests.get("https://example.com") print(r.status_code)`

****Output****

> 200

****Explanation:**** requests is installed separately (pip install requests) and provides HTTP utilities.

****4. Package Modules:**** A package is a directory containing multiple modules, usually with an ****__init__.py**** file.

Example Directory

> mypkg/  
> __init__.py  
> calc.py  
> utils.py

Using a module from a package

from mypkg import utils

print(utils.some_func())

calls a function named some_func(), the output will be whatever that function returns.

If utils.py contains something like:

`def some_func():     return "Hello"`

****Output****

> Hello

## Locating a Module

Python searches for modules in a predefined list of directories known as the module search path. You can view this list using ****sys.path****.

import sys

for p in sys.path:

    print(p)

  
**Output**

/home/guest/sandbox
/usr/local/lib/python313.zip
/usr/local/lib/python3.13
/usr/local/lib/python3.13/lib-dynload
/usr/local/lib/python3.13/site-packages

****Explanation:**** Python checks each path in order until it finds the module you’re trying to import.