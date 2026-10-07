
undefined8 FUN_10081bc00(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x170);
  if (lVar1 == 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)(lVar1 + 0x240);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(lVar1 + 0x238);
  *(undefined8 *)(param_1 + 0x2b0) = uVar6;
  uVar2 = *(undefined4 *)(lVar1 + 0x24c);
  uVar3 = *(undefined4 *)(lVar1 + 0x250);
  uVar4 = *(undefined4 *)(lVar1 + 0x254);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(lVar1 + 0x248);
  *(undefined4 *)(param_1 + 700) = uVar2;
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  *(undefined4 *)(param_1 + 0x2c4) = uVar4;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(lVar1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(lVar1 + 0x2a8);
  if (*(long *)(lVar1 + 0x260) == 0) {
LAB_10081bce7:
    if (*(long *)(lVar1 + 0x268) != 0) {
      lVar5 = FUN_10084b840();
      *(long *)(param_1 + 0x2d8) = lVar5;
      if (lVar5 == 0) goto LAB_10081be00;
    }
    if (*(long *)(lVar1 + 0x270) != 0) {
      lVar5 = FUN_10084b840();
      *(long *)(param_1 + 0x2e0) = lVar5;
      if (lVar5 == 0) goto LAB_10081be00;
    }
    if (*(long *)(lVar1 + 0x278) != 0) {
      lVar5 = FUN_10084b840();
      *(long *)(param_1 + 0x2e8) = lVar5;
      if (lVar5 == 0) goto LAB_10081be00;
    }
    if (*(long *)(lVar1 + 0x280) != 0) {
      lVar5 = FUN_10084b840();
      *(long *)(param_1 + 0x2f0) = lVar5;
      if (lVar5 == 0) goto LAB_10081be00;
    }
    if (*(long *)(lVar1 + 0x288) != 0) {
      lVar5 = FUN_10084b840();
      *(long *)(param_1 + 0x2f8) = lVar5;
      if (lVar5 == 0) goto LAB_10081be00;
    }
    if (*(long *)(lVar1 + 0x298) != 0) {
      lVar5 = FUN_10084b840();
      *(long *)(param_1 + 0x308) = lVar5;
      if (lVar5 == 0) goto LAB_10081be00;
    }
    if (*(long *)(lVar1 + 0x290) != 0) {
      lVar5 = FUN_10084b840();
      *(long *)(param_1 + 0x300) = lVar5;
      if (lVar5 == 0) goto LAB_10081be00;
    }
    if (*(long *)(lVar1 + 600) != 0) {
      lVar5 = FUN_10087d050();
      *(long *)(param_1 + 0x2c8) = lVar5;
      if (lVar5 == 0) {
        uVar6 = 0x44;
        uVar7 = 0xb5;
        goto LAB_10081be1c;
      }
    }
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(lVar1 + 0x2b0);
    uVar8 = 1;
  }
  else {
    lVar5 = FUN_10084b840();
    *(long *)(param_1 + 0x2d0) = lVar5;
    if (lVar5 != 0) goto LAB_10081bce7;
LAB_10081be00:
    uVar6 = 3;
    uVar7 = 0xb0;
LAB_10081be1c:
    FUN_100887ce0(0x14,0x139,uVar6,"tls_srp.c",uVar7);
    FUN_10081e1a0(*(undefined8 *)(param_1 + 0x2c8));
    FUN_10084b4b0(*(undefined8 *)(param_1 + 0x2d0));
    FUN_10084b4b0(*(undefined8 *)(param_1 + 0x2d8));
    FUN_10084b4b0(*(undefined8 *)(param_1 + 0x2e0));
    FUN_10084b4b0(*(undefined8 *)(param_1 + 0x2e8));
    FUN_10084b4b0(*(undefined8 *)(param_1 + 0x2f0));
    FUN_10084b4b0(*(undefined8 *)(param_1 + 0x2f8));
    FUN_10084b4b0(*(undefined8 *)(param_1 + 0x300));
    FUN_10084b4b0(*(undefined8 *)(param_1 + 0x308));
  }
  return uVar8;
}

