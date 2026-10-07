
void FUN_1000cb9f0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 800) * 0x100;
  uVar1 = uVar2 - param_2;
  if (param_3 < uVar2 - param_2) {
    uVar1 = param_3;
  }
  if ((param_2 < uVar2) && (uVar1 != 0)) {
    FUN_1000d60e0(param_1 + 0x208,(ulong)param_2 << 0xc,(ulong)uVar1 << 0xc);
    return;
  }
  FUN_1008e3970("","vm",0,"Swap region is out of bounds (0x%X/0x%X +0x%X)",param_2,uVar2,param_3);
  return;
}

