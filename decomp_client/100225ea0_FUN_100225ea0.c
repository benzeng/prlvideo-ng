
undefined8 FUN_100225ea0(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QString local_140;
  QString local_138;
  long local_130;
  CVmEventBase local_128 [224];
  QEvent local_48 [39];
  undefined1 local_21;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100319390(uVar4);
  local_130 = *param_2;
  if (local_130 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getEventFromHandle(local_128,&local_130);
  if (local_130 != 0) {
    _PrlHandle_Free();
  }
  if (lVar2 == 0) goto LAB_10022615f;
  CVmEventBase::getEventIssuerId();
  FUN_100188480(&local_140,lVar2);
  cVar1 = operator==(&local_138,&local_140);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = FUN_10031bab0(uVar4);
  }
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_21 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100225fef;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_100225fef:
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_21 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100226025;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_100226025:
  if (cVar1 == '\0') goto LAB_10022615f;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QMetaObject::tr((char *)&local_150,PTR_staticMetaObject_1021e1520,0x1ddcfce);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100319410(&local_158,uVar3);
  QString::arg(&local_148,&local_150,&local_158,0,0x20);
  FUN_10031c280(uVar4,&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002260f3;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1002260f3:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100226129;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100226129:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_21 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10022615f;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10022615f:
  QEvent::~QEvent(local_48);
  CVmEventBase::~CVmEventBase(local_128);
  return 0;
}

