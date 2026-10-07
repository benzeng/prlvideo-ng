
void FUN_0040d110(void)

{
  memset(&dbus_syms,0,0x68);
  if (DAT_0061d988 != 0) {
    dlclose();
    DAT_0061d988 = 0;
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"DBus lib unloaded");
      return;
    }
  }
  return;
}

