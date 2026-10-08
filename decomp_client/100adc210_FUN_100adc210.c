
undefined8 * FUN_100adc210(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar2 = 0;
  do {
    for (puVar1 = *(undefined8 **)(param_2 + uVar2 * 8); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if ((*(int *)((long)puVar1 + 0x3c) == 0) && (*(int *)(puVar1 + 7) == 0)) {
        local_40[0] = puVar1;
        FUN_100adc750(param_1,local_40);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return param_1;
}

