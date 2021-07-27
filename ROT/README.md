## Note

- ROT-X ("rotate by X places", sometimes hyphenated ROT-X) is a simple letter substitution cipher that replaces a letter with the Xth letter after it in the alphabet. ROT13 is a special case of the Caesar cipher which was developed in ancient Rome.

- Because there are 26 letters (2×13) in the basic Latin alphabet, ROT13 is its own inverse; that is, to undo ROT13, the same algorithm is applied, so the same action can be used for encoding and decoding. The algorithm provides virtually no cryptographic security, and is often cited as a canonical example of weak encryption. It means encrypt(encrypt(message)) = decrypt(message)
- **ROT13** is used in online forums as a means of hiding spoilers, punchlines, puzzle solutions, and offensive materials from the casual glance. **ROT13** has inspired a variety of letter and word games online, and is frequently mentioned in newsgroup conversations.
- **In a general way:** encrypt(message) with ROT-X = decrypt(message) with ROT-(26-X)
    - Example:
        - encrypt(message) with ROT1 = decrypt(message) with ROT25    
        and else decrypt(message) with ROT1 = encrypt(message) with ROT25 
    - **Special case with ROT13**:
    decrypt(message) = encrypt(encrypt(message))

- Learn more: [ROT13](https://en.wikipedia.org/wiki/ROT13)