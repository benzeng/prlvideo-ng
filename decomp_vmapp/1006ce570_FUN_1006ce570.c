
int FUN_1006ce570(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","m_h == 0",
                  "prlnet_drv_mac.cpp",0x21,"open_prlnet");
  }
  lVar3 = _IOServiceMatching("com_parallels_kext_Prlnet");
  if ((lVar3 != 0) &&
     (iVar1 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar3)
     , iVar1 != 0)) {
    iVar2 = _IOServiceOpen(iVar1,*(undefined4 *)PTR__mach_task_self__100ba25d0,0,
                           (undefined4 *)(param_1 + 8));
    _IOObjectRelease(iVar1);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    return iVar2;
  }
  FUN_1008e3970("","prl_net",0,"Failed to match service %s","com_parallels_kext_Prlnet");
  return 5;
}

