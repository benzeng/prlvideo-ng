
undefined4 FUN_10093718f(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_2 + 0x70);
  if ((*(uint *)(lVar1 + 0x58) >> 10 & 1) != 0) {
    FUN_10091dd92(param_1,0xbf7,0,param_2,0,
                  "The \'final\' of the base type definition contains \'restriction\'",0);
    return 0xbf7;
  }
  if (*(int *)(lVar1 + 0xa0) != 0x2d) {
    if ((*(int *)(param_2 + 0x5c) == 4) || (*(int *)(param_2 + 0x5c) == 6)) {
      if (((*(int *)(lVar1 + 0x5c) != 4) && (*(int *)(lVar1 + 0x5c) != 6)) &&
         ((*(int *)(lVar1 + 0x5c) != 3 ||
          (iVar2 = FUN_1009352af(*(undefined8 *)(lVar1 + 0x38)), iVar2 == 0)))) {
        FUN_10091dd92(param_1,0xbf7,0,param_2,0,
                      "The content type of the base type must be either a simple type or \'mixed\' and an emptiable particle"
                      ,0);
        return 0xbf7;
      }
    }
    else if (*(int *)(param_2 + 0x5c) == 1) {
      if ((*(int *)(lVar1 + 0x5c) != 1) &&
         (((*(int *)(lVar1 + 0x5c) != 2 && (*(int *)(lVar1 + 0x5c) != 3)) ||
          (iVar2 = FUN_1009352af(*(undefined8 *)(lVar1 + 0x38)), iVar2 == 0)))) {
        FUN_10091dd92(param_1,0xbf7,0,param_2,0,
                      "The content type of the base type must be either empty or \'mixed\' (or \'elements-only\') and an emptiable particle"
                      ,0);
        return 0xbf7;
      }
    }
    else {
      if ((*(int *)(param_2 + 0x5c) != 2) && (*(int *)(param_2 + 0x5c) != 3)) {
        FUN_10091dd92(param_1,0xbf7,0,param_2,0,
                      "The type is not a valid restriction of its base type",0);
        return 0xbf7;
      }
      if ((*(int *)(param_2 + 0x5c) == 3) && (*(int *)(lVar1 + 0x5c) != 3)) {
        FUN_10091dd92(param_1,0xbf7,0,param_2,0,
                      "If the content type is \'mixed\', then the content type of the base type must also be \'mixed\'"
                      ,0);
        return 0xbf7;
      }
    }
  }
  return 0;
}

