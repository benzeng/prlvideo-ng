
void FUN_1001e1526(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1001e1444(param_1);
  if (param_2 != 0) {
    **(undefined4 **)(param_1 + 0x28) = 2;
  }
  if (**(char **)(param_1 + 8) == '|') {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    while ((**(char **)(param_1 + 8) == '|' && (*(int *)(param_1 + 0x10) == 0))) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = 0;
      FUN_1001e1444(param_1);
      if (param_2 == 0) {
        FUN_1001da607(param_1,*(undefined8 *)(param_1 + 0x28),uVar2);
      }
      else {
        **(undefined4 **)(param_1 + 0x28) = 2;
      }
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}

