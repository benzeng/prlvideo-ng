
void FUN_100333730(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  
  plVar5 = *(long **)(param_1 + 0xbb08);
  while (plVar5 != (long *)(param_1 + 0xbb10)) {
    FUN_100362590(param_2,*(undefined4 *)(plVar5[5] + 0x18));
    pvVar2 = (void *)plVar5[5];
    if (pvVar2 != (void *)0x0) {
      FUN_100391a10(pvVar2);
      operator_delete(pvVar2);
    }
    plVar5[5] = 0;
    plVar4 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar6 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar6);
    }
    else {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_10033ffc0(param_1 + 0xbb08,*(undefined8 *)(param_1 + 0xbb10));
  *(undefined8 *)(param_1 + 0xbb18) = 0;
  *(long **)(param_1 + 0xbb08) = (long *)(param_1 + 0xbb10);
  *(undefined8 *)(param_1 + 0xbb10) = 0;
  plVar5 = *(long **)(param_1 + 0xbb20);
  while (plVar5 != (long *)(param_1 + 0xbb28)) {
    FUN_1003625d0(param_2,*(undefined4 *)(plVar5[5] + 0x18));
    pvVar2 = (void *)plVar5[5];
    if (pvVar2 != (void *)0x0) {
      FUN_100351bd0(pvVar2);
      operator_delete(pvVar2);
    }
    plVar5[5] = 0;
    plVar4 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar6 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar6);
    }
    else {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_10033ff80(param_1 + 0xbb20,*(undefined8 *)(param_1 + 0xbb28));
  *(undefined8 *)(param_1 + 0xbb30) = 0;
  *(long **)(param_1 + 0xbb20) = (long *)(param_1 + 0xbb28);
  *(undefined8 *)(param_1 + 0xbb28) = 0;
  plVar5 = *(long **)(param_1 + 0xbb38);
  while (plVar5 != (long *)(param_1 + 0xbb40)) {
    FUN_100362670(param_2,(int)plVar5[4]);
    puVar1 = (undefined8 *)plVar5[5];
    if (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)puVar1[1];
        if (pvVar3 != pvVar2) {
          puVar1[1] = (~((long)pvVar3 + (-8 - (long)pvVar2)) & 0xfffffffffffffff8U) + (long)pvVar3;
        }
        operator_delete(pvVar2);
      }
      operator_delete(puVar1);
    }
    plVar5[5] = 0;
    plVar4 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar6 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar6);
    }
    else {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_100340000(param_1 + 0xbb38,*(undefined8 *)(param_1 + 0xbb40));
  *(undefined8 *)(param_1 + 0xbb48) = 0;
  *(long **)(param_1 + 0xbb38) = (long *)(param_1 + 0xbb40);
  *(undefined8 *)(param_1 + 0xbb40) = 0;
  return;
}

