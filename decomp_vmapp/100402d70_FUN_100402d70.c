
void FUN_100402d70(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x250))();
    if (plVar3 != (long *)0x0) {
      FUN_100401f70(param_1);
      (**(code **)(**(long **)(param_1 + 0x38) + 0x108))();
      uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
      *(ulong *)(*(long *)(param_1 + 0xa0) + 0xf0) = (ulong)uVar2;
      lVar1 = *(long *)(param_1 + 8);
      if (((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 1) != 0)) && (*(int *)(lVar1 + 0x1c) != 0)) {
        FUN_1008e3970("","HddUtils",0,"%s","hdd: disk failure DFE_POWER_OFF_ON_WRITE activated!");
        return;
      }
    }
  }
  return;
}

