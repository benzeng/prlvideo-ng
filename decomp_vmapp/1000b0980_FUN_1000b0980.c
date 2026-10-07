
undefined1 FUN_1000b0980(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QString local_1c0;
  CVmEvent local_1b8 [8];
  undefined1 local_1b0 [216];
  QEvent local_d8 [32];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  long local_88 [2];
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QDir local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_38 = 0xffffffff;
  QTime::start();
  if (param_2 == (undefined8 *)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_100408ff0(param_1 + 0x10b0,0x80000132,&local_58);
    FUN_10002d9d0(&local_58);
    return 0;
  }
  if (param_2[2] != 0) {
    FUN_1006bc2f0();
  }
  CVmConfiguration::getVmHardwareList();
  uVar6 = CVmHardware::getCpu();
  CVmCpu::setEnableVTxSupport(uVar6,1);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QDir::QDir(local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0a2d;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1000b0a2d:
  QDir::cdUp();
  QDir::absolutePath();
  QString::toUtf8();
  if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
  }
  FUN_1008e40d0(local_70 + *(long *)(local_70 + 0x10),"parallels.log");
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0ab8;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1000b0ab8:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0ae8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000b0ae8:
  *(undefined8 *)(param_1 + 0x120) = param_2[2];
  uVar6 = *param_2;
  *(undefined8 *)(param_1 + 0x118) = param_2[1];
  *(undefined8 *)(param_1 + 0x110) = uVar6;
  QString::operator=((QString *)(param_1 + 0x128),(QString *)(param_2 + 3));
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0x130) = param_2[4];
  FUN_1000aff50(param_1);
  QDir::absolutePath();
  local_a8 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a0;
  if (1 < *(int *)local_a0 + 1U) {
    LOCK();
    *(int *)local_a0 = *(int *)local_a0 + 1;
    local_21 = *(int *)local_a0 != 0;
    UNLOCK();
  }
  QString::append(&local_98);
  local_90.field0_0x0 = local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_21 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x9e8e8f);
  QString::append(&local_90);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0c04;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000b0c04:
  QFile::QFile((QFile *)local_88,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_21 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0c4a;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1000b0c4a:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_21 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0c80;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1000b0c80:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0cb6;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1000b0cb6:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0cec;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000b0cec:
  cVar2 = QFile::open(local_88,6);
  if (cVar2 == '\0') {
    QDir::absolutePath();
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"Cannot create statistics log file: %s",
                  local_b0 + *(long *)(local_b0 + 0x10));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_21 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000b0d84;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_1000b0d84:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_21 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000b0dba;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
  }
LAB_1000b0dba:
  (**(code **)(local_88[0] + 0x70))(local_88);
  lVar1 = param_1 + 0x140;
  FUN_100083a30(lVar1,param_2);
  FUN_1007da0b0(param_1 + 0x5e4,0x500);
  uVar4 = FUN_1000b1590(param_2);
  uVar4 = FUN_1007da300("vm.hyp",uVar4);
  *(undefined4 *)(param_1 + 0x109e0) = uVar4;
  CVmEvent::CVmEvent(local_1b8);
  iVar5 = FUN_100088610(lVar1,param_1 + 0x110,1);
  if (iVar5 < 0) {
    if ((*(int *)(param_1 + 0xa4) == 0) &&
       (lVar1 = *(long *)(param_1 + 0x48), *(int *)(lVar1 + 0x14) == 0x4e21)) {
      CBaseNode::toString(SUB81(&local_1c0,0),SUB81(local_1b0,0));
      QString::operator=((QString *)(lVar1 + 0x20),&local_1c0);
      if (*(int *)local_1c0.field0_0x0 != -1) {
        if (*(int *)local_1c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
          local_21 = *(int *)local_1c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1000b10ad;
        }
        QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
      }
    }
LAB_1000b10ad:
    uVar3 = 0;
    FUN_1008e3970("","vm",0,"Monitor config initalization failed");
    goto LAB_1000b10ef;
  }
  uVar6 = FUN_100430e80(*(undefined8 *)(param_1 + 0xf0));
  FUN_100087780(lVar1,uVar6);
  *(undefined8 *)(param_1 + 0x1164) = 0;
  FUN_100409080(param_1 + 0x10b0);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  QString::toUtf8();
  iVar5 = FUN_10070e690(local_1c8 + *(long *)(local_1c8 + 0x10));
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_21 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0ed0;
    }
    QArrayData::deallocate(local_1c8,1,8);
  }
LAB_1000b0ed0:
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_21 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000b0f06;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_1000b0f06:
  if (iVar5 == 0) {
    uVar3 = 0;
    FUN_1008e3970("","vm",0,"Perf counters initalization failed");
  }
  else {
    uVar6 = FUN_10070e6f0("vm.freeze");
    *(undefined8 *)(param_1 + 0x1118) = uVar6;
    uVar6 = FUN_10070e6f0("I@kernel.posted_intrs_sent");
    *(undefined8 *)(param_1 + 0x1140) = uVar6;
    uVar6 = FUN_10070e6f0("A@mem.guest_used");
    *(undefined8 *)(param_1 + 0x1120) = uVar6;
    uVar6 = FUN_10070e6f0("A@mem.guest_cached");
    *(undefined8 *)(param_1 + 0x1128) = uVar6;
    uVar6 = FUN_10070e6f0("A@mem.guest_swap_in");
    *(undefined8 *)(param_1 + 0x1130) = uVar6;
    uVar6 = FUN_10070e6f0("A@mem.guest_swap_out");
    *(undefined8 *)(param_1 + 0x1138) = uVar6;
    if (param_2[1] != 0) {
      CDispCommonPreferences::getDebug();
      uVar3 = CDspDebug::isVerboseLogEnabled();
      FUN_1000b1640(param_1,uVar3);
    }
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","VmSetConfig",uVar4);
    CDispCommonPreferences::getWorkspacePreferences();
    iVar5 = CDispWorkspacePreferences::getVmTimeoutOnShutdown();
    *(int *)(param_1 + 0x100) = iVar5 * 1000;
    uVar3 = 1;
  }
LAB_1000b10ef:
  QEvent::~QEvent(local_d8);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_1b8);
  QFile::~QFile((QFile *)local_88);
  QDir::~QDir(local_60);
  return uVar3;
}

