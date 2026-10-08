
int FUN_100b0abb0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  int iVar1;
  
  iVar1 = _IOConnectTrap3(param_2,0,param_3,param_4,(long)param_5);
  if (iVar1 != 0) {
    FUN_100df99c0("","ioctl",0,"vm_drv_ioctl failed with error %x",iVar1);
  }
  return iVar1;
}

