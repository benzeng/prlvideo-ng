
void FUN_100515c50(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = (int)param_2;
  }
  puVar1 = operator_new(4);
  *puVar1 = uVar2;
  return;
}

