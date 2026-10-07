
undefined8
FUN_100894da0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 local_48;
  int local_44;
  
  if (param_2 == 0) {
    return 0;
  }
  local_48 = param_1;
  local_44 = param_2;
  if ((((DAT_1011c2970 == 0) || (iVar1 = FUN_100885160(DAT_1011c2970,&local_48), iVar1 == -1)) ||
      (lVar2 = FUN_100885620(DAT_1011c2970,iVar1), lVar2 == 0)) &&
     (lVar2 = FUN_100822740(&local_48,&DAT_100be0ca0,0x15,0x18,FUN_100895060), lVar2 == 0)) {
    return 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(lVar2 + 0xc);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(lVar2 + 0x10);
  }
  return 1;
}

