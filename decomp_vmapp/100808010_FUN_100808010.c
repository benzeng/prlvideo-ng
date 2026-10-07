
void FUN_100808010(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined4 *)(lVar1 + 0x348) = 0;
  *(undefined8 *)(lVar1 + 0x340) = 0;
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(lVar1 + 0x358) = 0;
  *(undefined8 *)(lVar1 + 0x350) = 0;
  *(undefined2 *)(*(long *)(param_1 + 0x88) + 0x360) = 1;
  uVar2 = FUN_10080e280();
  FUN_10087db60(uVar2,0x2d,0,*(long *)(param_1 + 0x88) + 0x350);
  FUN_10080c020(param_1);
  return;
}

