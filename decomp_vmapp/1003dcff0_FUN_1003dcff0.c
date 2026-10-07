
void FUN_1003dcff0(long param_1)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  plVar3 = *(long **)(param_1 + 0x10);
  while (plVar3 != (long *)(param_1 + 0x18)) {
    pvVar1 = (void *)plVar3[6];
    if (pvVar1 != (void *)0x0) {
      (*DAT_1011c5b70)(1,(long)pvVar1 + 0xc);
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
  FUN_1003dd2e0(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long **)(param_1 + 0x10) = (long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1003dd2e0(param_1 + 0x10,0);
  return;
}

