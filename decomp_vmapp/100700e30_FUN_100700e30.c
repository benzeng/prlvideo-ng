
void FUN_100700e30(undefined8 *param_1,code *param_2)

{
  undefined8 *puVar1;
  
  while (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0) {
    *param_1 = puVar1[1];
    if (param_2 != (code *)0x0) {
      (*param_2)(*puVar1);
    }
    _free(puVar1);
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  return;
}

