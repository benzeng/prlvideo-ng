
undefined8 FUN_100bf8920(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *local_28;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  
  local_28 = local_20;
  local_1c = param_2;
  local_18 = param_3;
  if ((DAT_102311d68 == 0) || (iVar1 = FUN_100c60360(DAT_102311d68,local_20), iVar1 < 0)) {
    ppuVar2 = (undefined1 **)FUN_100bf7eb0(&local_28,&PTR_DAT_10224bb40,0x1b,8,FUN_100bf8b50);
    if (ppuVar2 == (undefined1 **)0x0) {
      return 0;
    }
  }
  else {
    local_28 = (undefined1 *)FUN_100c60820(DAT_102311d68,iVar1);
    ppuVar2 = &local_28;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar2;
  }
  return 1;
}

