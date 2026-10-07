
int FUN_100233097(int *param_1,int *param_2)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  int local_19c;
  undefined1 local_188 [56];
  undefined4 local_150;
  undefined1 local_c8 [16];
  undefined *local_b8;
  undefined1 local_98 [16];
  undefined *local_88;
  undefined1 *local_50;
  int local_1c;
  
  local_1c = 1;
  _memset(local_188,0,0xc0);
  local_150 = 9;
  if ((*param_1 == 4) || (*param_1 == 9)) {
    if (*param_2 == 3) {
      return 1;
    }
    if (*(long *)(param_1 + 4) == 0) {
      local_88 = PTR_s__1011151b8;
    }
    else {
      local_88 = *(undefined **)(param_1 + 4);
    }
    if (*(long *)(param_1 + 6) == 0) {
      local_50 = (undefined1 *)0x0;
    }
    else if (**(char **)(param_1 + 6) == '\0') {
      local_50 = (undefined1 *)0x0;
    }
    else {
      local_50 = local_c8;
      local_b8 = *(undefined **)(param_1 + 6);
    }
    iVar2 = FUN_10023f20b(local_188,param_2,local_98);
    if (iVar2 == 0) {
      local_1c = 1;
    }
    else if (*(long *)(param_1 + 0x14) == 0) {
      local_1c = 0;
    }
    else {
      local_1c = FUN_100233097(*(undefined8 *)(param_1 + 0x14),param_2);
    }
  }
  else {
    if (*param_1 == 3) {
      if (*param_2 == 3) {
        return 0;
      }
      return 1;
    }
    if (*param_1 == 2) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","relaxng.c",0xece);
      local_1c = 0;
    }
    else {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","relaxng.c",0xed0);
      local_1c = 0;
    }
  }
  if (local_1c == 0) {
    local_19c = local_1c;
  }
  else {
    if ((*param_2 == 4) || (*param_2 == 9)) {
      if (*(long *)(param_2 + 4) == 0) {
        local_88 = PTR_s__1011151b8;
      }
      else {
        local_88 = *(undefined **)(param_2 + 4);
      }
      local_50 = local_c8;
      if (*(long *)(param_2 + 6) == 0) {
        local_b8 = PTR_s__1011151b8;
      }
      else if (**(char **)(param_2 + 6) == '\0') {
        local_50 = (undefined1 *)0x0;
      }
      else {
        local_b8 = *(undefined **)(param_2 + 6);
      }
      iVar2 = FUN_10023f20b(local_188,param_1,local_98);
      if (iVar2 == 0) {
        local_1c = 1;
      }
      else if (*(long *)(param_2 + 0x14) == 0) {
        local_1c = 0;
      }
      else {
        local_1c = FUN_100233097(*(undefined8 *)(param_2 + 0x14),param_1);
      }
    }
    else {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","relaxng.c",0xeef);
      local_1c = 0;
    }
    local_19c = local_1c;
  }
  return local_19c;
}

