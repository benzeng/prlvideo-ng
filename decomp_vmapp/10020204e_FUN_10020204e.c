
undefined4 FUN_10020204e(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  long local_18;
  int *local_10;
  
  local_10 = *(int **)(param_2 + 0x70);
  local_18 = 0;
  if (local_10 == (int *)0x0) {
    FUN_1001ea46a(param_1,0xbc0,0,param_2,0,"No base type existent",0);
    local_2c = 0xbc0;
  }
  else if ((*local_10 == 4) || ((*local_10 == 1 && (local_10[0x28] != 0x2d)))) {
    if ((((*(uint *)(param_2 + 0x58) >> 6 & 1) == 0) && ((*(uint *)(param_2 + 0x58) >> 7 & 1) == 0))
       || ((((*(uint *)(param_2 + 0x58) >> 2 ^ 1) & 1) == 0 ||
           ((*local_10 == 1 && (local_10[0x28] == 0x2e)))))) {
      if (((*(uint *)(param_2 + 0x58) >> 8 & 1) == 0) &&
         (((*(uint *)(param_2 + 0x58) >> 7 & 1) == 0 && ((*(uint *)(param_2 + 0x58) >> 6 & 1) == 0))
         )) {
        FUN_1001ea46a(param_1,0xbc0,0,param_2,0,"The variety is absent",0);
        local_2c = 0xbc0;
      }
      else {
        iVar1 = FUN_1002015bb(local_10,0x400);
        if (iVar1 == 0) {
          local_2c = 0;
        }
        else {
          uVar2 = FUN_1001e70ae(&local_18,local_10);
          FUN_1001ea46a(param_1,0xbc2,0,param_2,0,
                        "The \'final\' of its base type \'%s\' must not contain \'restriction\'",
                        uVar2);
          if (local_18 != 0) {
            (*(code *)_xmlFree)(local_18);
          }
          local_2c = 0xbc2;
        }
      }
    }
    else {
      uVar2 = FUN_1001e70ae(&local_18,local_10);
      FUN_1001ea46a(param_1,0xbc0,0,param_2,0,
                    "A type, derived by list or union, must havethe simple ur-type definition as base type, not \'%s\'"
                    ,uVar2);
      if (local_18 != 0) {
        (*(code *)_xmlFree)(local_18);
      }
      local_2c = 0xbc0;
    }
  }
  else {
    uVar2 = FUN_1001e70ae(&local_18,local_10);
    FUN_1001ea46a(param_1,0xbc0,0,param_2,0,"The base type \'%s\' is not a simple type",uVar2);
    if (local_18 != 0) {
      (*(code *)_xmlFree)(local_18);
    }
    local_2c = 0xbc0;
  }
  return local_2c;
}

