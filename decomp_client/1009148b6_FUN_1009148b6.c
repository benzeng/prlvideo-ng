
undefined4 FUN_1009148b6(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_24;
  int local_10;
  int local_c;
  
  cVar1 = **(char **)(param_1 + 8);
  if (((cVar1 == '?') || (cVar1 == '*')) || (cVar1 == '+')) {
    if (*(long *)(param_1 + 0x30) != 0) {
      if (cVar1 == '?') {
        *(undefined4 *)(*(long *)(param_1 + 0x30) + 8) = 3;
      }
      else if (cVar1 == '*') {
        *(undefined4 *)(*(long *)(param_1 + 0x30) + 8) = 4;
      }
      else if (cVar1 == '+') {
        *(undefined4 *)(*(long *)(param_1 + 0x30) + 8) = 5;
      }
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    local_24 = 1;
  }
  else if (cVar1 == '{') {
    local_10 = 0;
    local_c = 0;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    iVar2 = FUN_100914826(param_1);
    if (-1 < iVar2) {
      local_10 = iVar2;
    }
    iVar2 = local_c;
    if (**(char **)(param_1 + 8) == ',') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      if (**(char **)(param_1 + 8) == '}') {
        local_c = 0x7fffffff;
        iVar2 = local_c;
      }
      else {
        iVar2 = FUN_100914826(param_1);
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0x10) = 0x5aa;
          FUN_10090b6dd(param_1,"Improper quantifier");
          iVar2 = local_c;
        }
      }
    }
    local_c = iVar2;
    if (**(char **)(param_1 + 8) == '}') {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0x5aa;
      FUN_10090b6dd(param_1,"Unterminated quantifier");
    }
    if (local_c == 0) {
      local_c = local_10;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x30) + 8) = 8;
      *(int *)(*(long *)(param_1 + 0x30) + 0xc) = local_10;
      *(int *)(*(long *)(param_1 + 0x30) + 0x10) = local_c;
    }
    local_24 = 1;
  }
  else {
    local_24 = 0;
  }
  return local_24;
}

