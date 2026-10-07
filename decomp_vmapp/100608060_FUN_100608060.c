
void FUN_100608060(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  
  *param_1 = CONCAT11((char)*param_2,(char)((ushort)*param_2 >> 8));
  uVar1 = *(uint *)(param_2 + 1);
  *(uint *)(param_1 + 1) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  sVar2 = CONCAT11((char)param_2[3],(char)((ushort)param_2[3] >> 8));
  param_1[3] = sVar2;
  if (sVar2 != 0) {
    lVar3 = 0;
    do {
      param_1[lVar3 + 4] =
           CONCAT11((char)param_2[lVar3 + 4],(char)((ushort)param_2[lVar3 + 4] >> 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < (long)(ulong)(ushort)param_1[3]);
  }
  return;
}

