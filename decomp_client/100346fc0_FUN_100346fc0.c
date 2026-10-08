
void FUN_100346fc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x34) == 0)) {
    *(undefined8 *)(param_1 + 0x34) = param_2;
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar1 = FUN_100319c40(uVar1);
    FUN_10032eef0(uVar1);
    return;
  }
  return;
}

