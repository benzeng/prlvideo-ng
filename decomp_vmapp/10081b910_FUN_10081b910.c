
undefined8 FUN_10081b910(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0xe) {
    FUN_100811390(**(long **)(param_1 + 0x30),param_3);
    return 1;
  }
  uVar1 = FUN_10087dd50(*(undefined8 *)(**(long **)(param_1 + 0x30) + 0x10));
  return uVar1;
}

