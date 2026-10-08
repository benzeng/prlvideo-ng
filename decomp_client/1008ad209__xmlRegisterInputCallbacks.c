
int _xmlRegisterInputCallbacks
              (xmlInputMatchCallback matchFunc,xmlInputOpenCallback openFunc,
              xmlInputReadCallback readFunc,xmlInputCloseCallback closeFunc)

{
  int local_2c;
  
  if (DAT_1023124a0 < 0xf) {
    *(xmlInputMatchCallback *)(&DAT_1023124c0 + (long)DAT_1023124a0 * 0x20) = matchFunc;
    *(xmlInputOpenCallback *)(&DAT_1023124c8 + (long)DAT_1023124a0 * 0x20) = openFunc;
    *(xmlInputReadCallback *)(&DAT_1023124d0 + (long)DAT_1023124a0 * 0x20) = readFunc;
    *(xmlInputCloseCallback *)(&DAT_1023124d8 + (long)DAT_1023124a0 * 0x20) = closeFunc;
    DAT_1023124a4 = 1;
    local_2c = DAT_1023124a0;
    DAT_1023124a0 = DAT_1023124a0 + 1;
  }
  else {
    local_2c = -1;
  }
  return local_2c;
}

