
void FUN_10012b870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10011fac0(param_1,0x421,param_2,0,0);
  *param_1 = &PTR_FUN_100baad28;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_internal_cmd_name",0x14);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012b8f9;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012b8f9:
  local_40 = (QArrayData *)QString::fromAscii_helper("vm_internal_cmd_arglist",0x17);
  FUN_10011dbc0(param_1,param_4,&local_40);
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

