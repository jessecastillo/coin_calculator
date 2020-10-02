# Coin Calculator

<img src="images/coins.jpeg" width="100">


---
- Project Link [Coin Calculator](https://github.com/jessecastillo/coin_calculator)

### Table of Contents

- [Description](#description)
- [How To Use](#how-to-use)
- [Known Bugs](#known_bugs)
- [Author Info](#author-info)

---

## Description

Coin calculator gives the user the opprtunity to quantify the number of coins they have (in U.S. currency), and in turn the program will output the total dollar amount of the given coins.


---

## How To Use

To use this program, you can run it inside many text editor debuggers such as Sublime Text/Notepad++ if you would prefer to not create a new solution in Visual Studio Code. The program greets with a welcome message and then you may input the number of coins you have for each denomination, starting the one cent piece. The quantity cannot be less than zero, else the program will reject the input and request that you choose another value. Decimal values will be trucated and rounded to whole numbers (you cannot have a partial coin that still retains its face value!). Refer to [Known Bugs](#known_bugs) for interesting behavior regarding decimals. The program will confirm how many coins have of each type, and then it will calculate the total value of all coins in dollars and cents.

---

## Known Bugs

Issue #001 - Decimal input by user creates loop
If the user enters a decimal between 0.01 and 0.99, the program will perpetually echo back that value until the user kills the program.

---


## Author Info

- Email - [Jesse Castillo](mailto:jcastillo3@stu.jsu.edu)
- Github - [@JesseCastillo](https://github.com/jessecastillo)
- Project Link [Coin Calculator](https://github.com/jessecastillo/coin_calculator)

---

## License and copyright

<p xmlns:dct="http://purl.org/dc/terms/" xmlns:cc="http://creativecommons.org/ns#" class="license-text"><span rel="dct:title">Coin Calculator</span> by <span property="cc:attributionName">Jesse Castillo</span> is licensed under <a rel="license" href="https://creativecommons.org/licenses/by/4.0">CC BY 4.0<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1" /><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1" /></a></p>

[Back To The Top](#coin_calculator)
