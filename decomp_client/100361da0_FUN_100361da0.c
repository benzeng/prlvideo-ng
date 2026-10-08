
void FUN_100361da0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  *param_1 = param_2;
  puVar1 = operator_new(0xc);
  param_1[1] = puVar1;
  *puVar1 = 0;
  return;
}

