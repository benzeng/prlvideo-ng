
void FUN_00403b30(void)

{
  char *pcVar1;
  long lVar2;
  long local_8;
  
  if (DAT_0061d320 != '\0') {
    return;
  }
  DAT_0061d320 = 1;
  FUN_00403650(g_PrlGLibAPI,8);
  pcVar1 = getenv("DBUS_SESSION_BUS_ADDRESS");
  if ((((pcVar1 == (char *)0x0) || (*(long *)g_PrlGLibAPI._256_8_ == 0)) ||
      (*(long *)(g_PrlGLibAPI._256_8_ + 8) == 0)) || (*(long *)(g_PrlGLibAPI._64_8_ + 8) == 0))
  goto LAB_00403bf7;
  local_8 = 0;
  (**(code **)(g_PrlGLibAPI._64_8_ + 8))();
  lVar2 = (**(code **)g_PrlGLibAPI._256_8_)(0,&local_8);
  if (lVar2 == 0) {
    pcVar1 = "unknown error";
    if (local_8 != 0) goto LAB_00403bbe;
  }
  else {
    if (local_8 == 0) {
      if (*(int *)PTR___log_level_0061bd30 < 2) {
        return;
      }
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"GLib API initialized");
      return;
    }
LAB_00403bbe:
    pcVar1 = *(char **)(local_8 + 8);
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Can\'t open Gnome DBus: %s",pcVar1);
  if (local_8 != 0) {
    (**(code **)(g_PrlGLibAPI._256_8_ + 8))();
  }
LAB_00403bf7:
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Can\'t initialize GLib API");
  FUN_00403b00();
  return;
}

