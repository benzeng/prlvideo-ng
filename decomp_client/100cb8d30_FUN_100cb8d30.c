
byte FUN_100cb8d30(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  uVar3 = FUN_100bf70a0(0x1ab);
  lVar4 = FUN_100c6bd50(uVar3);
  if (lVar4 == 0) {
LAB_100cb8d6a:
    uVar3 = FUN_100bf70a0(0x329);
    lVar4 = FUN_100c6bd60(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_100cb9ef0(param_1,0x329,0xffffffff);
      if (iVar2 == 0) goto LAB_100cb8f1a;
    }
    uVar3 = FUN_100bf70a0(0x32d);
    lVar4 = FUN_100c6bd50(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_100cb9ef0(param_1,0x32d,0xffffffff);
      if (iVar2 == 0) goto LAB_100cb8f1a;
    }
    uVar3 = FUN_100bf70a0(0x1a7);
    lVar4 = FUN_100c6bd50(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_100cb9ef0(param_1,0x1a7,0xffffffff);
      if (iVar2 == 0) goto LAB_100cb8f1a;
    }
    uVar3 = FUN_100bf70a0(0x1a3);
    lVar4 = FUN_100c6bd50(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_100cb9ef0(param_1,0x1a3,0xffffffff);
      if (iVar2 == 0) goto LAB_100cb8f1a;
    }
    uVar3 = FUN_100bf70a0(0x2c);
    lVar4 = FUN_100c6bd50(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_100cb9ef0(param_1,0x2c,0xffffffff);
      if (iVar2 == 0) goto LAB_100cb8f1a;
    }
    uVar3 = FUN_100bf70a0(0x25);
    lVar4 = FUN_100c6bd50(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_100cb9ef0(param_1,0x25,0x80);
      if (iVar2 == 0) goto LAB_100cb8f1a;
    }
    uVar3 = FUN_100bf70a0(0x25);
    lVar4 = FUN_100c6bd50(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_100cb9ef0(param_1,0x25,0x40);
      if (iVar2 == 0) goto LAB_100cb8f1a;
    }
    uVar3 = FUN_100bf70a0(0x1f);
    lVar4 = FUN_100c6bd50(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_100cb9ef0(param_1,0x1f,0xffffffff);
      if (iVar2 == 0) goto LAB_100cb8f1a;
    }
    uVar3 = FUN_100bf70a0(0x25);
    lVar4 = FUN_100c6bd50(uVar3);
    if (lVar4 == 0) {
      bVar5 = false;
    }
    else {
      iVar2 = FUN_100cb9ef0(param_1,0x25,0x28);
      bVar5 = iVar2 == 0;
    }
    bVar1 = bVar5 ^ 1;
  }
  else {
    iVar2 = FUN_100cb9ef0(param_1,0x1ab,0xffffffff);
    if (iVar2 != 0) goto LAB_100cb8d6a;
LAB_100cb8f1a:
    bVar1 = 0;
  }
  return bVar1;
}

