
undefined4 FUN_1009432d1(long param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_4c;
  
  piVar1 = *(int **)(*(long *)(param_1 + 0xb8) + 0x50);
  if (((param_2 == (undefined4 *)0x0) || (piVar1 == (int *)0x0)) || (*piVar1 != 2)) {
    FUN_10091c652(param_1,"xmlSchemaValidateElemWildcard","bad arguments");
    local_4c = 0xffffffff;
  }
  else {
    *param_2 = 0;
    if (piVar1[10] == 1) {
      *param_2 = 1;
      local_4c = 0;
    }
    else {
      lVar3 = FUN_100920924(*(undefined8 *)(param_1 + 0x28),
                            *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),
                            *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20));
      if (lVar3 == 0) {
        if (piVar1[10] == 3) {
          FUN_10091c684(param_1,0x735,0,piVar1,
                        "No matching global element declaration available, but demanded by the strict wildcard"
                        ,0,0);
          local_4c = *(undefined4 *)(param_1 + 0x60);
        }
        else {
          if ((*(int *)(param_1 + 0x118) != 0) && (lVar3 = FUN_10093cac5(param_1,1), lVar3 != 0)) {
            iVar2 = FUN_100941a5a(param_1,lVar3,*(long *)(param_1 + 0xb8) + 0x38,0);
            if (iVar2 == -1) {
              FUN_10091c652(param_1,"xmlSchemaValidateElemWildcard",
                            "calling xmlSchemaProcessXSIType() to process the attribute \'xsi:nil\'"
                           );
              return 0xffffffff;
            }
            return 0;
          }
          lVar3 = *(long *)(param_1 + 0xb8);
          uVar4 = _xmlSchemaGetBuiltInType(0x2d);
          *(undefined8 *)(lVar3 + 0x38) = uVar4;
          local_4c = 0;
        }
      }
      else {
        *(long *)(*(long *)(param_1 + 0xb8) + 0x50) = lVar3;
        local_4c = 0;
      }
    }
  }
  return local_4c;
}

