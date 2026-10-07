
void FUN_100340040(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((void *)param_1[0x1c] != (void *)0x0) {
    operator_delete((void *)param_1[0x1c]);
  }
  if ((void *)param_1[0x1b] != (void *)0x0) {
    operator_delete((void *)param_1[0x1b]);
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete((void *)param_1[0x1a]);
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete((void *)param_1[0x19]);
  }
  pvVar3 = (void *)param_1[0x16];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x17];
    if (pvVar2 != pvVar3) {
      do {
        param_1[0x17] = (void *)((long)pvVar2 + -0x10);
        puVar1 = (undefined8 *)((long)pvVar2 + -8);
        pvVar2 = (void *)((long)pvVar2 + -0x10);
        if ((void *)*puVar1 != (void *)0x0) {
          operator_delete__((void *)*puVar1);
          pvVar2 = (void *)param_1[0x17];
        }
      } while (pvVar2 != pvVar3);
      pvVar3 = (void *)param_1[0x16];
    }
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x13];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x14];
    if (pvVar2 != pvVar3) {
      do {
        param_1[0x14] = (void *)((long)pvVar2 + -0x10);
        puVar1 = (undefined8 *)((long)pvVar2 + -8);
        pvVar2 = (void *)((long)pvVar2 + -0x10);
        if ((void *)*puVar1 != (void *)0x0) {
          operator_delete__((void *)*puVar1);
          pvVar2 = (void *)param_1[0x14];
        }
      } while (pvVar2 != pvVar3);
      pvVar3 = (void *)param_1[0x13];
    }
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x10];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x11];
    if (pvVar2 != pvVar3) {
      param_1[0x11] = (~((long)pvVar2 + (-8 - (long)pvVar3)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0xd];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xe];
    if (pvVar2 != pvVar3) {
      param_1[0xe] = (void *)(~((ulong)((long)pvVar2 + (-0x44 - (long)pvVar3)) / 0x44) * 0x44 +
                             (long)pvVar2);
    }
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[10];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xb];
    if (pvVar2 != pvVar3) {
      param_1[0xb] = (void *)((long)pvVar2 +
                             ~((ulong)((long)pvVar2 + (-0x14 - (long)pvVar3)) / 0x14) * 0x14);
    }
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[7];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[8];
    if (pvVar2 != pvVar3) {
      param_1[8] = (void *)(~((ulong)((long)pvVar2 + (-0x7c - (long)pvVar3)) / 0x7c) * 0x7c +
                           (long)pvVar2);
    }
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[4];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[5];
    if (pvVar2 != pvVar3) {
      param_1[5] = (~((long)pvVar2 + (-8 - (long)pvVar3)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar3);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete((void *)param_1[2]);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}

