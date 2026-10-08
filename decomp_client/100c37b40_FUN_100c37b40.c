
undefined8 FUN_100c37b40(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100c26b50(param_1 + 0x68,param_2 + 0x68);
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = FUN_100c26b50(param_1 + 0x98,param_2 + 0x98);
    if (lVar1 != 0) {
      lVar1 = FUN_100c26b50(param_1 + 0xb0,param_2 + 0xb0);
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

