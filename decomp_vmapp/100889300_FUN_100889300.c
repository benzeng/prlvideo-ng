
bool FUN_100889300(void)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = FUN_100887e00();
  iVar2 = *(int *)(lVar3 + 0x250);
  bVar4 = *(int *)(lVar3 + 0x254) != iVar2;
  if (bVar4) {
    pbVar1 = (byte *)(lVar3 + 0x10 + (long)iVar2 * 4);
    *pbVar1 = *pbVar1 | 1;
  }
  return bVar4;
}

