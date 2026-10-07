
undefined4 FUN_100113780(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1007da300("vm.no_hvt_check",0);
  if (iVar1 == 0) {
    iVar1 = FUN_1007da300("kernel.hvt_support",1);
    if (iVar1 != 0) {
      uVar2 = FUN_100060640();
      if (uVar2 < 6) {
        return *(undefined4 *)(&DAT_100b2ea90 + (long)(int)uVar2 * 4);
      }
    }
  }
  return 1;
}

