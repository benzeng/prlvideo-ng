
void FUN_10040f0e0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  ulong *puVar6;
  undefined8 uVar7;
  QMapNodeBase *pQVar8;
  QMapNodeBase *pQVar9;
  QMapNodeBase *pQVar10;
  QMapNodeBase *pQVar11;
  QVariant local_f0;
  QVariant local_e0;
  undefined1 local_d0 [16];
  int local_c0;
  QMapNodeBase *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  QArrayData *local_78;
  QVariant local_70;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  pcVar5 = (char *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fb760);
  puVar1 = PTR_shared_null_1021e12f0;
  if (pcVar5 == (char *)0x0) {
    return;
  }
  local_50 = 2;
  iStack_4c = 0x800;
  local_48 = 0x20;
  iStack_44 = 0x100;
  local_40 = -1;
  if (*(int *)PTR_shared_null_1021e12f0 == -1) {
LAB_10040f1df:
    local_38 = (QMapNodeBase *)puVar1;
  }
  else {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      goto LAB_10040f1df;
    }
    local_38 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(puVar1 + 0x10) != 0) {
      puVar6 = (ulong *)FUN_1001411c0(*(long *)(puVar1 + 0x10),local_38);
      *(ulong **)(local_38 + 0x10) = puVar6;
      *puVar6 = *puVar6 & 3 | (ulong)(local_38 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040f226;
    }
    if (*(long *)(puVar1 + 0x10) != 0) {
      QMapDataBase::freeTree
                ((QMapNodeBase *)PTR_shared_null_1021e12f0,(int)*(long *)(puVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_10040f226:
  local_58 = 0x4000000000000000;
  FUN_10041a010(&local_38,&local_58,PTR__GRAD_COLOR_GRAY_1021e1038);
  local_60 = 0x40a0000000000000;
  FUN_10041a010(&local_38,&local_60,PTR__GRAD_COLOR_RED_1021e1048);
  uVar7 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_78 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  FUN_1003e1800(&local_70,uVar7,&local_78,0);
  iVar3 = QVariant::toUInt((bool *)&local_70);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10040f2e2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10040f2e2:
  if ((iVar3 < 0x809) || (iVar3 != 0x8ff && 0xf < iVar3 - 0x801U)) {
    local_48 = 0x10;
    iStack_44 = 0x100;
    local_a8 = 0x4030000000000000;
    FUN_10041a010(&local_38,&local_a8,PTR__GRAD_COLOR_GREEN_1021e1040);
    local_b0 = 0x4070000000000000;
    FUN_10041a010(&local_38,&local_b0,PTR__GRAD_COLOR_RED_1021e1048);
  }
  else {
    local_48 = 0x80;
    local_80 = 0x4060000000000000;
    FUN_10041a010(&local_38,&local_80,PTR__GRAD_COLOR_GREEN_1021e1040);
    uVar7 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
    FUN_10015a340(uVar7);
    CHostHardwareInfoBase::getMemorySettings();
    uVar4 = CHwMemorySettings::getHostRamSize();
    if (uVar4 < 0x2000) {
      iStack_44 = 0x100;
      local_88 = 0x4070000000000000;
      FUN_10041a010(&local_38,&local_88,PTR__GRAD_COLOR_YELLOW_1021e1050);
      local_90 = 0x4080000000000000;
      FUN_10041a010(&local_38,&local_90,PTR__GRAD_COLOR_RED_1021e1048);
    }
    else {
      iStack_44 = 0x200;
      local_98 = 0x4080000000000000;
      FUN_10041a010(&local_38,&local_98,PTR__GRAD_COLOR_YELLOW_1021e1050);
      local_a0 = 0x4090000000000000;
      FUN_10041a010(&local_38,&local_a0,PTR__GRAD_COLOR_RED_1021e1048);
    }
  }
  QObject::property((char *)&local_e0);
  FUN_10041f060(local_d0,&local_e0);
  QVariant::~QVariant(&local_e0);
  pQVar11 = local_b8;
  if (((((local_50 == (int)local_d0._0_8_) && (iStack_4c == SUB84(local_d0._0_8_,4))) &&
       (local_48 == (int)local_d0._8_8_)) &&
      ((iStack_44 == SUB84(local_d0._8_8_,4) && (local_40 == local_c0)))) &&
     (*(int *)(local_38 + 4) == *(int *)(local_b8 + 4))) {
    pQVar10 = local_38;
    if (local_38 != local_b8) {
      if (*(long *)(local_38 + 0x10) == 0) {
        pQVar9 = local_38 + 8;
      }
      else {
        pQVar9 = *(QMapNodeBase **)(local_38 + 0x20);
      }
      if (*(long *)(local_b8 + 0x10) == 0) {
        pQVar8 = local_b8 + 8;
      }
      else {
        pQVar8 = *(QMapNodeBase **)(local_b8 + 0x20);
      }
      while (pQVar10 = pQVar11, pQVar9 != local_38 + 8) {
        cVar2 = QColor::operator==((QColor *)(pQVar9 + 0x20),(QColor *)(pQVar8 + 0x20));
        if ((cVar2 == '\0') || (*(double *)(pQVar9 + 0x18) != *(double *)(pQVar8 + 0x18)))
        goto LAB_10040f580;
        pQVar8 = (QMapNodeBase *)QMapNodeBase::nextNode();
        pQVar9 = (QMapNodeBase *)QMapNodeBase::nextNode();
      }
    }
  }
  else {
LAB_10040f580:
    FUN_100140630(pcVar5,&local_50);
    if (DAT_102273fe4 == 0) {
      DAT_102273fe4 = FUN_10041f4a0("CMemoryEditor::InitMemParams",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_f0,DAT_102273fe4,&local_50,0);
    QObject::setProperty(pcVar5,(QVariant *)"InitInfo");
    QVariant::~QVariant(&local_f0);
    pQVar10 = local_b8;
    pQVar11 = local_b8;
  }
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_29 = *(int *)pQVar10 != 0;
      UNLOCK();
      pQVar10 = pQVar11;
      if ((bool)local_29) goto LAB_10040f630;
    }
    if (*(long *)(pQVar10 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar10,(int)*(long *)(pQVar10 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar10);
  }
LAB_10040f630:
  pQVar11 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      QMapDataBase::freeTree(local_38,(int)*(long *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar11);
  }
  return;
}

