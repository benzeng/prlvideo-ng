
undefined4 FUN_10023e4bf(long param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_1c;
  int *local_10;
  
  local_1c = 0;
  bVar1 = false;
  for (local_10 = param_2; local_10 != (int *)0x0; local_10 = *(int **)(local_10 + 0x10)) {
    if (*local_10 == 9) {
      iVar2 = FUN_10023e0fc(param_1,local_10);
      if (iVar2 != 0) {
        local_1c = 0xffffffff;
      }
    }
    else {
      bVar1 = true;
    }
  }
  local_10 = param_2;
  if (bVar1) {
    for (; local_10 != (int *)0x0; local_10 = *(int **)(local_10 + 0x10)) {
      if (*local_10 != 9) {
        if ((*(long *)(param_1 + 0x60) == 0) && (*(long *)(param_1 + 0x68) == 0)) {
          FUN_100230bfa(param_1,6,0,0,0);
          return 0xffffffff;
        }
        iVar2 = FUN_1002418f5(param_1,local_10);
        if (iVar2 < 0) {
          local_1c = 0xffffffff;
        }
        if (iVar2 == -1) break;
      }
    }
    local_3c = local_1c;
  }
  else {
    local_3c = local_1c;
  }
  return local_3c;
}

