
void FUN_1002a7140(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined *local_58;
  QArrayData *local_50;
  undefined *local_48;
  QArrayData *local_40;
  QDir local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  QFutureInterfaceBase::waitForResult((int)param_1 + 0x58);
  lVar4 = QFutureInterfaceBase::mutex();
  if (lVar4 != 0) {
    QMutex::lock();
  }
  iVar3 = QFutureInterfaceBase::resultStoreBase();
  auVar6 = QtPrivate::ResultStoreBase::resultAt(iVar3);
  plVar5 = *(long **)(auVar6._0_8_ + 0x28);
  if (*(int *)(auVar6._0_8_ + 0x20) != 0) {
    plVar5 = (long *)((long)auVar6._8_4_ + *(long *)(*plVar5 + 0x10) + *plVar5);
  }
  if (lVar4 != 0) {
    QMutex::unlock();
  }
  if ((char)*plVar5 != '\0') {
    QDir::QDir(local_38,(QString *)(param_1 + 0x18));
    cVar2 = QDir::exists();
    QDir::~QDir(local_38);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      return;
    }
  }
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Mount point %s is failed.",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002a725c;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002a725c:
  if ((undefined *)param_1[0x18] != PTR_shared_null_1021e1288) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 0x18),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002a72b3;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1002a72b3:
  puVar1 = PTR_shared_null_1021e15e8;
  local_48 = PTR_shared_null_1021e15e8;
  FUN_1002a0af0(&local_50,param_1);
  FUN_1000341d0(&local_48,&local_50);
  local_58 = puVar1;
  FUN_1002a17d0(param_1,0x80015256,&local_48,&local_58);
  FUN_100039a80(&local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002a732c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002a732c:
  FUN_100039a80(&local_48);
  return;
}

