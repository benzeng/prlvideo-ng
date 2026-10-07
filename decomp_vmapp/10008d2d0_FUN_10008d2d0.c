
void FUN_10008d2d0(long *param_1,ulong param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    uVar3 = param_1[1];
    uVar2 = uVar3;
    if (0xafffffff < uVar3) {
      uVar2 = 0xffffffffffffffff;
      if (0xffffffff < uVar3) {
        uVar2 = uVar3 - 0x50000000;
      }
    }
    FUN_10008c640(DAT_1011c3688,uVar2,(int)param_1[2],0,1,1);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    if (0x210000 < ((uint)param_2 & 0x1fffff) + param_3) {
      FUN_1008e3970("","vm",0,"Init(%llx, %x) failed!",param_2,param_3);
      return;
    }
    uVar3 = param_2;
    if (0xafffffff < param_2) {
      uVar3 = 0xffffffffffffffff;
      if (0xffffffff < param_2) {
        uVar3 = param_2 - 0x50000000;
      }
    }
    lVar1 = FUN_10008c320(DAT_1011c3688,uVar3,param_3,1,1);
    *param_1 = lVar1;
    if (lVar1 != 0) {
      *(int *)(param_1 + 2) = param_3;
      param_1[1] = param_2;
    }
  }
  return;
}

