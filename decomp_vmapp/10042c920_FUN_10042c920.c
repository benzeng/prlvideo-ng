
undefined8 FUN_10042c920(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    param_2[3] = puVar1[3];
    param_2[2] = puVar1[2];
    uVar2 = *puVar1;
    param_2[1] = puVar1[1];
    *param_2 = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *param_3 = uVar2;
    uVar2 = CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  return uVar2;
}

