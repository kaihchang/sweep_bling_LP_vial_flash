# sweep_bling_LP_vial_flash
This is my first time making my own split keyboard from open-source files. Edited and ordered PCB and components myself. I chose to go with Pro Micros. On hindsight I probably should have went for RP2040 versions, but I didn't aim high at the time. Still, I should have went straight for nice!nanos.
Assembled a Ferris Sweep Bling LP with a pro micro. Flashed QMK first, then Vial.

Vial available:
https://i.imgur.com/h17Jl4y.jpg

ZMK version (currently private):
https://github.com/kaihchang/zmk-config 

Later I got 2 nice!nano compatible boards (Pro Micro nRF52840 they're called). It's now working well, being able to connect to 5 diveces via BLE at the same time. Biggest problem is, Ferris Sweep's design didn't leave enough pins available for screen shields, so I didn't bother trying to display battery capacity. Soldering the power switches and batteries without solder pastes is also painfully hard 😓 I'd spent an hour trying to solder just one 7-feet power switch and failed, so now I just go with power banks with type-Cs.

Cases and stands I re-designed from existing open files: 
https://www.printables.com/model/622201-ferris-sweep-case-and-10deg-tenting-stand-with-8mm?fbclid=IwAR07s64uIUs7jOLBMwF3K2EaUUG40ajo3HLXBgvw9KoK-EPsV4o8vXuPs4k 

Keymap I use: https://i.imgur.com/DzI9PoH.png 

How I ordered components:
1. get kicad file from https://github.com/davidphilipbarr/Sweep. I went for Sweep Bling LP, but if given another chance, I'd do Sweep half swept to save costs and get pretty much the exact same functionalities.
2. edit however you like, generate gerber, and order from JLCPCB, or any other PCB manufacturers.
3. shop everything else from Taobao or Aliexpress.
