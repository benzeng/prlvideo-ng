
int FUN_1009434a1(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int local_34;
  int local_14;
  
  local_14 = 0;
  lVar1 = *(long *)(param_1 + 0xb8);
  if ((((**(int **)(lVar1 + 0x38) == 5) || (*(int *)(*(long *)(lVar1 + 0x38) + 0xa0) == 0x2d)) &&
      (*(int *)(*(long *)(lVar1 + 0x38) + 0x5c) != 4)) &&
     (*(int *)(*(long *)(lVar1 + 0x38) + 0x5c) != 6)) {
    if (*(int *)(*(long *)(lVar1 + 0x38) + 0x5c) == 3) {
      iVar2 = FUN_1009352af(*(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x38));
      if (iVar2 != 0) goto LAB_100943576;
    }
    FUN_10091c684(param_1,0xbf3,0,0,
                  "For a string to be a valid default, the type definition must be a simple type or a complex type with simple content or mixed content and a particle emptiable"
                  ,0,0);
    local_34 = 0xbf3;
  }
  else {
LAB_100943576:
    if ((**(int **)(lVar1 + 0x38) == 4) ||
       ((**(int **)(lVar1 + 0x38) == 1 && (*(int *)(*(long *)(lVar1 + 0x38) + 0xa0) != 0x2d)))) {
      local_14 = FUN_100940cd5(param_1,0,*(undefined8 *)(lVar1 + 0x38),param_2,param_3,1,1,0);
    }
    else if ((*(int *)(*(long *)(lVar1 + 0x38) + 0x5c) == 4) ||
            (*(int *)(*(long *)(lVar1 + 0x38) + 0x5c) == 6)) {
      local_14 = FUN_100940cd5(param_1,0,*(undefined8 *)(*(long *)(lVar1 + 0x38) + 0xc0),param_2,
                               param_3,1,1,0);
    }
    if (local_14 < 0) {
      FUN_10091c652(param_1,"xmlSchemaCheckCOSValidDefault","calling xmlSchemaVCheckCVCSimpleType()"
                   );
    }
    local_34 = local_14;
  }
  return local_34;
}

