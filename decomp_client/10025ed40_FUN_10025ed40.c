
void FUN_10025ed40(long *param_1)

{
  int iVar1;
  long lVar2;
  QString QVar3;
  QArrayData *pQVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QVariant local_78;
  QVariant local_68;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar9 = 0;
  if ((param_1[9] != 0) && (lVar9 = 0, *(int *)(param_1[9] + 4) != 0)) {
    lVar9 = param_1[10];
  }
  local_38 = lVar2;
  lVar9 = FUN_1005c11d0(lVar9);
  QVar3.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar9 + 0xb0);
  if (QVar3.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Appliance object is null.");
    if (lVar2 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x00010025ef6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
      return;
    }
    goto LAB_10025f198;
  }
  FUN_100dda3c0(local_48);
  FUN_100dda3a0(&local_58,local_48);
  CAppliance::setApplianceId(QVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10025ede5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10025ede5:
  uVar7 = CAppliance::getApplianceOsVer();
  cVar6 = FUN_1001248a0(uVar7);
  puVar5 = PTR_s_VmProfile_102270eb8;
  if (cVar6 != '\0') {
    lVar9 = 0;
    if ((param_1[9] != 0) && (lVar9 = 0, *(int *)(param_1[9] + 4) != 0)) {
      lVar9 = param_1[10];
    }
    lVar9 = FUN_1005c11d0(lVar9);
    QVariant::QVariant(&local_68,*(int *)(lVar9 + 0x164));
    QObject::setProperty((char *)QVar3.field0_0x0,(QVariant *)puVar5);
    QVariant::~QVariant(&local_68);
  }
  lVar9 = 0;
  if ((param_1[9] != 0) && (lVar9 = 0, *(int *)(param_1[9] + 4) != 0)) {
    lVar9 = param_1[10];
  }
  lVar9 = FUN_1005c11d0(lVar9);
  puVar5 = PTR_s_CreateAlias_102270ec0;
  if (*(char *)(lVar9 + 0x168) != '\0') {
    QVariant::QVariant(&local_78,true);
    QObject::setProperty((char *)QVar3.field0_0x0,(QVariant *)puVar5);
    QVariant::~QVariant(&local_78);
  }
  lVar9 = 0;
  if ((param_1[9] != 0) && (lVar9 = 0, *(int *)(param_1[9] + 4) != 0)) {
    lVar9 = param_1[10];
  }
  lVar9 = FUN_1005c11d0(lVar9);
  pQVar4 = *(QArrayData **)(lVar9 + 0x178);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_49 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  if (*(int *)(pQVar4 + 4) == 0) {
    FUN_1005cf0b0(&local_80,QVar3.field0_0x0);
  }
  else {
    lVar9 = 0;
    if ((param_1[9] != 0) && (lVar9 = 0, *(int *)(param_1[9] + 4) != 0)) {
      lVar9 = param_1[10];
    }
    lVar9 = FUN_1005c11d0(lVar9);
    local_80 = *(QArrayData **)(lVar9 + 0x178);
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_49 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  CAppliance::setApplianceName(QVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_49 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10025efb4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10025efb4:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_49 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10025efe1;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10025efe1:
  lVar9 = 0;
  if ((param_1[9] != 0) && (lVar9 = 0, *(int *)(param_1[9] + 4) != 0)) {
    lVar9 = param_1[10];
  }
  lVar9 = FUN_1005c11d0(lVar9);
  pQVar4 = *(QArrayData **)(lVar9 + 0x180);
  iVar8 = *(int *)pQVar4;
  if (1 < iVar8 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_49 = *(int *)pQVar4 != 0;
    UNLOCK();
    iVar8 = *(int *)pQVar4;
  }
  iVar1 = *(int *)(pQVar4 + 4);
  if (iVar8 != -1) {
    if (iVar8 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_49 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10025f043;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10025f043:
  if (iVar1 != 0) {
    lVar9 = 0;
    if ((param_1[9] != 0) && (lVar9 = 0, *(int *)(param_1[9] + 4) != 0)) {
      lVar9 = param_1[10];
    }
    lVar9 = FUN_1005c11d0(lVar9);
    local_88 = *(QArrayData **)(lVar9 + 0x180);
    if (1 < *(int *)local_88 + 1U) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_49 = *(int *)local_88 != 0;
      UNLOCK();
    }
    CAppliance::setDownloadPath(QVar3);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10025f0bd;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_10025f0bd:
  uVar10 = FUN_100794960();
  lVar9 = 0;
  if ((param_1[3] != 0) && (lVar9 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar9 = param_1[4];
  }
  FUN_100795c60(uVar10,lVar9,QVar3.field0_0x0);
  uVar10 = FUN_10079c3d0();
  CAppliance::getApplianceId();
  lVar9 = 0;
  if ((param_1[3] != 0) && (lVar9 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar9 = param_1[4];
  }
  lVar11 = 0;
  if ((param_1[7] != 0) && (lVar11 = 0, *(int *)(param_1[7] + 4) != 0)) {
    lVar11 = param_1[8];
  }
  FUN_10079c520(uVar10,&local_90,lVar9,lVar11);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_49 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10025f174;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10025f174:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  if (lVar2 == local_38) {
    return;
  }
LAB_10025f198:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

