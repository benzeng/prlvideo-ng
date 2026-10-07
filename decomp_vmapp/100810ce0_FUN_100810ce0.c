
undefined8 FUN_100810ce0(long param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar2 = 1;
  if (piVar1 != param_2) {
    uVar4 = 0xffffffff;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar4 = (uint)(*(long *)(param_1 + 0x30) == *(long *)(piVar1 + 10));
    }
    if (*piVar1 == *param_2) {
      *(int **)(param_1 + 8) = param_2;
      uVar2 = 1;
    }
    else {
      (**(code **)(piVar1 + 6))(param_1);
      *(int **)(param_1 + 8) = param_2;
      uVar2 = (**(code **)(param_2 + 2))(param_1);
    }
    if (uVar4 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 8);
    }
    else {
      if (uVar4 != 1) {
        return uVar2;
      }
      uVar3 = *(undefined8 *)(param_2 + 10);
    }
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  return uVar2;
}

