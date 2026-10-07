
void FUN_10036dde0(long param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  long *plVar5;
  bool bVar6;
  
  if (*(char *)(DAT_1011c8478 + 0x4b) != '\0') {
    (*DAT_1011c5708)(0x8dee,0);
  }
  cVar4 = (*DAT_1011c6340)(*(undefined4 *)(param_1 + 0x12c8));
  if (cVar4 != '\0') {
    (*DAT_1011c5b10)(1,param_1 + 0x12c8);
  }
  cVar4 = (*DAT_1011c6340)(*(undefined4 *)(param_1 + 0x13cc));
  if (cVar4 != '\0') {
    (*DAT_1011c5b10)(1,param_1 + 0x13cc);
  }
  cVar4 = (*DAT_1011c6340)(*(undefined4 *)(param_1 + 0x14d0));
  if (cVar4 != '\0') {
    (*DAT_1011c5b10)(1,param_1 + 0x14d0);
  }
  FUN_10036e2d0(param_1 + 0x1298);
  plVar5 = *(long **)(param_1 + 0x1058);
  while (plVar5 != (long *)(param_1 + 0x1060)) {
    if ((long *)plVar5[0x49] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[0x49] + 8))();
    }
    plVar1 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar1 = (long *)plVar5[2];
        bVar6 = (long *)*plVar1 != plVar5;
        plVar5 = plVar1;
      } while (bVar6);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_100373a50(param_1 + 0x1058,*(undefined8 *)(param_1 + 0x1060));
  *(undefined8 *)(param_1 + 0x1068) = 0;
  *(long **)(param_1 + 0x1058) = (long *)(param_1 + 0x1060);
  *(undefined8 *)(param_1 + 0x1060) = 0;
  pvVar2 = *(void **)(param_1 + 0x12b0);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x12b8);
    if (pvVar3 != pvVar2) {
      *(ulong *)(param_1 + 0x12b8) =
           (~((long)pvVar3 + (-4 - (long)pvVar2)) & 0xfffffffffffffffcU) + (long)pvVar3;
    }
    operator_delete(pvVar2);
  }
  FUN_100373790(param_1 + 0x1298,*(undefined8 *)(param_1 + 0x12a0));
  FUN_1003737e0(param_1 + 0x1070);
  FUN_100373a50(param_1 + 0x1058,*(undefined8 *)(param_1 + 0x1060));
  FUN_10038e8c0(param_1 + 0x510);
  pvVar2 = *(void **)(param_1 + 0xd8);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0xe0);
    if (pvVar3 != pvVar2) {
      *(void **)(param_1 + 0xe0) =
           (void *)(~((ulong)((long)pvVar3 + (-3 - (long)pvVar2)) / 3) * 3 + (long)pvVar3);
    }
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x90);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x98);
    if (pvVar3 != pvVar2) {
      *(void **)(param_1 + 0x98) =
           (void *)(~((ulong)((long)pvVar3 + (-3 - (long)pvVar2)) / 3) * 3 + (long)pvVar3);
    }
    operator_delete(pvVar2);
  }
  FUN_10038e8c0(param_1 + 0x50);
  FUN_10038e8c0(param_1 + 0x28);
  return;
}

