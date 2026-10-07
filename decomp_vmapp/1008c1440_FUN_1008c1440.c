
void FUN_1008c1440(undefined8 param_1)

{
  int iVar1;
  undefined8 local_40 [7];
  
  local_40[0] = param_1;
  if ((DAT_1011c2a00 != 0) && (iVar1 = FUN_100885160(DAT_1011c2a00,local_40), iVar1 != -1)) {
    FUN_100885620(DAT_1011c2a00,iVar1);
    return;
  }
  FUN_100822740(local_40,&PTR_s_default_100be30c0,5,0x38,FUN_1008c14d0);
  return;
}

