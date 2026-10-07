
void FUN_10041f920(long param_1,long param_2,int param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  
  lVar3 = 0;
  if (0 < param_3) {
    do {
      cVar1 = *(char *)(param_1 + lVar3 * 2);
      if (cVar1 == '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 1 + lVar3 * 2);
      if (cVar2 == '\0') {
        return;
      }
      bVar4 = cVar1 - 0x30;
      if (9 < bVar4) {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          bVar4 = cVar1 + 0xa9;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          bVar4 = cVar1 - 0x37;
        }
        else {
          bVar4 = 0xff;
        }
      }
      bVar5 = cVar2 - 0x30;
      if (9 < bVar5) {
        if ((byte)(cVar2 + 0x9fU) < 6) {
          bVar5 = cVar2 + 0xa9;
        }
        else if ((byte)(cVar2 + 0xbfU) < 6) {
          bVar5 = cVar2 - 0x37;
        }
        else {
          bVar5 = 0xff;
        }
      }
      *(byte *)(param_2 + lVar3) = bVar5 + bVar4 * '\x10';
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < param_3);
  }
  return;
}

