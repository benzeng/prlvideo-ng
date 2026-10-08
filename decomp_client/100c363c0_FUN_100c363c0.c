
void FUN_100c363c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      (*(code *)puVar2[4])(puVar2[1]);
      FUN_100bf3910(puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}

