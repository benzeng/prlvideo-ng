
void FUN_100300800(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_100bbb950;
  if ((long *)param_1[0x28f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28f] + 8))();
  }
  lVar4 = -0x10;
  do {
    puVar5 = (undefined8 *)param_1[lVar4 + 0x2a4];
    if (puVar5 != (undefined8 *)0x0) {
      if ((void *)*puVar5 != (void *)0x0) {
        operator_delete__((void *)*puVar5);
      }
      operator_delete(puVar5);
    }
    puVar5 = (undefined8 *)param_1[lVar4 + 0x2b4];
    if (puVar5 != (undefined8 *)0x0) {
      if ((void *)*puVar5 != (void *)0x0) {
        operator_delete__((void *)*puVar5);
      }
      operator_delete(puVar5);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0);
  if ((void *)param_1[0x4c0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4c0]);
  }
  if ((void *)param_1[0x4c2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4c2]);
  }
  if ((void *)param_1[0x14c4] != (void *)0x0) {
    operator_delete__((void *)param_1[0x14c4]);
  }
  param_1[0x3b8] = &PTR_FUN_101117978;
  lVar4 = 0;
  do {
    pvVar3 = (void *)param_1[lVar4 + 0x3b9];
    while (pvVar3 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar3 + 8);
      operator_delete(pvVar3);
      pvVar3 = pvVar1;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  ___bzero(param_1 + 0x3b9,0x800);
  param_1[0x2b6] = &PTR_FUN_1011179d8;
  lVar4 = 0;
  do {
    pvVar3 = (void *)param_1[lVar4 + 0x2b7];
    while (pvVar3 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar3 + 0x10);
      if (*(void **)((long)pvVar3 + 8) != (void *)0x0) {
        operator_delete(*(void **)((long)pvVar3 + 8));
      }
      operator_delete(pvVar3);
      pvVar3 = pvVar1;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  ___bzero(param_1 + 0x2b7,0x800);
  param_1[0x18d] = &PTR_FUN_1011179a8;
  uVar6 = 0;
  do {
    pvVar3 = (void *)param_1[uVar6 + 0x18e];
    while (pvVar3 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar3 + 0x10);
      if (*(long **)((long)pvVar3 + 8) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar3 + 8) + 8))();
      }
      operator_delete(pvVar3);
      pvVar3 = pvVar1;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x100);
  ___bzero(param_1 + 0x18e,0x800);
  param_1[0x8b] = &PTR_FUN_101117978;
  lVar4 = 0;
  do {
    pvVar3 = (void *)param_1[lVar4 + 0x8c];
    while (pvVar3 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar3 + 8);
      operator_delete(pvVar3);
      pvVar3 = pvVar1;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  ___bzero(param_1 + 0x8c,0x800);
  FUN_100306b50(param_1 + 0x84);
  puVar5 = (undefined8 *)param_1[0x85];
  puVar2 = (undefined8 *)param_1[0x86];
  if (puVar5 != puVar2) {
    do {
      operator_delete((void *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar2 != puVar5);
    lVar4 = param_1[0x86];
    if (lVar4 != param_1[0x85]) {
      param_1[0x86] = (~((lVar4 + -8) - param_1[0x85]) & 0xfffffffffffffff8U) + lVar4;
    }
  }
  pvVar3 = (void *)param_1[0x84];
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  FUN_100306c40(param_1 + 0x25);
  puVar5 = (undefined8 *)param_1[0x26];
  puVar2 = (undefined8 *)param_1[0x27];
  if (puVar5 != puVar2) {
    do {
      operator_delete((void *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar2 != puVar5);
    lVar4 = param_1[0x27];
    if (lVar4 != param_1[0x26]) {
      param_1[0x27] = (~((lVar4 + -8) - param_1[0x26]) & 0xfffffffffffffff8U) + lVar4;
    }
  }
  pvVar3 = (void *)param_1[0x25];
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  FUN_100306d30(param_1 + 0x1d);
  puVar5 = (undefined8 *)param_1[0x1e];
  puVar2 = (undefined8 *)param_1[0x1f];
  if (puVar5 != puVar2) {
    do {
      operator_delete((void *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar2 != puVar5);
    lVar4 = param_1[0x1f];
    if (lVar4 != param_1[0x1e]) {
      param_1[0x1f] = (~((lVar4 + -8) - param_1[0x1e]) & 0xfffffffffffffff8U) + lVar4;
    }
  }
  pvVar3 = (void *)param_1[0x1d];
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  FUN_100306e10(param_1 + 0x15);
  puVar5 = (undefined8 *)param_1[0x16];
  puVar2 = (undefined8 *)param_1[0x17];
  if (puVar5 != puVar2) {
    do {
      operator_delete((void *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar2 != puVar5);
    lVar4 = param_1[0x17];
    if (lVar4 != param_1[0x16]) {
      param_1[0x17] = (~((lVar4 + -8) - param_1[0x16]) & 0xfffffffffffffff8U) + lVar4;
    }
  }
  pvVar3 = (void *)param_1[0x15];
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  FUN_100306ef0(param_1 + 0xe);
  puVar5 = (undefined8 *)param_1[0xf];
  puVar2 = (undefined8 *)param_1[0x10];
  if (puVar5 != puVar2) {
    do {
      operator_delete((void *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar2 != puVar5);
    lVar4 = param_1[0x10];
    if (lVar4 != param_1[0xf]) {
      param_1[0x10] = (~((lVar4 + -8) - param_1[0xf]) & 0xfffffffffffffff8U) + lVar4;
    }
  }
  pvVar3 = (void *)param_1[0xe];
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  FUN_100306fd0(param_1 + 8);
  puVar5 = (undefined8 *)param_1[9];
  puVar2 = (undefined8 *)param_1[10];
  if (puVar5 != puVar2) {
    do {
      operator_delete((void *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar2 != puVar5);
    lVar4 = param_1[10];
    if (lVar4 != param_1[9]) {
      param_1[10] = (~((lVar4 + -8) - param_1[9]) & 0xfffffffffffffff8U) + lVar4;
    }
  }
  pvVar3 = (void *)param_1[8];
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    return;
  }
  return;
}

