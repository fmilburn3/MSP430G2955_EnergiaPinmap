# Energia for MSP430G2955 Custom Board

This repository contains the pin mapping and other information required to run Energia with a custom MSP430G2955 development board.  Pin mapping follows the BoosterPack specifications where possible.

# To install
  * Dowload this repository as a zip
  * Unzip file
  * Locate where Energia is installed on your computer
  * Copy the folder custom_g2955 into the following directory: .../hardware/msp430/variants/
  * Open the boards.txt file located at: .../hardware/msp430/ in a text editor
  * Append the text below at the end of the boards.txt file
  * Save and close the file
  * Run Energia and the new custom board should be available
 
```
msp430g2955.name=Custom board w/ msp430g2955 (16MHz)
msp430g2955.upload.protocol=rf2500
msp430g2955.upload.maximum_size=57088
msp430g2955.build.mcu=msp430g2955
msp430g2955.build.f_cpu=16000000L
msp430g2955.build.core=msp430
msp430g2955.build.variant=launchpad_g2955
msp430g2955.upload.maximum_ram_size=4096

##############################################################

 ```
