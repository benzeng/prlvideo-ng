
undefined4 FUN_100939568(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (*param_2 != 4) {
    return 0xffffffff;
  }
  if ((*param_2 == 1) || ((((uint)param_2[0x16] >> 0x16 ^ 1) & 1) == 0)) {
    return 0;
  }
  param_2[0x16] = param_2[0x16] | 0x400000;
  param_2[0x17] = 4;
  if (*(long *)(param_2 + 0x1c) == 0) {
    FUN_10091c652(param_1,"xmlSchemaFixupSimpleTypeStageTwo","missing baseType");
  }
  else {
    if ((**(int **)(param_2 + 0x1c) != 1) &&
       (((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 0x16 ^ 1) & 1) != 0)) {
      FUN_100939fa8(*(undefined8 *)(param_2 + 0x1c),param_1);
    }
    if ((*(long *)(param_2 + 0x2a) != 0) && (iVar2 = FUN_100938e70(param_1,param_2), iVar2 == -1)) {
      return 0xffffffff;
    }
    iVar2 = FUN_100935976(param_1,param_2);
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        iVar2 = FUN_100935bfb(param_1,param_2);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        if (iVar2 == 0) {
          iVar2 = FUN_10093a530(param_2,param_1);
          if (iVar2 == -1) {
            return 0xffffffff;
          }
          if (iVar2 == 0) {
            if ((*(long *)(param_2 + 0x2c) != 0) ||
               (*(long *)(*(long *)(param_2 + 0x1c) + 0xb0) != 0)) {
              iVar2 = FUN_100937963(param_1,param_2);
              if (iVar2 == -1) {
                return 0xffffffff;
              }
              if (iVar2 != 0) goto LAB_10093974c;
            }
            iVar2 = FUN_100939176(param_2);
            if (iVar2 == -1) {
              return 0xffffffff;
            }
            if (iVar2 == 0) {
              FUN_100938fdd(param_2);
            }
          }
        }
      }
LAB_10093974c:
      if (*(int *)(param_1 + 0x24) == iVar1) {
        return 0;
      }
      return *(undefined4 *)(param_1 + 0x20);
    }
  }
  return 0xffffffff;
}

