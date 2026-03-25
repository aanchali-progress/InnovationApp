# Copilot Instructions for InnovationApp

## Project Overview
InnovationApp is a C++ math utility library that implements common mathematical operations. It is built with Visual Studio (MSBuild) and targets Windows (Win32 and x64 platforms).

The library exposes 10 functions declared in `src/mathapi.hpp` and implemented in `src/mathapi.cpp`:
- `add`, `subtract`, `multiply`, `divide`
- `multiplyByRepeatedAddition`, `divideByRepeatedSubtraction`
- `factorial`, `percentage`, `square`, `squareRoot`

Unit tests live in `src/tests.cpp` and are compiled into a standalone executable.

## Repository Structure
```
src/
  mathapi.hpp   # Public API – function prototypes only
  mathapi.cpp   # Function implementations
  tests.cpp     # Unit tests (one test function per API function)
InnovationApp.sln        # Visual Studio solution
InnovationApp.vcxproj    # MSBuild project (Win32 + x64, Debug + Release)
```

## Build Instructions
Open `InnovationApp.sln` in Visual Studio 2022 or later (toolset v143) and build with **Build → Build Solution**, or use MSBuild from the command line:
```
msbuild InnovationApp.sln /p:Configuration=Debug /p:Platform=x64
```

## Running Tests
The test executable accepts a single argument — the name of the test function to run:
```
tests.exe testAdd
tests.exe testSubtract
tests.exe testMultiply
tests.exe testDivide
tests.exe testMultiplyByRepeatedAddition
tests.exe testDivideByRepeatedSubtraction
tests.exe testFactorial
tests.exe testPercentage
tests.exe testSquare
tests.exe testSquareRoot
```
Each test prints `Test Passed` or `Test Failed` for every case it exercises.

## Coding Standards
- Use **C++17** features where appropriate.
- Follow the existing style: snake_case for function and variable names.
- Every public function must have a corresponding prototype in `mathapi.hpp`.
- Handle edge cases explicitly (e.g., division by zero, negative inputs where undefined, integer overflow).
- Use `std::invalid_argument` (or another appropriate `std::exception` subclass) for all invalid-input error handling in new and modified functions.
- Do not add external dependencies — the library uses only the C++ standard library (`<iostream>`, `<stdexcept>`, `<limits>`, `<cmath>`).

## Adding a New Function
1. Add the prototype to `src/mathapi.hpp`.
2. Implement the function in `src/mathapi.cpp`.
3. Add a corresponding `testMyFunction()` function in `src/tests.cpp`.
4. Register it in the `main()` dispatch block in `src/tests.cpp`.

## Pull Request Guidelines
- Every PR that changes `mathapi.cpp` must include or update tests in `tests.cpp`.
- Verify all existing tests still pass before opening a PR.
- Keep each PR focused on a single concern (one function or one bug fix).
- Link the relevant GitHub issue in the PR description.

## Security & Quality Notes
- Never commit secrets or credentials.
- Avoid undefined behaviour: guard against integer overflow and out-of-range inputs.
- Unreachable code (e.g., a `return` statement after another `return` on all paths) should be removed.
