
undefined1 FUN_100533e80(long *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  iVar2 = FUN_1007da300("vm.snapshot.ballooning",0);
  if (iVar2 != 0) {
    uVar3 = FUN_1007da300("vm.snapshot.ballooning.essential_mem",0x200);
    if (uVar3 < *(uint *)(*param_1 + 0x5ac)) {
      uVar1 = FUN_100533bf0(param_1,((ulong)*(uint *)(*param_1 + 0x5ac) - (ulong)uVar3) * 0x100000,1
                           );
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

