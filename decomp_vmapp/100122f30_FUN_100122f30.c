
void FUN_100122f30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  CVmEventParameter *pCVar1;
  CVmEventParameter *pCVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pCVar2 = (CVmEventParameter *)0x0;
  FUN_10011fac0();
  *param_1 = &PTR_FUN_100baaaf8;
  if (param_1[1] != 0) {
    pCVar2 = *(CVmEventParameter **)(param_1[1] + 0x10);
  }
  pCVar1 = operator_new(0xd0);
  local_40 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_38,&local_40,param_4,0,10,0x20);
  local_48 = (QArrayData *)QString::fromAscii_helper("vm_cmd_with_acpi_sign_is_use_acpi",0x21);
  CVmEventParameter::CVmEventParameter(pCVar1,6,&local_38,&local_48);
  CVmEvent::addEventParameter(pCVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100123019;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100123019:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012304b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10012304b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

