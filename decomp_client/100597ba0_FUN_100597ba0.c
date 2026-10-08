
undefined8 * FUN_100597ba0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    FUN_10071be80(param_1,0,0,0);
  }
  else {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
  }
  return param_1;
}

