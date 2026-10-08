
undefined8 FUN_100ace7a0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1000a9690(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000b7a60(lVar1,param_2);
  }
  return uVar2;
}

