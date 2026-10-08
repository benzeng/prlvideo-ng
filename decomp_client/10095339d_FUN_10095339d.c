
int FUN_10095339d(int *param_1,undefined4 param_2,uint param_3,xmlChar *param_4,int *param_5,
                 int param_6)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  ulong uVar5;
  int local_50;
  uint local_1c;
  
  if (param_1 == (int *)0x0) {
    return -1;
  }
  switch(*param_1) {
  case 1000:
    iVar2 = _xmlSchemaCompareValues(param_5,*(undefined8 *)(param_1 + 0xe));
    if (iVar2 == -2) {
      local_50 = -1;
    }
    else if ((iVar2 == 1) || (iVar2 == 0)) {
      local_50 = 0;
    }
    else {
      local_50 = 0x729;
    }
    break;
  case 0x3e9:
    iVar2 = _xmlSchemaCompareValues(param_5,*(undefined8 *)(param_1 + 0xe));
    if (iVar2 == -2) {
      local_50 = -1;
    }
    else if (iVar2 == 1) {
      local_50 = 0;
    }
    else {
      local_50 = 0x72b;
    }
    break;
  case 0x3ea:
    iVar2 = _xmlSchemaCompareValues(param_5,*(undefined8 *)(param_1 + 0xe));
    if (iVar2 == -2) {
      local_50 = -1;
    }
    else if ((iVar2 == -1) || (iVar2 == 0)) {
      local_50 = 0;
    }
    else {
      local_50 = 0x72a;
    }
    break;
  case 0x3eb:
    iVar2 = _xmlSchemaCompareValues(param_5,*(undefined8 *)(param_1 + 0xe));
    if (iVar2 == -2) {
      local_50 = -1;
    }
    else if (iVar2 == -1) {
      local_50 = 0;
    }
    else {
      local_50 = 0x72c;
    }
    break;
  case 0x3ec:
  case 0x3ed:
    if ((*(long *)(param_1 + 0xe) == 0) ||
       (((**(int **)(param_1 + 0xe) != 3 && (**(int **)(param_1 + 0xe) != 0x21)) ||
        ((*(ulong *)(*(long *)(param_1 + 0xe) + 0x28) & 0xfe00000000) != 0)))) {
      return -1;
    }
    if ((param_5 == (int *)0x0) ||
       (((((*param_5 != 3 && (*param_5 != 0x1e)) &&
          ((*param_5 != 0x1f && ((*param_5 != 0x20 && (*param_5 != 0x21)))))) && (*param_5 != 0x22))
        && (((((*param_5 != 0x23 && (*param_5 != 0x24)) && (*param_5 != 0x25)) &&
             ((*param_5 != 0x26 && (*param_5 != 0x27)))) &&
            ((*param_5 != 0x28 && ((*param_5 != 0x29 && (*param_5 != 0x2a)))))))))) {
      return -1;
    }
    if (*param_1 == 0x3ec) {
      if (*(ulong *)(*(long *)(param_1 + 0xe) + 0x10) < (ulong)*(byte *)((long)param_5 + 0x2d)) {
        return 0x72d;
      }
    }
    else if ((*param_1 == 0x3ed) &&
            (*(ulong *)(*(long *)(param_1 + 0xe) + 0x10) <
             (ulong)((uint)((ulong)*(undefined8 *)(param_5 + 10) >> 0x21) & 0x7f))) {
      return 0x72e;
    }
    goto LAB_100953a36;
  case 0x3ee:
    if (param_4 == (xmlChar *)0x0) {
      local_50 = -1;
    }
    else {
      local_50 = _xmlRegexpExec(*(xmlRegexpPtr *)(param_1 + 0x10),param_4);
      if (local_50 == 1) {
        local_50 = 0;
      }
      else if (local_50 == 0) {
        local_50 = 0x72f;
      }
    }
    break;
  case 0x3ef:
    if (param_6 == 0) {
      if ((*(long *)(param_1 + 4) != 0) &&
         (iVar2 = _xmlStrEqual(*(xmlChar **)(param_1 + 4),param_4), iVar2 != 0)) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_100952cdc(**(undefined4 **)(param_1 + 0xe),*(undefined8 *)(param_1 + 0xe),
                            *(undefined8 *)(param_1 + 4),param_2,param_3,param_5,param_4,param_6);
      if (iVar2 == -2) {
        return -1;
      }
      if (iVar2 == 0) {
        return 0;
      }
    }
    local_50 = 0x730;
    break;
  case 0x3f0:
    local_50 = 0;
    break;
  case 0x3f1:
    if ((param_3 == 0x15) || (param_3 == 0x1c)) {
      return 0;
    }
  case 0x3f2:
  case 0x3f3:
    local_1c = 0;
    if ((param_3 == 0x15) || (param_3 == 0x1c)) {
      return 0;
    }
    if ((*(long *)(param_1 + 0xe) == 0) ||
       (((**(int **)(param_1 + 0xe) != 3 && (**(int **)(param_1 + 0xe) != 0x21)) ||
        ((*(ulong *)(*(long *)(param_1 + 0xe) + 0x28) & 0xfe00000000) != 0)))) {
      return -1;
    }
    if ((param_5 == (int *)0x0) || (*param_5 != 0x2b)) {
      if ((param_5 == (int *)0x0) || (*param_5 != 0x2c)) {
        if (param_3 < 0x1e) {
          uVar5 = 1L << ((byte)param_3 & 0x3f);
          if ((uVar5 & 0x21d70000) == 0) {
            if ((uVar5 & 6) == 0) goto LAB_100953773;
            if (param_6 == 0) {
              if (param_3 == 1) {
                local_1c = _xmlUTF8Strlen(param_4);
              }
              else {
                local_1c = FUN_100952d37(param_4);
              }
            }
            else if (param_4 != (xmlChar *)0x0) {
              if (param_6 == 3) {
                local_1c = FUN_100952d37(param_4);
              }
              else {
                local_1c = _xmlUTF8Strlen(param_4);
              }
            }
          }
          else if (param_4 != (xmlChar *)0x0) {
            local_1c = FUN_100952d37(param_4);
          }
        }
        else {
LAB_100953773:
          ppxVar3 = ___xmlGenericError();
          pxVar1 = *ppxVar3;
          ppvVar4 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xmlschemastypes.c",0x14f1);
        }
      }
      else {
        local_1c = param_5[6];
      }
    }
    else {
      local_1c = param_5[6];
    }
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
    goto LAB_100953a36;
  default:
    ppxVar3 = ___xmlGenericError();
    pxVar1 = *ppxVar3;
    ppvVar4 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xmlschemastypes.c",0x1524);
LAB_100953a36:
    local_50 = 0;
  }
  return local_50;
}

