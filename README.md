# MSP430G2955 Energia Pin Map

This repository contains the pin definitions and other information necessary for adding Energia support to a custom version of the MSP430G2555. To use it, follow these steps:
* Download the repository as a zip file
* Unzip it and rename the folder "G2955"
* Locate the folder where Energia is installed
* Copy the unzipped folder into the following directory: .../hardware/msp430/variants/
* Open the boards.txt located at: .../hardware/msp430/ in a text editor
* Append the text below to the end of boards.txt then save and close it
* Open up Energia and the new board should be there


msp430g2955.name=Custom board w/ msp430g2955 (16MHz)

msp430g2955.upload.protocol=rf2500

msp430g2955.upload.maximum_size=57344

msp430g2955.build.mcu=msp430g2955

msp430g2955.build.f_cpu=16000000L

msp430g2955.build.core=msp430

msp430g2955.build.variant=launchpad_g2955

msp430g2955.upload.maximum_ram_size=4096


##############################################################


