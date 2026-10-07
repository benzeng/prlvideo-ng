
void FUN_1003fd2f0(undefined1 *param_1,undefined8 param_2,char *param_3,undefined1 param_4,
                  int param_5)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  int iVar5;
  char *pcVar6;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  *(undefined8 *)(param_1 + 0x838) = *(undefined8 *)(DAT_1011c3698 + 0x1a28);
  *(undefined8 *)(param_1 + 0x840) = param_2;
  *param_1 = param_4;
  param_1[1] = (char)param_5;
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_50 = (QArrayData *)QString::fromAscii_helper("%1%2%3.",7);
  local_58 = (QArrayData *)QString::fromAscii_helper("I@devices.",10);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  iVar5 = -1;
  if (param_3 != (char *)0x0) {
    sVar2 = _strlen(param_3);
    iVar5 = (int)sVar2;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(param_3,iVar5);
  QString::arg(&local_40,&local_48,&local_60,0,0x20);
  QString::arg(&local_38,&local_40,(long)param_5,0,10,0x20);
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd412;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1003fd412:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd442;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003fd442:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd472;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003fd472:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd4a2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003fd4a2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd4d2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003fd4d2:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd502;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003fd502:
  local_78 = (QArrayData *)QString::fromAscii_helper("read_req",8);
  local_70.field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  QString::toLatin1();
  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
  }
  uVar3 = FUN_10070e6f0(local_68 + *(long *)(local_68 + 0x10));
  *(undefined8 *)(param_1 + 0x858) = uVar3;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd5b2;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1003fd5b2:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd5e2;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1003fd5e2:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd612;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003fd612:
  local_90 = (QArrayData *)QString::fromAscii_helper("write_req",9);
  local_88.field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_88);
  QString::toLatin1();
  if ((1 < *(uint *)local_80) || (*(long *)(local_80 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_80,*(uint *)(local_80 + 4) + 1,*(uint *)(local_80 + 8) >> 0x1f);
  }
  uVar3 = FUN_10070e6f0(local_80 + *(long *)(local_80 + 0x10));
  *(undefined8 *)(param_1 + 0x860) = uVar3;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd6c8;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1003fd6c8:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_21 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd6f8;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1003fd6f8:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd72e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003fd72e:
  local_a8 = (QArrayData *)QString::fromAscii_helper("ext_req",7);
  local_a0.field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_a0);
  QString::toLatin1();
  if ((1 < *(uint *)local_98) || (*(long *)(local_98 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_98,*(uint *)(local_98 + 4) + 1,*(uint *)(local_98 + 8) >> 0x1f);
  }
  uVar3 = FUN_10070e6f0(local_98 + *(long *)(local_98 + 0x10));
  *(undefined8 *)(param_1 + 0x868) = uVar3;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd7ff;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1003fd7ff:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_21 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd835;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1003fd835:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd86b;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003fd86b:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("pboost_req",10);
  local_b8.field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_b8);
  QString::toLatin1();
  if ((1 < *(uint *)local_b0) || (*(long *)(local_b0 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_b0,*(uint *)(local_b0 + 4) + 1,*(uint *)(local_b0 + 8) >> 0x1f);
  }
  uVar3 = FUN_10070e6f0(local_b0 + *(long *)(local_b0 + 0x10));
  *(undefined8 *)(param_1 + 0x870) = uVar3;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd93c;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
LAB_1003fd93c:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_21 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd972;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1003fd972:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fd9a8;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1003fd9a8:
  uVar1 = FUN_1007da300("devices.hdd.extend_writes",1);
  *(undefined4 *)(param_1 + 0x850) = uVar1;
  uVar1 = FUN_1007da300("devices.sfilter.queue",1);
  *(undefined4 *)(param_1 + 0x878) = uVar1;
  if (*(int *)(param_1 + 0x850) == 0) {
    pcVar6 = "dis";
  }
  else {
    pcVar6 = "en";
  }
  FUN_1008e3970("","HddUtils",0,"hdd: SF exwr %sabled in host",pcVar6);
  if (*(int *)(param_1 + 0x878) == 0) {
    pcVar6 = "dis";
  }
  else {
    pcVar6 = "en";
  }
  FUN_1008e3970("","HddUtils",0,"hdd: SF queue %sabled in host",pcVar6);
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

