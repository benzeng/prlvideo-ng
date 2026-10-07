
undefined8 FUN_100823110(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_30 [4];
  
  local_30[0] = param_1;
  if ((((DAT_1011ccfc0 == 0) || (iVar1 = FUN_100885160(DAT_1011ccfc0,local_30), iVar1 < 0)) ||
      (lVar2 = FUN_100885620(DAT_1011ccfc0,iVar1), lVar2 == 0)) &&
     (lVar2 = FUN_100822740(local_30,&DAT_100b51f60,0x1e,0xc,FUN_1008233d0), lVar2 == 0)) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  return 1;
}

