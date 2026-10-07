
undefined8 FUN_1002d9de0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*(long *)param_1[2] + 0x28))();
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)*param_1)(param_1,param_2);
    if ((iVar1 != 0) && (uVar3 = 1, *(char *)(param_1[3] + 4) != '\0')) {
      uVar2 = 0;
      do {
        FUN_1002d6370(param_1[1],uVar2,0,0);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(param_1[3] + 4));
    }
  }
  return uVar3;
}

