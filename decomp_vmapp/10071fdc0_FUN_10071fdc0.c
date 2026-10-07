
int FUN_10071fdc0(ulong *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  tm *ptVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  ulong local_40;
  char *local_38;
  
  iVar2 = _memcmp("unlimited",param_2,9);
  iVar6 = 0;
  if (iVar2 != 0) {
    lVar3 = 0;
    while( true ) {
      cVar1 = param_2[lVar3];
      if ((((cVar1 == '\0') || (cVar1 == ':')) || (param_3 == lVar3)) || (9 < (int)cVar1 - 0x30U))
      break;
      lVar3 = lVar3 + 1;
    }
    pcVar7 = (char *)0x0;
    if (((param_2 + lVar3 != param_2 + param_3) && (cVar1 != '\0')) &&
       (pcVar7 = param_2 + lVar3, cVar1 != ':')) {
      pcVar7 = (char *)0x0;
    }
    if ((pcVar7 == (char *)0x0) && (DAT_1011ccb68 == 0)) {
      return -2;
    }
    if (pcVar7 == (char *)0x0) {
      *param_1 = 0;
      iVar6 = 0;
    }
    else {
      local_40 = _strtoul(param_2,&local_38,10);
      *param_1 = local_40;
      if (local_38 != pcVar7) {
        return -2;
      }
      iVar6 = (int)pcVar7 - (int)param_2;
      if (-1 < iVar6) {
        ptVar4 = _localtime((time_t *)&local_40);
        ___snprintf_chk(param_1 + 1,0x20,0,0xffffffffffffffff,"%02d/%02d/%04d %02d:%02d:%02d",
                        ptVar4->tm_mon + 1,ptVar4->tm_mday,ptVar4->tm_year + 0x76c,ptVar4->tm_hour,
                        ptVar4->tm_min,ptVar4->tm_sec);
        return param_3;
      }
      iVar6 = iVar6 + 1;
    }
  }
  sVar5 = 0x1f;
  if (param_3 - iVar6 < 0x20) {
    sVar5 = (long)(param_3 - iVar6);
  }
  _memcpy(param_1 + 1,param_2 + iVar6,sVar5);
  *(undefined1 *)(sVar5 + 8 + (long)param_1) = 0;
  return param_3;
}

