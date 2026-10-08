
uint FUN_100bf1820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_100cbd3f0(param_4);
  uVar2 = 0xffffffff;
  if (lVar3 != 0) {
    uVar4 = FUN_100c26a40(*(undefined8 *)(lVar3 + 0x10));
    *(undefined8 *)(param_1 + 0x2d0) = uVar4;
    uVar4 = FUN_100c26a40(*(undefined8 *)(lVar3 + 8));
    *(undefined8 *)(param_1 + 0x2d8) = uVar4;
    if (*(long *)(param_1 + 0x308) != 0) {
      FUN_100c26640();
      *(undefined8 *)(param_1 + 0x308) = 0;
    }
    if (*(long *)(param_1 + 0x2e0) != 0) {
      FUN_100c26640();
      *(undefined8 *)(param_1 + 0x2e0) = 0;
    }
    iVar1 = FUN_100cbe860(param_2,param_3,(undefined8 *)(param_1 + 0x2e0),
                          (undefined8 *)(param_1 + 0x308),*(undefined8 *)(lVar3 + 0x10),
                          *(undefined8 *)(lVar3 + 8));
    uVar2 = -(uint)(iVar1 == 0) | 1;
  }
  return uVar2;
}

