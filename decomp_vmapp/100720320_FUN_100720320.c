
void FUN_100720320(time_t *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  tm *ptVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  time_t local_38;
  time_t local_30;
  
  uVar1 = FUN_100714a80();
  iVar2 = _strncasecmp((char *)(param_1 + 1),"unlimited",0x1f);
  if (iVar2 == 0) {
    ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"unlimited");
    return;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) != 0) {
      ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"%lu",*param_1);
      return;
    }
    local_38 = *param_1;
    ptVar3 = _localtime(&local_38);
    iVar6 = ptVar3->tm_mon + 1;
    iVar2 = ptVar3->tm_mday;
    iVar4 = ptVar3->tm_year + 0x76c;
    iVar7 = ptVar3->tm_hour;
    iVar9 = ptVar3->tm_sec;
    iVar8 = ptVar3->tm_min;
    pcVar5 = "%02d/%02d/%04d %02d:%02d:%02d";
  }
  else {
    local_30 = *param_1;
    ptVar3 = _gmtime(&local_30);
    iVar6 = ptVar3->tm_year + 0x76c;
    iVar2 = ptVar3->tm_mon + 1;
    iVar4 = ptVar3->tm_mday;
    iVar7 = ptVar3->tm_hour;
    iVar9 = ptVar3->tm_sec;
    iVar8 = ptVar3->tm_min;
    pcVar5 = "%4d-%02d-%02dT%02d:%02d:%02d+0000";
  }
  ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,pcVar5,iVar6,iVar2,iVar4,iVar7,iVar8,
                  iVar9);
  return;
}

