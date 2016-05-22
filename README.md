
Introduction
============

What is Prettry?
----------------

Prettry is intended to trim amplicons obtained from NGS target resequenceing.
Given the sequences of inserts it performs searching of the technical sequences
non-relevant to the inserts in each read and remove it. Considering that the
main goal is to remove primer sequences rather than adaptors, it is recommended
to align reads to reference along with primers and perform trimming after
alignment based on sam file. Keep in mind trimming reads in sam file some optional
fields related to read alignment position may be removed.

What does it mean that Prettry is in "beta"?
--------------------------------------------

Prettry is currently under active development and it will be likely to see
changes in the output and command line parameters in the near future.

Obtaining Prettry
=================

Prettry can be downloaded from the github site at the following address:   
https://github.com/tprodanov/Prettry

The package has been tested under Linux operating systems.

Building from source
--------------------

Building and running Prettry from source requires a GNU-like environment with

1. GCC
2. GNU Make
3. GNU CMake

It should be possible to build Prettry on most Linux installations.

First, download the source package from the sourceforge site.
Unzip the file, change to the unzipped directory, and build the
Prettry by running GNU `make` (usually with the command `make`, but
sometimes with `gmake`) with no arguments.  

Adding to PATH
--------------

By adding your Prettry directory to your PATH (environment variable), you
ensure that whenever you run Prettry from the command line, you will get
the version you just installed without having to specify the entire path.  
This is recommended for most users. To do this, follow your operating system's
instructions for adding the directory to your PATH.

License
=======

Copyright (c) 2015-2016 Timofey Prodanov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

Contact
======

If you have questions, comments, suggestions, bug reports, etc.
please send them to:

Timofey Prodanov   
Saint Petersburg Academic University   
Saint Petersburg Bioinformatics Institute   
Email: timofey.prodanov@gmail.com   
Project Website: https://github.com/tprodanov/Prettry
