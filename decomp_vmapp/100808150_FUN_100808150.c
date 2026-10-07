
undefined8 FUN_100808150(uint *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong *local_38;
  
  lVar12 = *(long *)(param_1 + 0x20);
  lVar10 = FUN_1008dfd90(*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x248));
  if (lVar10 != 0) {
    lVar10 = *(long *)(param_1 + 0x22);
    if (*(short *)(lVar10 + 0x240) != *(short *)(lVar10 + 0x208)) goto LAB_100808325;
    lVar10 = FUN_1008dfd90(*(undefined8 *)(lVar10 + 0x248));
    while (lVar10 != 0) {
      lVar10 = FUN_1008dfda0(*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x248));
      if (lVar10 != 0) {
        plVar4 = *(long **)(lVar10 + 8);
        lVar11 = *(long *)(param_1 + 0x20);
        if (*(long *)(lVar11 + 0xf0) != 0) {
          FUN_10081e1a0();
          lVar11 = *(long *)(param_1 + 0x20);
        }
        *(long *)(param_1 + 0x1a) = *plVar4;
        param_1[0x1c] = *(uint *)(plVar4 + 1);
        *(long *)(lVar11 + 0x100) = plVar4[4];
        lVar5 = plVar4[2];
        *(long *)(lVar11 + 0xf8) = plVar4[3];
        *(long *)(lVar11 + 0xf0) = lVar5;
        lVar11 = *(long *)(param_1 + 0x20);
        *(long *)(lVar11 + 0x150) = plVar4[0xb];
        *(long *)(lVar11 + 0x148) = plVar4[10];
        *(long *)(lVar11 + 0x140) = plVar4[9];
        *(long *)(lVar11 + 0x138) = plVar4[8];
        *(long *)(lVar11 + 0x130) = plVar4[7];
        lVar5 = plVar4[5];
        *(long *)(lVar11 + 0x128) = plVar4[6];
        *(long *)(lVar11 + 0x120) = lVar5;
        lVar11 = *(long *)(param_1 + 0x20);
        lVar5 = *plVar4;
        *(undefined2 *)(lVar11 + 0x12) = *(undefined2 *)(lVar5 + 9);
        *(undefined4 *)(lVar11 + 0xe) = *(undefined4 *)(lVar5 + 5);
        FUN_10081e1a0(*(undefined8 *)(lVar10 + 8));
        FUN_1008dfc80(lVar10);
      }
      iVar8 = FUN_100808a10(param_1);
      lVar10 = *(long *)(param_1 + 0x22);
      if (iVar8 == 0) goto LAB_100808325;
      iVar8 = FUN_1008087a0(param_1,lVar10 + 0x250,*(long *)(param_1 + 0x20) + 0x150);
      if (iVar8 < 0) {
        return 0xffffffff;
      }
      lVar10 = FUN_1008dfd90(*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x248));
    }
  }
  lVar10 = *(long *)(param_1 + 0x22);
  *(short *)(lVar10 + 0x250) = *(short *)(lVar10 + 0x208);
  *(short *)(lVar10 + 0x240) = *(short *)(lVar10 + 0x208) + 1;
LAB_100808325:
  lVar10 = FUN_1008dfda0(*(undefined8 *)(lVar10 + 600));
  if (lVar10 != 0) {
    plVar4 = *(long **)(lVar10 + 8);
    lVar12 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar12 + 0xf0) != 0) {
      FUN_10081e1a0();
      lVar12 = *(long *)(param_1 + 0x20);
    }
    *(long *)(param_1 + 0x1a) = *plVar4;
    param_1[0x1c] = *(uint *)(plVar4 + 1);
    *(long *)(lVar12 + 0x100) = plVar4[4];
    lVar11 = plVar4[2];
    *(long *)(lVar12 + 0xf8) = plVar4[3];
    *(long *)(lVar12 + 0xf0) = lVar11;
    lVar12 = *(long *)(param_1 + 0x20);
    *(long *)(lVar12 + 0x150) = plVar4[0xb];
    *(long *)(lVar12 + 0x148) = plVar4[10];
    *(long *)(lVar12 + 0x140) = plVar4[9];
    *(long *)(lVar12 + 0x138) = plVar4[8];
    *(long *)(lVar12 + 0x130) = plVar4[7];
    lVar11 = plVar4[5];
    *(long *)(lVar12 + 0x128) = plVar4[6];
    *(long *)(lVar12 + 0x120) = lVar11;
    lVar12 = *(long *)(param_1 + 0x20);
    lVar11 = *plVar4;
    *(undefined2 *)(lVar12 + 0x12) = *(undefined2 *)(lVar11 + 9);
    *(undefined4 *)(lVar12 + 0xe) = *(undefined4 *)(lVar11 + 5);
    FUN_10081e1a0(*(undefined8 *)(lVar10 + 8));
    FUN_1008dfc80(lVar10);
    return 1;
  }
LAB_100808443:
  while ((param_1[0x13] != 0xf1 || (uVar9 = param_1[0x1c], uVar9 < 0xd))) {
    uVar13 = FUN_1007fb520(param_1,0xd,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xf8),0);
    if ((int)uVar13 < 1) {
      return uVar13;
    }
    if (param_1[0x1c] == 0xd) {
      param_1[0x13] = 0xf1;
      pbVar6 = *(byte **)(param_1 + 0x1a);
      *(uint *)(lVar12 + 0x120) = (uint)*pbVar6;
      bVar2 = pbVar6[1];
      bVar3 = pbVar6[2];
      *(ulong *)(lVar12 + 0x148) = (ulong)CONCAT11(pbVar6[3],pbVar6[4]);
      lVar10 = *(long *)(param_1 + 0x20);
      *(undefined2 *)(lVar10 + 0x12) = *(undefined2 *)(pbVar6 + 9);
      *(undefined4 *)(lVar10 + 0xe) = *(undefined4 *)(pbVar6 + 5);
      uVar15 = (uint)CONCAT11(pbVar6[0xb],pbVar6[0xc]);
      *(uint *)(lVar12 + 0x124) = uVar15;
      if (param_1[0x70] == 0) {
        uVar9 = (uint)CONCAT11(bVar2,bVar3);
        if (uVar9 == *param_1) goto LAB_10080852a;
      }
      else {
        uVar9 = *param_1;
LAB_10080852a:
        if (((uint)bVar2 << 8 == (uVar9 & 0xff00)) && (uVar15 < 0x4541)) {
          uVar9 = param_1[0x1c];
          goto LAB_100808548;
        }
      }
      goto LAB_100808430;
    }
    param_1[0x1c] = 0;
  }
  uVar15 = *(uint *)(lVar12 + 0x124);
LAB_100808548:
  if ((uVar15 <= uVar9 - 0xd) || (uVar9 = FUN_1007fb520(param_1,uVar15,uVar15,1), uVar9 == uVar15))
  {
    param_1[0x13] = 0xf0;
    lVar10 = *(long *)(param_1 + 0x22);
    if (*(ulong *)(lVar12 + 0x148) == (ulong)*(ushort *)(lVar10 + 0x208)) {
      local_38 = (ulong *)(lVar10 + 0x210);
      bVar7 = false;
    }
    else {
      if ((*(ulong *)(lVar12 + 0x148) != (ulong)*(ushort *)(lVar10 + 0x208) + 1) ||
         (1 < *(int *)(lVar12 + 0x120) - 0x15U)) goto LAB_100808430;
      local_38 = (ulong *)(lVar10 + 0x220);
      bVar7 = true;
    }
    if ((((*(int *)(lVar10 + 0x280) == 0) || (*(int *)(lVar12 + 0x120) != 0x16)) ||
        (param_1[0x1c] < 0xe)) || (*(char *)(*(long *)(param_1 + 0x1a) + 0xd) != '\x01')) {
      lVar10 = *(long *)(param_1 + 0x20);
      puVar1 = (undefined8 *)(lVar10 + 0xc);
      iVar8 = FUN_10080a170(puVar1,local_38 + 1);
      if ((iVar8 < 1) &&
         ((0x3f < (uint)-iVar8 || ((*local_38 >> ((ulong)(uint)-iVar8 & 0x3f) & 1) != 0))))
      goto LAB_100808430;
      *(undefined8 *)(lVar10 + 0x150) = *puVar1;
    }
    if (*(int *)(lVar12 + 0x124) == 0) goto LAB_100808443;
    if (bVar7) {
      uVar14 = FUN_10080ee80();
      if ((((uVar14 & 0x3000) != 0) || (param_1[0xb] != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x22) + 0x280) == 0)) {
        iVar8 = FUN_1008087a0(param_1,*(long *)(param_1 + 0x22) + 0x240,lVar12 + 0x150);
        if (iVar8 < 0) {
          return 0xffffffff;
        }
        lVar10 = *(long *)(param_1 + 0x20);
        uVar9 = FUN_10080a170((ulong *)(lVar10 + 0xc),local_38 + 1);
        if ((int)uVar9 < 1) {
          if (-uVar9 < 0x40) {
            *local_38 = *local_38 | 1L << ((byte)-uVar9 & 0x3f);
          }
        }
        else {
          if (uVar9 < 0x40) {
            *local_38 = *local_38 << ((byte)uVar9 & 0x3f) | 1;
          }
          else {
            *local_38 = 1;
          }
          local_38[1] = *(ulong *)(lVar10 + 0xc);
        }
      }
    }
    else {
      iVar8 = FUN_100808a10(param_1);
      if (iVar8 != 0) {
        lVar12 = *(long *)(param_1 + 0x20);
        uVar9 = FUN_10080a170((ulong *)(lVar12 + 0xc),local_38 + 1);
        if (0 < (int)uVar9) {
          if (uVar9 < 0x40) {
            *local_38 = *local_38 << ((byte)uVar9 & 0x3f) | 1;
          }
          else {
            *local_38 = 1;
          }
          local_38[1] = *(ulong *)(lVar12 + 0xc);
          return 1;
        }
        if (0x3f < -uVar9) {
          return 1;
        }
        *local_38 = *local_38 | 1L << ((byte)-uVar9 & 0x3f);
        return 1;
      }
    }
  }
LAB_100808430:
  *(undefined4 *)(lVar12 + 0x124) = 0;
  param_1[0x1c] = 0;
  goto LAB_100808443;
}

