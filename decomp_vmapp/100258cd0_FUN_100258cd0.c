
undefined8 * FUN_100258cd0(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  bool bVar8;
  
  QMutex::lock();
  puVar5 = DAT_1011c37d0;
  while (puVar5 != &DAT_1011c37d8) {
    lVar1 = puVar5[5];
    QMutex::lock();
    plVar2 = *(long **)(lVar1 + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    QMutex::unlock();
    plVar7 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar7 = (long *)plVar2[2];
    }
    iVar3 = (**(code **)(*plVar7 + 0x68))();
    bVar8 = false;
    if ((iVar3 == param_2) && (iVar3 = CVmDevice::getIndex(), bVar8 = false, iVar3 == param_3)) {
      uVar6 = puVar5[5];
      puVar4 = operator_new(0x18);
      *puVar4 = &DAT_1011c37c8;
      puVar4[1] = uVar6;
      *(undefined4 *)(puVar4 + 2) = 0;
      QMutex::lock();
      *(undefined4 *)(puVar4 + 2) = 1;
      uVar6 = FUN_10025c710(puVar4);
      *param_1 = uVar6;
      bVar8 = true;
    }
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar7 = plVar2 + 1;
      lVar1 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (bVar8) goto LAB_100258e7a;
    puVar4 = (undefined8 *)puVar5[1];
    if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
      do {
        puVar4 = (undefined8 *)puVar5[2];
        bVar8 = (undefined8 *)*puVar4 != puVar5;
        puVar5 = puVar4;
      } while (bVar8);
    }
    else {
      do {
        puVar5 = puVar4;
        puVar4 = (undefined8 *)*puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
  }
  puVar5 = operator_new(0x18);
  *puVar5 = &DAT_1011c37c8;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 0;
  QMutex::lock();
  *(undefined4 *)(puVar5 + 2) = 1;
  uVar6 = FUN_10025c710(puVar5);
  *param_1 = uVar6;
LAB_100258e7a:
  QMutex::unlock();
  return param_1;
}

