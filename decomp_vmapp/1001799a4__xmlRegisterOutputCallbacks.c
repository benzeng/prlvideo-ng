
int _xmlRegisterOutputCallbacks
              (xmlOutputMatchCallback matchFunc,xmlOutputOpenCallback openFunc,
              xmlOutputWriteCallback writeFunc,xmlOutputCloseCallback closeFunc)

{
  int local_2c;
  
  if (DAT_1011b7728 < 0xf) {
    *(xmlOutputMatchCallback *)(&DAT_1011b7920 + (long)DAT_1011b7728 * 0x20) = matchFunc;
    *(xmlOutputOpenCallback *)(&DAT_1011b7928 + (long)DAT_1011b7728 * 0x20) = openFunc;
    *(xmlOutputWriteCallback *)(&DAT_1011b7930 + (long)DAT_1011b7728 * 0x20) = writeFunc;
    *(xmlOutputCloseCallback *)(&DAT_1011b7938 + (long)DAT_1011b7728 * 0x20) = closeFunc;
    DAT_1011b772c = 1;
    local_2c = DAT_1011b7728;
    DAT_1011b7728 = DAT_1011b7728 + 1;
  }
  else {
    local_2c = -1;
  }
  return local_2c;
}

