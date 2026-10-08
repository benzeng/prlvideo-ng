
undefined8 FUN_100bf1080(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0xe) {
    FUN_100be6b00(**(long **)(param_1 + 0x30),param_3);
    return 1;
  }
  uVar1 = FUN_100c58f50(*(undefined8 *)(**(long **)(param_1 + 0x30) + 0x10));
  return uVar1;
}

