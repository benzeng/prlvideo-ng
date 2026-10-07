
void FUN_10012e290(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10011fac0();
  *param_1 = &PTR_FUN_100baae18;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_guest_cmd_session_id",0x17);
  local_30 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_22 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

