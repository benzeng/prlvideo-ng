
void FUN_10073e8f0(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x30), *(int *)(param_1 + 0x30) = iVar1 + -1, iVar1 < 2)) {
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) {
      plVar2 = (long *)*plVar3;
      if (plVar2 != (long *)0x0) {
        do {
          plVar3 = plVar3 + 1;
          if (*(code **)(*plVar2 + 0x50) != (code *)0x0) {
            (**(code **)(*plVar2 + 0x50))(plVar2);
          }
          FUN_10081e1a0(plVar2);
          plVar2 = (long *)*plVar3;
        } while (plVar2 != (long *)0x0);
        plVar3 = *(long **)(param_1 + 0x20);
      }
      FUN_10081e1a0(plVar3);
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

