
undefined1 FUN_100402080(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x88))();
    uVar2 = 1;
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x80))();
    }
  }
  return uVar2;
}

