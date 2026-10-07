
void FUN_10025b3c0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  CVmEventParameter *pCVar5;
  long *plVar6;
  long *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  CVmEventParameter *local_90;
  QArrayData *local_88;
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
  undefined1 local_29;
  
  if ((*(char *)(DAT_1011c3698 + 0x1ab8) == '\0') && (iVar3 = CVmDevice::getConnected(), iVar3 != 0)
     ) {
    return;
  }
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  pCVar5 = operator_new(0xd0);
  local_60 = (QArrayData *)QString::fromAscii_helper("%1",2);
  iVar3 = (**(code **)(*param_2 + 0x68))(param_2);
  QString::arg(&local_58,&local_60,(long)iVar3,0,10,0x20);
  local_68 = (QArrayData *)QString::fromAscii_helper("device_type",0xb);
  CVmEventParameter::CVmEventParameter(pCVar5,0,&local_58,&local_68);
  local_50 = pCVar5;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = pCVar5;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b4da;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10025b4da:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b50c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10025b50c:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b53c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10025b53c:
  pCVar5 = operator_new(0xd0);
  local_80 = (QArrayData *)QString::fromAscii_helper("%1",2);
  uVar4 = CVmDevice::getIndex();
  QString::arg(&local_78,&local_80,uVar4,0,10,0x20);
  local_88 = (QArrayData *)QString::fromAscii_helper("device_index",0xc);
  CVmEventParameter::CVmEventParameter(pCVar5,0,&local_78,&local_88);
  local_70 = pCVar5;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_70);
  }
  else {
    *puStack_40 = pCVar5;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b60e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10025b60e:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b641;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10025b641:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b671;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10025b671:
  pCVar5 = operator_new(0xd0);
  local_a0 = (QArrayData *)QString::fromAscii_helper("Hardware",8);
  CBaseNode::ElementToString((CBaseNode *)&local_98,(QString *)(param_2 + 2));
  local_a8 = (QArrayData *)QString::fromAscii_helper("vm_config_dev_state",0x13);
  CVmEventParameter::CVmEventParameter(pCVar5,3,&local_98);
  local_90 = pCVar5;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_90);
  }
  else {
    *puStack_40 = pCVar5;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b74e;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10025b74e:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b786;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10025b786:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025b7bc;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10025b7bc:
  uVar2 = DAT_1011c3650;
  plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_b0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_100bef0d0;
    local_b0 = plVar6;
  }
  FUN_100063770(uVar2,0x186a3,0,&local_48,0xbbb,&local_b0);
  if (local_b0 != (long *)0x0) {
    LOCK();
    plVar6 = local_b0 + 1;
    lVar1 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_b0 + 0x10))();
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
  return;
}

