
void FUN_10012e520(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10012e290(param_1,0x404,param_2,param_3,param_7);
  *param_1 = &PTR_FUN_100baae40;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_guest_run_app_cmd_program_name",0x21);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012e5b3;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012e5b3:
  local_48 = (QArrayData *)QString::fromAscii_helper("vm_guest_run_app_cmd_arguments",0x1e);
  FUN_10011dbc0(param_1,param_5,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012e607;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10012e607:
  local_50 = (QArrayData *)QString::fromAscii_helper("vm_guest_run_app_cmd_env_vars",0x1d);
  FUN_10011dbc0(param_1,param_6,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

