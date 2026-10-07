
void FUN_100609ae0(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  long lVar2;
  
  *param_2 = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
  param_2[1] = CONCAT11((char)param_1[1],(char)((ushort)param_1[1] >> 8));
  uVar1 = *(uint *)(param_1 + 2);
  *(uint *)(param_2 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  param_2[4] = CONCAT11((char)param_1[4],(char)((ushort)param_1[4] >> 8));
  if (param_1[4] != 0) {
    lVar2 = 0;
    do {
      param_2[lVar2 + 5] =
           CONCAT11((char)param_1[lVar2 + 5],(char)((ushort)param_1[lVar2 + 5] >> 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < (long)(ulong)(ushort)param_1[4]);
  }
  return;
}

