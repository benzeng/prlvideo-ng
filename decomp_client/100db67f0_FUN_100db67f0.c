
undefined8 * FUN_100db67f0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 10);
    *(undefined4 *)(param_1 + 7) = 0;
    puVar2 = _malloc(0x858);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)(puVar2 + 5) = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      FUN_100db6550(puVar2 + 10,param_1 + 10,0,uVar1);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
      puVar2[3] = param_1[3];
      puVar2[6] = param_1[6];
      puVar2[2] = param_1;
      *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + 1;
      puVar2[9] = FUN_100db62a0;
      *puVar2 = *param_1;
      puVar3 = puVar2;
    }
  }
  return puVar3;
}

