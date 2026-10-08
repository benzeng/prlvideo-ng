
undefined8 FUN_10072f580(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  QString local_1e0;
  QString local_1d8;
  long local_1d0;
  CVmEventBase local_1c8 [224];
  QEvent local_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  local_1d0 = *param_2;
  if (local_1d0 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getEventFromHandle(local_1c8,&local_1d0);
  if (local_1d0 != 0) {
    _PrlHandle_Free();
  }
  CVmEventBase::getEventIssuerId();
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100188480(&local_1e0,uVar2);
  cVar1 = operator==(&local_1d8,&local_1e0);
  if (*(int *)local_1e0.field0_0x0 != -1) {
    if (*(int *)local_1e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
      local_19 = *(int *)local_1e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10072f66d;
    }
    QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
  }
LAB_10072f66d:
  if (*(int *)local_1d8.field0_0x0 != -1) {
    if (*(int *)local_1d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
      local_19 = *(int *)local_1d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10072f6a3;
    }
    QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
  }
LAB_10072f6a3:
  if (cVar1 != '\0') {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    QMetaObject::invokeMethod
              (uVar2,"lowHostMemoryDetected",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  }
  QEvent::~QEvent(local_e8);
  CVmEventBase::~CVmEventBase(local_1c8);
  return 0;
}

