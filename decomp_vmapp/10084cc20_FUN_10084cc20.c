
long FUN_10084cc20(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)((long)param_1 + 0x34) != 0) {
    return 0;
  }
  if ((int)param_1[7] != 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 == *(uint *)((long)param_1 + 0x1c)) {
    lVar3 = FUN_10081ddd0(400,"bn_ctx.c",0x197);
    if (lVar3 == 0) goto LAB_10084cddd;
    FUN_10084b500(lVar3);
    FUN_10084b500(lVar3 + 0x18);
    FUN_10084b500(lVar3 + 0x30);
    FUN_10084b500(lVar3 + 0x48);
    FUN_10084b500(lVar3 + 0x60);
    FUN_10084b500(lVar3 + 0x78);
    FUN_10084b500(lVar3 + 0x90);
    FUN_10084b500(lVar3 + 0xa8);
    FUN_10084b500(lVar3 + 0xc0);
    FUN_10084b500(lVar3 + 0xd8);
    FUN_10084b500(lVar3 + 0xf0);
    FUN_10084b500(lVar3 + 0x108);
    FUN_10084b500(lVar3 + 0x120);
    FUN_10084b500(lVar3 + 0x138);
    FUN_10084b500(lVar3 + 0x150);
    FUN_10084b500(lVar3 + 0x168);
    lVar2 = param_1[2];
    *(long *)(lVar3 + 0x180) = lVar2;
    *(undefined8 *)(lVar3 + 0x188) = 0;
    if (*param_1 == 0) {
      param_1[2] = lVar3;
      param_1[1] = lVar3;
      *param_1 = lVar3;
    }
    else {
      *(long *)(lVar2 + 0x188) = lVar3;
      param_1[2] = lVar3;
      param_1[1] = lVar3;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 0x10;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  }
  else {
    if (uVar1 == 0) {
      lVar3 = *param_1;
LAB_10084cdb4:
      param_1[1] = lVar3;
      uVar4 = 0;
    }
    else {
      lVar3 = param_1[1];
      if ((uVar1 & 0xf) == 0) {
        lVar3 = *(long *)(lVar3 + 0x188);
        goto LAB_10084cdb4;
      }
      uVar4 = (ulong)(uVar1 & 0xf);
    }
    *(uint *)(param_1 + 3) = uVar1 + 1;
    lVar3 = lVar3 + uVar4 * 0x18;
  }
  if (lVar3 != 0) {
    FUN_10084bbb0(lVar3,0);
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    return lVar3;
  }
LAB_10084cddd:
  *(undefined4 *)(param_1 + 7) = 1;
  FUN_100887ce0(3,0x74,0x6d,"bn_ctx.c",0x129);
  return 0;
}

