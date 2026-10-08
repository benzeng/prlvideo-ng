
void FUN_100914e4e(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_100914d6c(param_1);
  if (param_2 != 0) {
    **(undefined4 **)(param_1 + 0x28) = 2;
  }
  if (**(char **)(param_1 + 8) == '|') {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    while ((**(char **)(param_1 + 8) == '|' && (*(int *)(param_1 + 0x10) == 0))) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = 0;
      FUN_100914d6c(param_1);
      if (param_2 == 0) {
        FUN_10090df2f(param_1,*(undefined8 *)(param_1 + 0x28),uVar2);
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

