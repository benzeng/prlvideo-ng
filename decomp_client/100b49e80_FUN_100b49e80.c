
undefined1 FUN_100b49e80(int *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar4 = 1;
  if (*param_1 == 0) {
    lVar3 = _IOServiceMatching("com_parallels_kext_prl_vnic_bus");
    if (lVar3 == 0) {
      uVar4 = 0;
      FUN_100df99c0("","prl_net",0,"[CPrlVnicMacDriver::openDriver()] Failed to open %s.",
                    "com_parallels_kext_prl_vnic_bus");
    }
    else {
      iVar1 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,lVar3)
      ;
      if (iVar1 == 0) {
        uVar4 = 0;
        FUN_100df99c0("","prl_net",0,
                      "[CPrlVnicMacDriver::openDriver()] IOServiceGetMatchingService:NULL.");
      }
      else {
        iVar2 = _IOServiceOpen(iVar1,*(undefined4 *)PTR__mach_task_self__1021e1c58,0,param_1);
        _IOObjectRelease(iVar1);
        if (iVar2 != 0) {
          uVar4 = 0;
          FUN_100df99c0("","prl_net",0,
                        "[CPrlVnicMacDriver::openDriver()] IOServiceOpen() failed with 0x%08x",iVar2
                       );
        }
      }
    }
  }
  return uVar4;
}

