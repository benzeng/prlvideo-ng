
void FUN_10040eaa0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  QMapNodeBase *pQVar9;
  QMapNodeBase *pQVar10;
  QMapNodeBase *pQVar11;
  QMapNodeBase *pQVar12;
  QVariant local_b8;
  QVariant local_a8;
  undefined1 local_98 [16];
  int local_88;
  QMapNodeBase *local_80;
  char local_71;
  QArrayData *local_70;
  QVariant local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  QMapNodeBase *local_40;
  undefined1 local_29;
  
  pcVar5 = (char *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fb760);
  if (pcVar5 == (char *)0x0) {
    return;
  }
  lVar6 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar6 == 0) {
    pcVar5 = "(!)Error: Vm instance is null.";
LAB_10040ebdc:
    FUN_100df99c0("","prl_client_app",0,pcVar5);
    return;
  }
  lVar6 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_shared_null_1021e12f0;
  if (lVar6 == 0) {
    pcVar5 = "(!)Error: Server instance is null.";
    goto LAB_10040ebdc;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(int *)PTR_shared_null_1021e12f0 == -1) {
LAB_10040ebfd:
    local_40 = (QMapNodeBase *)puVar1;
  }
  else {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      goto LAB_10040ebfd;
    }
    local_40 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(puVar1 + 0x10) != 0) {
      puVar7 = (ulong *)FUN_1001411c0(*(long *)(puVar1 + 0x10),local_40);
      *(ulong **)(local_40 + 0x10) = puVar7;
      *puVar7 = *puVar7 & 3 | (ulong)(local_40 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040ec42;
    }
    if (*(long *)(puVar1 + 0x10) != 0) {
      QMapDataBase::freeTree
                ((QMapNodeBase *)PTR_shared_null_1021e12f0,(int)*(long *)(puVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_10040ec42:
  local_58._0_4_ = 4;
  uVar8 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  cVar2 = FUN_1001754c0(uVar8,10);
  if (cVar2 != '\0') {
    uVar8 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    iVar3 = FUN_10018a9d0(uVar8);
    if (iVar3 != 0x30000001) {
      uVar8 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
      local_70 = (QArrayData *)QString::fromAscii_helper("Hardware.Memory.RAM",0x13);
      FUN_1003e1800(&local_68,uVar8,&local_70,0);
      local_58._0_4_ = QVariant::toUInt((bool *)&local_68);
      QVariant::~QVariant(&local_68);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10040ecfc;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
  }
LAB_10040ecfc:
  uVar8 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a330(uVar8);
  CDispCommonPreferences::getMemoryPreferences();
  local_58._4_4_ = CDispMemoryPreferences::getMaxVmMemory();
  uVar8 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_10011d910(uVar8,&uStack_50,(long)&uStack_50 + 4);
  uVar8 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a340(uVar8);
  CHostHardwareInfoBase::getMemorySettings();
  local_48 = CHwMemorySettings::getHostRamSize();
  iVar3 = local_58._4_4_;
  uVar8 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  uVar8 = FUN_1001766b0(uVar8);
  iVar4 = FUN_100615d30(uVar8,2,&local_71);
  if (local_71 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"No license restriction PLRK_VM_MEMORY_LIMIT.");
  }
  else if (iVar4 <= iVar3) {
    iVar3 = iVar4;
  }
  if (iVar3 <= local_58._4_4_) {
    local_58._4_4_ = iVar3;
  }
  iVar3 = local_58._4_4_;
  if (uStack_50._4_4_ <= local_58._4_4_) {
    iVar3 = uStack_50._4_4_;
  }
  uStack_50._4_4_ = iVar3;
  QObject::property((char *)&local_a8);
  FUN_10041f060(local_98,&local_a8);
  QVariant::~QVariant(&local_a8);
  pQVar12 = local_80;
  if ((((((int)local_58 == (int)local_98._0_8_) && (local_58._4_4_ == SUB84(local_98._0_8_,4))) &&
       ((int)uStack_50 == (int)local_98._8_8_)) &&
      ((uStack_50._4_4_ == SUB84(local_98._8_8_,4) && (local_48 == local_88)))) &&
     (*(int *)(local_40 + 4) == *(int *)(local_80 + 4))) {
    pQVar11 = local_40;
    if (local_40 != local_80) {
      if (*(long *)(local_40 + 0x10) == 0) {
        pQVar10 = local_40 + 8;
      }
      else {
        pQVar10 = *(QMapNodeBase **)(local_40 + 0x20);
      }
      if (*(long *)(local_80 + 0x10) == 0) {
        pQVar9 = local_80 + 8;
      }
      else {
        pQVar9 = *(QMapNodeBase **)(local_80 + 0x20);
      }
      while (pQVar11 = pQVar12, pQVar10 != local_40 + 8) {
        cVar2 = QColor::operator==((QColor *)(pQVar10 + 0x20),(QColor *)(pQVar9 + 0x20));
        if ((cVar2 == '\0') || (*(double *)(pQVar10 + 0x18) != *(double *)(pQVar9 + 0x18)))
        goto LAB_10040eeda;
        pQVar9 = (QMapNodeBase *)QMapNodeBase::nextNode();
        pQVar10 = (QMapNodeBase *)QMapNodeBase::nextNode();
      }
    }
  }
  else {
LAB_10040eeda:
    FUN_10013fc30(pcVar5,&local_58);
    if (DAT_102273fe4 == 0) {
      DAT_102273fe4 = FUN_10041f4a0("CMemoryEditor::InitMemParams",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_b8,DAT_102273fe4,&local_58,0);
    QObject::setProperty(pcVar5,(QVariant *)"InitInfo");
    QVariant::~QVariant(&local_b8);
    pQVar11 = local_80;
    pQVar12 = local_80;
  }
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_29 = *(int *)pQVar11 != 0;
      UNLOCK();
      pQVar11 = pQVar12;
      if ((bool)local_29) goto LAB_10040ef87;
    }
    if (*(long *)(pQVar11 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar11,(int)*(long *)(pQVar11 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar11);
  }
LAB_10040ef87:
  pQVar12 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      QMapDataBase::freeTree(local_40,(int)*(long *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar12);
  }
  return;
}

