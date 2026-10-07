
void FUN_10032fdc0(long param_1)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  plVar3 = *(long **)(param_1 + 0x20);
  while (plVar3 != (long *)(param_1 + 0x28)) {
    pvVar1 = (void *)plVar3[5];
    if (pvVar1 != (void *)0x0) {
      FUN_100359c30(pvVar1);
      operator_delete(pvVar1);
    }
    plVar2 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar2 = (long *)plVar3[2];
        bVar4 = (long *)*plVar2 != plVar3;
        plVar3 = plVar2;
      } while (bVar4);
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_100332380(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(long **)(param_1 + 0x20) = (long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

