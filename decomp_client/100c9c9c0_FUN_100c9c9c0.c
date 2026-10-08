
void FUN_100c9c9c0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_40 [7];
  
  local_40[0] = param_1;
  if ((DAT_102318440 != 0) && (iVar1 = FUN_100c60360(DAT_102318440,local_40), iVar1 != -1)) {
    FUN_100c60820(DAT_102318440,iVar1);
    return;
  }
  FUN_100bf7eb0(local_40,&PTR_s_default_1022536d0,5,0x38,FUN_100c9ca50);
  return;
}

