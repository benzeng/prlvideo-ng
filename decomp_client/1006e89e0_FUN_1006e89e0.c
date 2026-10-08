
long FUN_1006e89e0(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  QString local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  undefined1 local_158 [88];
  undefined1 local_100 [40];
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  undefined1 local_b8 [88];
  undefined1 local_60 [47];
  undefined1 local_31;
  
  local_c0 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar5 = FUN_10073fe80(&local_c0);
  local_c8 = (QArrayData *)QString::fromAscii_helper("desktop_upgrade",0xf);
  local_d0 = (QArrayData *)QString::fromAscii_helper("FreeUpgradeOrder",0x10);
  FUN_100743a40(local_b8,uVar5,&local_c8,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e8aa1;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1006e8aa1:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e8ad7;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1006e8ad7:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e8b0d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1006e8b0d:
  cVar2 = FUN_10073dd70(local_b8);
  iVar3 = -1;
  if (cVar2 != '\0') {
    CProductUpdateInfo::getMajorVersionFromFileName(&local_d8);
    iVar3 = QString::toInt((bool *)&local_d8,0);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e8b82;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
  }
LAB_1006e8b82:
  local_160 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar5 = FUN_10073fe80(&local_160);
  local_168 = (QArrayData *)QString::fromAscii_helper("desktop_upgrade",0xf);
  FUN_100743d60(local_158,uVar5,&local_168);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e8c0d;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1006e8c0d:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e8c43;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1006e8c43:
  cVar2 = FUN_10073dd70(local_158);
  iVar4 = -1;
  if (cVar2 != '\0') {
    CProductUpdateInfo::getMajorVersionFromFileName(&local_170);
    iVar4 = QString::toInt((bool *)&local_170,0);
    if (*(int *)local_170.field0_0x0 != -1) {
      if (*(int *)local_170.field0_0x0 != 0) {
        LOCK();
        *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
        local_31 = *(int *)local_170.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e8cbb;
      }
      QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
    }
  }
LAB_1006e8cbb:
  puVar6 = local_158;
  if (iVar4 < iVar3) {
    puVar6 = local_b8;
  }
  FUN_100283580(param_1,puVar6);
  piVar1 = *(int **)(puVar6 + 0x58);
  *(int **)(param_1 + 0x58) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = *(int **)(puVar6 + 0x60);
  *(int **)(param_1 + 0x60) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = *(int **)(puVar6 + 0x68);
  *(int **)(param_1 + 0x68) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = *(int **)(puVar6 + 0x70);
  *(int **)(param_1 + 0x70) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = *(int **)(puVar6 + 0x78);
  *(int **)(param_1 + 0x78) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  FUN_100252c80(local_100);
  FUN_100252e70(local_158);
  FUN_100252c80(local_60);
  FUN_100252e70(local_b8);
  return param_1;
}

