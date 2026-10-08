
ulong FUN_100a60170(byte *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = 0;
  if (param_3 == 0) {
    pcVar3 = _strchr((char *)param_1,0x3a);
    uVar8 = 0;
    for (; pcVar3 != (char *)0x0; pcVar3 = _strchr(pcVar3 + 1,0x3a)) {
      uVar8 = uVar8 + 1;
    }
  }
  else {
    do {
      pbVar2 = (byte *)_strchr((char *)param_1,0x3a);
      pbVar4 = pbVar2;
      if (pbVar2 == (byte *)0x0) {
        return uVar8;
      }
      do {
        do {
          pbVar6 = pbVar4;
          pbVar4 = pbVar6 + 1;
        } while (*pbVar4 == 9);
      } while (*pbVar4 == 0x20);
      lVar7 = uVar8 * 0x20;
      *(byte **)(param_2 + 0x10 + lVar7) = pbVar4;
      pbVar1 = pbVar4;
      while ((pbVar5 = pbVar1, *pbVar5 != 0 && (*pbVar5 != 0x3b))) {
        pbVar1 = pbVar6 + 2;
        pbVar6 = pbVar5;
      }
      *(long *)(param_2 + 0x18 + lVar7) = (long)pbVar5 - (long)pbVar4;
      pbVar4 = pbVar2;
      while ((param_1 <= pbVar4 &&
             ((0x3b < (ulong)*pbVar4 || ((0x800000100000200U >> ((ulong)*pbVar4 & 0x3f) & 1) == 0)))
             )) {
        pbVar4 = pbVar4 + -1;
      }
      *(byte **)(param_2 + lVar7) = pbVar4 + 1;
      *(long *)(param_2 + 8 + lVar7) = (long)pbVar2 - (long)(pbVar4 + 1);
      uVar8 = uVar8 + 1;
      param_1 = pbVar5;
    } while (uVar8 < param_3);
  }
  return uVar8;
}

