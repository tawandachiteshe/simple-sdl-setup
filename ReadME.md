## How to install sdl 2 on ubuntu

```bash
sudo apt-get install libsdl2-dev
sudo apt-get install libsdl2-2.0-0
```

### How to run sdl 2 on ubuntu

```bash
git clone https://github.com/libsdl-org/SDL.git -b SDL2
cd SDL
mkdir build
cd build
../configure
make
sudo make install
```

### how to install clang on ubuntu

```bash
sudo apt-get install clang
```

### How to build this little program

```bash
clang++ main.cpp -o main --debug -lSDL2
```

### How to run this little program

```bash
./main

```
