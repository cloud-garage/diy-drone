# DIY-DRONE PCB
Altium project files for the circuit board

## Import Libraries to Altium

### ArduinoNano Library

Add Library:

1. Copy `diy-drone/PCB/Libraries/ArduinoNano/` to your Altium library folder (Windows: `C:\Users\Public\Documents\Altium\AD17\Library`)
2. Go to _"Design > Add/Remove Library..."_
3. Go to _"Install > Install from file..."_
4. Choose `ARDUINO_NANO.IntLib`
5. Done

Add Footprint:

1. Double-click on the schematic component
2. Double-click on _"Footprint"_ in the _"Models"_-subwindow
3. Under _"PCB Library > Library path"_ choose `ARDUINO_NANO.PcbLib`
4. Done

### L293D Library

1. Copy `diy-drone/PCB/Libraries/L293D/` to your Altium library folder (Windows: `C:\Users\Public\Documents\Altium\AD17\Library`)
2. Go to _"Design > Add/Remove Library..."_
3. Go to _"Install > Install from file..."_
4. Choose `L293D.IntLib`
5. Done

### Miscellaneous Connectors Library

Add Library:

1. Copy `diy-drone/PCB/Libraries/Miscellaneous Connectors/` to your Altium library folder (Windows: `C:\Users\Public\Documents\Altium\AD17\Library`)
2. Go to _"Design > Add/Remove Library..."_
3. Go to _"Install > Install from file..."_
4. Choose `Miscellaneous Connectors.IntLib`
5. Done