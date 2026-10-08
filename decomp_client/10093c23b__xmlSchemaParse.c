
long _xmlSchemaParse(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long local_20;
  long local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = 0;
  _xmlSchemaInitTypes();
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_18 = FUN_10091e6d9(param_1);
  if (local_18 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar2 = FUN_10092b653(*(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      if (*(long *)(param_1 + 0x30) == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    **(long **)(param_1 + 0x30) = local_18;
    local_c = FUN_10092bf79(param_1,0,*(undefined8 *)(param_1 + 0x50),
                            *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68),
                            *(undefined4 *)(param_1 + 0x70),0,0,0,&local_20);
    if (local_c != -1) {
      if (local_c == 0) {
        if (local_20 == 0) {
          if (*(long *)(param_1 + 0x50) == 0) {
            FUN_10091c684(param_1,0x6dd,0,0,"Failed to locate the main schema resource",0,0);
          }
          else {
            FUN_10091c684(param_1,0x6dd,0,0,"Failed to locate the main schema resource at \'%s\'",
                          *(undefined8 *)(param_1 + 0x50),0);
          }
        }
        else {
          *(long *)(*(long *)(param_1 + 0x30) + 0x18) = local_20;
          *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(local_20 + 0x18);
          *(undefined8 *)(local_18 + 8) = *(undefined8 *)(local_20 + 0x18);
          iVar1 = FUN_10092bb33(param_1,local_18,local_20);
          if (iVar1 == -1) goto LAB_10093c4f4;
          if (*(int *)(param_1 + 0x24) == 0) {
            *(undefined8 *)(local_18 + 0x20) = *(undefined8 *)(local_20 + 0x20);
            *(undefined4 *)(local_18 + 0x88) = *(undefined4 *)(param_1 + 0x60);
            *(long *)(param_1 + 0x40) = local_18;
            iVar1 = FUN_10093bbdf(param_1);
            if (iVar1 == -1) goto LAB_10093c4f4;
          }
        }
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        if (local_18 != 0) {
          _xmlSchemaFree(local_18);
          local_18 = 0;
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          FUN_10092b5c6(*(undefined8 *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
      return local_18;
    }
  }
LAB_10093c4f4:
  if (local_18 != 0) {
    _xmlSchemaFree(local_18);
    local_18 = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10092b5c6(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_10091c652(param_1,"xmlSchemaParse","An internal error occured");
  *(undefined8 *)(param_1 + 0x40) = 0;
  return 0;
}

