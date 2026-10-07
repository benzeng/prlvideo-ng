
ulong FUN_1007f2cb0(uint *param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long local_48;
  int local_40;
  undefined4 local_3c;
  byte *local_38;
  
  uVar6 = (**(code **)(*(long *)(param_1 + 2) + 0x60))
                    (param_1,0x1120,0x1121,0xffffffff,20000,&local_40);
  if (local_40 == 0) goto LAB_1007f2e8e;
  iVar4 = FUN_1008115d0(param_1);
  if (iVar4 == 0xfeff) {
LAB_1007f2d0f:
    lVar7 = *(long *)(param_1 + 0x20);
    iVar4 = *(int *)(lVar7 + 0x3a0);
    if (iVar4 != 3) goto LAB_1007f2d66;
    if (**(int **)(param_1 + 0x22) == 0) {
      *(undefined4 *)(lVar7 + 0x3c4) = 1;
      uVar6 = 1;
      goto LAB_1007f2e8e;
    }
    local_3c = 10;
    uVar8 = 0x72;
    uVar9 = 0x361;
LAB_1007f2e2f:
    FUN_100887ce0(0x14,0x92,uVar8,"s3_clnt.c",uVar9);
LAB_1007f2e71:
    FUN_1007fd650(param_1,2,local_3c);
  }
  else {
    iVar4 = FUN_1008115d0(param_1);
    if (iVar4 == 0x100) goto LAB_1007f2d0f;
    lVar7 = *(long *)(param_1 + 0x20);
    iVar4 = *(int *)(lVar7 + 0x3a0);
LAB_1007f2d66:
    if (iVar4 != 2) {
      local_3c = 10;
      uVar8 = 0x72;
      uVar9 = 0x369;
      goto LAB_1007f2e2f;
    }
    pbVar13 = *(byte **)(param_1 + 0x16);
    if (((uint)*pbVar13 != (int)*param_1 >> 8) || ((uint)pbVar13[1] != (*param_1 & 0xff))) {
      local_38 = pbVar13;
      FUN_100887ce0(0x14,0x92,0x10a,"s3_clnt.c",0x370);
      *param_1 = (uint)local_38[1] | *param_1 & 0xff00;
      local_3c = 0x46;
      goto LAB_1007f2e71;
    }
    *(undefined8 *)(lVar7 + 0xbc) = *(undefined8 *)(pbVar13 + 0x1a);
    *(undefined8 *)(lVar7 + 0xb4) = *(undefined8 *)(pbVar13 + 0x12);
    uVar8 = *(undefined8 *)(pbVar13 + 2);
    *(undefined8 *)(lVar7 + 0xac) = *(undefined8 *)(pbVar13 + 10);
    *(undefined8 *)(lVar7 + 0xa4) = uVar8;
    param_1[0x2a] = 0;
    local_38 = pbVar13 + 0x23;
    bVar1 = pbVar13[0x22];
    uVar11 = (ulong)bVar1;
    if (0x20 < uVar11) {
      local_3c = 0x2f;
      uVar8 = 300;
      uVar9 = 899;
      goto LAB_1007f2e2f;
    }
    if (((0x300 < (int)*param_1) && (pcVar2 = *(code **)(param_1 + 0x98), pcVar2 != (code *)0x0)) &&
       (lVar7 = *(long *)(param_1 + 0x4c), *(long *)(lVar7 + 0x140) != 0)) {
      local_48 = 0;
      *(undefined4 *)(lVar7 + 0x10) = 0x30;
      iVar4 = (*pcVar2)(param_1,lVar7 + 0x14,lVar7 + 0x10,0,&local_48,
                        *(undefined8 *)(param_1 + 0x9a));
      if (iVar4 != 0) {
        lVar7 = local_48;
        if (local_48 == 0) {
          lVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x90))(local_38 + uVar11);
        }
        *(long *)(*(long *)(param_1 + 0x4c) + 0xe0) = lVar7;
        goto LAB_1007f2f30;
      }
      FUN_100887ce0(0x14,0x92,0x44,"s3_clnt.c",0x39e);
LAB_1007f325f:
      local_3c = 0x50;
      goto LAB_1007f2e71;
    }
LAB_1007f2f30:
    pbVar12 = local_38;
    lVar7 = *(long *)(param_1 + 0x4c);
    uVar5 = *(uint *)(lVar7 + 0x44);
    uVar10 = (uint)bVar1;
    if ((bVar1 == 0) || (uVar10 != uVar5)) {
LAB_1007f2f64:
      if (uVar5 != 0) {
        iVar4 = FUN_1008134d0(param_1,0);
        if (iVar4 == 0) goto LAB_1007f325f;
        lVar7 = *(long *)(param_1 + 0x4c);
      }
      *(uint *)(lVar7 + 0x44) = uVar10;
      _memcpy((void *)(lVar7 + 0x48),local_38,uVar11);
      pbVar12 = local_38;
    }
    else {
      iVar4 = _memcmp(local_38,(void *)(lVar7 + 0x48),uVar11);
      uVar5 = uVar10;
      if (iVar4 != 0) goto LAB_1007f2f64;
      if (param_1[0x42] != *(uint *)(lVar7 + 0x68)) {
LAB_1007f31ee:
        local_3c = 0x2f;
        uVar8 = 0x110;
        uVar9 = 0x3ac;
        goto LAB_1007f2e2f;
      }
      iVar4 = _memcmp((void *)(lVar7 + 0x6c),param_1 + 0x43,(ulong)param_1[0x42]);
      if (iVar4 != 0) goto LAB_1007f31ee;
      param_1[0x2a] = 1;
    }
    local_38 = pbVar12 + uVar11;
    lVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x90))();
    if (lVar7 == 0) {
      local_3c = 0x2f;
      uVar8 = 0xf8;
      uVar9 = 0x3c6;
      goto LAB_1007f2e2f;
    }
    if (((*(byte *)(lVar7 + 0x38) & 4) != 0) &&
       (((int)*param_1 < 0x303 || ((*param_1 & 0xffffff00) != 0x300)))) {
      local_3c = 0x2f;
      uVar8 = 0x105;
      uVar9 = 0x3cd;
      goto LAB_1007f2e2f;
    }
    if ((((*(byte *)(lVar7 + 0x19) & 4) != 0) || ((*(byte *)(lVar7 + 0x21) & 4) != 0)) &&
       ((*(byte *)((long)param_1 + 0x321) & 4) == 0)) {
      local_3c = 0x2f;
      uVar8 = 0x105;
      uVar9 = 0x3d4;
      goto LAB_1007f2e2f;
    }
    iVar4 = (**(code **)(*(long *)(param_1 + 2) + 0x98))(0,0);
    local_38 = pbVar12 + uVar11 + (long)iVar4;
    uVar8 = FUN_10080f390(param_1);
    iVar4 = FUN_100885160(uVar8);
    if (iVar4 < 0) {
      local_3c = 0x2f;
      uVar8 = 0x105;
      uVar9 = 0x3df;
      goto LAB_1007f2e2f;
    }
    lVar3 = *(long *)(param_1 + 0x4c);
    if (*(long *)(lVar3 + 0xe0) != 0) {
      *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(*(long *)(lVar3 + 0xe0) + 0x10);
    }
    uVar5 = param_1[0x2a];
    if ((uVar5 != 0) && (*(long *)(lVar3 + 0xe8) != *(long *)(lVar7 + 0x10))) {
      local_3c = 0x2f;
      uVar8 = 0xc5;
      uVar9 = 0x3f2;
      goto LAB_1007f2e2f;
    }
    *(long *)(*(long *)(param_1 + 0x20) + 0x3a8) = lVar7;
    if (((int)*param_1 < 0x303) || ((*param_1 & 0xffffff00) != 0x300)) {
      iVar4 = FUN_1007fa710(param_1);
      if (iVar4 == 0) goto LAB_1007f325f;
      uVar5 = param_1[0x2a];
    }
    pbVar12 = local_38 + 1;
    bVar1 = *local_38;
    local_38 = pbVar12;
    if ((uVar5 != 0) && ((uint)bVar1 != *(uint *)(*(long *)(param_1 + 0x4c) + 0xd8))) {
      local_3c = 0x2f;
      uVar8 = 0x158;
      uVar9 = 0x417;
      goto LAB_1007f2e2f;
    }
    lVar7 = 0;
    if (bVar1 != 0) {
      if ((*(byte *)((long)param_1 + 0x1aa) & 2) == 0) {
        lVar7 = FUN_1008172d0(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x100));
        if (lVar7 != 0) goto LAB_1007f3148;
        local_3c = 0x2f;
        uVar8 = 0x101;
        uVar9 = 0x426;
      }
      else {
        local_3c = 0x2f;
        uVar8 = 0x157;
        uVar9 = 0x41e;
      }
      goto LAB_1007f2e2f;
    }
LAB_1007f3148:
    *(long *)(*(long *)(param_1 + 0x20) + 0x410) = lVar7;
    if ((int)*param_1 < 0x300) {
LAB_1007f318c:
      pbVar13 = pbVar13 + uVar6;
      uVar6 = 1;
      if (local_38 == pbVar13) goto LAB_1007f2e8e;
      local_3c = 0x32;
      uVar8 = 0x73;
      uVar9 = 0x43f;
      goto LAB_1007f2e2f;
    }
    iVar4 = FUN_100803930(param_1,&local_38,pbVar13,uVar6 & 0xffffffff,&local_3c);
    if (iVar4 == 0) {
      uVar8 = 0xe3;
      uVar9 = 0x432;
      goto LAB_1007f2e2f;
    }
    iVar4 = FUN_100804420(param_1);
    if (0 < iVar4) goto LAB_1007f318c;
    FUN_100887ce0(0x14,0x92,0x113,"s3_clnt.c",0x436);
  }
  param_1[0x12] = 5;
  uVar6 = 0xffffffff;
LAB_1007f2e8e:
  return uVar6 & 0xffffffff;
}

