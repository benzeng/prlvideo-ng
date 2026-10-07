
undefined8 * FUN_100259060(undefined8 *param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  
  QMutex::lock();
  puVar6 = DAT_1011c37d0;
  while (puVar6 != &DAT_1011c37d8) {
    lVar4 = puVar6[5];
    QMutex::lock();
    plVar2 = *(long **)(lVar4 + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    QMutex::unlock();
    if (plVar2 != (long *)0x0) {
      uVar8 = 4;
      if ((plVar2[2] != 0) &&
         (lVar4 = ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2230,0),
         lVar4 != 0)) {
        iVar3 = CVmClusteredDevice::getInterfaceType();
        uVar8 = 0;
        if ((iVar3 == param_2) &&
           (iVar3 = CVmClusteredDevice::getStackIndex(), uVar8 = 0, iVar3 == param_3)) {
          uVar7 = puVar6[5];
          puVar5 = operator_new(0x18);
          *puVar5 = &DAT_1011c37c8;
          puVar5[1] = uVar7;
          *(undefined4 *)(puVar5 + 2) = 0;
          QMutex::lock();
          *(undefined4 *)(puVar5 + 2) = 1;
          uVar7 = FUN_10025c710(puVar5);
          *param_1 = uVar7;
          uVar8 = 1;
        }
      }
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      if ((uVar8 | 4) != 4) goto LAB_100259229;
    }
    puVar5 = (undefined8 *)puVar6[1];
    if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)puVar6[2];
        bVar9 = (undefined8 *)*puVar5 != puVar6;
        puVar6 = puVar5;
      } while (bVar9);
    }
    else {
      do {
        puVar6 = puVar5;
        puVar5 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
  }
  puVar6 = operator_new(0x18);
  *puVar6 = &DAT_1011c37c8;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 2) = 0;
  QMutex::lock();
  *(undefined4 *)(puVar6 + 2) = 1;
  uVar7 = FUN_10025c710(puVar6);
  *param_1 = uVar7;
LAB_100259229:
  QMutex::unlock();
  return param_1;
}

