
undefined8 * FUN_1007c8b40(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_10008d4c0(&local_40,*(long *)(param_2 + 0x10) + 0x20);
  local_38 = (undefined8 *)(local_40 + 0x10 + (long)*(int *)(local_40 + 8) * 8);
  local_30 = (undefined8 *)(local_40 + 0x10 + (long)*(int *)(local_40 + 0xc) * 8);
  if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
    do {
      local_28 = 1;
      uVar1 = *local_38;
      iVar2 = QHostAddress::protocol();
      if (iVar2 == 0) {
        FUN_1002d2be0(param_1,uVar1);
      }
      local_38 = local_38 + 1;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  FUN_10008c780(&local_40);
  return param_1;
}

