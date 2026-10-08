
undefined1 FUN_1002c6fb0(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  CVmEvent local_140 [224];
  QEvent local_60 [32];
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  char *local_28;
  undefined1 local_19;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar2 = _PrlEvent_GetDataPtr(*param_2,&local_28);
  pcVar1 = local_28;
  if (iVar2 != 0) {
    uVar3 = FUN_100dddcf0(iVar2);
    uVar5 = 0;
    FUN_100df99c0("","prl_client_app",0,"Error while getting the event XML. Return code: %s",uVar3);
    goto LAB_1002c72c9;
  }
  if (local_28 != (char *)0x0) {
    _strlen(local_28);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)pcVar1);
  QString::normalized(&local_38,&local_40,1,0);
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002c7085;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002c7085:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002c70b5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c70b5:
  _PrlBuffer_Free(local_28);
  local_148 = (QArrayData *)local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_19 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  CVmEvent::CVmEvent(local_140,(QTypedArrayData<unsigned_short> *)&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_19 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002c7123;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1002c7123:
  local_150 = (QArrayData *)QString::fromAscii_helper("http_proxy_host",0xf);
  lVar4 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_140);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_19 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002c7187;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1002c7187:
  if (lVar4 != 0) {
    CVmEventParameter::getParamValue();
    QNetworkProxy::setHostName((QString *)(param_1 + 0x40));
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_19 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002c71e1;
      }
      QArrayData::deallocate(local_158,2,8);
    }
  }
LAB_1002c71e1:
  local_160 = (QArrayData *)QString::fromAscii_helper("http_proxy_port",0xf);
  lVar4 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_140);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_19 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002c7245;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1002c7245:
  if (lVar4 != 0) {
    CVmEventParameter::getParamValue();
    QString::toInt((bool *)&local_168,0);
    QNetworkProxy::setPort((short)param_1 + 0x40);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_19 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002c72b1;
      }
      QArrayData::deallocate(local_168,2,8);
    }
  }
LAB_1002c72b1:
  QEvent::~QEvent(local_60);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_140);
  uVar5 = 1;
LAB_1002c72c9:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar5;
}

