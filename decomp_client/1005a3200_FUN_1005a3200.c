
undefined8 FUN_1005a3200(undefined8 param_1)

{
  undefined *puVar1;
  size_t sVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  int iVar7;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CMappingModel::getAllStorages();
  puVar1 = PTR_s_UserPreferences_102274480;
  iVar7 = -1;
  if (PTR_s_UserPreferences_102274480 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_UserPreferences_102274480);
    iVar7 = (int)sVar2;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar7);
  local_40 = pQVar3;
  FUN_1000341d0(param_1,&local_40);
  puVar1 = PTR_s_DispPreferences_102274488;
  iVar7 = -1;
  if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_DispPreferences_102274488);
    iVar7 = (int)sVar2;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar7);
  local_48 = pQVar4;
  FUN_1000341d0(param_1,&local_48);
  puVar1 = PTR_s_ShortcutsStorage_102274490;
  iVar7 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar7 = (int)sVar2;
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar7);
  local_50 = pQVar5;
  FUN_1000341d0(param_1,&local_50);
  puVar1 = PTR_s_SendKeyToVmListStorage_102274498;
  iVar7 = -1;
  if (PTR_s_SendKeyToVmListStorage_102274498 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_SendKeyToVmListStorage_102274498);
    iVar7 = (int)sVar2;
  }
  pQVar6 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar7);
  local_58 = pQVar6;
  FUN_1000341d0(param_1,&local_58);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a3331;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1005a3331:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a335e;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1005a335e:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a338b;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005a338b:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return param_1;
}

