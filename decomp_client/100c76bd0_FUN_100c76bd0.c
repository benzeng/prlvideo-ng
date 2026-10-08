
char FUN_100c76bd0(byte *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  
  cVar2 = '\x13';
  if (param_1 != (byte *)0x0) {
    bVar4 = *param_1;
    cVar2 = '\0';
    if (bVar4 != 0) {
      iVar3 = -1;
      if (0 < param_2) {
        iVar3 = param_2;
      }
      bVar1 = false;
      cVar2 = '\0';
      do {
        param_1 = param_1 + 1;
        if (iVar3 == 0) break;
        if ((((0x19 < (byte)(bVar4 + 0x9f)) && (9 < (byte)(bVar4 - 0x30))) && (bVar4 != 0x20)) &&
           ((0x19 < (byte)(bVar4 + 0xbf) &&
            ((0x3f < bVar4 || ((0xa400fb8100000000U >> ((ulong)bVar4 & 0x3f) & 1) == 0)))))) {
          cVar2 = '\x01';
        }
        iVar3 = iVar3 + -1;
        if ((char)bVar4 < '\0') {
          bVar1 = true;
        }
        bVar4 = *param_1;
      } while (bVar4 != 0);
      if (bVar1) {
        return '\x14';
      }
    }
    cVar2 = cVar2 * '\x03' + '\x13';
  }
  return cVar2;
}

