
undefined4 FUN_1000cb5b0(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  
  lVar1 = param_1 + 0x2b8;
  uVar7 = FUN_1000d6cc0(lVar1);
  uVar5 = FUN_1000d6cd0(lVar1);
  cVar4 = FUN_1000ecfb0(&DAT_100bfbab0,uVar7,uVar5,*(uint *)(param_1 + 0x1f0) | 0x5001,0);
  if (cVar4 == '\0') {
    FUN_1000d68b0(lVar1);
    *(undefined4 *)(param_1 + 500) = 0x80020002;
    uVar5 = 0x80020002;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x2b0);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 800) = 0xffffffff;
      uVar6 = 0xffffffff;
      iVar8 = 0x1fffffe0;
    }
    else {
      uVar2 = *(uint *)(lVar3 + 0x5ac);
      *(uint *)(param_1 + 800) = uVar2;
      uVar6 = *(uint *)(lVar3 + 0x5b0);
      iVar8 = (uVar2 & 0xffffff) << 5;
    }
    *(uint *)(param_1 + 0x324) = uVar6;
    *(int *)(param_1 + 0x338) = iVar8;
    *(uint *)(param_1 + 0x33c) = (uVar6 & 0xffffff) << 5;
    cVar4 = FUN_1000d0770(param_1);
    uVar5 = 0;
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 500) = 0x80020002;
      FUN_1008e3970("","vm",0,"Reading required data failed");
      FUN_1000d68b0(lVar1);
      uVar5 = *(undefined4 *)(param_1 + 500);
    }
  }
  return uVar5;
}

