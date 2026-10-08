
void FUN_10016b4a0(undefined8 param_1,long *param_2)

{
  QString *pQVar1;
  QArrayData *local_138;
  long local_130;
  CSdkEvent local_128 [8];
  QArrayData *local_120;
  CVmEvent local_118 [224];
  QEvent local_38 [39];
  undefined1 local_11;
  
  local_130 = *param_2;
  if (local_130 != 0) {
    _PrlHandle_AddRef();
  }
  CSdkEvent::CSdkEvent(local_128,&local_130);
  CSdkEvent::xmlEventString();
  CVmEvent::CVmEvent(local_118,(QTypedArrayData<unsigned_short> *)&local_120);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_11 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10016b52f;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10016b52f:
  CSdkEvent::~CSdkEvent(local_128);
  if (local_130 != 0) {
    _PrlHandle_Free();
  }
  CVmEventBase::getEventIssuerId();
  CVmEventBase::getEventCode();
  pQVar1 = (QString *)CMessageManager::instance();
  CMessageManager::closeSpecificMessageBox(pQVar1,(int)&local_138);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_11 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10016b5b9;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10016b5b9:
  QEvent::~QEvent(local_38);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_118);
  return;
}

