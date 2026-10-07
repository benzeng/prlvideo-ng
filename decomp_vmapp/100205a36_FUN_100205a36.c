
undefined4 FUN_100205a36(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if (((*param_2 == 4) && (*param_2 != 1)) && ((((uint)param_2[0x16] >> 0x1d ^ 1) & 1) != 0)) {
    param_2[0x16] = param_2[0x16] | 0x20000000;
    if (((uint)param_2[0x16] >> 6 & 1) == 0) {
      if (((uint)param_2[0x16] >> 7 & 1) == 0) {
        if (*(long *)(param_2 + 0x1c) == 0) {
          FUN_1001e8d2a(param_1,"xmlSchemaFixupSimpleTypeStageOne","type has no base-type assigned")
          ;
          return 0xffffffff;
        }
        if (((**(int **)(param_2 + 0x1c) != 1) &&
            (((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 0x1d ^ 1) & 1) != 0)) &&
           (iVar1 = FUN_100205a36(param_1,*(undefined8 *)(param_2 + 0x1c)), iVar1 == -1)) {
          return 0xffffffff;
        }
        if ((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 8 & 1) == 0) {
          if ((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 6 & 1) == 0) {
            if ((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 7 & 1) != 0) {
              param_2[0x16] = param_2[0x16] | 0x80;
            }
          }
          else {
            param_2[0x16] = param_2[0x16] | 0x40;
            *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(*(long *)(param_2 + 0x1c) + 0x38);
          }
        }
        else {
          param_2[0x16] = param_2[0x16] | 0x100;
        }
      }
      else if (*(long *)(param_2 + 0x2a) == 0) {
        FUN_1001e8d2a(param_1,"xmlSchemaFixupSimpleTypeStageOne",
                      "union type has no member-types assigned");
        return 0xffffffff;
      }
    }
    else if (*(long *)(param_2 + 0xe) == 0) {
      FUN_1001e8d2a(param_1,"xmlSchemaFixupSimpleTypeStageOne","list type has no item-type assigned"
                   );
      return 0xffffffff;
    }
  }
  return 0;
}

