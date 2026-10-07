
void FUN_100026520(QObject *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  QArrayData *local_70;
  long *local_68;
  Connection local_60 [8];
  QArrayData *local_58;
  long *local_50;
  Connection local_48 [8];
  QArrayData *local_40;
  long *local_38;
  Connection local_30 [15];
  undefined1 local_21;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100ba9970;
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  param_1[0x28] = (QObject)0x0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_100ba20d8;
  QMutex::QMutex((QMutex *)(param_1 + 0x38),0);
  QObject::thread();
  QObject::moveToThread((QThread *)param_1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xff;
  param_1[0x20] = (QObject)0x1;
  local_40 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsInstallation.guest.win",0x25);
  param_2 = param_2 + 0x10840;
  FUN_100477170(&local_38,param_2,&local_40);
  lVar2 = 0;
  if (local_38 != (long *)0x0) {
    lVar2 = local_38[2];
  }
  QObject::connect(local_30,lVar2,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,"1onTisRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",0);
  QMetaObject::Connection::~Connection(local_30);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002664e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10002664e:
  local_58 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsInstallation.guest.lin",0x25);
  FUN_100477170(&local_50,param_2,&local_58);
  lVar2 = 0;
  if (local_50 != (long *)0x0) {
    lVar2 = local_50[2];
  }
  QObject::connect(local_48,lVar2,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,"1onTisRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",0);
  QMetaObject::Connection::~Connection(local_48);
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000266f9;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000266f9:
  local_70 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsInstallation.guest.mac",0x25);
  FUN_100477170(&local_68,param_2,&local_70);
  lVar2 = 0;
  if (local_68 != (long *)0x0) {
    lVar2 = local_68[2];
  }
  QObject::connect(local_60,lVar2,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,"1onTisRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",0);
  QMetaObject::Connection::~Connection(local_60);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000267a4;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000267a4:
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x1a48) + 0x20))
            (*(long **)(*(long *)(param_1 + 0x10) + 0x1a48),6,FUN_100026960,param_1);
  param_1[0x40] = (QObject)0x0;
  return;
}

