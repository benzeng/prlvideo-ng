
void FUN_100546980(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = operator_new(0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar3[1] = *(undefined8 *)(param_1 + 0x28);
  puVar3[2] = uVar1;
  puVar3[3] = 0;
  puVar3[4] = uVar2;
  *puVar3 = &PTR_FUN_10111d9a8;
  puVar3[5] = 0;
  return;
}

