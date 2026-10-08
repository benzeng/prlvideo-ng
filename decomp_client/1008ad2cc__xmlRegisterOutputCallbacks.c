
int _xmlRegisterOutputCallbacks
              (xmlOutputMatchCallback matchFunc,xmlOutputOpenCallback openFunc,
              xmlOutputWriteCallback writeFunc,xmlOutputCloseCallback closeFunc)

{
  int local_2c;
  
  if (DAT_1023124a8 < 0xf) {
    *(xmlOutputMatchCallback *)(&DAT_1023126a0 + (long)DAT_1023124a8 * 0x20) = matchFunc;
    *(xmlOutputOpenCallback *)(&DAT_1023126a8 + (long)DAT_1023124a8 * 0x20) = openFunc;
    *(xmlOutputWriteCallback *)(&DAT_1023126b0 + (long)DAT_1023124a8 * 0x20) = writeFunc;
    *(xmlOutputCloseCallback *)(&DAT_1023126b8 + (long)DAT_1023124a8 * 0x20) = closeFunc;
    DAT_1023124ac = 1;
    local_2c = DAT_1023124a8;
    DAT_1023124a8 = DAT_1023124a8 + 1;
  }
  else {
    local_2c = -1;
  }
  return local_2c;
}

