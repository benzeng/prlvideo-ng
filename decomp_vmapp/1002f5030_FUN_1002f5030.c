
undefined4 FUN_1002f5030(long param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  
  plVar1 = *(long **)(param_1 + 0x30 + (param_2 & 0xffffffff) * 8);
  uVar3 = 0;
  if ((plVar1 != (long *)0x0) &&
     (iVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,&local_1c), uVar3 = local_1c, iVar2 != 0)) {
    *(int *)(param_1 + 0x20) = iVar2;
    uVar3 = 0;
  }
  return uVar3;
}

