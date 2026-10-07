
void FUN_10025b110(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  *param_1 = &PTR_FUN_100baea50;
  QMutex::lock();
  plVar2 = (long *)param_1[1];
  lVar3 = (**(code **)(*plVar2 + 0x68))(plVar2);
  if (DAT_1011c37d8 != (undefined8 *)0x0) {
    uVar6 = (long)(int)plVar2[0xd] | lVar3 << 0x20;
    puVar7 = DAT_1011c37d8;
    puVar4 = &DAT_1011c37d8;
    do {
      while (puVar8 = puVar7, uVar6 <= (ulong)puVar8[4]) {
        puVar7 = (undefined8 *)*puVar8;
        puVar4 = puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_10025b1a0;
      }
      puVar5 = puVar8 + 1;
      puVar8 = puVar4;
      puVar7 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
LAB_10025b1a0:
    if (((undefined8 **)puVar8 != &DAT_1011c37d8) && ((ulong)puVar8[4] <= uVar6))
    goto LAB_10025b1b9;
  }
  puVar8 = &DAT_1011c37d8;
LAB_10025b1b9:
  puVar7 = puVar8;
  puVar4 = (undefined8 *)puVar8[1];
  if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
    do {
      puVar5 = (undefined8 *)puVar7[2];
      bVar9 = (undefined8 *)*puVar5 != puVar7;
      puVar7 = puVar5;
    } while (bVar9);
  }
  else {
    do {
      puVar5 = puVar4;
      puVar4 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  if (DAT_1011c37d0 == puVar8) {
    DAT_1011c37d0 = puVar5;
  }
  DAT_1011c37e0 = DAT_1011c37e0 + -1;
  FUN_1000e86c0(DAT_1011c37d8,puVar8);
  operator_delete(puVar8);
  QMutex::unlock();
  plVar2 = (long *)param_1[3];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 2));
  return;
}

