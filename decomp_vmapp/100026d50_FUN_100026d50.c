
void FUN_100026d50(long param_1,uint param_2,byte param_3,undefined1 param_4,QString *param_5)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  CVmEventParameter *pCVar4;
  long *plVar5;
  char *pcVar6;
  long *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  CVmEventParameter *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  CVmEventParameter *local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  *(uint *)(param_1 + 0x24) = param_2;
  if (param_2 < 2) {
    *(undefined1 *)(param_1 + 0x28) = 1;
LAB_100026f01:
    uVar3 = FUN_10002f520();
    bVar2 = FUN_10002e820(uVar3,&local_30);
    bVar2 = bVar2 ^ 1;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  else {
    if (param_2 != 2) goto LAB_100026f01;
    *(undefined1 *)(param_1 + 0x40) = param_4;
    QString::operator=(&local_30,param_5);
    local_40 = (QArrayData *)QString::fromAscii_helper("Guest tools started: %1",0x17);
    pcVar6 = "outdated";
    if (param_3 != 0) {
      pcVar6 = "up-to-date";
    }
    local_48 = (QArrayData *)QString::fromAscii_helper(pcVar6,(uint)param_3 * 2 + 8);
    QString::arg(&local_38,&local_40,&local_48,0,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100026e25;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100026e25:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100026e55;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100026e55:
    if (0 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("PTIAHOST","vm",1,"%s",local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100026ec7;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
LAB_100026ec7:
    bVar2 = param_3 == 0 | 2;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100026f1e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100026f1e:
  local_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  pCVar4 = operator_new(0xd0);
  local_80 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_78,&local_80,bVar2,0,10,0x20);
  local_88 = (QArrayData *)QString::fromAscii_helper("vm_tools_state",0xe);
  CVmEventParameter::CVmEventParameter(pCVar4,2,&local_78,&local_88);
  local_70 = pCVar4;
  if (puStack_60 == local_58) {
    FUN_10002da50(&local_68,&local_70);
  }
  else {
    *puStack_60 = pCVar4;
    puStack_60 = puStack_60 + 1;
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100026ff6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100026ff6:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100027028;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100027028:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100027058;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100027058:
  local_90 = operator_new(0xd0);
  local_98 = (QArrayData *)local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  local_a0 = (QArrayData *)QString::fromAscii_helper("vm_tools_version",0x10);
  CVmEventParameter::CVmEventParameter(local_90,1,&local_98);
  if (puStack_60 == local_58) {
    FUN_10002da50(&local_68,&local_90);
  }
  else {
    *puStack_60 = local_90;
    puStack_60 = puStack_60 + 1;
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100027121;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100027121:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100027157;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100027157:
  uVar3 = DAT_1011c3650;
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_a8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_100bef0d0;
    local_a8 = plVar5;
  }
  FUN_100063770(uVar3,0x189c0,0,&local_68,0xbbb,&local_a8);
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar5 = local_a8 + 1;
    lVar1 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (local_68 != (undefined8 *)0x0) {
    if (puStack_60 != local_68) {
      puStack_60 = (undefined8 *)
                   ((~((long)puStack_60 + (-8 - (long)local_68)) & 0xfffffffffffffff8U) +
                   (long)puStack_60);
    }
    operator_delete(local_68);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

