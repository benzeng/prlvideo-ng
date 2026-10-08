
undefined8 FUN_100c37230(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
    if (((param_1[2] == param_2) && (param_1[3] == param_3)) && (param_1[4] == param_4)) break;
    param_1 = (undefined8 *)*param_1;
  }
  return param_1[1];
}

