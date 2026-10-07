
undefined8 FUN_1006b7990(undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar1 = FUN_1006d65a0();
  if (iVar1 == 0) {
    uVar4 = 0;
    if (param_2 != 0xffffffff) {
      uVar4 = param_2;
    }
  }
  else {
    uVar4 = param_2;
    if (param_2 + 1 < 2) {
      uVar4 = 1;
    }
  }
  lVar2 = CParallelsNetworkConfig::getVirtualNetworks();
  if (lVar2 == 0) {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","pVirtualNetworks",
                  "netconfig.cpp",0x2c3,"GetHostOnlyNetwork");
    return 0;
  }
  uVar3 = FUN_1006b5730(lVar2,uVar4 & 0xfffffff);
  return uVar3;
}

