
undefined8 * FUN_100adbfc0(undefined8 *param_1,long param_2,int *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar1 = 0;
  do {
    for (puVar2 = *(undefined8 **)(param_2 + uVar1 * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if ((*(int *)((long)puVar2 + 0x3c) == param_3[1]) && (*(int *)(puVar2 + 7) == *param_3)) {
        local_40[0] = puVar2;
        FUN_100adc750(param_1,local_40);
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return param_1;
}

