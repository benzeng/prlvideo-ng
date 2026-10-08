
void FUN_1002a55c0(long *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  int iVar9;
  AnonymousUnion0 *pAVar10;
  char *pcVar11;
  QStringList *pQVar12;
  QArrayData *pQVar13;
  undefined1 auVar14 [12];
  Data_conflict local_130;
  undefined4 local_128;
  QArrayData *local_120;
  int *local_118 [4];
  QVariant local_f8 [2];
  undefined1 local_e0 [24];
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QDir local_a8 [8];
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  ExternalRefCountData *local_50;
  QArrayData *local_48;
  AnonymousUnion0 local_40 [2];
  
  lVar5 = QObject::sender();
  if ((lVar5 == 0) ||
     (lVar5 = ___dynamic_cast(lVar5,PTR_typeinfo_1021e1720,&PTR_vtable_102272140,0), lVar5 == 0)) {
    pQVar12 = (QStringList *)0x0;
    FUN_100df99c0("","prl_client_app",0,"Can\'t get antivirus installation watcher");
    iVar9 = CMessageManager::instance();
    local_50 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    if ((param_1[5] != 0) && (pQVar12 = (QStringList *)0x0, *(int *)(param_1[5] + 4) != 0)) {
      pQVar12 = (QStringList *)param_1[6];
    }
    local_40[0].field1 = (Data *)PTR_shared_null_1021e15e8;
    FUN_1002a0af0(&local_48,param_1);
    FUN_1000341d0(local_40,&local_48);
    local_90 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
    local_98 = 0x80000000;
    local_a0.field7 = 0;
    FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
    CMessageManager::showMessageBox
              (iVar9,(QWidget *)0x80015256,pQVar12,(QStringList *)&local_40[0].field0,
               (CSlotInfo *)&local_50,SUB81(local_88,0));
    QVariant::~QVariant(local_68);
    if (local_88[0] != (int *)0x0) {
      LOCK();
      *local_88[0] = *local_88[0] + -1;
      local_40[1]._7_1_ = *local_88[0] != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_88[0] != (int *)0x0)) {
        operator_delete(local_88[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_a0);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_40[1]._7_1_ = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1002a589f;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1002a589f:
    FUN_100039a80(&local_50);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_40[1]._7_1_ = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1002a58d8;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002a58d8:
    pAVar10 = local_40;
    goto LAB_1002a5c7f;
  }
  iVar9 = (int)lVar5 + 0x10;
  QFutureInterfaceBase::waitForResult(iVar9);
  lVar5 = QFutureInterfaceBase::mutex();
  if (lVar5 != 0) {
    QMutex::lock();
  }
  iVar3 = QFutureInterfaceBase::resultStoreBase();
  auVar14 = QtPrivate::ResultStoreBase::resultAt(iVar3);
  plVar8 = *(long **)(auVar14._0_8_ + 0x28);
  if (*(int *)(auVar14._0_8_ + 0x20) != 0) {
    plVar8 = (long *)(*plVar8 + *(long *)(*plVar8 + 0x10) + (long)auVar14._8_4_ * 4);
  }
  if (lVar5 != 0) {
    QMutex::unlock();
  }
  if (-1 < (int)*plVar8) {
    lVar5 = CAntivirusInfo::info(*(undefined4 *)((long)param_1 + 0x3c),(int)param_1[7]);
    if (lVar5 == 0) goto LAB_1002a5748;
    CAntivirusInfo::installationPath();
    QDir::QDir(local_a8,&local_b0);
    cVar1 = QDir::exists();
    QDir::~QDir(local_a8);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_40[1]._7_1_ = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1002a56ff;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_1002a56ff:
    if (cVar1 != '\0') {
      lVar5 = 0;
      if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar5 = param_1[4];
      }
      FUN_100061050(2,lVar5);
      uVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
      uVar4 = FUN_1002a2ac0(param_1);
      FUN_100173e70(uVar6,uVar4);
    }
LAB_1002a5748:
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  uVar2 = QDir::separator();
  local_c8 = (QArrayData *)param_1[0x18];
  if (1 < *(uint *)local_c8 + 1) {
    LOCK();
    *(uint *)local_c8 = *(uint *)local_c8 + 1;
    local_40[1]._7_1_ = *(uint *)local_c8 != 0;
    UNLOCK();
  }
  uVar7 = *(uint *)(local_c8 + 4);
  if ((1 < *(uint *)local_c8) || ((*(uint *)(local_c8 + 8) & 0x7fffffff) < uVar7 + 2)) {
    QString::reallocData((uint)&local_c8,SUB41(uVar7 + 2,0));
    uVar7 = *(uint *)(local_c8 + 4);
  }
  *(uint *)(local_c8 + 4) = uVar7 + 1;
  *(undefined2 *)(local_c8 + (long)(int)uVar7 * 2 + *(long *)(local_c8 + 0x10)) = uVar2;
  *(undefined2 *)(local_c8 + (long)(int)*(uint *)(local_c8 + 4) * 2 + *(long *)(local_c8 + 0x10)) =
       0;
  if (1 < *(uint *)local_c8 + 1) {
    LOCK();
    *(uint *)local_c8 = *(uint *)local_c8 + 1;
    local_40[1]._7_1_ = *(uint *)local_c8 != 0;
    UNLOCK();
  }
  local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c8;
  QString::append(&local_c0);
  QString::toUtf8();
  pQVar13 = local_b8 + *(long *)(local_b8 + 0x10);
  QFutureInterfaceBase::waitForResult(iVar9);
  lVar5 = QFutureInterfaceBase::mutex();
  if (lVar5 != 0) {
    QMutex::lock();
  }
  iVar9 = QFutureInterfaceBase::resultStoreBase();
  auVar14 = QtPrivate::ResultStoreBase::resultAt(iVar9);
  plVar8 = *(long **)(auVar14._0_8_ + 0x28);
  if (*(int *)(auVar14._0_8_ + 0x20) != 0) {
    plVar8 = (long *)(*plVar8 + *(long *)(*plVar8 + 0x10) + (long)auVar14._8_4_ * 4);
  }
  if (lVar5 != 0) {
    QMutex::unlock();
  }
  if ((int)*plVar8 == -2) {
    pcVar11 = "Failed to start";
  }
  else {
    pcVar11 = "The process has been aborted unexpectedly";
  }
  FUN_100df99c0("","prl_client_app",0,"Failed to run : %s file. %s",pQVar13,pcVar11);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_40[1]._7_1_ = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002a5a80;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_1002a5a80:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_40[1]._7_1_ = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002a5ab6;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1002a5ab6:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_40[1]._7_1_ = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002a5aec;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1002a5aec:
  iVar9 = CMessageManager::instance();
  local_e0._0_8_ = PTR_shared_null_1021e15e8;
  pQVar12 = (QStringList *)0x0;
  if ((param_1[5] != 0) && (pQVar12 = (QStringList *)0x0, *(int *)(param_1[5] + 4) != 0)) {
    pQVar12 = (QStringList *)param_1[6];
  }
  local_e0._16_8_ = PTR_shared_null_1021e15e8;
  FUN_1002a0af0(local_e0 + 8,param_1);
  FUN_1000341d0(local_e0 + 0x10,local_e0 + 8);
  local_120 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_128 = 0x80000000;
  local_130.field7 = 0;
  FUN_100a1c600(local_118,param_1,&local_120,&local_130);
  CMessageManager::showMessageBox
            (iVar9,(QWidget *)0x80015256,pQVar12,(QStringList *)(local_e0 + 0x10),
             (CSlotInfo *)local_e0,SUB81(local_118,0));
  QVariant::~QVariant(local_f8);
  if (local_118[0] != (int *)0x0) {
    LOCK();
    *local_118[0] = *local_118[0] + -1;
    local_40[1]._7_1_ = *local_118[0] != 0;
    UNLOCK();
    if ((!(bool)local_40[1]._7_1_) && (local_118[0] != (int *)0x0)) {
      operator_delete(local_118[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_130);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_40[1]._7_1_ = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002a5c36;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1002a5c36:
  FUN_100039a80(local_e0);
  if (*(int *)local_e0._8_8_ != -1) {
    if (*(int *)local_e0._8_8_ != 0) {
      LOCK();
      *(int *)local_e0._8_8_ = *(int *)local_e0._8_8_ + -1;
      local_40[1]._7_1_ = *(int *)local_e0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002a5c78;
    }
    QArrayData::deallocate((QArrayData *)local_e0._8_8_,2,8);
  }
LAB_1002a5c78:
  pAVar10 = (AnonymousUnion0 *)(local_e0 + 0x10);
LAB_1002a5c7f:
  FUN_100039a80(pAVar10);
  return;
}

