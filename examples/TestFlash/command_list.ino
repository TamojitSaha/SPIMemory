void commandList() {
  Serial.println(F("-----------------------------------------------------------------------------------------------------------------------------------"));
  Serial.println(F("                                                            Winbond Flash                                                          "));
  Serial.println(F("                                                      SPIFlash library test v3.1.0                                                 "));
  Serial.println(F(" ----------------------------------------------------------------------------------------------------------------------------------"));
  Serial.println(F("                                                                Marzogh                                                            "));
  Serial.println(F("                                                              24.11.2015                                                           "));
  Serial.println(F(" ----------------------------------------------------------------------------------------------------------------------------------"));
  Serial.println(F("                                      (Please make sure your Serial monitor is set to 'No Line Ending')                            "));
  Serial.println(F("                                      *****************************************************************                            "));
  Serial.println(F("                                                                                                                                   "));
  Serial.println(F("                      # Please pick from the following commands and type the command number into the Serial console #              "));
  Serial.println(F("     For example - to write a byte of data, you would have to use the Write Byte function - so type '3' into the serial console.   "));
  Serial.println(F("                                                     --------------------------------                                              "));
  Serial.println();
  Serial.println(F("  1. getID"));
  Serial.print(F("\t\t"));
  Serial.println(F("'1' gets the JEDEC ID of the chip"));
  Serial.println(F("  2. writeByte [page] [offset] [byte]"));
  Serial.print(F("\t\t"));
  Serial.println(F("'2' followed by '100' and then by '20' and then by '224' writes the byte 224 to page 100 position 20"));
  Serial.println(F("  3. readByte [page] [offset]"));
  Serial.print(F("\t\t"));
  Serial.println(F("'3' followed by '100' and then by '20' returns the byte from page 100 position 20"));
  Serial.println(F("  4. writeWord [page] [offset]"));
  Serial.print(F("\t\t"));
  Serial.println(F("'4' followed by '55' and then by '35' and then by '633' writes the int 633 to page 5 position 35"));
  Serial.println(F("  5. readWord [page] [offset]"));
  Serial.print(F("\t\t"));
  Serial.println(F("'5' followed by '200' and then by '30' returns the int from page 200 position 30"));
  Serial.println(F("  6. writeStr [page] [offset] [inputString]"));
  Serial.print(F("\t\t"));
  Serial.println(F("'6' followed by '345' and then by '65' and then by 'Test String 1!' writes the String 'Test String 1! to page 345 position 65"));
  Serial.println(F("  7. readStr [page] [offset] [outputString]"));
  Serial.print(F("\t\t"));
  Serial.println(F("'7' followed by '2050' and then by '73' reads the String from page 2050 position 73 into the outputString"));
  Serial.println(F("  8. writePage [page]"));
  Serial.print(F("\t\t"));
  Serial.println(F("'8' followed by '33' writes bytes from 0 to 255 sequentially to fill page 33"));
  Serial.println(F("  9. readPage [page]"));
  Serial.print(F("\t\t"));
  Serial.println(F("'9' followed by 33 reads page 33"));
  Serial.println(F("  10. readAllPages"));
  Serial.print(F("\t\t"));
  Serial.println(F("'10' reads all 4096 pages and outputs them to the serial console"));
  Serial.print(F("\t\t"));
  Serial.println(F("This function is to extract data from a flash chip onto a computer as a text file"));
  Serial.print(F("\t\t"));
  Serial.println(F("Refer to 'Read me.md' in the library for details"));
  Serial.println(F("  11. eraseSector"));
  Serial.print(F("\t\t"));
  Serial.println(F("'11' followed by '3' erases a 4KB sector (Sector 0) containing the page 3"));
  Serial.println(F("  12. eraseBlock32K"));
  Serial.print(F("\t\t"));
  Serial.println(F("'12' followed by '132' erases a 32KB sector (Sector 1) containing the page 132"));
  Serial.println(F("  13. eraseBlock64K"));
  Serial.print(F("\t\t"));
  Serial.println(F("'13' followed by '543' erases a 64KB sector (Sector 2) containing the page 543"));
  Serial.println(F("  14. eraseChip"));
  Serial.print(F("\t\t"));
  Serial.println(F("'14' erases the entire chip"));
  Serial.println(F(" ----------------------------------------------------------------------------------------------------------------------------------"));
}
