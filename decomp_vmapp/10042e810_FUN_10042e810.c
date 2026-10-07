
undefined8 FUN_10042e810(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  CVmEventParameter *pCVar3;
  long *plVar4;
  long *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  CVmEventParameter *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  CVmEventParameter *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  CVmEventParameter *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  undefined1 local_29;
  
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  local_50 = operator_new(0xd0);
  local_58 = *(QArrayData **)(param_1 + 8);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  local_60 = (QArrayData *)QString::fromAscii_helper("ipcfo_socket_name",0x11);
  CVmEventParameter::CVmEventParameter(local_50,1,&local_58,&local_60);
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = local_50;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042e8e7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10042e8e7:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042e917;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10042e917:
  local_68 = operator_new(0xd0);
  local_70 = (QArrayData *)*param_2;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_29 = *(int *)local_70 != 0;
    UNLOCK();
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("ipcfo_file_name",0xf);
  CVmEventParameter::CVmEventParameter(local_68,1,&local_70,&local_78);
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_68);
  }
  else {
    *puStack_40 = local_68;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042e9c7;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10042e9c7:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042e9f7;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10042e9f7:
  pCVar3 = operator_new(0xd0);
  local_90 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_88,&local_90,param_3,0,10,0x20);
  local_98 = (QArrayData *)QString::fromAscii_helper("ipcfo_open_file_flags",0x15);
  CVmEventParameter::CVmEventParameter(pCVar3,0x11,&local_88);
  local_80 = pCVar3;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_80);
  }
  else {
    *puStack_40 = pCVar3;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042ead2;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10042ead2:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042eb04;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10042eb04:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042eb3a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10042eb3a:
  uVar2 = DAT_1011c3650;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_a0 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_a0 = plVar4;
  }
  FUN_100063770(uVar2,0x186bd,0,&local_48,0xbbb,&local_a0);
  if (local_a0 != (long *)0x0) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    if (puStack_40 != local_48) {
      puStack_40 = (undefined8 *)
                   ((~((long)puStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                   (long)puStack_40);
    }
    operator_delete(local_48);
  }
  return 0;
}

