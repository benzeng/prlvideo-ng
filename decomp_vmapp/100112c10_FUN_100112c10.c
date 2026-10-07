
undefined8 FUN_100112c10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_1c;
  
  uVar2 = 0;
  local_1c = FUN_1007da300("vm.print_cpuid",0);
  iVar1 = FUN_100683330(param_1 + 0xc,0x6004781a,&local_1c,4,0);
  if (iVar1 == 0) {
    if (local_1c == 0) {
      FUN_1008e3970("","vm",0,"Real cpus are different");
      uVar2 = 0x80000470;
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Failed to verify CPU symmetry");
    uVar2 = 0x80000198;
  }
  return uVar2;
}

