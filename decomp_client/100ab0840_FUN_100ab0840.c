
undefined8 FUN_100ab0840(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 0x1c) & 6) != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_100ab0990();
    }
  }
  return uVar1;
}

