
bool FUN_100a239c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  local_38 = (void *)0x0;
  pvStack_30 = (void *)0x0;
  local_28 = 0;
  FUN_100a33490(param_2,&local_38);
  uVar1 = FUN_100a33580(param_2);
  pvVar3 = (void *)0x0;
  if (pvStack_30 != local_38) {
    pvVar3 = local_38;
  }
  iVar2 = _PrlVm_SendClipboardRequest(param_1,uVar1,0,pvVar3,(int)pvStack_30 - (int)local_38);
  if (-1 >= iVar2) {
    uVar1 = FUN_100a33580(param_2);
    FUN_100df99c0("CPTOOL","CPClientCommunicator",0,
                  "Can\'t get return code for sending command = %d. err = %d",uVar1,iVar2);
  }
  if (local_38 != (void *)0x0) {
    if (pvStack_30 != local_38) {
      pvStack_30 = local_38;
    }
    operator_delete(local_38);
  }
  return -1 < iVar2;
}

