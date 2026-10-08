
int _xmlOutputBufferWriteString(xmlOutputBufferPtr out,char *str)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  int local_2c;
  
  if ((out == (xmlOutputBufferPtr)0x0) || (out->error != 0)) {
    local_2c = -1;
  }
  else if (str == (char *)0x0) {
    local_2c = -1;
  }
  else {
    lVar2 = -1;
    pcVar3 = str;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_2c = ~(uint)lVar2 - 1;
    if (0 < local_2c) {
      local_2c = _xmlOutputBufferWrite(out,local_2c,str);
    }
  }
  return local_2c;
}

