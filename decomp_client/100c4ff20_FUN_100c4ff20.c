
undefined8 FUN_100c4ff20(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100c4fc00();
  if (lVar1 != 0) {
    uVar2 = FUN_100bf5310(lVar1 + 0x20,param_2);
    return uVar2;
  }
  return 0;
}

