
undefined8 FUN_100c4a350(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_100c49fa0(*(undefined8 *)(param_2 + 0x20),&local_20);
  if (iVar1 < 1) {
    uVar2 = 0x85;
  }
  else {
    uVar2 = FUN_100bf6fe0(6);
    iVar1 = FUN_100c8d1d0(param_1,uVar2,0,5,0,local_20,iVar1);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x8b;
  }
  FUN_100c62ee0(4,0x8a,0x41,"rsa_ameth.c",uVar2);
  return 0;
}

