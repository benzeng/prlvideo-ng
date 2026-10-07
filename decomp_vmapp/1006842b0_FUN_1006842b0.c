
undefined1 FUN_1006842b0(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 == -1) {
    uVar2 = 0;
  }
  else {
    _uStack_30 = CONCAT44(param_4,param_3);
    local_38 = param_2;
    iVar1 = _IOConnectTrap3(*param_1,0,0x20107840,&local_38,0x10);
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = 0;
      FUN_1008e3970("","ioctl",0,"vm_drv_ioctl failed with error %x",iVar1);
      FUN_1008e3970("","ioctl",0,"VmDrv::InitHypervisor: failed to initialize hypervisor: 0x%x",
                    iVar1);
    }
  }
  return uVar2;
}

