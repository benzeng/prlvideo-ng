
undefined1 FUN_100b5e000(int param_1,ulong *param_2)

{
  int iVar1;
  uid_t uVar2;
  int *piVar3;
  undefined1 uVar4;
  rlimit local_28;
  
  local_28.rlim_cur = *param_2;
  local_28.rlim_max = param_2[1];
  if ((param_1 == 8) && (0x2800 < local_28.rlim_max)) {
    local_28.rlim_max = 0x2800;
  }
  if (local_28.rlim_max < local_28.rlim_cur) {
    local_28.rlim_cur = local_28.rlim_max;
  }
  iVar1 = _setrlimit(param_1,&local_28);
  if (iVar1 == 0) {
    param_2[1] = local_28.rlim_max;
    *param_2 = local_28.rlim_cur;
    uVar4 = 1;
  }
  else {
    piVar3 = ___error();
    if (*piVar3 == 1) {
      uVar2 = _geteuid();
      uVar4 = 0;
      if ((uVar2 != 0) && (0 < DAT_10230ffd0)) {
        uVar4 = 0;
        FUN_100df99c0("","RLimits",1,"Failed to setrlimit %d under non-root user",param_1);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

