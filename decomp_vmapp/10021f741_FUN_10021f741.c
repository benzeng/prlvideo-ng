
undefined4
FUN_10021f741(int *param_1,uint param_2,xmlChar *param_3,int *param_4,ulong *param_5,int param_6)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  ulong uVar4;
  uint local_1c;
  
  local_1c = 0;
  if ((param_5 == (ulong *)0x0) || (param_1 == (int *)0x0)) {
    return 0xffffffff;
  }
  *param_5 = 0;
  if (((*param_1 != 0x3f1) && (*param_1 != 0x3f2)) && (*param_1 != 0x3f3)) {
    return 0xffffffff;
  }
  if (((*(long *)(param_1 + 0xe) == 0) ||
      ((**(int **)(param_1 + 0xe) != 3 && (**(int **)(param_1 + 0xe) != 0x21)))) ||
     ((*(ulong *)(*(long *)(param_1 + 0xe) + 0x28) & 0xfe00000000) != 0)) {
    return 0xffffffff;
  }
  if ((param_4 == (int *)0x0) || (*param_4 != 0x2b)) {
    if ((param_4 == (int *)0x0) || (*param_4 != 0x2c)) {
      if (param_2 < 0x1e) {
        uVar4 = 1L << ((byte)param_2 & 0x3f);
        if ((uVar4 & 0x21d70000) != 0) {
          if (param_3 != (xmlChar *)0x0) {
            local_1c = FUN_10021f40f(param_3);
          }
          goto LAB_10021f8c9;
        }
        if ((uVar4 & 0x10200000) != 0) {
          return 0;
        }
        if ((uVar4 & 6) != 0) {
          if (param_6 == 0) {
            if (param_2 == 1) {
              local_1c = _xmlUTF8Strlen(param_3);
            }
            else {
              local_1c = FUN_10021f40f(param_3);
            }
          }
          else if (param_3 != (xmlChar *)0x0) {
            if (param_6 == 3) {
              local_1c = FUN_10021f40f(param_3);
            }
            else {
              local_1c = _xmlUTF8Strlen(param_3);
            }
          }
          goto LAB_10021f8c9;
        }
      }
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xmlschemastypes.c",0x1401);
    }
    else {
      local_1c = param_4[6];
    }
  }
  else {
    local_1c = param_4[6];
  }
LAB_10021f8c9:
  *param_5 = (ulong)local_1c;
  if (*param_1 == 0x3f1) {
    if ((ulong)local_1c != *(ulong *)(*(long *)(param_1 + 0xe) + 0x10)) {
      return 0x726;
    }
  }
  else if (*param_1 == 0x3f3) {
    if ((ulong)local_1c < *(ulong *)(*(long *)(param_1 + 0xe) + 0x10)) {
      return 0x727;
    }
  }
  else if (*(ulong *)(*(long *)(param_1 + 0xe) + 0x10) < (ulong)local_1c) {
    return 0x728;
  }
  return 0;
}

