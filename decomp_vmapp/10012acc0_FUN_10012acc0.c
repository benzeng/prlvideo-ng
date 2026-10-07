
void FUN_10012acc0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10011fac0(param_1,0x40c,param_2,0,0);
  *param_1 = &PTR_FUN_100baacb0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_start_ex_cmd_start_mode",0x1a);
  local_38 = pQVar1;
  FUN_10011cae0(param_1,param_3,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012ad49;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012ad49:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_start_ex_cmd_reserved_parameter",0x22);
  local_40 = pQVar1;
  FUN_10011cae0(param_1,param_4,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

