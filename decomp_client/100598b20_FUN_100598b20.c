
void FUN_100598b20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = operator_new(8);
  *puVar2 = uVar1;
  *param_2 = puVar2;
  return;
}

