
void FUN_1004d2eb0(long *param_1,long param_2,char param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  QArrayData *pQVar8;
  char cVar9;
  char cVar10;
  uint *puVar11;
  uint *puVar12;
  char local_a4;
  char local_9c;
  char local_98;
  char local_94;
  int *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  uint *local_60;
  uint *local_58;
  long *local_50;
  long local_48;
  undefined *local_40;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_100ba2188;
  local_48 = *param_1;
  local_94 = CVmHostSharing::isUserDefinedFoldersEnabled();
  local_a4 = CVmHostSharing::isSharedCloud();
  cVar9 = CVmHostSharing::isShareAllMacDisks();
  cVar10 = '\x01';
  if (cVar9 == '\0') {
    cVar10 = CVmHostSharing::isShareUserHomeDir();
  }
  if (param_3 == '\0') {
    local_98 = CVmHostSharing::isEnabled();
    local_9c = local_98;
    if (local_98 != '\0') {
      local_98 = cVar9;
      local_9c = cVar10;
    }
  }
  else {
    local_a4 = '\0';
    local_98 = '\0';
    local_9c = '\0';
    local_94 = '\0';
  }
  QMutex::lock();
  plVar1 = param_1 + 1;
  puVar11 = (uint *)param_1[1];
  if (1 < *puVar11) {
    FUN_1004d6bf0(plVar1,puVar11[1]);
    puVar11 = (uint *)*plVar1;
  }
  puVar12 = puVar11 + (long)(int)puVar11[2] * 2 + 4;
  bVar6 = false;
  bVar4 = false;
  while( true ) {
    if (1 < *puVar11) {
      FUN_1004d6bf0(plVar1,puVar11[1]);
      puVar11 = (uint *)*plVar1;
    }
    if (puVar12 == puVar11 + (long)(int)puVar11[3] * 2 + 4) break;
    plVar3 = (long *)**(long **)puVar12;
    if (plVar3 != (long *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_50 = plVar3;
    if (((((local_94 == '\0') && (*(char *)((long)plVar3 + 0x34) != '\0')) ||
         ((local_98 == '\0' && (*(char *)((long)plVar3 + 0x32) != '\0')))) ||
        ((local_9c == '\0' && (*(char *)((long)plVar3 + 0x33) != '\0')))) ||
       ((local_a4 == '\0' && (*(char *)((long)plVar3 + 0x35) != '\0')))) {
      local_60 = puVar12;
      FUN_1004d4dd0(&local_58,plVar1,&local_60);
      puVar12 = local_58;
      FUN_1004d6d80(&local_40,&local_50);
      *(long *)(DAT_1011cc980 + 0xf0) = *(long *)(DAT_1011cc980 + 0xf0) + -1;
      bVar5 = bVar6;
    }
    else {
      bVar5 = true;
      if (*(char *)((long)plVar3 + 0x32) == '\0') {
        bVar5 = bVar4;
      }
      puVar12 = puVar12 + 2;
      bVar4 = bVar5;
      bVar5 = true;
      if (*(char *)((long)plVar3 + 0x33) == '\0') {
        bVar5 = bVar6;
      }
    }
    bVar6 = bVar5;
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    puVar11 = (uint *)*plVar1;
  }
  if ((local_98 != '\0') && (!bVar4)) {
    QDir::rootPath();
    FUN_1004d08f0(&local_70,param_1,&local_68,&DAT_1011bc040,&DAT_1011bc050,2);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d31c6;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1004d31c6:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d31f6;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1004d31f6:
  if ((local_9c != '\0') && (!bVar6)) {
    FUN_100507c20(&local_78);
    QString::normalized(&local_80,&local_78,0,0);
    pQVar8 = local_78;
    local_78 = local_80;
    local_80 = pQVar8;
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d3268;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_1004d3268:
    FUN_1004d08f0(&local_88,param_1,&local_78,&DAT_1011bc048,&DAT_1011bc058,4);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d32bc;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1004d32bc:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d32ec;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_1004d32ec:
  if (local_94 != '\0') {
    FUN_1004d34e0(&local_90,param_1,param_2 + 0xa8);
    FUN_1004d78c0(&local_40,&local_90);
    if (*local_90 != -1) {
      if (*local_90 != 0) {
        LOCK();
        *local_90 = *local_90 + -1;
        local_31 = *local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004d3352;
      }
      FUN_1004d6ab0(&local_90,local_90);
    }
  }
LAB_1004d3352:
  QMutex::unlock();
  if (*(long *)(*param_1 + 0xb8) != 0) {
    if (local_a4 == '\0') {
      FUN_1004f9c90();
    }
    else {
      FUN_1004f9290();
    }
  }
  FUN_1004d4220(&local_48);
  return;
}

