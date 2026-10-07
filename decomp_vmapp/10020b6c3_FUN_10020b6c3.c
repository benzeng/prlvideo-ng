
undefined4 FUN_10020b6c3(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_4c;
  undefined8 *local_28;
  int *local_20;
  undefined8 *local_10;
  
  local_28 = (undefined8 *)0x0;
  local_20 = *(int **)(param_2 + 0xc0);
  if (local_20 == (int *)0x0) {
    local_4c = 0;
  }
  else if (*(long *)(*(long *)(param_1 + 0xb8) + 0x68) == 0) {
    do {
      if ((*local_20 == 0x18) && (*(long *)(*(long *)(local_20 + 0x12) + 8) != 0)) {
        for (local_10 = *(undefined8 **)(param_1 + 0xc0);
            (local_10 != (undefined8 *)0x0 &&
            (local_10[1] != *(long *)(*(long *)(local_20 + 0x12) + 8)));
            local_10 = (undefined8 *)*local_10) {
        }
        if (local_10 == (undefined8 *)0x0) {
          FUN_1001e8d2a(param_1,"xmlSchemaIDCRegisterMatchers",
                        "Could not find an augmented IDC item for an IDC definition");
          return 0xffffffff;
        }
        if ((*(int *)(local_10 + 2) == -1) || (*(int *)(param_1 + 0xa4) < *(int *)(local_10 + 2))) {
          *(undefined4 *)(local_10 + 2) = *(undefined4 *)(param_1 + 0xa4);
        }
      }
      for (local_10 = *(undefined8 **)(param_1 + 0xc0);
          (local_10 != (undefined8 *)0x0 && ((int *)local_10[1] != local_20));
          local_10 = (undefined8 *)*local_10) {
      }
      if (local_10 == (undefined8 *)0x0) {
        FUN_1001e8d2a(param_1,"xmlSchemaIDCRegisterMatchers",
                      "Could not find an augmented IDC item for an IDC definition");
        return 0xffffffff;
      }
      puVar2 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_1001e835c(param_1,"allocating an IDC matcher",0);
        return 0xffffffff;
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      if (local_28 == (undefined8 *)0x0) {
        *(undefined8 **)(*(long *)(param_1 + 0xb8) + 0x68) = puVar2;
      }
      else {
        local_28[1] = puVar2;
      }
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)((long)puVar2 + 4) = *(undefined4 *)(param_1 + 0xa4);
      puVar2[2] = local_10;
      iVar1 = FUN_10020a275(param_1,puVar2,*(undefined8 *)(local_20 + 0xc),1);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      local_20 = *(int **)(local_20 + 4);
      local_28 = puVar2;
    } while (local_20 != (int *)0x0);
    local_4c = 0;
  }
  else {
    FUN_1001e8d2a(param_1,"xmlSchemaIDCRegisterMatchers",
                  "The chain of IDC matchers is expected to be empty");
    local_4c = 0xffffffff;
  }
  return local_4c;
}

