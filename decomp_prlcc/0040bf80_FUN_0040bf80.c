
undefined8 FUN_0040bf80(void)

{
  DAT_0061d8f8 = open64("/proc/driver/prl_tg",1);
  if (0 < DAT_0061d8f8) {
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Opened %s","/proc/driver/prl_tg");
    }
    return 1;
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Can\'t open %s","/proc/driver/prl_tg");
  return 0;
}

