
void FUN_10008d3f0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*param_1 != 0) {
    uVar1 = param_1[1];
    uVar2 = uVar1;
    if (10 < uVar1 >> 0x1c) {
      uVar2 = 0xffffffffffffffff;
      if (0xffffffff < uVar1) {
        uVar2 = uVar1 - 0x50000000;
      }
    }
    FUN_10008c640(DAT_1011c3688,uVar2,(int)param_1[2],0,1,1);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

