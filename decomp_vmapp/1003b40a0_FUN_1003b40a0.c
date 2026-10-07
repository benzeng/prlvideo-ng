
void FUN_1003b40a0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_3 + 0x38);
  for (puVar2 = puVar1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    if (puVar2[1] == param_2) goto LAB_1003b40e3;
  }
  puVar2 = operator_new(0x10);
  *puVar2 = puVar1;
  puVar2[1] = param_2;
  *(undefined8 **)(param_3 + 0x38) = puVar2;
LAB_1003b40e3:
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  puVar2 = puVar1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = operator_new(0x10);
      *puVar2 = puVar1;
      puVar2[1] = param_3;
      *(undefined8 **)(param_2 + 0x40) = puVar2;
      return;
    }
    if (puVar2[1] == param_3) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  return;
}

