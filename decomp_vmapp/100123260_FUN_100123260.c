
bool FUN_100123260(undefined8 param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("vm_cmd_with_acpi_sign_is_use_acpi",0x21);
  local_30 = pQVar2;
  iVar1 = FUN_10011d510(param_1,&local_30);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_22 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1001232c4;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1001232c4:
  return iVar1 != 0;
}

