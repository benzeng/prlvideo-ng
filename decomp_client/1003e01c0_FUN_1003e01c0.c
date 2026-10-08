
undefined8 FUN_1003e01c0(undefined8 param_1,QHash *param_2)

{
  undefined *puVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
  iVar5 = -1;
  iVar4 = -1;
  if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
    iVar4 = (int)sVar3;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar4);
  puVar1 = PTR_s_VmConfig_1021f1e00;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar3;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5);
  cVar2 = MappingHelpers::hasPath(param_2,&local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003e0271;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003e0271:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003e02a1;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1003e02a1:
  if (cVar2 != '\0') {
    FUN_1003e0340(param_1,param_2);
  }
  return 1;
}

