
undefined8 FUN_1006b8100(long param_1,int param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 != 0) {
    if (*(int *)(*param_3 + 4) != 0) {
      uVar2 = CParallelsNetworkConfig::getVirtualNetworks();
      uVar2 = FUN_1006b5b70(uVar2,param_3);
      return uVar2;
    }
    if (param_2 == 2) {
      uVar2 = FUN_1006b7c20(param_1);
      return uVar2;
    }
    if (param_2 == 1) {
      uVar2 = FUN_1006b7a40(param_1);
      return uVar2;
    }
    if (param_2 == 0) {
      iVar1 = FUN_1006d65a0();
      auVar3 = CParallelsNetworkConfig::getVirtualNetworks();
      if (auVar3._0_8_ != 0) {
        uVar2 = FUN_1006b5730(auVar3._0_8_,iVar1 != 0,auVar3._8_8_,iVar1 != 0);
        return uVar2;
      }
      FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","pVirtualNetworks",
                    "netconfig.cpp",0x2c3,"GetHostOnlyNetwork");
    }
  }
  return 0;
}

