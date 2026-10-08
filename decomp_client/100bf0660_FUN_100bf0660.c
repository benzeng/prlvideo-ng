
void FUN_100bf0660(undefined8 *param_1)

{
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return;
    }
    if (*(int *)*param_1 == 0x207) break;
    param_1 = (undefined8 *)param_1[7];
  }
  FUN_100be45a0(*(undefined8 *)param_1[6]);
  return;
}

