
undefined8 FUN_1005abe90(long param_1,int param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_3 / *(uint *)(param_1 + 0x1c) >> 0xc;
  if ((uint)uVar2 < *(uint *)(param_1 + 0x18)) {
    if ((param_2 == -1) || (*(int *)(param_1 + 0x34) == param_2)) {
      uVar1 = FUN_1005abbf0(param_1,param_2,(uVar2 & 0xffffffff) * 0x40 + *(long *)(param_1 + 0x10),
                            param_3,param_4);
      return uVar1;
    }
    FUN_1008e3970("","vdisk",0,"Error: unknown layer %u");
    uVar1 = 0x80021011;
  }
  else {
    FUN_1008e3970("","vdisk",0,"Try to get element %u out of all groups %u (Off %llu) OC",
                  uVar2 & 0xffffffff,*(uint *)(param_1 + 0x18),param_3);
    uVar1 = 0x80021028;
  }
  return uVar1;
}

