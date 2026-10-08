
long FUN_100ab1fb0(undefined8 param_1,long param_2,long param_3)

{
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if (*(long *)(param_2 + 0x18) == param_3) break;
    param_2 = *(long *)(param_2 + 0x28);
  }
  return param_2;
}

