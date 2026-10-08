
void FUN_1003aa740(long param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QStringList *pQVar5;
  CTaskGenericId *pCVar6;
  char *pcVar7;
  uint uVar8;
  long local_108;
  QVariant local_100;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  CTaskGenericId local_c0 [24];
  QString local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [40];
  int *local_70 [4];
  QVariant local_50 [2];
  undefined1 local_31;
  
  lVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    pcVar7 = "(!)Error: Vm instance is null.";
LAB_1003aa8b5:
    FUN_100df99c0("","prl_client_app",0,pcVar7);
    return;
  }
  lVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    pcVar7 = "(!)Error: Server instance is null.";
    goto LAB_1003aa8b5;
  }
  if (param_2 != 6) {
    if (param_2 == 0xf) {
      cVar1 = FUN_100d80630(1);
      uVar8 = 0x36e6;
      if (cVar1 != '\0') {
        uVar8 = 0x36d1;
      }
      local_98._32_8_ =
           QString::fromAscii_helper
                     ("1onConfirmRemoveUSBDeviceClosed(PRL_RESULT, Messaging::ButtonID)",0x40);
      local_98._24_4_ = 0x80000000;
      local_98._16_8_ = (QMetaObject *)0x0;
      FUN_100a1c600(local_70,param_1,local_98 + 0x20,local_98 + 0x10);
      QVariant::~QVariant((QVariant *)(local_98 + 0x10));
      if (*(int *)local_98._32_8_ != -1) {
        if (*(int *)local_98._32_8_ != 0) {
          LOCK();
          *(int *)local_98._32_8_ = *(int *)local_98._32_8_ + -1;
          local_31 = *(int *)local_98._32_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003aa964;
        }
        QArrayData::deallocate((QArrayData *)local_98._32_8_,2,8);
      }
LAB_1003aa964:
      iVar2 = CMessageManager::instance();
      pQVar5 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
      local_98._8_8_ = PTR_shared_null_1021e15e8;
      local_98._0_8_ = PTR_shared_null_1021e15e8;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)(ulong)uVar8,pQVar5,(QStringList *)(local_98 + 8),
                 (CSlotInfo *)local_98,SUB81(local_70,0));
      FUN_100039a80(local_98);
      FUN_100039a80(local_98 + 8);
      QVariant::~QVariant(local_50);
      if (local_70[0] == (int *)0x0) {
        return;
      }
      LOCK();
      *local_70[0] = *local_70[0] + -1;
      local_31 = *local_70[0] != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
      if (local_70[0] == (int *)0x0) {
        return;
      }
      operator_delete(local_70[0]);
      return;
    }
    goto LAB_1003aacac;
  }
  uVar4 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  lVar3 = FUN_10010df00(uVar4,6,param_3);
  if (lVar3 == 0) goto LAB_1003aacac;
  CVmDevice::getSystemName();
  if (*(int *)(local_a0 + 4) == 0) {
    cVar1 = '\0';
  }
  else {
    iVar2 = CVmDevice::getEmulatedType();
    if (iVar2 == 1) {
      CVmDevice::getSystemName();
      cVar1 = QFile::exists(&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003aaa11;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
    }
    else {
      cVar1 = '\0';
    }
  }
LAB_1003aaa11:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aaa47;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1003aaa47:
  if (cVar1 == '\0') {
LAB_1003aacac:
    uVar4 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    FUN_1003b5610(uVar4,param_2,param_3);
    uVar4 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    FUN_1003b6570(uVar4,param_2);
    FUN_100836910(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    return;
  }
  uVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_100188480(&local_c8,uVar4);
  CVmDevice::getSystemName();
  FUN_100223bd0(local_c0,&local_c8,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aaacb;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1003aaacb:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aab01;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1003aab01:
  pCVar6 = (CTaskGenericId *)CTaskManager::instance();
  lVar3 = CTaskManager::getTaskById(pCVar6);
  if (lVar3 != 0) goto LAB_1003aac9e;
  pcVar7 = operator_new(0x48);
  uVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_100188480(&local_d8,uVar4);
  CVmDevice::getSystemName();
  uVar4 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  FUN_100223a50(pcVar7,&local_d8,&local_e0,uVar4);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aabb0;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1003aabb0:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aabed;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1003aabed:
  QVariant::QVariant(&local_f0,6);
  QObject::setProperty(pcVar7,(QVariant *)"deviceType");
  QVariant::~QVariant(&local_f0);
  QVariant::QVariant(&local_100,param_3);
  QObject::setProperty(pcVar7,(QVariant *)"deviceId");
  QVariant::~QVariant(&local_100);
  QObject::connect(&local_108,pcVar7,"2taskFinished(PRL_RESULT)",param_1,
                   "1onMoveDiskToTrashTaskFinished(PRL_RESULT)",0);
  if (local_108 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_108);
  CAbstractTask::execute();
LAB_1003aac9e:
  CTaskGenericId::~CTaskGenericId(local_c0);
  return;
}

