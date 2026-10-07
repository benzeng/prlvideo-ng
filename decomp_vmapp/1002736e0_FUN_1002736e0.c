
void FUN_1002736e0(long param_1)

{
  int iVar1;
  undefined1 local_28 [24];
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    iVar1 = FUN_1002ef640(*(undefined8 *)(param_1 + 0x40));
    if (iVar1 != 1) {
      FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "adev_get_state(m_async3) == ASYNCDEV_STATE_RUNNING","../Network/AppNet.cpp",
                    0x1a1,"ProcessSyncRequest");
    }
    FUN_100258290(param_1 + 0x48,local_28,*(undefined8 *)(param_1 + 0x40));
  }
  return;
}

