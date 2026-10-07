
void FUN_1004abe80(QObject *param_1,undefined8 param_2)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  QArrayData *local_98;
  long *local_90;
  Connection local_88 [8];
  QArrayData *local_80;
  long *local_78;
  Connection local_70 [8];
  QArrayData *local_68;
  long *local_60;
  Connection local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  FUN_100519220();
  *(undefined ***)param_1 = &PTR_FUN_100bc28b0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc2948;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_100bc2990;
  *(undefined8 *)(param_1 + 0x78) = DAT_1011c3698;
  pvVar2 = operator_new(0x40);
  FUN_1004b4a50(pvVar2,param_1);
  *(void **)(param_1 + 0x80) = pvVar2;
  QMutex::QMutex((QMutex *)(param_1 + 0x90),0);
  *(undefined4 *)(param_1 + 0x88) = 0;
  local_48 = (QArrayData *)QString::fromAscii_helper("MainCmdQueue",0xc);
  FUN_1004b3d80(param_1 + 0x98,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004abf88;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004abf88:
  local_50 = (QArrayData *)QString::fromAscii_helper("AgentCmdQueue",0xd);
  FUN_1004b3d80(param_1 + 0xb8,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004abfe7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004abfe7:
  *(undefined8 *)(param_1 + 0xd8) = 0;
  pvVar2 = operator_new(0x40);
  FUN_1004b2d50(pvVar2,param_1);
  *(void **)(param_1 + 0xe0) = pvVar2;
  *(undefined **)(param_1 + 0xe8) = PTR_shared_null_100ba2188;
  pvVar2 = operator_new(0xb0);
  FUN_1004b6550(pvVar2,param_1,*(undefined8 *)(param_1 + 0x80));
  *(void **)(param_1 + 0xf0) = pvVar2;
  FUN_10052a660(param_1 + 0xf8);
  FUN_10052a660(param_1 + 0x108);
  *(undefined **)(param_1 + 0x120) = PTR_shared_null_100ba20d0;
  param_1[0x128] = (QObject)0x0;
  *(undefined4 *)(param_1 + 300) = 0;
  param_1[0x130] = (QObject)0x0;
  pvVar2 = operator_new(0x28);
  FUN_1004b44a0(pvVar2,param_1);
  *(void **)(param_1 + 0x138) = pvVar2;
  *(undefined4 *)(param_1 + 0x150) = 0;
  DAT_1011cc7f0 = param_1;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  FUN_10052acc0(param_1 + 0xf8);
  FUN_10052acc0(param_1 + 0x108);
  QString::fromUtf8_helper((char *)&local_40,0xa320a0);
  QString::operator=((QString *)(param_1 + 0x120),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ac145;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004ac145:
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  QThread::start(*(undefined8 *)(param_1 + 0xe0),7);
  DAT_100bf93bd = DAT_100bf93bd | 1;
  DAT_100bf93a4 = param_1;
  FUN_1004c0790(param_1 + 0x10,0x8230,0x8231);
  FUN_10051a6b0(*(long *)(param_1 + 0x78) + 0x10f0,2,param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x78);
  local_68 = (QArrayData *)QString::fromAscii_helper("parallels.DynamicResolution.guest.win",0x25);
  FUN_100477170(&local_60,lVar3 + 0x10840,&local_68);
  lVar3 = 0;
  if (local_60 != (long *)0x0) {
    lVar3 = local_60[2];
  }
  QObject::connect(local_58,lVar3,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,
                   "1onDynResTisRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)"
                   ,1);
  QMetaObject::Connection::~Connection(local_58);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ac266;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004ac266:
  lVar3 = *(long *)(param_1 + 0x78);
  local_80 = (QArrayData *)QString::fromAscii_helper("parallels.DynamicResolution.guest.lin",0x25);
  FUN_100477170(&local_78,lVar3 + 0x10840,&local_80);
  lVar3 = 0;
  if (local_78 != (long *)0x0) {
    lVar3 = local_78[2];
  }
  QObject::connect(local_70,lVar3,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,
                   "1onDynResTisRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)"
                   ,1);
  QMetaObject::Connection::~Connection(local_70);
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ac31f;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004ac31f:
  lVar3 = *(long *)(param_1 + 0x78);
  local_98 = (QArrayData *)QString::fromAscii_helper("parallels.DynamicResolution.guest.mac",0x25);
  FUN_100477170(&local_90,lVar3 + 0x10840,&local_98);
  lVar3 = 0;
  if (local_90 != (long *)0x0) {
    lVar3 = local_90[2];
  }
  QObject::connect(local_88,lVar3,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,
                   "1onDynResTisRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)"
                   ,1);
  QMetaObject::Connection::~Connection(local_88);
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
  return;
}

