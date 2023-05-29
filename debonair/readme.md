# The YMDK Bface

![picture](https://i.imgur.com/qhFxN0g.jpg)

A 60% keyboard that runs ps2avrgb natively and fits the popular GH60 form factor. Another clone of the original B.face PCB by [Winkeyless](https://winkeyless.kr/product/b-face-x2-pcb/). This PCB has slightly different switch matrix than the origninal B.face.

This board has a pair of jumper holes on the left edge of the PCB marked "Jb", near TAB and CAPS LOCK. If you short the contacts with tweezers or wire the board will enter into the bootloader and you can flash it.

This is a basic function 64 demo.

## How to build

Make example for this keyboard (after setting up your qmk build environment):

    make debonair:default

## How to flash 
    
Follow this doc: https://docs.qmk.fm/#/flashing_bootloadhid



## Q&A

### Can't open HIDBootFlash?
If HIDBootFlash can't open. Use below command to find Redistributable Package

    SxsTrace Trace -logfile:SxsTrace.etl
    SxsTrace Parse -logfile:SxsTrace.etl -outfile:SxsTrace.txt

Probably this package: https://www.microsoft.com/en-us/download/details.aspx?id=26347