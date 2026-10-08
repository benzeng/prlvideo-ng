
void FUN_100621ac0(int param_1,QWidget *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  MessageParams *pMVar6;
  QString *pQVar7;
  CSlotInfo *pCVar8;
  long lVar9;
  bool bVar10;
  QString local_148 [22];
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  long local_78;
  QString local_70;
  long local_68;
  QString local_60;
  int local_54;
  long local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar9 = 0;
  if (param_4 != 0) {
    lVar4 = FUN_1002c6ac0(param_4);
    lVar9 = 0;
    if (lVar4 != 0) {
      FUN_1002c6ac0(param_4);
      CSdkRequest::getErrorEventHandle();
      lVar4 = local_50;
      lVar9 = 0;
      if ((local_50 != 0) && (_PrlHandle_AddRef(local_50), lVar9 = lVar4, local_50 != 0)) {
        _PrlHandle_Free();
      }
    }
  }
  if ((((param_1 == -0x7ffffff7) || (param_1 == -0x7ffffd8b)) || (lVar9 == 0)) ||
     ((iVar3 = _PrlEvent_GetErrCode(lVar9,&local_54), iVar3 < 0 || (local_54 != param_1)))) {
    MessageUtils::getMessageString((int)&local_80,SUB41(param_1,0));
    QString::operator=(&local_40,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100621cbd;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100621cbd:
    MessageUtils::getMessageString((int)&local_88,SUB41(param_1,0));
    QString::operator=(&local_48,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100621d08;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
  else {
    local_68 = lVar9;
    _PrlHandle_AddRef(lVar9);
    MessageUtils::getMessageString(&local_60,&local_68,1);
    QString::operator=(&local_40,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100621bf2;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100621bf2:
    if (local_68 != 0) {
      _PrlHandle_Free();
    }
    local_78 = lVar9;
    _PrlHandle_AddRef(lVar9);
    MessageUtils::getMessageString(&local_70,&local_78,0);
    QString::operator=(&local_48,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100621c58;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100621c58:
    if (local_78 != 0) {
      _PrlHandle_Free();
    }
  }
LAB_100621d08:
  uVar5 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar5);
  if (lVar4 == 0) {
    bVar1 = 0;
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get server instance to find out product edition");
  }
  else {
    uVar5 = FUN_10016f500(lVar4);
    bVar1 = FUN_10061b4d0(uVar5,0x80);
  }
  if (param_4 == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = *(char *)(param_4 + 0x48) != '\0';
  }
  local_90 = (QArrayData *)QString::fromAscii_helper("<br>",4);
  FUN_1006221e0(&local_98,param_1,bVar10 | bVar1);
  if ((*(int *)(local_48.field0_0x0 + 4) != 0) &&
     (cVar2 = QString::startsWith(&local_98,&local_90,1), cVar2 == '\0')) {
    QString::insert((int)&local_98,(QChar *)0x0,
                    (int)*(undefined8 *)(local_90 + 0x10) + (int)local_90);
  }
  QString::append(&local_48);
  while (cVar2 = QString::startsWith(&local_48,&local_90,1), cVar2 != '\0') {
    QString::remove((int)&local_48,0);
  }
  pMVar6 = (MessageParams *)CMessageManager::instance();
  MessageParams::MessageParams((MessageParams *)local_148,param_1,param_2);
  pQVar7 = (QString *)MessageParams::setShortMsg(local_148);
  pCVar8 = (CSlotInfo *)MessageParams::setLongMsg(pQVar7);
  MessageParams::setCloseMsgSlot(pCVar8);
  CMessageManager::showMessageBox(pMVar6);
  FUN_1001f39d0(local_148);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100621f06;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100621f06:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100621f3c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100621f3c:
  if (lVar9 != 0) {
    _PrlHandle_Free(lVar9);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100621f79;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100621f79:
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

