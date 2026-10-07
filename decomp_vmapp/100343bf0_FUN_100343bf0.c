
void FUN_100343bf0(long param_1)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)(param_1 + 0x2738);
  if (pvVar2 != (void *)0x0) {
    piVar1 = (int *)((long)pvVar2 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10032d8f0(pvVar2);
      operator_delete(pvVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x2738) = 0;
  pvVar2 = *(void **)(param_1 + 0x2728);
  if (pvVar2 != (void *)0x0) {
    piVar1 = (int *)((long)pvVar2 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10032d8f0(pvVar2);
      operator_delete(pvVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x2728) = 0;
  pvVar2 = *(void **)(param_1 + 0x2718);
  if (pvVar2 != (void *)0x0) {
    piVar1 = (int *)((long)pvVar2 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10032d8f0(pvVar2);
      operator_delete(pvVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x2718) = 0;
  pvVar2 = *(void **)(param_1 + 0x2708);
  if (pvVar2 != (void *)0x0) {
    piVar1 = (int *)((long)pvVar2 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10032d8f0(pvVar2);
      operator_delete(pvVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x2708) = 0;
  lVar3 = 0;
  do {
    pvVar2 = *(void **)(param_1 + 0xdf8 + lVar3);
    if (pvVar2 != (void *)0x0) {
      piVar1 = (int *)((long)pvVar2 + 0x80);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_10032d8f0(pvVar2);
        operator_delete(pvVar2);
      }
    }
    *(undefined8 *)(param_1 + 0xdf8 + lVar3) = 0;
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x5a0);
  lVar3 = 0;
  do {
    pvVar2 = *(void **)(param_1 + 0x850 + lVar3);
    if (pvVar2 != (void *)0x0) {
      piVar1 = (int *)((long)pvVar2 + 0x80);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_10032d8f0();
        operator_delete(pvVar2);
      }
    }
    *(undefined8 *)(param_1 + 0x850 + lVar3) = 0;
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x200);
  pvVar2 = *(void **)(param_1 + 0x650);
  if (pvVar2 != (void *)0x0) {
    piVar1 = (int *)((long)pvVar2 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_10032d8f0(pvVar2);
      operator_delete(pvVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x650) = 0;
  return;
}

