
void FUN_100296f80(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1000b3d20(DAT_1011c3698);
  uVar2 = 1;
  if (*(int *)(*(long *)(param_2 + 0x38) + 0x14) != 1) {
    uVar2 = 2;
  }
  FUN_10025b2f0(param_1 + 0x68,uVar2);
  FUN_100403150(param_1 + 0x137b8,*(undefined8 *)(param_2 + 0x38),param_2 + 0x40,uVar1);
  return;
}

