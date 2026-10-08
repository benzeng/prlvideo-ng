
void FUN_100ba6070(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    FUN_100ba60a0();
    return;
  }
  if (param_3 == 1) {
    puVar1 = &DAT_1022d01a0;
  }
  else {
    puVar1 = &DAT_1022e01c0;
  }
  *param_1 = puVar1;
  *param_2 = 0x10012;
  return;
}

