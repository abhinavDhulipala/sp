# Dijkstra Binary Heap Queue
> CB-Cities

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/cb-cities/sp/develop/license.md)
[![Developer docs](https://img.shields.io/badge/developer-docs-blue.svg)](http://cb-cities.github.io/sp)
[![User docs](https://img.shields.io/badge/user-docs-blue.svg)](https://sp.cb-cities.com/)
[![CircleCI](https://circleci.com/gh/cb-cities/sp.svg?style=svg)](https://circleci.com/gh/cb-cities/sp)
[![codecov](https://codecov.io/gh/cb-cities/sp/branch/develop/graph/badge.svg)](https://codecov.io/gh/cb-cities/sp)
[![](https://img.shields.io/github/issues-raw/cb-cities/sp.svg)](https://github.com/cb-cities/sp/issues)
[![Project management](https://img.shields.io/badge/projects-view-ff69b4.svg)](https://github.com/cb-cities/sp/projects/)


## Compile

0. Run `mkdir build && cd build && cmake -DCMAKE_BUILD_TYPE=Release /path/to/CMakeLists.txt`.

1. Run `make clean && make -jN` (where N is the number of cores).

## Run 

* To run the dijkstra shortest path `./sp ../sf.mtx`, because the executable `sp` would be generated inside the build directory. 

* Running just `./sp` will run the shortest path for the sample graph whose output is:

```
5 dist 21.2
4 dist 20.7
6 dist 11.5
3 dist 9.1
1 dist 0
2 dist 7.5
```
