
void FUN_10002e210(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  CVmEventParameter *pCVar3;
  long *plVar4;
  long lVar5;
  long *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  CVmEventParameter *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  CVmEventParameter *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_10002e820(param_1,&local_30);
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  pCVar3 = operator_new(0xd0);
  local_60 = (QArrayData *)QString::fromAscii_helper("%1",2);
  lVar5 = 1;
  if (cVar2 != '\0') {
    lVar5 = (long)param_2;
  }
  QString::arg(&local_58,&local_60,lVar5,0,10,0x20);
  local_68 = (QArrayData *)QString::fromAscii_helper("vm_tools_state",0xe);
  CVmEventParameter::CVmEventParameter(pCVar3,2,&local_58,&local_68);
  local_50 = pCVar3;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = pCVar3;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002e319;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10002e319:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002e34b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10002e34b:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002e37b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10002e37b:
  local_70 = operator_new(0xd0);
  local_78 = local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("vm_tools_version",0x10);
  CVmEventParameter::CVmEventParameter(local_70,1,&local_78);
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_70);
  }
  else {
    *puStack_40 = local_70;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002e42c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10002e42c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002e45c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10002e45c:
  uVar1 = DAT_1011c3650;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_88 = plVar4;
  }
  FUN_100063770(uVar1,0x189c0,0,&local_48,0xbbb,&local_88);
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_88 + 0x10))();
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
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

