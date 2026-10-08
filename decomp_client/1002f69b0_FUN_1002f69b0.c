
void FUN_1002f69b0(CAbstractTask *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  CTaskGenericId *this;
  void *pvVar4;
  uint uVar5;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x5f);
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_10220b320;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  QFutureWatcherBase::QFutureWatcherBase((QFutureWatcherBase *)(param_1 + 0x38),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x38) = &PTR_metaObject_1022720c8;
  QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)(param_1 + 0x48),0xe);
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_102272168;
  QFutureInterfaceBase::refT();
  param_1[0x58] = (CAbstractTask)0x0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  FUN_100d92580(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0) {
    FUN_100d8c5e0(&local_40);
    uVar2 = QDir::separator();
    local_48 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(uint *)local_48 + 1) {
      LOCK();
      *(uint *)local_48 = *(uint *)local_48 + 1;
      local_31 = *(uint *)local_48 != 0;
      UNLOCK();
    }
    uVar5 = *(uint *)(local_48 + 4);
    if ((1 < *(uint *)local_48) || ((*(uint *)(local_48 + 8) & 0x7fffffff) < uVar5 + 2)) {
      QString::reallocData((uint)&local_48,SUB41(uVar5 + 2,0));
      uVar5 = *(uint *)(local_48 + 4);
    }
    *(uint *)(local_48 + 4) = uVar5 + 1;
    *(undefined2 *)(local_48 + (long)(int)uVar5 * 2 + *(long *)(local_48 + 0x10)) = uVar2;
    *(undefined2 *)(local_48 + (long)(int)*(uint *)(local_48 + 4) * 2 + *(long *)(local_48 + 0x10))
         = 0;
    QString::replace(param_1 + 0x70,&local_40,&local_48,1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002f6b7e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002f6b7e:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002f6bae;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1002f6bae:
  if (DAT_102310930 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001e5440(pvVar4);
    DAT_102273630 = 1;
    DAT_102310930 = pvVar4;
  }
  iVar3 = FUN_1001e5550(DAT_102310930,4);
  if (-1 < iVar3) {
    return;
  }
  MacUtils::getBundleFolderName();
  QString::fromUtf8_helper((char *)&local_50,0x1dbf84f);
  QString::append(&local_50);
  QString::operator=((QString *)(param_1 + 0x20),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f6c59;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002f6c59:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

