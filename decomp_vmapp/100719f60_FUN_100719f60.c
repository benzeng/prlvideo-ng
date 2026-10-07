
undefined4
FUN_100719f60(int param_1,undefined4 param_2,uint param_3,time_t *param_4,time_t *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  tm local_68;
  
  local_68.tm_isdst = 0;
  local_68._36_4_ = 0;
  local_68.tm_gmtoff = 0;
  local_68.tm_mon = 0;
  local_68.tm_year = 0;
  local_68.tm_wday = 0;
  local_68.tm_yday = 0;
  local_68.tm_sec = 0;
  local_68.tm_min = 0;
  local_68.tm_hour = 0;
  local_68.tm_mday = 0;
  local_68.tm_zone = (char *)0x0;
  *param_4 = (ulong)(uint)(param_1 * 0x15180) + 0x45984f00;
  _gmtime_r(param_4,&local_68);
  ___snprintf_chk(param_4 + 1,0x20,0,0xffffffffffffffff,"%02d/%02d/%04d %02d:%02d:%02d",
                  local_68.tm_mon + 1,local_68.tm_mday,local_68.tm_year + 0x76c,local_68.tm_hour,
                  local_68.tm_min,local_68.tm_sec);
  switch(param_2) {
  case 1:
    *param_5 = ((ulong)(param_3 * 90000) - 1) + *param_4;
    _gmtime_r(param_5,&local_68);
    iVar3 = local_68.tm_mon;
    uVar2 = local_68.tm_year;
    goto LAB_10071a203;
  case 2:
    uVar2 = local_68.tm_year + param_3 / 0xc;
    iVar3 = local_68.tm_mon + 1 + param_3 % 0xc;
    if (0xc < iVar3) {
      iVar3 = iVar3 % 0xc;
      uVar2 = uVar2 + 1;
    }
    uVar4 = (ulong)(iVar3 - 1U);
    local_68.tm_year = uVar2;
    local_68.tm_mon = iVar3 - 1U;
LAB_10071a151:
    iVar3 = (int)uVar4;
    *param_5 = (long)(int)(((local_68.tm_hour +
                            (*(int *)(&DAT_100b4a990 + (long)iVar3 * 4) + local_68.tm_mday +
                             uVar2 * 0x16d +
                             ((int)((uVar2 - 0x6d) + ((uint)((int)(uVar2 - 0x6d) >> 0x1f) >> 0x1e))
                             >> 2) + (uint)(1 < iVar3 && (uVar2 & 3) == 0)) * 0x18) * 0x3c +
                           local_68.tm_min) * 0x3c + 0x7c77c880 + local_68.tm_sec);
LAB_10071a203:
    uVar1 = 0;
    ___snprintf_chk(param_5 + 1,0x20,0,0xffffffffffffffff,"%02d/%02d/%04d %02d:%02d:%02d",iVar3 + 1,
                    local_68.tm_mday,uVar2 + 0x76c,local_68.tm_hour,local_68.tm_min,local_68.tm_sec)
    ;
    break;
  case 3:
    if (param_3 != 0x1f) {
      uVar2 = local_68.tm_year + param_3;
      local_68.tm_year = uVar2;
      uVar4 = local_68._16_8_;
      goto LAB_10071a151;
    }
  case 0:
    *param_5 = 0xffff;
    uVar1 = 0;
    ___snprintf_chk(param_5 + 1,0x20,0,0xffffffffffffffff,"unlimited");
    break;
  default:
    uVar1 = FUN_10071e690(0xfffffff4,"invalid ValidUnit value: %d",param_2);
  }
  return uVar1;
}

