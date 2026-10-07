
undefined8 FUN_10026dff0(long param_1)

{
  int iVar1;
  
  FUN_1008e3970("","LocalDevices",0,"[AppHDD] CloseImage");
  iVar1 = FUN_1002ef640(*(undefined8 *)(param_1 + 0x40));
  if (iVar1 - 1U < 2) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "runState != ASYNCDEV_STATE_RUNNING && runState != ASYNCDEV_STATE_STOPPING",
                  "../Storage/HardDrive/AppHdd.cpp",0x1eb,"CloseImage");
  }
  FUN_1003fe070(param_1 + 0xa48);
  FUN_100401be0(param_1 + 0x8d8);
  if (*(long *)(param_1 + 0x12e0) != 0) {
    FUN_1003fad20(param_1 + 0x12f0);
  }
  *(undefined8 *)(param_1 + 0x12e0) = 0;
  return 0;
}

