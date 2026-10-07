
undefined8 FUN_100112b10(long *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  iVar1 = FUN_1007da300("vm.no_hvt_check",0);
  if ((((iVar1 == 0) && (iVar1 = FUN_1007da300("kernel.hvt_support",1), iVar1 != 0)) &&
      (uVar2 = FUN_100060640(), uVar2 < 6)) && (1 < (long)(int)uVar2 - 3U)) {
    uVar2 = (**(code **)(*param_1 + 0x138))(param_1);
    uVar2 = uVar2 & 3;
    if (uVar2 == 1) {
      pcVar3 = "HVT is accessible";
    }
    else {
      if (uVar2 != 0) {
        if (uVar2 - 2 < 2) {
          FUN_1008e3970("","vm",0,"HVT is not accessible (0x%X)");
          return 0;
        }
        FUN_1008e3970("","vm",0,"Unexpected HVT status (0x%X)");
        return 0x80000001;
      }
      pcVar3 = "HVT is not present";
    }
    FUN_1008e3970("","vm",0,pcVar3);
  }
  return 0;
}

