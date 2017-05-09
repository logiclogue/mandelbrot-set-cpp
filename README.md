# Mandelbrot Set Generator

Mandelbrot Set generator written in C++. This program can draw to the command
line and bitmap images.

 ```
                                                         *
                                                      ******
                                                      ******
                                                       *****
                                                 *  ***********  *
                                            ************************ ***
                                            ***************************
                                        *******************************
                                        ********************************   *
                                        **********************************
                        ** ***         ***********************************
                        ***********   ***********************************
                      ************** ************************************
                     ***************************************************
*********************************************************************
                     ***************************************************
                      ************** ************************************
                        ***********   ***********************************
                        ** ***         ***********************************
                                        **********************************
                                        ********************************   *
                                        *******************************
                                            ***************************
                                            ************************ ***
                                                 *  ***********  *
                                                       *****
                                                      ******
                                                      ******
                                                         *
 ```

## Installation

Requires `g++` and `make`.

Run `make` in the root of the project to compile.

Then run `./build/main` to run the program.

## Goals

- To practice C++
- To practice coding that follows the SOLID principles
- To create interfaces that are used for swapping, for example, the Mandelbrot
  Set for a Julia Set. There will also be an interface for drawers. The
  implementation of `Drawer` will draw to the console and another that will draw to a
  bitmap.
- Draw the Mandelbrot Set as plain text.
- Draw the Mandelbrot Set as a bitmap.
- To use C++ templates
- To use C++ abstract classes

## Arguments

```
--x-coord     <number>  X coordinate at the centre of the screen (default 0)
--y-coord     <number>  Y coordinate at the centre of the screen (default 0)
--width       <number>  Width of the image to draw (default 80)
--height      <number>  Height of the image to draw (default 20)
--ratio       <number>  Ratio of height/width (default 2)
--zoom        <number>  Zoom, width of the screen (default 4)
--iterations  <number>  Iterations (default 100)
--julia-r     <number>  Draw a Julia Set with `+ c` as real <number>
                     (default 0)
--julia-i     <number>  Draw a Julia Set with `+ c` as imaginary <number>
                     (default 0)
--multi-r     <number>  Draw a Multibrot Set with real <number> power
                     (default 2)
--multi-i     <number>  Draw a Multibrot Set with imaginary <number> power
                     (default 0)
--bitmap                Draws to a bitmap (default not set)
--min-colour  <hex>     Minimum colour for the shader (default 000000)
--max-colour  <hex>     Maximum colour for the shader (default FFFFFF)
```

## Examples

### Draw a Mandelbrot Set in the command line

Command:

`./build/main`

Output:

```
                                    ****        
                                    ****        
                              *  **********     
                              ***************** 
                            ******************* 
                           *********************
                 *******  **********************
                ********* **********************
**********************************************  
                ********* **********************
                 *******  **********************
                           *********************
                            ******************* 
                              ***************** 
                              *  **********     
                                    ****        
                                    ****        
```

### Draw a Julia Set in the command line

Command:

`./build/main --julia-r -1`

Output:

```
                                *                               
                               ***                              
                                *                               
                         * *********** *                        
           *             ***************             *          
          ******       *******************       ******         
        ***********  ***********************  ***********       
*****************************************************************
        ***********  ***********************  ***********       
          ******       *******************       ******         
           *             ***************             *          
                         * *********** *                        
                                *                               
                               ***                              
                                *                               
```

### Draw a Multibrot Set in the command line

Command:

`./build/main --multi-r 4`

Output:

```
                                   *   
                               *****   
                       **     *******  
                      ***************  
                     **************    
                    *****************  
          *****************************
          *************************** *
    *    ***************************** 
   ***** ****************************  
**********************************     
   ***** ****************************  
    *    ***************************** 
          *************************** *
          *****************************
                    *****************  
                     **************    
                      ***************  
                       **     *******  
                               *****   
```

### Draw to an image

Command:

`./build/main --bitmap --ratio 1 --width 1920 --height 1080 --iterations 10 --max-colour 00FF00 > mandelbrot.bmp`

## License

GNU GENERAL PUBLIC LICENSE Version 3

See `LICENSE`

## Author

Jordan Lord
