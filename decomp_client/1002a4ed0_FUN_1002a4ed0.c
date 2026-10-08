
undefined8 FUN_1002a4ed0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  long local_60;
  undefined *local_58;
  QArrayData *local_50;
  undefined *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  uVar3 = QDir::separator();
  local_38 = *(QArrayData **)(param_1 + 0xc0);
  if (1 < *(uint *)local_38 + 1) {
    LOCK();
    *(uint *)local_38 = *(uint *)local_38 + 1;
    local_21 = *(uint *)local_38 != 0;
    UNLOCK();
  }
  uVar7 = *(uint *)(local_38 + 4);
  if ((1 < *(uint *)local_38) || ((*(uint *)(local_38 + 8) & 0x7fffffff) < uVar7 + 2)) {
    QString::reallocData((uint)&local_38,SUB41(uVar7 + 2,0));
    uVar7 = *(uint *)(local_38 + 4);
  }
  *(uint *)(local_38 + 4) = uVar7 + 1;
  *(undefined2 *)(local_38 + (long)(int)uVar7 * 2 + *(long *)(local_38 + 0x10)) = uVar3;
  *(undefined2 *)(local_38 + (long)(int)*(uint *)(local_38 + 4) * 2 + *(long *)(local_38 + 0x10)) =
       0;
  if (1 < *(uint *)local_38 + 1) {
    LOCK();
    *(uint *)local_38 = *(uint *)local_38 + 1;
    local_21 = *(uint *)local_38 != 0;
    UNLOCK();
  }
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  QString::append(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002a4fae;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002a4fae:
  cVar2 = QFile::exists(&local_30);
  if (cVar2 != '\0') {
    CAbstractTask::setWaitForSubTaskCompletion();
    pvVar4 = operator_new(0x20);
    FUN_1002a97c0(pvVar4,param_1);
    QObject::connect(&local_60,pvVar4,"2finished()",param_1,"1onInstallHostAntivirusFinished()",0);
    if (local_60 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    CAntivirusInfo::info(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
    CAntivirusInfo::hostInstallParams();
    pvVar5 = operator_new(0x38);
    FUN_1002a9eb0(pvVar5,FUN_1002a6120,&local_30,local_78);
    uVar6 = QThreadPool::globalInstance();
    FUN_100287870(local_70,pvVar5,uVar6);
    FUN_1002a9840(pvVar4,local_70);
    FUN_100286490(local_70);
    FUN_100039a80(local_78);
    goto LAB_1002a5171;
  }
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Failed to run : %s file is not exist",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002a50ef;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002a50ef:
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
      if ((bool)local_21) goto LAB_1002a5168;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002a5168:
  FUN_100039a80(&local_48);
LAB_1002a5171:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return 0;
}

