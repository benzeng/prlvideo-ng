
undefined8 * FUN_1005468a0(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = operator_new(0x48);
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar3[1] = *(undefined8 *)(param_1 + 0x28);
  puVar3[2] = lVar1;
  puVar3[3] = 0;
  puVar3[4] = uVar2;
  *puVar3 = &PTR_FUN_10111d918;
  puVar3[5] = param_1;
  puVar3[6] = 0;
  *(int *)(puVar3 + 7) = (int)((((ulong)param_2 - 1) + lVar1) / (ulong)param_2 + 0x1f >> 5);
  *(uint *)((long)puVar3 + 0x3c) = param_2;
  *(undefined4 *)(puVar3 + 8) = 0;
  return puVar3;
}

