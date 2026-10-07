
void FUN_1003abfe0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_100bbdae0;
  while (pvVar1 = *(void **)param_1[0x32], pvVar1 != (void *)0x0) {
    FUN_10037c1a0(pvVar1);
    operator_delete(pvVar1);
  }
  puVar4 = (undefined8 *)param_1[2];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      FUN_1003aaf40(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[2] = puVar2;
    puVar4 = puVar2;
  }
  puVar4 = (undefined8 *)param_1[3];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    pvVar1 = (void *)param_1[3];
    if (pvVar1 != (void *)0x0) {
      FUN_1003aaf40(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[3] = puVar2;
    puVar4 = puVar2;
  }
  puVar4 = (undefined8 *)param_1[4];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    pvVar1 = (void *)param_1[4];
    if (pvVar1 != (void *)0x0) {
      FUN_1003ab100(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[4] = puVar2;
    puVar4 = puVar2;
  }
  puVar4 = (undefined8 *)param_1[7];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    pvVar1 = (void *)param_1[7];
    if (pvVar1 != (void *)0x0) {
      FUN_1003c5730(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[7] = puVar2;
    puVar4 = puVar2;
  }
  puVar4 = (undefined8 *)param_1[5];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    pvVar1 = (void *)param_1[5];
    if (pvVar1 != (void *)0x0) {
      FUN_1003c5770(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[5] = puVar2;
    puVar4 = puVar2;
  }
  puVar4 = (undefined8 *)param_1[6];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    pvVar1 = (void *)param_1[6];
    if (pvVar1 != (void *)0x0) {
      FUN_1003c57b0(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[6] = puVar2;
    puVar4 = puVar2;
  }
  while (pvVar1 = *(void **)param_1[0x1e], pvVar1 != (void *)0x0) {
    FUN_1003aab10(pvVar1);
    operator_delete(pvVar1);
  }
  while (*(long **)param_1[0x24] != (long *)0x0) {
    (**(code **)(**(long **)param_1[0x24] + 8))();
  }
  while (pvVar1 = *(void **)param_1[0x21], pvVar1 != (void *)0x0) {
    FUN_1003ab4f0(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x2b];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x2c];
    if (pvVar3 != pvVar1) {
      param_1[0x2c] = (~((long)pvVar3 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar3;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1a];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x1b];
    if (pvVar3 != pvVar1) {
      param_1[0x1b] = (~((long)pvVar3 + (-2 - (long)pvVar1)) & 0xfffffffffffffffeU) + (long)pvVar3;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x17];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x18];
    if (pvVar3 != pvVar1) {
      param_1[0x18] =
           (~((long)pvVar3 + (-0x10 - (long)pvVar1)) & 0xfffffffffffffff0U) + (long)pvVar3;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x15];
    if (pvVar3 != pvVar1) {
      param_1[0x15] = (~((long)pvVar3 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar3;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x11];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x12];
    if (pvVar3 != pvVar1) {
      param_1[0x12] = (~((long)pvVar3 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar3;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xe];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0xf];
    if (pvVar3 != pvVar1) {
      param_1[0xf] = (~((long)pvVar3 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar3;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0xc];
    if (pvVar3 != pvVar1) {
      param_1[0xc] = (~((long)pvVar3 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar3;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[8];
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[9];
  if (pvVar3 != pvVar1) {
    param_1[9] = (~((long)pvVar3 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar3;
  }
  operator_delete(pvVar1);
  return;
}

