
undefined8 FUN_1004aa360(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
  *puVar1 = *param_3;
  FUN_1004aaac0(*(undefined8 *)(param_1 + 0x18),(long)param_3 + 0xc,
                (ulong)*(uint *)(param_2 + 4) + (long)param_3);
  return 1;
}

