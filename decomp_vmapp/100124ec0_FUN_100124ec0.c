
void FUN_100124ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_host_common_info",0x20);
  local_38 = pQVar1;
  FUN_1001248f0(param_1,&local_38,param_2);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100124f2e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100124f2e:
  pQVar1 = (QArrayData *)
           QString::fromAscii_helper("ws_response_cmd_host_common_info_network_config",0x2f);
  local_40 = pQVar1;
  FUN_1001248f0(param_1,&local_40,param_3);
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

