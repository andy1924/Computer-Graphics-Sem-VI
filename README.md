# Computer Graphics - Semester VI

This repository contains C++ lab programs for core Computer Graphics algorithms using WinBGIm (`graphics.h`) on Windows.

## Project Overview

The codebase covers classic rasterization algorithms and 2D geometric transformations. Programs are organized by module for lab use and demonstration.

## Programs

### Root Level

#### C035_EXP2_CG.cpp
- Basic graphics primitives demo.

#### C035_EXP3_CG.cpp
- DDA line drawing experiment.

### Module 2 Algorithms

#### Bresenham's_LDA.cpp
- Bresenham line drawing algorithm.

#### Circle_MPA.cpp
- Midpoint circle algorithm.

#### DDA.cpp
- DDA line drawing implementation.

#### Elipse_MPA.cpp
- Midpoint ellipse algorithm.

#### Poly_Fill_Algo.cpp
- Polygon fill demonstration on a triangle.
- Includes both:
  - `FloodFill4(x, y, newColor, oldColor)`
  - `BoundaryFill4(x, y, fillColor, boundaryColor)`

### Module 3 Algorithms

#### TRANSFORMATIONS_2D..cpp
- Merged 2D transformation program with reusable functions.
- Covered operations:
  - Translation: $x' = x + t_x, y' = y + t_y$
  - Scaling: $x' = x \cdot s_x, y' = y \cdot s_y$
  - Rotation: $x' = x\cos\theta - y\sin\theta, y' = x\sin\theta + y\cos\theta$
  - Composite transform (scale + rotate + translate)
- Function-based structure:
  - `translateObject(...)`
  - `scaleObject(...)`
  - `rotateObject(...)`
  - `compositeTransform(...)`

#### REFLECTION_SHEARING.cpp
- Reflection and shearing experiment (reflection coordinate outputs + shearing display).

## Build and Run

### Prerequisites
- Windows OS
- MinGW g++
- WinBGIm library linked with `-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32`

### Build in VS Code
Use the configured build task:

```text
Ctrl+Shift+B
```

This creates executables in `Home/build/`.

### Manual Build Command

```bash
g++ -std=gnu++17 -g "<file>.cpp" -o "Home/build/<file>.exe" -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
```

### Run

```bash
./Home/build/<program>.exe
```

## Folder Structure

```text
Computer-Graphics-Sem-VI/
|-- C035_EXP2_CG.cpp
|-- C035_EXP3_CG.cpp
|-- README.md
|-- Home/
|   `-- build/
|-- Module 2 Algorithms/
|   |-- Bresenham's_LDA.cpp
|   |-- Circle_MPA.cpp
|   |-- DDA.cpp
|   |-- Elipse_MPA.cpp
|   `-- Poly_Fill_Algo.cpp
`-- Module 3 Algorithms/
    |-- TRANSFORMATIONS_2D..cpp
    `-- REFLECTION_SHEARING.cpp
```

## Tech Stack

- Language: C++17
- Graphics Library: WinBGIm (`graphics.h`)
- Compiler: MinGW g++
- Editor/Build: VS Code task runner