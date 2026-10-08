
void FUN_1002140f0(long param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = 0x1000;
  if (param_2 != '\0') {
    uVar1 = 0x1800;
  }
  FUN_100195e00(uVar2,*(undefined4 *)(param_1 + 0x28),uVar1);
  return;
}

