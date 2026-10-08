
undefined8 FUN_100332a90(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0xa8))();
  }
  return uVar2;
}

