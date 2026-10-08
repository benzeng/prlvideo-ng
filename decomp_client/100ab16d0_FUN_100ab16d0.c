
undefined1 FUN_100ab16d0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  for (lVar3 = *(long *)(param_1 + 0x20); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x28)) {
    if (*(long *)(lVar3 + 0x18) == param_3) {
      *(undefined4 *)(lVar3 + 0x3c) = 2;
      *param_2 = lVar3;
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0x18);
  do {
    plVar2 = plVar1;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    plVar1 = (long *)plVar2[5];
  } while (plVar2[3] != param_3);
  if (plVar1 != (long *)0x0) {
    plVar1[4] = plVar2[4];
  }
  *(long **)plVar2[4] = plVar1;
  (**(code **)(*plVar2 + 8))();
  if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
    FUN_100aaf5d0(param_1 + 0x28);
    return 1;
  }
  return 1;
}

