
undefined1 FUN_1003bc0b0(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  size_t sVar4;
  int iVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_s_VmConfig_1021f1e00;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar4;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  cVar2 = QtPrivate::QStringList_contains(param_1,&local_30,1);
  puVar1 = PTR_s_TimeMachine_1021f1e08;
  uVar3 = 1;
  if (cVar2 == '\0') {
    iVar5 = -1;
    if (PTR_s_TimeMachine_1021f1e08 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_TimeMachine_1021f1e08);
      iVar5 = (int)sVar4;
    }
    local_38 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
    uVar3 = QtPrivate::QStringList_contains(param_1,&local_38,1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003bc172;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1003bc172:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar3;
}

