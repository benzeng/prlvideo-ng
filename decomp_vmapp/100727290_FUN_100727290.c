
void FUN_100727290(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    FUN_1007272c0();
    return;
  }
  if (param_3 == 1) {
    puVar1 = &DAT_10116e7d0;
  }
  else {
    puVar1 = &DAT_10117e7f0;
  }
  *param_1 = puVar1;
  *param_2 = 0x10012;
  return;
}

