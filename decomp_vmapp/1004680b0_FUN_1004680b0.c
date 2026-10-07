
undefined8 FUN_1004680b0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 8) == 0x8011) {
    uVar1 = FUN_100467cd0();
    return uVar1;
  }
  if (*(int *)(param_2 + 8) == 0x8010) {
    uVar1 = FUN_100467a50(param_1 + -0x10);
    return uVar1;
  }
  return 0;
}

