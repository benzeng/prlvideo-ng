
void FUN_100546920(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar4 = 0, *(char *)(*(long *)(param_1 + 0x30) + 0x18) != '\0')) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  puVar3 = operator_new(0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar3[1] = *(undefined8 *)(param_1 + 0x20);
  puVar3[2] = uVar1;
  puVar3[3] = 0;
  puVar3[4] = uVar2;
  *puVar3 = &PTR_FUN_10111d9a8;
  puVar3[5] = uVar4;
  return;
}

