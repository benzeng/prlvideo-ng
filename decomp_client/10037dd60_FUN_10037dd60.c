
undefined4
FUN_10037dd60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  QArrayData *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pcVar5 = (char *)QMetaObject::className();
  QByteArray::QByteArray((QByteArray *)&local_58,pcVar5,-1);
  local_50 = local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  puVar6 = (undefined8 *)QByteArray::append((char)&local_50);
  pQVar1 = (QArrayData *)*puVar6;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037de18;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10037de18:
  QByteArray::QByteArray((QByteArray *)&local_48,"QDeclarativeListProperty<",-1);
  puVar6 = (undefined8 *)QByteArray::append((QByteArray *)&local_48);
  pQVar2 = (QArrayData *)*puVar6;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037de86;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10037de86:
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_40 = pQVar2;
  puVar6 = (undefined8 *)QByteArray::append((char *)&local_40);
  pQVar3 = (QArrayData *)*puVar6;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037def3;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10037def3:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037df20;
    }
    QArrayData::deallocate(pQVar2,1,8);
  }
LAB_10037df20:
  local_d8 = 0;
  local_d4 = FUN_10037e440(pQVar1 + *(long *)(pQVar1 + 0x10),0,1);
  local_d0 = FUN_10037e540(pQVar3 + *(long *)(pQVar3 + 0x10),0,0);
  local_cc = 0x38;
  local_c8 = FUN_10037e610;
  local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
  local_a0 = &PTR_staticMetaObject_102227560;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0x20;
  local_84 = 0xffffffff;
  local_80 = 0xffffffff;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_b8 = param_1;
  local_b0 = param_2;
  local_ac = param_3;
  local_a8 = param_4;
  uVar4 = QDeclarativePrivate::qmlregister(0,&local_d8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037e045;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10037e045:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037e072;
    }
    QArrayData::deallocate(pQVar3,1,8);
  }
LAB_10037e072:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037e0a1;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10037e0a1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,1,8);
  }
  return uVar4;
}

