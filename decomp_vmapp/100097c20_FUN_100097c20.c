
void FUN_100097c20(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x10818) == 0) &&
     (FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_usb_mouse",
                    "VirtualPCDevices.cpp",0x72d,"TuneMouseForOsxGuest"),
     *(long *)(param_1 + 0x10818) == 0)) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x5c0);
  if ((uVar1 & 0xffffff00) != 0x700) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "IS_MACOS(GetMonitorConfig()->m_VMCfg.m_uOsType)","VirtualPCDevices.cpp",0x732,
                  "TuneMouseForOsxGuest");
    uVar1 = *(uint *)(param_1 + 0x5c0);
  }
  if ((uVar1 & 0xffffff00) != 0x700) {
    return;
  }
  uVar2 = 0x9c4;
  if (0xa09ff < param_2) {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100097d1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10818) + 0x48))(*(long **)(param_1 + 0x10818),uVar2,uVar2);
  return;
}

