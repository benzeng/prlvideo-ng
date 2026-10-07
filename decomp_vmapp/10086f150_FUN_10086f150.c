
undefined8 FUN_10086f150(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_10086eda0(*(undefined8 *)(param_2 + 0x20),&local_20);
  if (iVar1 < 1) {
    uVar2 = 0x85;
  }
  else {
    uVar2 = FUN_100821870(6);
    iVar1 = FUN_1008b1c50(param_1,uVar2,0,5,0,local_20,iVar1);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x8b;
  }
  FUN_100887ce0(4,0x8a,0x41,"rsa_ameth.c",uVar2);
  return 0;
}

