
undefined4 FUN_100295dc0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 local_920 [32];
  undefined8 local_900;
  undefined1 local_858 [2104];
  
  ___bzero(local_920,0x900);
  local_900 = 0xffffffffffffffff;
  lVar2 = param_1 + 0x137b8;
  FUN_1004035a0(lVar2,local_920,*(undefined8 *)(param_1 + 0x1008),13000000);
  uVar1 = FUN_100403020(lVar2,0,0);
  FUN_1004033b0(lVar2,local_920);
  *(undefined1 *)(param_2 + 0x38) = 0x50;
  FUN_10008d470(local_858);
  return uVar1;
}

