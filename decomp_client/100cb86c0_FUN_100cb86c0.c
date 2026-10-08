
ulong FUN_100cb86c0(int *param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = 0xffffffff;
  if (*param_1 == 1) {
    FUN_100ca5120(param_2,0xffffffff,0xffffffff);
    if (*(long *)(param_2 + 0x68) != 0) {
      uVar4 = FUN_100c76bb0(*(undefined8 *)(param_1 + 2));
      return uVar4;
    }
  }
  else if (*param_1 == 0) {
    uVar1 = **(undefined8 **)(param_1 + 2);
    uVar3 = FUN_100c92460(param_2);
    uVar2 = FUN_100c92120(uVar1,uVar3);
    uVar4 = (ulong)uVar2;
    if (uVar2 == 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
      uVar3 = FUN_100c926a0(param_2);
      uVar4 = FUN_100c76010(uVar1,uVar3);
      return uVar4;
    }
  }
  return uVar4;
}

