
undefined8 * FUN_1005f1200(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  QMapNodeBase *pQVar5;
  QArrayData *local_e8;
  void *local_e0;
  undefined *local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  undefined1 local_80 [8];
  QString local_78 [5];
  QMapNodeBase *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar3 = FUN_100748240();
  local_48 = (QArrayData *)QString::fromAscii_helper("os.win.preview",0xe);
  uVar3 = FUN_100748290(uVar3,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f1281;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005f1281:
  FUN_100746c20(&local_50,uVar3);
  if (1 < *(uint *)local_50) {
    FUN_100283ba0(&local_50);
  }
  puVar1 = PTR_shared_null_1021e1288;
  if (*(long *)(local_50 + 0x10) == 0) {
    pQVar5 = local_50 + 8;
  }
  else {
    pQVar5 = *(QMapNodeBase **)(local_50 + 0x20);
  }
  while( true ) {
    if (1 < *(uint *)local_50) {
      FUN_100283ba0(&local_50);
    }
    puVar2 = PTR_shared_null_1021e12f0;
    if (pQVar5 == local_50 + 8) break;
    local_d8 = puVar1;
    FUN_1002f6080(&local_d0,&local_d8);
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f1338;
      }
      QArrayData::deallocate((QArrayData *)puVar1,2,8);
    }
LAB_1005f1338:
    QString::operator=(&local_d0,(QString *)(pQVar5 + 0x20));
    QString::operator=(&local_c8,(QString *)(pQVar5 + 0x28));
    QString::operator=(&local_c0,(QString *)(pQVar5 + 0x30));
    QString::operator=(&local_b8,(QString *)(pQVar5 + 0x38));
    QString::operator=(&local_b0,(QString *)(pQVar5 + 0x40));
    QString::operator=(&local_a8,(QString *)(pQVar5 + 0x48));
    QString::operator=(&local_a0,(QString *)(pQVar5 + 0x50));
    QString::operator=(&local_98,(QString *)(pQVar5 + 0x58));
    QString::operator=(&local_90,(QString *)(pQVar5 + 0x60));
    QString::operator=(&local_88,(QString *)(pQVar5 + 0x68));
    FUN_100283c40(local_80,pQVar5 + 0x70);
    QString::fromUtf8_helper((char *)&local_40,0x1e05f52);
    QString::operator=(local_78,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f142e;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1005f142e:
    pvVar4 = operator_new(0x90);
    FUN_1005f0f90(pvVar4,&local_d0,0);
    local_e0 = pvVar4;
    FUN_1000630f0(param_1,&local_e0);
    local_e8 = (QArrayData *)QString::fromAscii_helper("store",5);
    uVar3 = FUN_10073fe80(&local_e8);
    FUN_1007420e0(uVar3,&local_d0);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f12d0;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1005f12d0:
    FUN_100252c80(local_78);
    FUN_100252e70(&local_d0);
    pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
  }
  if (*(int *)PTR_shared_null_1021e12f0 != -1) {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f153b;
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree((QMapNodeBase *)puVar2,(int)*(undefined8 *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_1005f153b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(local_50,(int)*(undefined8 *)(local_50 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_50);
  }
  return param_1;
}

