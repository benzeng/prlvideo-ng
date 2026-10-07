
undefined8 FUN_0040bee0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (0 < DAT_0061d8f8) {
    iVar1 = close(DAT_0061d8f8);
    if (iVar1 < 0) {
      DAT_0061d8f8 = 0;
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Can\'t close %s","/proc/driver/prl_tg");
      uVar2 = 0;
    }
    else {
      DAT_0061d8f8 = 0;
      uVar2 = 1;
      if (1 < *(int *)PTR___log_level_0061bd30) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Closed %s","/proc/driver/prl_tg");
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

