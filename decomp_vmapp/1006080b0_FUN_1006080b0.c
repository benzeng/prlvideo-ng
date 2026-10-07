
void FUN_1006080b0(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  long lVar2;
  
  *param_2 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_2 + 1) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  param_2[3] = CONCAT11((char)param_1[3],(char)((ushort)param_1[3] >> 8));
  if (param_1[3] != 0) {
    lVar2 = 0;
    do {
      param_2[lVar2 + 4] =
           CONCAT11((char)param_1[lVar2 + 4],(char)((ushort)param_1[lVar2 + 4] >> 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < (long)(ulong)(ushort)param_1[3]);
  }
  return;
}

