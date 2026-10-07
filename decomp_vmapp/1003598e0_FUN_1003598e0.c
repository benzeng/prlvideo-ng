
void FUN_1003598e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  FUN_1002adb30(*param_1,param_1[1]);
  puVar1 = param_1 + 2;
  puVar6 = (undefined8 *)param_1[2];
  puVar2 = param_1 + 3;
  if (puVar6 != puVar2) {
    do {
      pvVar3 = (void *)puVar6[5];
      if (pvVar3 != (void *)0x0) {
        FUN_1003339d0(pvVar3);
        operator_delete(pvVar3);
      }
      puVar6[5] = 0;
      puVar5 = (undefined8 *)puVar6[1];
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        do {
          puVar10 = (undefined8 *)puVar6[2];
          bVar11 = (undefined8 *)*puVar10 != puVar6;
          puVar6 = puVar10;
        } while (bVar11);
      }
      else {
        do {
          puVar10 = puVar5;
          puVar5 = (undefined8 *)*puVar10;
        } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
      }
      puVar6 = puVar10;
    } while (puVar10 != puVar2);
    puVar6 = (undefined8 *)*puVar1;
  }
  while (puVar6 != puVar2) {
    puVar5 = puVar6;
    puVar10 = (undefined8 *)puVar6[1];
    if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
      do {
        puVar7 = (undefined8 *)puVar5[2];
        bVar11 = (undefined8 *)*puVar7 != puVar5;
        puVar5 = puVar7;
      } while (bVar11);
    }
    else {
      do {
        puVar7 = puVar10;
        puVar10 = (undefined8 *)*puVar7;
      } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
    }
    if ((undefined8 *)*puVar1 == puVar6) {
      *puVar1 = puVar7;
    }
    param_1[4] = param_1[4] + -1;
    FUN_1000e86c0(param_1[3],puVar6);
    operator_delete(puVar6);
    puVar6 = puVar7;
  }
  pvVar3 = (void *)param_1[8];
  if (pvVar3 != (void *)0x0) {
    FUN_100345640(pvVar3);
    operator_delete(pvVar3);
  }
  param_1[8] = 0;
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  pvVar3 = (void *)param_1[0x200d];
  iVar4 = *(int *)((long)pvVar3 + 0x80) + -1;
  *(int *)((long)pvVar3 + 0x80) = iVar4;
  if ((pvVar3 != (void *)0x0) && (iVar4 == 0)) {
    FUN_10032d8f0(pvVar3);
    operator_delete(pvVar3);
  }
  param_1[0x200d] = 0;
  for (puVar6 = (undefined8 *)param_1[10]; puVar6 != (undefined8 *)0x0;
      puVar6 = (undefined8 *)*puVar6) {
    *(undefined4 *)(puVar6 + 1) = 0;
  }
  param_1[9] = 0;
  ___bzero(param_1 + 0xb,0x8000);
  uVar8 = 0;
  do {
    for (lVar9 = param_1[uVar8 + 0x100d]; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x10)) {
      pvVar3 = *(void **)(lVar9 + 8);
      if (pvVar3 != (void *)0x0) {
        FUN_10032d680(pvVar3);
        operator_delete(pvVar3);
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x1000);
  for (puVar6 = (undefined8 *)param_1[0x100c]; puVar6 != (undefined8 *)0x0;
      puVar6 = (undefined8 *)*puVar6) {
    *(undefined4 *)(puVar6 + 1) = 0;
  }
  param_1[0x100b] = 0;
  ___bzero(param_1 + 0x100d,0x8000);
  FUN_1002adb30(*param_1,0);
  FUN_1002fa330(*param_1,param_1[1]);
  puVar6 = (undefined8 *)param_1[0x200e];
  if (puVar6 == (undefined8 *)0x0) goto LAB_100359b9c;
  if ((undefined8 *)param_1[0x200f] != puVar6) {
    param_1[0x200f] = puVar6;
  }
  while( true ) {
    operator_delete(puVar6);
LAB_100359b9c:
    puVar6 = (undefined8 *)param_1[0x100c];
    if (puVar6 == (undefined8 *)0x0) break;
    param_1[0x100c] = *puVar6;
  }
  while (puVar6 = (undefined8 *)param_1[10], puVar6 != (undefined8 *)0x0) {
    param_1[10] = *puVar6;
    operator_delete(puVar6);
  }
  FUN_10035b4b0(puVar1,*puVar2);
  return;
}

