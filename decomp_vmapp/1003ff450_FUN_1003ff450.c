
void FUN_1003ff450(long param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  int iVar4;
  QString local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QString local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_48 = (QArrayData *)QString::fromAscii_helper("%1%2%3.",7);
  local_50 = (QArrayData *)QString::fromAscii_helper("I@devices.",10);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  iVar4 = -1;
  if (param_2 != (char *)0x0) {
    sVar1 = _strlen(param_2);
    iVar4 = (int)sVar1;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(param_2,iVar4);
  QString::arg(&local_38,&local_40,&local_58,0,0x20);
  QString::arg(&local_30,&local_38,*(undefined4 *)(param_1 + 0x40),0,10,0x20);
  QString::operator=(&local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff548;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1003ff548:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff578;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003ff578:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff5a8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003ff5a8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff5d8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003ff5d8:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff608;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003ff608:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff638;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003ff638:
  local_70 = (QArrayData *)QString::fromAscii_helper("flush",5);
  local_68.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  QString::toLatin1();
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_60 + *(long *)(local_60 + 0x10));
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff6e5;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1003ff6e5:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_19 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff715;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003ff715:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff745;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003ff745:
  local_88 = (QArrayData *)QString::fromAscii_helper("read_total",10);
  local_80.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  QString::toLatin1();
  if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_78 + *(long *)(local_78 + 0x10));
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff7f2;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_1003ff7f2:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_19 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff822;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1003ff822:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff852;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003ff852:
  local_a0 = (QArrayData *)QString::fromAscii_helper("read_requests",0xd);
  local_98.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_98);
  QString::toLatin1();
  if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_90 + *(long *)(local_90 + 0x10));
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff920;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1003ff920:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_19 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff956;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1003ff956:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_19 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ff98c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1003ff98c:
  local_b8 = (QArrayData *)QString::fromAscii_helper("read_seq_requests",0x11);
  local_b0.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_b0);
  QString::toLatin1();
  if ((1 < *(uint *)local_a8) || (*(long *)(local_a8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_a8,*(uint *)(local_a8 + 4) + 1,*(uint *)(local_a8 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_a8 + *(long *)(local_a8 + 0x10));
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_19 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffa5d;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_1003ffa5d:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_19 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffa93;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1003ffa93:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffac9;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1003ffac9:
  local_d0 = (QArrayData *)QString::fromAscii_helper("write_total",0xb);
  local_c8.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_c8);
  QString::toLatin1();
  if ((1 < *(uint *)local_c0) || (*(long *)(local_c0 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_c0,*(uint *)(local_c0 + 4) + 1,*(uint *)(local_c0 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_c0 + *(long *)(local_c0 + 0x10));
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_19 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffb97;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_1003ffb97:
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_19 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffbcd;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_1003ffbcd:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_19 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffc03;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1003ffc03:
  local_e8 = (QArrayData *)QString::fromAscii_helper("write_requests",0xe);
  local_e0.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_e0);
  QString::toLatin1();
  if ((1 < *(uint *)local_d8) || (*(long *)(local_d8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_d8,*(uint *)(local_d8 + 4) + 1,*(uint *)(local_d8 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_d8 + *(long *)(local_d8 + 0x10));
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_19 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffcd4;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_1003ffcd4:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_19 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffd0a;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1003ffd0a:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_19 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffd40;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1003ffd40:
  local_100 = (QArrayData *)QString::fromAscii_helper("write_seq_requests",0x12);
  local_f8.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_f8);
  QString::toLatin1();
  if ((1 < *(uint *)local_f0) || (*(long *)(local_f0 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_f0,*(uint *)(local_f0 + 4) + 1,*(uint *)(local_f0 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_f0 + *(long *)(local_f0 + 0x10));
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_19 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffe11;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_1003ffe11:
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_19 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffe47;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1003ffe47:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_19 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003ffe7d;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1003ffe7d:
  local_118 = (QArrayData *)QString::fromAscii_helper("read_hit",8);
  local_110.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_110);
  QString::toLatin1();
  if ((1 < *(uint *)local_108) || (*(long *)(local_108 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_108,*(uint *)(local_108 + 4) + 1,*(uint *)(local_108 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_108 + *(long *)(local_108 + 0x10));
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_19 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003fff4e;
    }
    QArrayData::deallocate(local_108,1,8);
  }
LAB_1003fff4e:
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_19 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003fff84;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_1003fff84:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_19 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003fffba;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1003fffba:
  local_130 = (QArrayData *)QString::fromAscii_helper("bounce_bufs",0xb);
  local_128.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_128);
  QString::toLatin1();
  if ((1 < *(uint *)local_120) || (*(long *)(local_120 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_120,*(uint *)(local_120 + 4) + 1,*(uint *)(local_120 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_120 + *(long *)(local_120 + 0x10));
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_19 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040008b;
    }
    QArrayData::deallocate(local_120,1,8);
  }
LAB_10040008b:
  if (*(int *)local_128.field0_0x0 != -1) {
    if (*(int *)local_128.field0_0x0 != 0) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
      local_19 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004000c1;
    }
    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
  }
LAB_1004000c1:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_19 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004000f7;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004000f7:
  local_158 = (QArrayData *)QString::fromAscii_helper("A@",2);
  QString::toLatin1();
  if ((1 < *(uint *)local_150) || (*(long *)(local_150 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_150,*(uint *)(local_150 + 4) + 1,*(uint *)(local_150 + 8) >> 0x1f);
  }
  pQVar3 = local_150 + *(long *)(local_150 + 0x10);
  if (pQVar3 != (QArrayData *)0x0) {
    _strlen((char *)pQVar3);
  }
  QString::fromUtf8_helper((char *)&local_148,(int)pQVar3);
  QString::append(&local_148);
  local_160 = (QArrayData *)QString::fromAscii_helper("queue_len",9);
  local_140.field0_0x0 = local_148.field0_0x0;
  if (1 < *(int *)local_148.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + 1;
    local_19 = *(int *)local_148.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_140);
  QString::toLatin1();
  if ((1 < *(uint *)local_138) || (*(long *)(local_138 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_138,*(uint *)(local_138 + 4) + 1,*(uint *)(local_138 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_138 + *(long *)(local_138 + 0x10));
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_19 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040025c;
    }
    QArrayData::deallocate(local_138,1,8);
  }
LAB_10040025c:
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_19 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100400292;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_100400292:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_19 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004002c8;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1004002c8:
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_19 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004002fe;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_1004002fe:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_19 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100400334;
    }
    QArrayData::deallocate(local_150,1,8);
  }
LAB_100400334:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_19 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040036a;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10040036a:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("kicks",5);
  local_170.field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_170);
  QString::toLatin1();
  if ((1 < *(uint *)local_168) || (*(long *)(local_168 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_168,*(uint *)(local_168 + 4) + 1,*(uint *)(local_168 + 8) >> 0x1f);
  }
  uVar2 = FUN_10070e6f0(local_168 + *(long *)(local_168 + 0x10));
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_19 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040043b;
    }
    QArrayData::deallocate(local_168,1,8);
  }
LAB_10040043b:
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_19 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100400471;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_100400471:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_19 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004004a7;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1004004a7:
  (**(code **)(**(long **)(param_1 + 0x38) + 0x168))(*(long **)(param_1 + 0x38),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

