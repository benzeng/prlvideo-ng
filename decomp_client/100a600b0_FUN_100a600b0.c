
undefined8 FUN_100a600b0(byte *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar1 = (byte *)_strchr((char *)param_1,0x3a);
  pbVar4 = pbVar1;
  if (pbVar1 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    do {
      do {
        pbVar6 = pbVar4;
        pbVar4 = pbVar6 + 1;
      } while (*pbVar4 == 9);
    } while (*pbVar4 == 0x20);
    param_2[2] = pbVar4;
    pbVar7 = pbVar4;
    while ((*pbVar7 != 0 && (*pbVar7 != 0x3b))) {
      pbVar5 = pbVar6 + 2;
      pbVar6 = pbVar7;
      pbVar7 = pbVar5;
    }
    param_2[3] = (long)pbVar7 - (long)pbVar4;
    pbVar4 = pbVar1;
    while ((param_1 <= pbVar4 &&
           ((0x3b < (ulong)*pbVar4 || ((0x800000100000200U >> ((ulong)*pbVar4 & 0x3f) & 1) == 0)))))
    {
      pbVar4 = pbVar4 + -1;
    }
    *param_2 = pbVar4 + 1;
    lVar2 = (long)pbVar1 - (long)(pbVar4 + 1);
    param_2[1] = lVar2;
    uVar3 = CONCAT71((int7)((ulong)lVar2 >> 8),1);
  }
  return uVar3;
}

