
void FUN_100123320(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  CVmEventParameter *pCVar1;
  CVmEventParameter *pCVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar2 = (CVmEventParameter *)0x0;
  FUN_10011fac0(param_1,0x3ea,param_2,0,param_4);
  *param_1 = &PTR_FUN_100baab20;
  if (param_1[1] != 0) {
    pCVar2 = *(CVmEventParameter **)(param_1[1] + 0x10);
  }
  pCVar1 = operator_new(0xd0);
  local_48 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_40,&local_48,param_3,0,10,0x20);
  local_50 = (QArrayData *)QString::fromAscii_helper("vm_cmd_vm_stop_mode",0x13);
  CVmEventParameter::CVmEventParameter(pCVar1,0,&local_40,&local_50);
  CVmEvent::addEventParameter(pCVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100123415;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100123415:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100123448;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100123448:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100123478;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100123478:
  pCVar2 = (CVmEventParameter *)0x0;
  if (param_1[1] != 0) {
    pCVar2 = *(CVmEventParameter **)(param_1[1] + 0x10);
  }
  pCVar1 = operator_new(0xd0);
  local_60 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_58,&local_60,(char)param_3 != '\0',0,10,0x20);
  local_68 = (QArrayData *)QString::fromAscii_helper("vm_cmd_with_acpi_sign_is_use_acpi",0x21);
  CVmEventParameter::CVmEventParameter(pCVar1,6,&local_58,&local_68);
  CVmEvent::addEventParameter(pCVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100123541;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100123541:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100123574;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100123574:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

