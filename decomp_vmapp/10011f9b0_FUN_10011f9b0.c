
void FUN_10011f9b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10011fac0(param_1,0x7e8,param_2,0,0);
  *param_1 = &PTR_FUN_100baa968;
  local_30 = (QArrayData *)QString::fromAscii_helper("vm_delete_cmd_vm_devices_list",0x1d);
  FUN_10011dbc0(param_1,param_3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

