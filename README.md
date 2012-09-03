### eqWall
___

eqWall (pronounced "_equal_") is a collection of bare bones OpenGL examples set up to run on the [Tiled Display Walls](http://kvl.kaust.edu.sa/Pages/Showcase.aspx) at 
the [KAUST Visualization Lab Showcase](http://kvl.kaust.edu.sa/Pages/Home.aspx).


### Index of Examples
___
[`\example-01`](https://github.com/smadhueagle/eqWall/tree/master/example-01): Port of eqHello from Equalizer Examples


### Installation
___
#### Prerequisites
* [Equalizer](https://github.com/Eyescale/Equalizer) (>v1.2)
* [GLEW](http://glew.sourceforge.net/) (>v1.7)

OpenGL 4.2 and GLEW are prerequisites for Equalizer as well, so if you have equalizer installed, you are probably good to go.

If you have an account at the KAUST Visualization Laboratory, equalizer module can be loaded as follows:
```bash
[user@home]$ module load kvl-remote
[user@home]$ module load equalizer/1.2
```

#### Compile 
```bash
[user@home]$ git clone --recursive  git://github.com/smadhueagle/eqWall.git
[user@home]$ cd eqWall
[user@home]$ mkdir build
[user@home]$ cd build
[user@home]$ cmake ./
```
The binaries are created under the `/build` directory.

### Running on the [AESOP Wall (aka. Zone-2)](http://kvl.kaust.edu.sa/Pages/Showcase.aspx) 

Open a terminal and run any of the binaries compiled above.

```bash
[user@home]$ /path/to/eqWall/build/dir/example-01/example01 --eq-config /var/remote/software/equalizer/configs/eq/z2.eqc

```
Note that equalizer requires you to specify an absolute path to the binary, in order for the tile-nodes to load the executable.
