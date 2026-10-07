
undefined8 FUN_1008231b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

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
  if ((DAT_1011ccfc8 == 0) || (iVar1 = FUN_100885160(DAT_1011ccfc8,local_20), iVar1 < 0)) {
    ppuVar2 = (undefined1 **)FUN_100822740(&local_28,&PTR_DAT_100bdb800,0x1b,8,FUN_1008233e0);
    if (ppuVar2 == (undefined1 **)0x0) {
      return 0;
    }
  }
  else {
    local_28 = (undefined1 *)FUN_100885620(DAT_1011ccfc8,iVar1);
    ppuVar2 = &local_28;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar2;
  }
  return 1;
}

