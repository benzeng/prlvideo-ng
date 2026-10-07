
void FUN_10026b3f0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_40 [24];
  undefined4 local_28;
  
  iVar2 = FUN_1002ef640(*(undefined8 *)(param_1 + 0x40));
  if (iVar2 != 1) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "adev_get_state(m_async3) == ASYNCDEV_STATE_RUNNING","../Storage/IdeDevice.cpp",
                  0x2b,"WaitIdeReqComplete");
  }
  local_28 = 2;
  cVar1 = FUN_100258290(param_1 + 0x48,local_40,*(undefined8 *)(param_1 + 0x40));
  if (cVar1 == '\0') {
    uVar3 = FUN_1002ef010(*(undefined8 *)(param_1 + 0x40));
    FUN_1008e3970("","LocalDevices",0,
                  "ide(0x%x) WaitIdeReqComplete device terminated before req completed",uVar3);
  }
  return;
}

