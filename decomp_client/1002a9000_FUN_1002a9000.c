
void FUN_1002a9000(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  char *pcVar9;
  QStringList *pQVar10;
  QArrayData *pQVar11;
  undefined1 auVar12 [12];
  Data_conflict local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  int *local_a8 [4];
  QVariant local_88 [2];
  undefined1 local_70 [32];
  QArrayData *local_50;
  QString local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  lVar4 = QObject::sender();
  if ((lVar4 == 0) ||
     (lVar4 = ___dynamic_cast(lVar4,PTR_typeinfo_1021e1720,&PTR_vtable_102272140,0), lVar4 == 0)) {
    FUN_100df99c0("","prl_client_app",0,"Can\'t get antivirus installation watcher");
                    /* WARNING: Could not recover jumptable at 0x0001002a91cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  iVar8 = (int)lVar4 + 0x10;
  QFutureInterfaceBase::waitForResult(iVar8);
  lVar4 = QFutureInterfaceBase::mutex();
  if (lVar4 != 0) {
    QMutex::lock();
  }
  iVar2 = QFutureInterfaceBase::resultStoreBase();
  auVar12 = QtPrivate::ResultStoreBase::resultAt(iVar2);
  plVar7 = *(long **)(auVar12._0_8_ + 0x28);
  if (*(int *)(auVar12._0_8_ + 0x20) != 0) {
    plVar7 = (long *)(*plVar7 + *(long *)(*plVar7 + 0x10) + (long)auVar12._8_4_ * 4);
  }
  if (lVar4 != 0) {
    QMutex::unlock();
  }
  lVar4 = *plVar7;
  lVar5 = CAntivirusInfo::info(*(undefined4 *)((long)param_1 + 0x3c),(int)param_1[7]);
  if (-1 < (int)lVar4) {
    if (lVar5 == 0) goto LAB_1002a9178;
    CAntivirusInfo::installationPath();
    QDir::QDir(local_40,&local_48);
    cVar1 = QDir::exists();
    QDir::~QDir(local_40);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a912f;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1002a912f:
    if (cVar1 == '\0') {
      lVar4 = 0;
      if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar4 = param_1[4];
      }
      FUN_100061050(2,lVar4);
      uVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
      uVar3 = FUN_1002a2ac0(param_1);
      FUN_100173e70(uVar6,uVar3);
    }
LAB_1002a9178:
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  CAntivirusInfo::installationPath();
  QString::toUtf8();
  pQVar11 = local_50 + *(long *)(local_50 + 0x10);
  QFutureInterfaceBase::waitForResult(iVar8);
  lVar4 = QFutureInterfaceBase::mutex();
  if (lVar4 != 0) {
    QMutex::lock();
  }
  iVar8 = QFutureInterfaceBase::resultStoreBase();
  auVar12 = QtPrivate::ResultStoreBase::resultAt(iVar8);
  plVar7 = *(long **)(auVar12._0_8_ + 0x28);
  if (*(int *)(auVar12._0_8_ + 0x20) != 0) {
    plVar7 = (long *)(*plVar7 + *(long *)(*plVar7 + 0x10) + (long)auVar12._8_4_ * 4);
  }
  if (lVar4 != 0) {
    QMutex::unlock();
  }
  if ((int)*plVar7 == -2) {
    pcVar9 = "Failed to start";
  }
  else {
    pcVar9 = "The process has been aborted unexpectedly";
  }
  FUN_100df99c0("","prl_client_app",0,"Failed to delete : %s file. %s",pQVar11,pcVar9);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a92bc;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1002a92bc:
  if (*(int *)local_70._24_8_ != -1) {
    if (*(int *)local_70._24_8_ != 0) {
      LOCK();
      *(int *)local_70._24_8_ = *(int *)local_70._24_8_ + -1;
      local_31 = *(int *)local_70._24_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a92ec;
    }
    QArrayData::deallocate((QArrayData *)local_70._24_8_,2,8);
  }
LAB_1002a92ec:
  iVar8 = CMessageManager::instance();
  local_70._0_8_ = PTR_shared_null_1021e15e8;
  pQVar10 = (QStringList *)0x0;
  if ((param_1[5] != 0) && (pQVar10 = (QStringList *)0x0, *(int *)(param_1[5] + 4) != 0)) {
    pQVar10 = (QStringList *)param_1[6];
  }
  local_70._16_8_ = PTR_shared_null_1021e15e8;
  FUN_1002a0af0(local_70 + 8,param_1);
  FUN_1000341d0(local_70 + 0x10,local_70 + 8);
  local_b0 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_b8 = 0x80000000;
  local_c0.field7 = 0;
  FUN_100a1c600(local_a8,param_1,&local_b0,&local_c0);
  CMessageManager::showMessageBox
            (iVar8,(QWidget *)0x80015258,pQVar10,(QStringList *)(local_70 + 0x10),
             (CSlotInfo *)local_70,SUB81(local_a8,0));
  QVariant::~QVariant(local_88);
  if (local_a8[0] != (int *)0x0) {
    LOCK();
    *local_a8[0] = *local_a8[0] + -1;
    local_31 = *local_a8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_a8[0] != (int *)0x0)) {
      operator_delete(local_a8[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a941e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1002a941e:
  FUN_100039a80(local_70);
  if (*(int *)local_70._8_8_ != -1) {
    if (*(int *)local_70._8_8_ != 0) {
      LOCK();
      *(int *)local_70._8_8_ = *(int *)local_70._8_8_ + -1;
      local_31 = *(int *)local_70._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a9457;
    }
    QArrayData::deallocate((QArrayData *)local_70._8_8_,2,8);
  }
LAB_1002a9457:
  FUN_100039a80(local_70 + 0x10);
  return;
}

