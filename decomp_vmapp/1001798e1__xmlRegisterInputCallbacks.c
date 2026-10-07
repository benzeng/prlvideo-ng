
int _xmlRegisterInputCallbacks
              (xmlInputMatchCallback matchFunc,xmlInputOpenCallback openFunc,
              xmlInputReadCallback readFunc,xmlInputCloseCallback closeFunc)

{
  int local_2c;
  
  if (DAT_1011b7720 < 0xf) {
    *(xmlInputMatchCallback *)(&DAT_1011b7740 + (long)DAT_1011b7720 * 0x20) = matchFunc;
    *(xmlInputOpenCallback *)(&DAT_1011b7748 + (long)DAT_1011b7720 * 0x20) = openFunc;
    *(xmlInputReadCallback *)(&DAT_1011b7750 + (long)DAT_1011b7720 * 0x20) = readFunc;
    *(xmlInputCloseCallback *)(&DAT_1011b7758 + (long)DAT_1011b7720 * 0x20) = closeFunc;
    DAT_1011b7724 = 1;
    local_2c = DAT_1011b7720;
    DAT_1011b7720 = DAT_1011b7720 + 1;
  }
  else {
    local_2c = -1;
  }
  return local_2c;
}

