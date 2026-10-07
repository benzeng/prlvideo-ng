
void FUN_10033ed90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = (ulong)(uint)param_2[1];
  puVar1 = operator_new__(uVar3 * 4);
  *(undefined4 **)(param_1 + 2) = puVar1;
  if (uVar3 != 0) {
    puVar2 = *(undefined4 **)(param_2 + 2);
    do {
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

