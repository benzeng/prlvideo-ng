
bool FUN_1005f1a70(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *pQVar8;
  undefined1 local_1f8 [72];
  int *local_1b0;
  undefined1 local_1a0 [40];
  int *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  byte local_160;
  undefined *local_158;
  QArrayData *local_150;
  QString local_148;
  QString local_140;
  undefined1 local_138 [88];
  undefined1 local_e0 [40];
  QArrayData *local_b8;
  undefined1 local_b0 [88];
  undefined1 local_58 [47];
  undefined1 local_29;
  
  param_1 = param_1 + 0x38;
  uVar6 = FUN_1005ec990(param_1);
  FUN_1005b69c0(local_b0,uVar6);
  cVar3 = FUN_10073dd70(local_b0);
  FUN_100252c80(local_58);
  FUN_100252e70(local_b0);
  if (cVar3 == '\0') {
    return false;
  }
  lVar7 = FUN_1005ec990(param_1);
  uVar6 = FUN_1005ec990(param_1);
  FUN_1005b69c0(local_138,uVar6);
  FUN_10073e290(&local_b8,local_138);
  iVar5 = QString::compare_helper
                    (local_b8 + *(long *)(local_b8 + 0x10),*(undefined4 *)(local_b8 + 4),"x64",
                     0xffffffff,1);
  *(uint *)(lVar7 + 0x3c) = (iVar5 == 0) + 1;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005f1b6b;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005f1b6b:
  FUN_100252c80(local_e0);
  FUN_100252e70(local_138);
  puVar2 = PTR_shared_null_1021e1288;
  local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_1001c22d0(&local_150);
  FUN_1005cb7f0(&local_148,&local_150);
  QString::operator=(&local_140,&local_148);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_29 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005f1bf9;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_1005f1bf9:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005f1c2f;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1005f1c2f:
  uVar6 = FUN_1005ec990(param_1);
  FUN_1005ec990(param_1);
  FUN_1005b69c0(local_1f8);
  pQVar8 = (QArrayData *)QString::fromAscii_helper("",0);
  lVar7 = FUN_1005ec990(param_1);
  uVar1 = *(undefined4 *)(lVar7 + 0x3c);
  local_178 = local_1b0;
  if (1 < *local_1b0 + 1U) {
    LOCK();
    *local_1b0 = *local_1b0 + 1;
    local_29 = *local_1b0 != 0;
    UNLOCK();
  }
  local_170 = (QArrayData *)local_140.field0_0x0;
  if (1 < *(int *)local_140.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + 1;
    local_29 = *(int *)local_140.field0_0x0 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar8 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_29 = *(int *)pQVar8 != 0;
    UNLOCK();
  }
  local_160 = (byte)uVar1 >> 1 & 1;
  local_158 = puVar2;
  if (1 < *(int *)puVar2 + 1U) {
    LOCK();
    *(int *)puVar2 = *(int *)puVar2 + 1;
    local_29 = *(int *)puVar2 != 0;
    UNLOCK();
  }
  local_168 = pQVar8;
  FUN_1005b9880(uVar6,&local_178);
  FUN_1001ea7d0(&local_178);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005f1d31;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1005f1d31:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_29 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005f1d5e;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1005f1d5e:
  FUN_100252c80(local_1a0);
  FUN_100252e70(local_1f8);
  uVar6 = FUN_1005ec990(param_1);
  FUN_1005b9810(uVar6,1);
  uVar6 = FUN_1005ec990(param_1);
  FUN_1005bf430(uVar6,1);
  lVar7 = FUN_1005ec9d0(param_1);
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm Configuration instance is null.");
  }
  else {
    uVar6 = FUN_1005ec9d0(param_1);
    FUN_1005caf40(uVar6);
    FUN_1005ec9d0(param_1);
    CVmConfiguration::getVmSettings();
    bVar4 = (bool)CVmSettings::getVmRuntimeOptions();
    FUN_10011bfc0();
    CVmRunTimeOptions::setHostRetinaEnabled(bVar4);
  }
  bVar4 = lVar7 != 0;
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_140.field0_0x0 != 0) {
        return bVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
  return bVar4;
}

