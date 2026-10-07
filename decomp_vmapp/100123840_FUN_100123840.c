
uint FUN_100123840(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  QArrayData *pQVar5;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar5 = (QArrayData *)QString::fromAscii_helper("vm_cmd_vm_stop_mode",0x13);
  local_30 = pQVar5;
  cVar1 = FUN_10011d720(param_1,&local_30,0);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001238a4;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1001238a4:
  if (cVar1 == '\0') {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("vm_cmd_with_acpi_sign_is_use_acpi",0x21);
    local_40 = pQVar5;
    iVar4 = FUN_10011d510(param_1,&local_40);
    uVar2 = (uint)(iVar4 != 0);
    if (*(int *)pQVar5 == -1) {
      return uVar2;
    }
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar5,2,8);
    return uVar2;
  }
  uVar2 = FUN_10011d660(param_1);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("vm_cmd_vm_stop_mode",0x13);
  local_38 = pQVar5;
  uVar3 = FUN_10011d510(param_1,&local_38);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100123907;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100123907:
  return uVar2 & 0xffffff00 | uVar3 & 0xff;
}

