DisplayDriver library
=====================

This library is used to drive a home-made display board,using a 4-digit 7-segments LED display and a MAX-7219 IC.

The board was designed according to the following schema:
![Display Driver schema](/docs/DisplayDriver-diagram.JPG)

The board is wired on a stripboard according to the following circuits:
![stripboard component side](/docs/DisplayDriver-board-1.JPG)
![stripboard copper side](/docs/DisplayDriver-board-2.JPG)

Here are the original sPlan and LochMaster files for the diagram and stripboard:
[schema](/docs/4DigitsMux.spl7) and [stripboard](/docs/4DigitsMux2.LM4)

Here is the bill of materials for the board:

- 1 stripboard 50x75mm (~$2)
- connecting wires for stripboard
- 1 LN5461AS (4-Chars 7-Segment Display 12Pin, 19mm, common cathode) (~$2.50)
- 1 MAX7219 (LED driver IC) (~$10)
- 1 24-pins IC socket (~$1)
- 1 resistor 22K (~$0.05)
- 1 electrolytic capacitor 10uF (~$0.15)
- 1 ceramic capacitor 100nF (~$0.05)
- 1 female header with 5 pins (~$0.30)

Optional:
- you can replace the female header with a male header if you prefer, or even better, an angled male header, which would avoid adding wires above the surface of the LED display.
- you can also use single-in-line sockets (2 pieces of 6 pins) to avoid soldering the LED display or just to raise it further.

NB: I bought most of these components at [Play Zone](http://play-zone.ch); you should be able to find them at other distributors in your country.