
undefined8 FUN_1004dcfe0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x1f8))();
  if (lVar1 != 0) {
    uVar2 = FUN_10044e6a0(lVar1);
    return uVar2;
  }
  return 0x8f;
}

