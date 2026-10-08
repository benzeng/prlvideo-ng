
void FUN_100bdd780(long param_1)

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
  uVar2 = FUN_100be39f0();
  FUN_100c58d60(uVar2,0x2d,0,*(long *)(param_1 + 0x88) + 0x350);
  FUN_100be1790(param_1);
  return;
}

