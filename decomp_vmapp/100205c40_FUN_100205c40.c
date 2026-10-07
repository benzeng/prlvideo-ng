
undefined4 FUN_100205c40(long param_1,int *param_2)

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
    FUN_1001e8d2a(param_1,"xmlSchemaFixupSimpleTypeStageTwo","missing baseType");
  }
  else {
    if ((**(int **)(param_2 + 0x1c) != 1) &&
       (((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 0x16 ^ 1) & 1) != 0)) {
      FUN_100206680(*(undefined8 *)(param_2 + 0x1c),param_1);
    }
    if ((*(long *)(param_2 + 0x2a) != 0) && (iVar2 = FUN_100205548(param_1,param_2), iVar2 == -1)) {
      return 0xffffffff;
    }
    iVar2 = FUN_10020204e(param_1,param_2);
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        iVar2 = FUN_1002022d3(param_1,param_2);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        if (iVar2 == 0) {
          iVar2 = FUN_100206c08(param_2,param_1);
          if (iVar2 == -1) {
            return 0xffffffff;
          }
          if (iVar2 == 0) {
            if ((*(long *)(param_2 + 0x2c) != 0) ||
               (*(long *)(*(long *)(param_2 + 0x1c) + 0xb0) != 0)) {
              iVar2 = FUN_10020403b(param_1,param_2);
              if (iVar2 == -1) {
                return 0xffffffff;
              }
              if (iVar2 != 0) goto LAB_100205e24;
            }
            iVar2 = FUN_10020584e(param_2);
            if (iVar2 == -1) {
              return 0xffffffff;
            }
            if (iVar2 == 0) {
              FUN_1002056b5(param_2);
            }
          }
        }
      }
LAB_100205e24:
      if (*(int *)(param_1 + 0x24) == iVar1) {
        return 0;
      }
      return *(undefined4 *)(param_1 + 0x20);
    }
  }
  return 0xffffffff;
}

