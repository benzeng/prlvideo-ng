
undefined8 FUN_10023ae00(long param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    iVar1 = FUN_100325aa0();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100325c00(uVar3,*(undefined4 *)(param_1 + 0x28));
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) {
      iVar2 = (iVar1 == 0) + 1;
    }
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100325d70(uVar3,*(undefined4 *)(param_1 + 0x28),iVar2);
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100327460(uVar3);
    }
    else if (param_2 != '\0') {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100326e00(uVar3,1);
    }
  }
  return 0;
}

