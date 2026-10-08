
void FUN_10021e430(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  QVariant *this;
  bool *pbVar8;
  long lVar9;
  long lVar10;
  QArrayData *pQVar11;
  long lVar12;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  char local_79;
  QString local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  if ((param_2 == 0x3b0f) && (param_3 == 1)) {
    local_38 = 0;
    local_3c = 0;
    lVar10 = 0;
    if ((param_1[3] != 0) && (lVar10 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar10 = param_1[4];
    }
    FUN_10011d910(lVar10,&local_38,&local_3c);
    lVar10 = 0;
    if ((param_1[3] != 0) && (lVar10 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar10 = param_1[4];
    }
    FUN_10018c2b0(lVar10);
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getMemory();
    iVar4 = CVmMemory::getRamSize();
    if (local_3c <= iVar4) {
      iVar4 = local_3c;
    }
    iVar2 = local_38;
    if (local_38 < iVar4) {
      iVar2 = iVar4;
    }
    local_48 = (QArrayData *)QString::fromAscii_helper("Hardware.Memory.RAM",0x13);
    QVariant::QVariant(&local_58,iVar2);
    FUN_10008d1b0(param_1 + 0xc,&local_48,&local_58);
    QVariant::~QVariant(&local_58);
    if (*(int *)local_48 != -1) {
      pQVar11 = local_48;
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        iVar4 = *(int *)local_48;
        UNLOCK();
joined_r0x00010021e610:
        local_31 = iVar4 != 0;
        if ((bool)local_31) goto LAB_10021e625;
      }
LAB_10021e616:
      QArrayData::deallocate(pQVar11,2,8);
    }
  }
  else if (param_2 == -0x7ffd8da0) {
    if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010021e56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
      return;
    }
    lVar10 = 0;
    if ((param_1[3] != 0) && (lVar10 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar10 = param_1[4];
    }
    if (param_3 == 1) {
      uVar5 = FUN_1001248e0();
    }
    else {
      uVar7 = FUN_10018d490(lVar10);
      FUN_10015a330(uVar7);
      CDispCommonPreferences::getMemoryPreferences();
      uVar5 = CDispMemoryPreferences::getRecommendedMaxVmMemory();
    }
    local_60 = (QArrayData *)QString::fromAscii_helper("Hardware.Memory.RAM",0x13);
    QVariant::QVariant(&local_70,uVar5);
    FUN_10008d1b0(param_1 + 0xc,&local_60,&local_70);
    QVariant::~QVariant(&local_70);
    if (*(int *)local_60 != -1) {
      pQVar11 = local_60;
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        iVar4 = *(int *)local_60;
        UNLOCK();
        goto joined_r0x00010021e610;
      }
      goto LAB_10021e616;
    }
  }
LAB_10021e625:
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Hardware.Memory.RAM",0x13);
  plVar1 = param_1 + 0xc;
  if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_10021e6a7:
    lVar9 = 0;
  }
  else {
    lVar10 = *(long *)(*plVar1 + 0x10);
    lVar12 = 0;
    do {
      while (lVar9 = lVar10, cVar3 = operator<((QString *)(lVar9 + 0x18),&local_78), cVar3 == '\0')
      {
        lVar10 = *(long *)(lVar9 + 8);
        lVar12 = lVar9;
        if (*(long *)(lVar9 + 8) == 0) goto LAB_10021e696;
      }
      lVar10 = *(long *)(lVar9 + 0x10);
    } while (*(long *)(lVar9 + 0x10) != 0);
    lVar9 = lVar12;
    if (lVar12 == 0) goto LAB_10021e6a7;
LAB_10021e696:
    cVar3 = operator<(&local_78,(QString *)(lVar9 + 0x18));
    if (cVar3 != '\0') goto LAB_10021e6a7;
  }
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021e6d9;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10021e6d9:
  if (lVar9 == 0) goto LAB_10021e82c;
  lVar10 = 0;
  if ((param_1[3] != 0) && (lVar10 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar10 = param_1[4];
  }
  uVar7 = FUN_10018d490(lVar10);
  uVar7 = FUN_1001766b0(uVar7);
  uVar5 = FUN_100615d30(uVar7,2,&local_79);
  if (local_79 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"No license restriction PLRK_VM_MEMORY_LIMIT.");
    goto LAB_10021e82c;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper("Hardware.Memory.RAM",0x13);
  this = (QVariant *)FUN_10008c590(plVar1,&local_88);
  local_a0 = (QArrayData *)QString::fromAscii_helper("Hardware.Memory.RAM",0x13);
  pbVar8 = (bool *)FUN_10008c590(plVar1,&local_a0);
  uVar6 = QVariant::toUInt(pbVar8);
  if (uVar5 < uVar6) {
    uVar6 = uVar5;
  }
  QVariant::QVariant(&local_98,uVar6);
  QVariant::operator=(this,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021e7dc;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10021e7dc:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021e82c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10021e82c:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

