
short FUN_10039b630(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  
  bVar2 = param_1[5] << 6 | param_1[2] * '\x02';
  *param_2 = bVar2;
  if (param_1[2] < 8) {
    bVar1 = *param_1;
    if ((((ulong)bVar1 < 9) && ((0x169UL >> ((ulong)bVar1 & 0x3f) & 1) != 0)) && (param_1[1] == 0))
    {
      sVar3 = 1;
      if (bVar1 == 8) {
        bVar2 = bVar2 | 0x30;
        *param_2 = bVar2;
      }
      else if (bVar1 == 6) {
        bVar2 = bVar2 | 0x20;
        *param_2 = bVar2;
      }
      else if (bVar1 == 5) {
        bVar2 = bVar2 | 0x10;
        *param_2 = bVar2;
      }
      goto LAB_10039b681;
    }
  }
  *param_2 = bVar2 | 1;
  bVar2 = *param_1 << 3 | param_1[1] * '\x02';
  param_2[1] = bVar2;
  param_2 = param_2 + 1;
  sVar3 = 2;
LAB_10039b681:
  if (((param_1[3] != 0) || (param_1[7] != 0)) || ((param_1[6] != 0 || (param_1[4] != 0)))) {
    *param_2 = bVar2 | 1;
    param_2[1] = param_1[6] << 4 | param_1[3] * '\x02' | 1;
    param_2[2] = param_1[7] << 7 | param_1[4] * '\x02';
    sVar3 = sVar3 + 2;
  }
  return sVar3;
}

