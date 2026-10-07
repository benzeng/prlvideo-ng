
ulong FUN_100702720(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = 1;
  if ((*param_1 != 0) && (plVar1 = *(long **)(*param_1 + 0x10), plVar1 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

