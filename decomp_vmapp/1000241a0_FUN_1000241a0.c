
void FUN_1000241a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  QThread *pQVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  QObject *this;
  _Unwind_Exception *exception_object;
  _Unwind_Exception *extraout_RAX;
  long lVar7;
  QArrayData *local_78;
  long *local_70;
  long local_68;
  QArrayData *local_60;
  long *local_58;
  long local_50;
  QArrayData *local_48;
  long *local_40;
  long local_38;
  undefined1 local_29;
  
  FUN_1004c0650();
  puVar2 = param_1 + 5;
  FUN_100519220(puVar2);
  *param_1 = &PTR_FUN_100ba7be8;
  param_1[5] = &PTR_FUN_100ba7c40;
  this = operator_new(0x10);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_100ba7ca0;
  param_1[0xd] = this;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x89) = 0;
  *(undefined1 *)((long)param_1 + 0x8a) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x18);
  FUN_1004c0790(param_1,0x8500,0x8503);
  FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0x13,puVar2);
  pQVar3 = (QThread *)param_1[0xd];
  QObject::thread();
  QObject::moveToThread(pQVar3);
  lVar7 = DAT_1011c3698;
  local_48 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesService.guest.win",0x2b);
  FUN_100477170(&local_40,lVar7 + 0x10840,&local_48);
  lVar7 = 0;
  if (local_40 != (long *)0x0) {
    lVar7 = local_40[2];
  }
  QObject::connect(&local_38,lVar7,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",
                   param_1[0xd],
                   "1onServicePartTisRecordChanged(const CTISBase::Record &, const CTISBase::RecordFields &)"
                   ,0);
  bVar4 = 1;
  if (local_38 != 0) {
    bVar4 = QMetaObject::Connection::isConnected_helper();
    bVar4 = bVar4 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10002438a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10002438a:
  lVar7 = DAT_1011c3698;
  if (bVar4 != 0) {
    exception_object = (_Unwind_Exception *)___cxa_rethrow();
    goto LAB_1000245c2;
  }
  local_60 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesUser.guest.win",0x28);
  FUN_100477170(&local_58,lVar7 + 0x10840,&local_60);
  lVar7 = 0;
  if (local_58 != (long *)0x0) {
    lVar7 = local_58[2];
  }
  QObject::connect(&local_50,lVar7,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",
                   param_1[0xd],
                   "1onUserPartTisRecordChanged(const CTISBase::Record &, const CTISBase::RecordFields &)"
                   ,0);
  bVar4 = 1;
  if (local_50 != 0) {
    bVar4 = QMetaObject::Connection::isConnected_helper();
    bVar4 = bVar4 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100024460;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100024460:
  lVar7 = DAT_1011c3698;
  if (bVar4 != 0) {
    exception_object = (_Unwind_Exception *)___cxa_rethrow();
    goto LAB_1000245c2;
  }
  local_78 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesService.guest.lin",0x2b);
  FUN_100477170(&local_70,lVar7 + 0x10840,&local_78);
  lVar7 = 0;
  if (local_70 != (long *)0x0) {
    lVar7 = local_70[2];
  }
  QObject::connect(&local_68,lVar7,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",
                   param_1[0xd],
                   "1onServicePartTisRecordChanged(const CTISBase::Record &, const CTISBase::RecordFields &)"
                   ,0);
  bVar4 = 1;
  if (local_68 != 0) {
    bVar4 = QMetaObject::Connection::isConnected_helper();
    bVar4 = bVar4 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100024536;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100024536:
  if (bVar4 == 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    cVar5 = CVmHostSharing::isMapSharedFoldersOnLetters();
    if (cVar5 == '\0') {
      bVar4 = 0;
    }
    else {
      bVar4 = CVmTools::isIsolatedVm();
      bVar4 = bVar4 ^ 1;
    }
    *(byte *)(param_1 + 0x11) = bVar4;
    cVar5 = CVmTools::isIsolatedVm();
    if (cVar5 == '\0') {
      CVmTools::getSharedVolumes();
      uVar6 = CVmSharedVolumes::isEnabled();
    }
    else {
      uVar6 = 0;
    }
    *(undefined1 *)((long)param_1 + 0x89) = uVar6;
    return;
  }
  exception_object = (_Unwind_Exception *)___cxa_rethrow();
LAB_1000245c2:
  do {
    FUN_1004c0680(param_1);
    __Unwind_Resume(exception_object);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100024713;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100024713:
    FUN_1005192c0(puVar2);
    exception_object = extraout_RAX;
  } while( true );
}

