
void FUN_100125540(undefined8 param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_vm_device",0x19);
  local_30 = pQVar1;
  FUN_1001248f0(param_1,&local_30,param_2);
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

