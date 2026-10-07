
void FUN_100762530(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1008e3970("","etrace",0,"Etrace: memory is already registered, overwriting...");
  }
  *(long *)(param_1 + 0x10) = param_2;
  if (param_2 == 0) {
    param_3 = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = (undefined4)((ulong)param_3 + 0xfffffffd0 >> 4);
    *(undefined4 *)(param_2 + 0xc) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(uint *)(param_1 + 0x18) = param_3;
  return;
}

