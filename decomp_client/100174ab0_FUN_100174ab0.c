
undefined8 FUN_100174ab0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  CVirtualNetwork::getUuid();
  FUN_100174c40(&local_30,param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100174b0b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100174b0b:
  if (local_30 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid handle to network device.");
    return 0;
  }
  uVar1 = _PrlSrv_DeleteVirtualNetwork(*(undefined8 *)(param_1 + 0x80),local_30,0);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_10015c580(param_1,uVar1,0x841,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100174b77;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100174b77:
  _PrlHandle_Free(local_30);
  return uVar1;
}

