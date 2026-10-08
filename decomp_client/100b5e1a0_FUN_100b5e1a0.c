
void FUN_100b5e1a0(ulong param_1)

{
  char cVar1;
  int iVar2;
  uid_t uVar3;
  int *piVar4;
  char *pcVar5;
  intmax_t iVar6;
  rlim_t rVar7;
  ulong uVar8;
  rlimit local_38;
  rlimit local_28;
  
  local_38.rlim_cur = 0;
  local_38.rlim_max = 0;
  iVar2 = _getrlimit(8,&local_38);
  if (iVar2 == 0) {
    pcVar5 = _getenv("PRL_RLIMIT_NOFILE");
    if (pcVar5 != (char *)0x0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("","RLimits",1,"PRL_RLIMIT_NOFILE env var value %s",pcVar5);
      }
      local_28.rlim_cur = 0;
      iVar6 = _strtoimax(pcVar5,(char **)&local_28,10);
      uVar8 = param_1;
      if (*(char *)local_28.rlim_cur == '\0') {
        uVar8 = (long)(int)iVar6;
      }
      if ((int)iVar6 != 0) {
        param_1 = uVar8;
      }
    }
    if ((param_1 != 0) ||
       ((local_38.rlim_cur != 0 &&
        (param_1 = local_38.rlim_cur, local_38.rlim_cur != local_38.rlim_max)))) {
      uVar3 = _geteuid();
      if ((uVar3 != 0) && (local_38.rlim_max < param_1)) {
        param_1 = local_38.rlim_max;
      }
      local_28.rlim_cur = 0;
      local_28.rlim_max = 0;
      iVar2 = _getrlimit(8,&local_28);
      if ((iVar2 == 0) &&
         (((local_28.rlim_cur == param_1 && (rVar7 = param_1, local_28.rlim_max == param_1)) ||
          (local_28.rlim_cur = param_1, local_28.rlim_max = param_1,
          cVar1 = FUN_100b5e000(8,&local_28), rVar7 = local_28.rlim_cur, cVar1 != '\0')))) {
        iVar2 = (int)rVar7;
        pcVar5 = "RLIMIT_NOFILE was changed %u/%u -> %u/%u";
        param_1 = local_38.rlim_cur;
        uVar8 = local_38.rlim_max;
      }
      else {
        piVar4 = ___error();
        iVar2 = *piVar4;
        pcVar5 = "Error: Failed to set RLIMIT_NOFILE to %u/%u error %d";
        uVar8 = param_1;
      }
      FUN_100df99c0("","RLimits",0,pcVar5,param_1 & 0xffffffff,uVar8 & 0xffffffff,iVar2);
    }
  }
  else {
    piVar4 = ___error();
    FUN_100df99c0("","RLimits",0,"Error: Failed to get current RLIMIT_NOFILE %d",*piVar4);
  }
  return;
}

