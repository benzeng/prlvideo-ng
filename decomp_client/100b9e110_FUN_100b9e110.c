
void FUN_100b9e110(time_t *param_1,undefined8 param_2,int param_3)

{
  tm local_50;
  
  _localtime_r(param_1,&local_50);
  ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"%02d/%02d/%04d %02d:%02d:%02d",
                  local_50.tm_mon + 1,local_50.tm_mday,local_50.tm_year + 0x76c,local_50.tm_hour,
                  local_50.tm_min,local_50.tm_sec);
  return;
}

