# Computer Graphics - Semester VI

A comprehensive collection of computer graphics lab experiments implementing fundamental graphics algorithms and techniques using C++ with the WinBGIm library.

## Project Overview

This project contains implementations of core computer graphics algorithms including line drawing algorithms, circle and ellipse rendering, and basic graphics operations.

## Experiments & Programs

### Root Level Programs

#### C035_EXP2_CG.cpp
- **Description**: Graphics library demonstration with basic shapes
- **Topics**: Basic graphics operations including pixels, lines, circles, rectangles, and ellipses
- **Key Functions**: Drawing primitives using graphics.h library
- **Status**: In Development

#### C035_EXP3_CG.cpp
- **Description**: DDA (Digital Differential Analyzer) Line Drawing Algorithm
- **Topics**: Line rasterization using the DDA algorithm
- **Key Features**:
  - Implements DDA algorithm for line drawing
  - Calculates interpolated pixel positions
  - Outputs pixel coordinates during drawing
- **Author**: Arnav Deshpande
- **Status**: Completed

### Module 2: Graphics Algorithms

#### Bresenham's_LDA.cpp
- **Description**: Bresenham's Line Drawing Algorithm
- **Topics**: Efficient integer-based line rasterization
- **Key Features**:
  - Integer-only computations for efficiency
  - Decision parameter approach
  - Console output of calculated points and decision values
- **Algorithm**: Uses the decision parameter P to determine which pixels to select
- **Status**: Completed

#### Circle_MPA.cpp
- **Description**: Circle Drawing using Midpoint Algorithm
- **Topics**: Efficient circle rasterization with symmetry
- **Key Features**:
  - Exploits 8-way symmetry for efficiency
  - Midpoint circle algorithm implementation
  - Automatic plotting of symmetric points
- **Method**: Decision parameter-based approach for optimal pixel selection
- **Status**: Completed

#### Elipse_MPA.cpp
- **Description**: Ellipse Drawing using Midpoint Algorithm
- **Topics**: Two-region ellipse rasterization
- **Key Features**:
  - Implements Region 1 and Region 2 logic
  - Different decision parameters for each region
  - Uses floating-point calculations for accuracy
  - Supports 4-way symmetry
- **Status**: Completed

## Build Instructions

### Prerequisites
- MinGW C++ Compiler (g++)
- WinBGIm Graphics Library
- Windows Operating System

### Building
Use the configured build task in VS Code:
```bash
Ctrl+Shift+B  # Default build command
```

Or manually compile:
```bash
g++ -std=gnu++17 -g <filename>.cpp -o build/<filename>.exe -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
```

## Technologies Used

- **Language**: C++ (C++17)
- **Graphics Library**: WinBGIm (Windows BGI)
- **Compiler**: MinGW GCC
- **Build System**: VS Code Task Runner

## Key Algorithms Implemented

1. **DDA Algorithm**: Linear interpolation based line drawing
2. **Bresenham's Line Algorithm**: Integer-based efficient line drawing
3. **Midpoint Circle Algorithm**: Efficient circle rasterization with symmetry
4. **Midpoint Ellipse Algorithm**: Two-region approach for ellipse drawing

## Folder Structure

```
Computer-Graphics-Sem-VI/
├── C035_EXP2_CG.cpp           # Basic graphics operations
├── C035_EXP3_CG.cpp           # DDA line algorithm
├── Module 2 Algorithms/
│   ├── Bresenham's_LDA.cpp     # Bresenham's line drawing
│   ├── Circle_MPA.cpp          # Midpoint circle algorithm
│   └── Elipse_MPA.cpp          # Midpoint ellipse algorithm
├── Home/
│   └── build/                  # Compiled executable output
└── README.md                   # This file
```

## Running Programs

After building, execute the compiled programs:
```bash
./Home/build/<program_name>.exe
```

Each program displays graphics output and may print algorithm parameters to the console for educational purposes.

## Course Information

- **Course**: Computer Graphics
- **Semester**: VI
- **Institution**: [Your Institute Name]

## Notes

- All programs use yellow color (YELLOW) for drawing
- Graphics output requires a compatible Windows environment
- Console output helps understand algorithm execution steps
- Each program includes delay() calls for visual step-by-step execution