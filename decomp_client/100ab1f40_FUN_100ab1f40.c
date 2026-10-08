
void FUN_100ab1f40(long param_1)

{
  long lVar1;
  long *plVar2;
  
  for (lVar1 = *(long *)(param_1 + 0x20); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x28)) {
    *(undefined4 *)(lVar1 + 0x3c) = 2;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    do {
      lVar1 = plVar2[5];
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x20) = plVar2[4];
      }
      *(long *)plVar2[4] = lVar1;
      (**(code **)(*plVar2 + 8))();
      plVar2 = *(long **)(param_1 + 0x18);
      if (plVar2 == *(long **)(param_1 + 0x20)) {
        FUN_100aaf5d0(param_1 + 0x28);
        plVar2 = *(long **)(param_1 + 0x18);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}

