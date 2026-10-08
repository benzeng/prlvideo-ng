
undefined8 FUN_100323dd0(long param_1)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_100319390();
    return uVar1;
  }
  return 0;
}

