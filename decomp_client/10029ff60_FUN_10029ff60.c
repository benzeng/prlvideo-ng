
void FUN_10029ff60(CAbstractTask *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  CAbstractTask::CAbstractTask(param_1,(CTaskGenericId *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102207930;
  piVar1 = (int *)*param_2;
  uVar3 = param_2[1];
  *(int **)(param_1 + 0x18) = piVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_2[2];
  uVar3 = param_2[3];
  *(int **)(param_1 + 0x28) = piVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  param_1[0x40] = *(CAbstractTask *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0x38) = param_2[4];
  QFutureWatcherBase::QFutureWatcherBase((QFutureWatcherBase *)(param_1 + 0x48),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x48) = &PTR_metaObject_102275410;
  QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)(param_1 + 0x58),0xe);
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_1022729d8;
  QFutureInterfaceBase::refT();
  FUN_1001eef00(param_1 + 0x68);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  auVar6._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar6._0_8_ = PTR_shared_null_1021e1288;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa8) = auVar6;
  param_1[0xb8] = (CAbstractTask)0x0;
  *(QTypedArrayData<unsigned_short> **)(param_1 + 0xc0) = local_40.field0_0x0;
  local_48.field0_0x0 = local_40.field0_0x0;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100061050(3,uVar3);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar3 = 0;
    if ((lVar4 != 0) && (uVar3 = 0, *(int *)(lVar4 + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100061050(2,uVar3);
    lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    if (lVar4 != 0) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100061050(2,uVar3);
      uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
      FUN_10015aab0(&local_60,uVar3);
      QString::operator=(&local_40,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a0235;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
    }
  }
  else {
    uVar3 = 0;
    if ((lVar4 != 0) && (uVar3 = 0, *(int *)(lVar4 + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100061050(3,uVar3);
    uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_1001884b0(&local_50,uVar3);
    QString::operator=(&local_40,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0105;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1002a0105:
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100061050(3,uVar3);
    uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_100188480(&local_58,uVar3);
    QString::operator=(&local_48,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0235;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1002a0235:
  pvVar5 = operator_new(0x18);
  FUN_1002a9a10(pvVar5,&local_40,&local_48,*(undefined4 *)((long)param_2 + 0x24),
                *(undefined4 *)(param_2 + 4));
  CAbstractTask::setId((CTaskGenericId *)param_1);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a0297;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002a0297:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

