
undefined8 FUN_100c9e0e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *local_78;
  int local_70 [26];
  
  local_70[0] = FUN_100bf7220(*param_1);
  uVar3 = 0;
  if (local_70[0] != 0) {
    local_78 = local_70;
    uVar3 = 0;
    if (-1 < local_70[0]) {
      puVar2 = (undefined8 *)FUN_100bf7eb0(&local_78,&PTR_DAT_10230b350,0x28,8,FUN_100c9e7e0);
      if (puVar2 == (undefined8 *)0x0) {
        uVar3 = 0;
        if (DAT_102318448 != 0) {
          iVar1 = FUN_100c60360(DAT_102318448,local_70);
          uVar3 = 0;
          if (iVar1 != -1) {
            uVar3 = FUN_100c60820(DAT_102318448,iVar1);
          }
        }
      }
      else {
        uVar3 = *puVar2;
      }
    }
  }
  return uVar3;
}

