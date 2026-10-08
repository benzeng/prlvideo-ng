
undefined8 FUN_100c71370(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *local_e0;
  undefined4 local_d8 [52];
  
  local_e0 = local_d8;
  local_d8[0] = param_1;
  if ((DAT_102311900 != 0) && (iVar1 = FUN_100c60360(DAT_102311900,local_d8), -1 < iVar1)) {
    uVar2 = FUN_100c60820(DAT_102311900,iVar1);
    return uVar2;
  }
  puVar3 = (undefined8 *)FUN_100bf7eb0(&local_e0,&PTR_DAT_102309410,6,8,FUN_100c71dc0);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *puVar3;
  }
  return uVar2;
}

