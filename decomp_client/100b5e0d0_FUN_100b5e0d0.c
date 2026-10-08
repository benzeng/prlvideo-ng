
undefined8 FUN_100b5e0d0(int param_1,ulong *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  rlimit local_38;
  
  local_38.rlim_cur = 0;
  local_38.rlim_max = 0;
  iVar2 = _getrlimit(param_1,&local_38);
  if (iVar2 != 0) {
    return 0;
  }
  if (param_3 == 2) {
    bVar3 = true;
    if (local_38.rlim_cur <= *param_2) {
      bVar3 = param_2[1] < local_38.rlim_max;
    }
  }
  else if (param_3 == 1) {
    bVar3 = true;
    if (*param_2 <= local_38.rlim_cur) {
      bVar3 = local_38.rlim_max < param_2[1];
    }
  }
  else {
    if (param_3 != 0) goto LAB_100b5e174;
    bVar3 = true;
    if (local_38.rlim_cur == *param_2) {
      bVar3 = local_38.rlim_max != param_2[1];
    }
  }
  if (bVar3) {
    local_38.rlim_cur = *param_2;
    local_38.rlim_max = param_2[1];
    cVar1 = FUN_100b5e000(param_1,&local_38);
    if (cVar1 == '\0') {
      return 0;
    }
  }
LAB_100b5e174:
  param_2[1] = local_38.rlim_max;
  *param_2 = local_38.rlim_cur;
  return 1;
}

