
undefined8 FUN_100262940(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  QArrayData *pQVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  MessageParams *pMVar7;
  QString *pQVar8;
  CSlotInfo *pCVar9;
  QWidget *pQVar10;
  QArrayData *pQVar11;
  undefined8 uVar12;
  char *pcVar13;
  QArrayData *pQVar14;
  QArrayData *pQVar15;
  QArrayData *pQVar16;
  QString local_220 [22];
  Data_conflict local_170;
  undefined4 local_168;
  QArrayData *local_160;
  int *local_158 [4];
  QVariant local_138 [2];
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar5 = FUN_100117fa0(uVar12,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                        &local_38);
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar6 = FUN_100117fa0(uVar12,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34),
                        &local_3c);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    pcVar13 = "Src";
    if (lVar5 != 0) {
      pcVar13 = "Dst";
    }
    FUN_100df99c0("","prl_client_app",0,"Cannot swap slots. %s device is 0!",pcVar13);
    return 0x80000009;
  }
  EnumUtils::enumToString(&local_48,local_38);
  EnumUtils::enumToString(&local_50,local_3c);
  local_68 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  QString::arg(&local_60,&local_68,&local_48,0,0x20);
  iVar4 = CVmDevice::getIndex();
  QString::arg(&local_58,&local_60,iVar4 + 1,0,10,0x20);
  QString::operator=(&local_48,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262a6a;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100262a6a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262a9a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100262a9a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262aca;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100262aca:
  local_80 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  QString::arg(&local_78,&local_80,&local_50,0,0x20);
  iVar4 = CVmDevice::getIndex();
  QString::arg(&local_70,&local_78,iVar4 + 1,0,10,0x20);
  QString::operator=(&local_50,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262b5d;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100262b5d:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262b8d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100262b8d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262bbd;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100262bbd:
  MessageUtils::getMessageString((int)&local_88,true);
  MessageUtils::getMessageString((int)&local_90,true);
  EnumUtils::enumToString(&local_98,*(undefined4 *)(param_1 + 0x30));
  EnumUtils::enumToString(&local_a0,*(undefined4 *)(param_1 + 0x34));
  FUN_10010cda0(&local_a8,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28));
  FUN_10010cda0(&local_b0,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x2c));
  local_b8 = (QArrayData *)QString::fromAscii_helper("NODENAME_X",10);
  QString::replace(&local_88,&local_b8,&local_b0,1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262c95;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100262c95:
  local_c0 = (QArrayData *)QString::fromAscii_helper("DEVICENAME_X",0xc);
  QString::replace(&local_88,&local_c0,&local_50,1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262cfc;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100262cfc:
  local_c8 = (QArrayData *)QString::fromAscii_helper("DEVICENAME_Y",0xc);
  QString::replace(&local_88,&local_c8,&local_48,1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262d63;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100262d63:
  local_d0 = (QArrayData *)QString::fromAscii_helper("INTERFACE",9);
  QString::replace(&local_88,&local_d0,&local_a0,1);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262dcd;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100262dcd:
  local_d8 = (QArrayData *)QString::fromAscii_helper("NODENAME_X",10);
  QString::replace(&local_90,&local_d8,&local_b0,1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262e3a;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100262e3a:
  local_e0 = (QArrayData *)QString::fromAscii_helper("DEVICENAME_X",0xc);
  QString::replace(&local_90,&local_e0,&local_50,1);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262ea4;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100262ea4:
  local_e8 = (QArrayData *)QString::fromAscii_helper("NODENAME_Y",10);
  QString::replace(&local_90,&local_e8,&local_a8,1);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262f11;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100262f11:
  local_f0 = (QArrayData *)QString::fromAscii_helper("DEVICENAME_Y",0xc);
  QString::replace(&local_90,&local_f0,&local_48,1);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262f7b;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100262f7b:
  QString::toUtf8();
  pQVar14 = local_f8 + *(long *)(local_f8 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  QString::toUtf8();
  pQVar11 = local_100 + *(long *)(local_100 + 0x10);
  QString::toUtf8();
  pQVar15 = local_108 + *(long *)(local_108 + 0x10);
  QString::toUtf8();
  pQVar16 = local_110 + *(long *)(local_110 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  QString::toUtf8();
  pQVar3 = local_118;
  lVar5 = *(long *)(local_118 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,
                "Swapping stack indexes: %s (%d, %s) goes to %s, %s (%d, %s) goes to %s",pQVar14,
                uVar1,pQVar11,pQVar15,pQVar16,uVar2,pQVar3 + lVar5,
                local_120 + *(long *)(local_120 + 0x10));
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002630da;
    }
    QArrayData::deallocate(local_120,1,8);
  }
LAB_1002630da:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100263117;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_100263117:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026314d;
    }
    QArrayData::deallocate(local_110,1,8);
  }
LAB_10026314d:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100263183;
    }
    QArrayData::deallocate(local_108,1,8);
  }
LAB_100263183:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002631b9;
    }
    QArrayData::deallocate(local_100,1,8);
  }
LAB_1002631b9:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002631ef;
    }
    QArrayData::deallocate(local_f8,1,8);
  }
LAB_1002631ef:
  CAbstractTask::setWaitForSubTaskCompletion();
  local_160 = (QArrayData *)
              QString::fromAscii_helper
                        ("1onConfirmSwapAnswered(PRL_RESULT, Messaging::ButtonID)",0x37);
  local_168 = 0x80000000;
  local_170.field7 = 0;
  FUN_100a1c600(local_158,param_1,&local_160,&local_170);
  QVariant::~QVariant((QVariant *)&local_170);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100263283;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100263283:
  pMVar7 = (MessageParams *)CMessageManager::instance();
  pQVar10 = (QWidget *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar10 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar10 = *(QWidget **)(param_1 + 0x40);
  }
  MessageParams::MessageParams((MessageParams *)local_220,0x36b1,pQVar10);
  pQVar8 = (QString *)MessageParams::setShortMsg(local_220);
  pCVar9 = (CSlotInfo *)MessageParams::setLongMsg(pQVar8);
  MessageParams::setCloseMsgSlot(pCVar9);
  CMessageManager::showMessageBox(pMVar7);
  FUN_1001f39d0(local_220);
  QVariant::~QVariant(local_138);
  if (local_158[0] != (int *)0x0) {
    LOCK();
    *local_158[0] = *local_158[0] + -1;
    local_31 = *local_158[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_158[0] != (int *)0x0)) {
      operator_delete(local_158[0]);
    }
  }
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100263365;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100263365:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026339b;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10026339b:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002633d1;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002633d1:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100263407;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100263407:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026343d;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10026343d:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026346d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10026346d:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026349d;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10026349d:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 0;
}

