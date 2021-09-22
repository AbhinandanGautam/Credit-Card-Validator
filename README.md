# Credit Card Validator
A simple C++ program which validates credit card numbers using Luhn's Algorithm.

<h2> Luhn's Algorithm </h2>
<p> The Luhn algorithm, also known as the modulus 10 or mod 10 algorithm, is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers, IMEI numbers, Canadian Social Insurance Numbers. </p>

<h3> Steps </h3>
<p>1. Starting from the rightmost digit, double the value of every second digit, if doubling of a number results in a two digit number i.e greater than 9 then add the digits of the product to get a single digit number. </p>
<p>2. Take the sum of all the digits. </p>
<p>3. If the total modulo 10 is equal to 0 then the number is valid according to the Luhn formula else it is not valid. </p>