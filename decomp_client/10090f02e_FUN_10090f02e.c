
uint FUN_10090f02e(long param_1,long param_2)

{
  uint uVar1;
  xmlGenericErrorFunc pxVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  uint local_40;
  uint local_1c;
  
  if (param_1 == param_2) {
    return 1;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 2) {
    local_1c = (uint)(*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c));
LAB_10090f0e1:
    if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
      local_1c = (uint)(local_1c == 0);
    }
    local_40 = local_1c;
  }
  else {
    if (uVar1 < 3) {
      if (uVar1 == 1) {
        return 1;
      }
    }
    else {
      if (uVar1 == 3) {
        ppxVar3 = ___xmlGenericError();
        pxVar2 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar4,"Unimplemented block at %s:%d\n","xmlregexp.c",0x76f);
        return 0;
      }
      if (uVar1 == 5) {
        local_1c = FUN_1009111e0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
        goto LAB_10090f0e1;
      }
    }
    local_40 = 1;
  }
  return local_40;
}

