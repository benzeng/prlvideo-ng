
undefined8 FUN_1000d53b0(void)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = 0;
  if (DAT_1011c36a4 < 0x30040) {
    piVar4 = &DAT_1011c36e8;
    do {
      lVar2 = *(long *)(DAT_1011c3698 + 0x1938);
      if ((piVar4[-1] != 0) || (piVar4[-6] != 0)) {
        pbVar1 = (byte *)(lVar2 + 0x31cb7 + lVar3);
        *pbVar1 = *pbVar1 | 4;
      }
      if ((piVar4[-2] != 0) || (piVar4[-5] != 0)) {
        pbVar1 = (byte *)(lVar2 + 0x31cb7 + lVar3);
        *pbVar1 = *pbVar1 | 8;
      }
      if ((*piVar4 != 0) || (piVar4[-3] != 0)) {
        pbVar1 = (byte *)(lVar2 + 0x31cb7 + lVar3);
        *pbVar1 = *pbVar1 | 1;
      }
      if (piVar4[-4] != 0) {
        pbVar1 = (byte *)(lVar2 + 0x31cb7 + lVar3);
        *pbVar1 = *pbVar1 | 2;
      }
      piVar4 = piVar4 + 7;
      lVar3 = lVar3 + 0x2060;
    } while (lVar3 != 0x8180);
  }
  return 0;
}

