
void FUN_10081aef0(undefined8 *param_1)

{
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return;
    }
    if (*(int *)*param_1 == 0x207) break;
    param_1 = (undefined8 *)param_1[7];
  }
  FUN_10080ee30(*(undefined8 *)param_1[6]);
  return;
}

