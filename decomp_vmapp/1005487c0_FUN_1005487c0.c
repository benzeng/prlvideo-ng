
undefined8 FUN_1005487c0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (((*(char *)(param_1 + 0x68) == '\0') &&
      (plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0,0x200000,0);
    uVar2 = 0x200000;
    if (0x200000 < *(ulong *)(param_1 + 0x10)) {
      do {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                  (*(long **)(param_1 + 0x38),uVar2,0x200000,0);
        uVar2 = uVar2 + 0x200000;
      } while (uVar2 < *(ulong *)(param_1 + 0x10));
    }
  }
  return 1;
}

