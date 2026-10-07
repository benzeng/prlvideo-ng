
int FUN_1003fac50(void)

{
  char *pcVar1;
  
  if (DAT_101119c88 != -1) {
    return DAT_101119c88;
  }
  DAT_101119c88 = FUN_1007da300("devices.hdd.oscache",0);
  switch(DAT_101119c88) {
  case 0:
    DAT_101119c88 = 3;
    return 3;
  case 1:
    pcVar1 = "Disk caching is enabled by user";
    break;
  case 2:
    pcVar1 = "Disk caching is disabled by user";
    break;
  case 3:
    pcVar1 = "Disk cache enabled on write and disabled on read by user";
    break;
  case 4:
    pcVar1 = "Disk cache enabled on write and disabled for sequential read by user";
    break;
  default:
    goto switchD_1003fac8c_default;
  }
  FUN_1008e3970("","HddUtils",0,pcVar1);
switchD_1003fac8c_default:
  return DAT_101119c88;
}

