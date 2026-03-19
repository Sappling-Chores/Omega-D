<div align="center">

# Omega-D
![alt text](<Assets/Product-Banner/OMEGA-D (2).png>)



</div>

#### Omega-D is fully mechanical and hotswappable 75 % Gasket Mount keyBoard designed by Mohammad Sarfaraz aka Sappling. 


## Features:

* It uses Raspberry pi pico as MCU.
* It is fully mechanical + hotswappable.
* It is Gasket mount for long typing sessons.
* Each key has its own sk6812mini e led. 
* It has a rotary encoder whose switch is connected to switch matrix.
* It has multiple modes including normal 84 key and macros layers.
* It has a passive buzzer which gives different notes on different macros.

## Why I made this?

I wanted a mechanical keyboard for my coding for a long time but never got any chance. Hackclub really gave me a great chance to make one. 

## Navigation

* [Schematics](#schematics)
* [PCB](#pcb)
* [Cad](#cad)
* [Firmware](#firmware)
* [BOM](#bom)
* [License](#licence)

## Schematics

![alt text](Assets/Schematics.svg)

#### Key matix

![alt text](Assets/Schemcatics_KEY-Matrix.png)

#### LED Strip

![alt text](Assets/Schematics-LED_Strip.png)

#### MCU and Others

![alt text](Assets/Schematics_MCU_and_Others.png)

## PCB

![alt text](Assets/PCB_No_Copper_Layer.png)
![alt text](Assets/PCB_Front.png)
![alt text](Assets/PCB_Back.png)
![alt text](Assets/PCB_3D_Front.png)
![alt text](Assets/PCB_3D_Back.png)

## Cad

![alt text](Assets/Renders/Render2.png)

Top view 

![alt text](Assets/Top_View.png)

Side view 
![alt text](Assets/Side_View.png)

Top
![alt text](Assets/Top.png)

Bottom
![alt text](Assets/Bottom.png)

Plate
![Assets/Plate.png](Assets/Plate.png)

Feet + Case
![alt text](Assets/Feet+Case.png)


## Firmware: 

[code](./Firmware/)

This project uses [qmk_Firmware](https://qmk.fm/guide) to setup and flash the code.

Setup :

`qmk setup`

Compile : 

`qmk compile -kb <keyboard> -km <keymap>`

Flash :

`qmk flash -kb <keyboard> -km <keymap>`




## BOM

# Bill of Materials

| Part | Quantity | Price (INR) | Price (USD) | Link |
|------|----------|-------------|-------------|------|
| Raspberry Pi Pico | 1 | ₹384 | $4.16 | [robu.in](https://robu.in/product/raspberry-pi-pico/) |
| Passive Buzzer | 1 | ₹38 | $0.41 | [robu.in](https://robu.in/product/5v-passive-buzzer-5pcs/) |
| SN74HCT125N | 1 | ₹57 | $0.62 | [robu.in](https://robu.in/product/sn74hct125n-texas-instruments-buffer-74hct125-4-5-v-to-5-5-v-dip-14/) |
| Gateron Milky PRO Switch – 5pin | 9 | ₹1,611 (₹179×9) | $17.44 | [meckeys.com](https://meckeys.com/shop/accessories/keyboard-accessories/key-switches/gateron-mechanical-pro-switch-5pin/?attribute_pa_gateron-key-switches=pro-milky-yellow) |
| Glorious GOAT Stabilizers | 1 | ₹999 | $10.81 | [meckeys.com](https://meckeys.com/shop/accessories/keyboard-accessories/more/glorious-goat-stabilizers/) |
| Cloud Lake Cherry Doubleshot PBT Keycaps | 1 | ₹1,299 | $14.06 | [curiositycaps.in](https://curiositycaps.in/products/cloud-lake-cherry-doubleshot-pbt-keycaps?variant=50852970955033) |
| SK6812MINI-E | 90 | ₹620 | $6.71 | [lcsc.com](https://www.lcsc.com/product-detail/C5149201.html) |
| Hotswap Socket | 90 | ₹351 | $3.80 | [lcsc.com](https://www.lcsc.com/product-detail/C49352235.html?s_z=n_CPG151101S11) |
| 1N4148 Diode | 100 | ₹86 | $0.93 | [lcsc.com](https://www.lcsc.com/product-detail/C402212.html) |
| PCB | 1 | ₹3,917 | $42.43 | — |
| M2.5 Hex Nuts | 5 | ₹10 | $0.11 | [quartzcomponents.com](https://quartzcomponents.com/products/pair-of-m2-hex-nuts?variant=33194716889223) |
| M2.5-6mm Bolt | 3 | ₹24 | $0.26 | [quartzcomponents.com](https://quartzcomponents.com/products/m2-5-6mm-bolt-mounting-screw-pack-of-4?variant=44082914459882) |
| M3-15mm Bolt with Phillips Head | 3 | ₹24 | $0.26 | [quartzcomponents.com](https://quartzcomponents.com/products/phillips-head-m3-15mm-bolt-mounting-screw-for-pcb-pack-of-4?variant=42673979490538) |
| M3x4x4.2mm Brass Heat Set | 1 | ₹42 | $0.45 | [quartzcomponents.com](https://quartzcomponents.com/products/m3-x-4mm-brass-heat-set-threaded-round-insert-nut-10-pcs?variant=45107588169962) |
| M3x10x4.2mm Brass Heat Set | 1 | ₹68 | $0.74 | [quartzcomponents.com](https://quartzcomponents.com/products/m3-x-10mm-brass-heat-set-threaded-round-insert-nut-10-pcs?variant=45107619528938) |
| Gasket Foam Tape | 1 | ₹170 | $1.84 | [flipkart.com](https://www.flipkart.com/gsk-cut-single-sided-gasket-foam-tape-black-25-mm-width-x-3-thickness-9-meter-length-m-tape/p/itmb8ceb849a695b) |
| Shipping (meckeys.com) | — | ₹100 | $1.08 | — |
| Shipping (robu.in) | — | ₹49 | $0.53 | — |
| Shipping (quartzcomponents.com) | — | ₹50 | $0.54 | — |
| **Total** | | **₹9,899** | **$107.18** | |




## Licence

Creative Commons Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)

---

You are free to:

- **Share** — copy and redistribute the material in any medium or format
- **Adapt** — remix, transform, and build upon the material

The licensor cannot revoke these freedoms as long as you follow the license terms.

---

Under the following terms:

- **Attribution** — You must give appropriate credit, provide a link to the license, and indicate if changes were made.
- **NonCommercial** — You may not use the material for commercial purposes.
- **No additional restrictions** — You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.

---

No warranties are given. For more details, see the [full license](https://creativecommons.org/licenses/by-nc/4.0/).

## Commercial Use

If you want to use this for Commercial purpose then [Let's chat](#lets-chat).

-------------------------------------------------------
## Lets-Chat


Email : [itsmohammadsarfaraz@gmail.com](mailto:itsmohammadsarfaraz@email.com)  

Instagram : [@ayysarfaraz](https://www.instagram.com/ayysarfaraz/)

-------------------------------------------------------

## App and tools used

* [kicad](https://www.kicad.org/)  for pcb designing.  
* [Fusion 360](https://www.autodesk.com/in/products/fusion-360) for cad.  
* [Vs code](https://code.visualstudio.com/) to write the code.  
* [qmk firmware](https://qmk.fm/guide) firmware for keyboard.  
* [qmk msys](https://msys.qmk.fm/) to compile and flash the code.  

## Huge thanks to:

[hackclub](https://slack.hackclub.com/)

 and my mum and dad

Made with love by Mohammad Sarfaraz. 
