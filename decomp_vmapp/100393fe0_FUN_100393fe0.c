
undefined8 FUN_100393fe0(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 8 & 0x18 | param_3 >> 0x1c & 7;
  if (uVar1 != 10) {
    if (uVar1 == 1) {
      FUN_100394020();
    }
    else if (*(long *)(param_1 + 0x48) == 0) {
      FUN_1003944a0();
    }
    else {
      FUN_1003941e0();
    }
  }
  return 0;
}

