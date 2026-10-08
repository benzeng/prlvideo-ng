
undefined8 FUN_1003e5990(undefined8 param_1)

{
  undefined *puVar1;
  size_t sVar2;
  QArrayData *pQVar3;
  int iVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CMappingModel::getAllStorages();
  puVar1 = PTR_s_VmConfig_1021f1e00;
  iVar4 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar4 = (int)sVar2;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  local_38 = pQVar3;
  FUN_1000341d0(param_1,&local_38);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003e5a0c;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003e5a0c:
  puVar1 = PTR_s_TimeMachine_1021f1e08;
  iVar4 = -1;
  if (PTR_s_TimeMachine_1021f1e08 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_TimeMachine_1021f1e08);
    iVar4 = (int)sVar2;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  local_40 = pQVar3;
  FUN_1000341d0(param_1,&local_40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return param_1;
}

