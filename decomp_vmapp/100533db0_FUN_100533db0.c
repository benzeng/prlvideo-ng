
undefined1 FUN_100533db0(long *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = 0;
  iVar2 = FUN_1007da300("vm.suspend.ballooning",0);
  if (iVar2 != 0) {
    uVar3 = FUN_1007da300("vm.suspend.ballooning.size_mb",0);
    uVar4 = FUN_1007da300("vm.suspend.ballooning.size_percents",0);
    uVar5 = (ulong)*(uint *)(*param_1 + 0x5ac) * 0x100000;
    if (uVar3 == 0) {
      if (uVar4 == 0) {
        uVar3 = FUN_1007da300("vm.suspend.ballooning.essential_mem",0x200);
        uVar6 = uVar5 + (ulong)uVar3 * -0x100000;
        if (uVar5 < (ulong)uVar3 * 0x100000 || uVar6 == 0) {
          return 0;
        }
      }
      else {
        uVar6 = (uVar5 * uVar4) / 100;
      }
    }
    else {
      uVar6 = uVar5;
      if ((ulong)uVar3 << 0x14 <= uVar5) {
        uVar6 = (ulong)uVar3 << 0x14;
      }
    }
    uVar1 = FUN_100533bf0(param_1,uVar6,1);
  }
  return uVar1;
}

