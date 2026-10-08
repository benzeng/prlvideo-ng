
void FUN_100bcd360(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  FUN_100bcf9d0();
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar8 + 0x3e0) != 0) {
    FUN_100c60790(*(long *)(lVar8 + 0x3e0),FUN_100c7c730);
    lVar8 = *(long *)(param_1 + 0x20);
  }
  if (*(long *)(lVar8 + 0x140) != 0) {
    FUN_100bf3910(*(long *)(lVar8 + 0x140));
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar8 + 0x140) = 0;
  }
  if (*(long *)(lVar8 + 0x3b0) != 0) {
    FUN_100c51d00(*(long *)(lVar8 + 0x3b0));
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar8 + 0x3b0) = 0;
  }
  if (*(long *)(lVar8 + 0x3b8) != 0) {
    FUN_100c3f180(*(long *)(lVar8 + 0x3b8));
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar8 + 0x3b8) = 0;
  }
  *(undefined1 *)(lVar8 + 0x4ac) = 0;
  uVar6 = *(undefined8 *)(lVar8 + 0xf0);
  uVar7 = *(undefined8 *)(lVar8 + 0xf8);
  uVar2 = *(undefined4 *)(lVar8 + 0x108);
  uVar3 = *(undefined4 *)(lVar8 + 0x10c);
  uVar4 = *(undefined4 *)(lVar8 + 0x110);
  uVar5 = *(undefined4 *)(lVar8 + 0x114);
  uVar1 = *(undefined4 *)(lVar8 + 0xec);
  if (*(long *)(lVar8 + 0x1b8) != 0) {
    FUN_100c586e0(*(long *)(lVar8 + 0x1b8));
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar8 + 0x1b8) = 0;
  }
  if (*(long *)(lVar8 + 0x1c0) != 0) {
    FUN_100bcfc70(param_1);
    lVar8 = *(long *)(param_1 + 0x20);
  }
  ___bzero(lVar8,0x4b0);
  lVar8 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(lVar8 + 0xf0) = uVar6;
  *(undefined8 *)(lVar8 + 0xf8) = uVar7;
  *(undefined4 *)(lVar8 + 0x108) = uVar2;
  *(undefined4 *)(lVar8 + 0x10c) = uVar3;
  *(undefined4 *)(lVar8 + 0x110) = uVar4;
  *(undefined4 *)(lVar8 + 0x114) = uVar5;
  *(undefined4 *)(lVar8 + 0xec) = uVar1;
  FUN_100be6ca0(param_1);
  param_1[0x1c] = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(lVar8 + 0x1e4) = 0;
  *(undefined8 *)(lVar8 + 0x1dc) = 0;
  *param_1 = 0x300;
  if (*(long *)(param_1 + 0x9e) != 0) {
    FUN_100bf3910();
    *(undefined8 *)(param_1 + 0x9e) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}

