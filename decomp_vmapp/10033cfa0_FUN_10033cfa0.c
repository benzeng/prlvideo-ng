
void FUN_10033cfa0(long param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = (ulong)param_2 * 0x10;
  *(undefined4 *)(param_1 + lVar1) = *param_3;
  *(undefined4 *)(param_1 + 4 + lVar1) = param_3[1];
  *(undefined4 *)(param_1 + 8 + lVar1) = param_3[2];
  *(undefined4 *)(param_1 + 0xc + lVar1) = param_3[3];
  return;
}

