
undefined8 FUN_1002a7200(long param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  ushort *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_668;
  undefined8 local_660;
  ulong local_658 [4];
  ushort local_638 [256];
  ushort auStack_438 [256];
  ushort auStack_238 [256];
  long local_38;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = *(int *)(param_2 + 8);
  uVar12 = 0xf0000002;
  local_38 = lVar14;
  if (0x8110 < iVar4) {
    switch(iVar4) {
    case 0x8111:
    case 0x8112:
      goto switchD_1002a7255_caseD_111;
    default:
      goto switchD_1002a7255_caseD_113;
    case 0x8114:
      goto switchD_1002a7255_caseD_114;
    case 0x8115:
      goto switchD_1002a7255_caseD_115;
    case 0x8116:
      goto switchD_1002a7255_caseD_116;
    case 0x8117:
      goto switchD_1002a7255_caseD_117;
    }
  }
  switch(iVar4) {
  case 0x111:
  case 0x112:
    goto switchD_1002a7255_caseD_111;
  default:
    goto switchD_1002a7255_caseD_113;
  case 0x114:
switchD_1002a7255_caseD_114:
    uVar12 = 0xf0000003;
    if (*(ushort *)(param_2 + 0x14) < 0x20) goto switchD_1002a7255_caseD_113;
    puVar9 = (ushort *)FUN_1002a6010(param_2);
    if (0xf < *puVar9) goto switchD_1002a7255_caseD_113;
    if (*puVar9 == 0) {
      lVar8 = *(long *)(param_1 + 0x910);
      *(undefined4 *)(lVar8 + 8) = 1;
      *(char *)(lVar8 + 0xc) = (char)puVar9[1];
      *(ushort *)(lVar8 + 0xe) = puVar9[2];
      *(ushort *)(lVar8 + 0x10) = puVar9[3];
      *(ushort *)(lVar8 + 0x12) = puVar9[4];
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(puVar9 + 10);
      *(undefined4 *)(lVar8 + 0x1c) = *(undefined4 *)(puVar9 + 0xc);
      *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(puVar9 + 0xe);
    }
    FUN_1002aa010(param_1,puVar9);
    break;
  case 0x115:
switchD_1002a7255_caseD_115:
    uVar12 = 0xf0000003;
    if (*(ushort *)(param_2 + 0x14) < 8) goto switchD_1002a7255_caseD_113;
    puVar9 = (ushort *)FUN_1002a6010(param_2);
    if (0xf < *puVar9) goto switchD_1002a7255_caseD_113;
    FUN_1002abbd0(param_1,*puVar9,*(undefined4 *)(puVar9 + 2),0);
    break;
  case 0x116:
switchD_1002a7255_caseD_116:
    uVar12 = 0xf0000003;
    if (*(ushort *)(param_2 + 0x14) < 8) goto switchD_1002a7255_caseD_113;
    puVar9 = (ushort *)FUN_1002a6010(param_2);
    uVar2 = *puVar9;
    if ((((0xf < (ulong)uVar2) || (0x100 < (uint)puVar9[3] + (uint)puVar9[2])) ||
        (*(short *)(param_2 + 0x16) == 0)) ||
       ((lVar8 = FUN_1002a6120(param_2,0,0), lVar8 == 0 ||
        (*(uint *)(lVar8 + 8) < (uint)puVar9[3] << 2)))) goto switchD_1002a7255_caseD_113;
    lVar13 = (ulong)uVar2 * 0x8f0;
    plVar1 = (long *)(param_1 + 0x948 + lVar13);
    FUN_1002a5990(lVar8,0,(ulong)puVar9[2] * 4 + *(long *)(param_1 + 0x948 + lVar13));
    uVar2 = puVar9[3];
    if (uVar2 != 0) {
      uVar3 = puVar9[2];
      uVar11 = (ulong)uVar3;
      lVar8 = *plVar1;
      do {
        uVar6 = *(uint *)(lVar8 + (uVar11 & 0xffff) * 4);
        *(uint *)(lVar8 + (uVar11 & 0xffff) * 4) =
             (uVar6 & 0xff) << 0x10 | uVar6 & 0xff00 | uVar6 >> 0x10 & 0xff;
        uVar6 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar6;
      } while ((uVar6 & 0xffff) < (uint)uVar2 + (uint)uVar3);
    }
    uVar2 = *puVar9;
    lVar8 = (ulong)uVar2 * 0x8f0;
    if (*(int *)(param_1 + 0x950 + lVar8) != 0) {
      *(undefined4 *)(param_1 + 0x950 + lVar8) = 0;
    }
    if (*(int *)(param_1 + 0x954 + lVar8) != 0) {
      *(undefined4 *)(param_1 + 0x954 + lVar8) = 0;
    }
    if (*(uint *)(param_1 + 0x958 + lVar8) < 0x3fff) {
      *(undefined4 *)(param_1 + 0x958 + lVar8) = 0x3fff;
    }
    if (*(uint *)(param_1 + 0x95c + lVar8) < 0x3fff) {
      *(undefined4 *)(param_1 + 0x95c + lVar8) = 0x3fff;
    }
    FUN_1004340c0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),(ulong)uVar2,*plVar1);
    break;
  case 0x117:
switchD_1002a7255_caseD_117:
    local_660 = 0;
    pbVar10 = (byte *)FUN_1002a6120(param_2,0,1);
    uVar12 = 0xf0000003;
    if ((pbVar10 != (byte *)0x0) && ((*pbVar10 & 7) == 0)) {
      QMutex::lock();
      *(undefined4 *)(pbVar10 + 0x10) = *(undefined4 *)(pbVar10 + 8);
      puVar15 = (undefined8 *)(param_1 + 0x960);
      lVar14 = 0;
      do {
        uVar6 = FUN_1002a5b80(pbVar10,lVar14,&local_668);
        if (uVar6 < 8) {
          local_668 = 0;
        }
        *puVar15 = local_668;
        lVar14 = lVar14 + 8;
        puVar15 = puVar15 + 0x11e;
      } while (lVar14 != 0x80);
      pbVar10 = (byte *)FUN_1002a6120(param_2,1,0);
      lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
      uVar12 = 0;
      if ((pbVar10 != (byte *)0x0) && (uVar12 = 0, (*pbVar10 & 7) == 0)) {
        *(undefined4 *)(pbVar10 + 0x10) = *(undefined4 *)(pbVar10 + 8);
        uVar6 = FUN_1002a5b80(pbVar10,0,&local_660);
        uVar12 = local_660;
        if (uVar6 < 8) {
          local_660 = 0;
          uVar12 = 0;
        }
      }
      FUN_1000d76e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x107f8),uVar12);
      if (*(long *)(param_1 + 0x900) != 0) {
        FUN_1002a5590(param_1,*(long *)(param_1 + 0x900),0xf0000000);
      }
      *(long *)(param_1 + 0x900) = param_2;
      QMutex::unlock();
      uVar12 = 0xffffffff;
    }
    goto switchD_1002a7255_caseD_113;
  case 0x118:
    puVar7 = (uint *)FUN_1002a6010(param_2);
    lVar8 = FUN_1002a6120(param_2,0,0);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::getVmFullScreen();
    cVar5 = CVmFullScreen::isEnableGammaControl();
    uVar12 = 0xf0000002;
    if (((cVar5 == '\0') || (uVar12 = 0xf0000003, *(ushort *)(param_2 + 0x14) < 8)) ||
       (uVar6 = *puVar7, 0x10 < uVar6)) goto switchD_1002a7255_caseD_113;
    if (puVar7[1] != 1) {
      if (puVar7[1] != 2) {
        FUN_1008e3970("","LocalDevices",0,"Unsupported Gamma type %d\n");
        break;
      }
      if ((lVar8 == 0) || (*(int *)(lVar8 + 8) != 0x600)) goto switchD_1002a7255_caseD_113;
      lVar13 = 0;
      FUN_1002a5990(lVar8,0,local_638,0x600);
      uVar6 = 0xffffff00;
      do {
        uVar2 = local_638[lVar13];
        uVar6 = uVar6 + 0x100;
        if (((uVar6 != uVar2) || (local_638[(int)lVar13 + 0x200] != uVar2)) ||
           (local_638[(int)lVar13 + 0x100] != uVar2)) {
          FUN_100434270(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),*puVar7,2,0x600,local_638);
          goto LAB_1002a77a7;
        }
        lVar13 = lVar13 + 1;
      } while ((uint)lVar13 < 0x100);
      uVar6 = *puVar7;
    }
    FUN_100434270(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),uVar6,1,0,0);
  }
  goto LAB_1002a77a7;
switchD_1002a7255_caseD_111:
  uVar12 = 0xf0000003;
  if (*(ushort *)(param_2 + 0x14) < 8) goto switchD_1002a7255_caseD_113;
  puVar7 = (uint *)FUN_1002a6010(param_2);
  uVar6 = *puVar7;
  if (*(uint *)(param_1 + 0x9830) <= uVar6) goto switchD_1002a7255_caseD_113;
  if ((*(uint *)(param_2 + 8) | 0x8000) == 0x8111) {
    uVar12 = 0xf000001c;
    if ((*(uint *)(param_1 + 0x9834) >> (uVar6 & 0x1f) & 1) == 0) goto switchD_1002a7255_caseD_113;
  }
  else {
    local_658[2] = 0;
    local_658[3] = 0;
    local_658[1] = 0;
    local_658[0] = (ulong)(ushort)uVar6;
    FUN_1002aa010(param_1,local_658);
  }
LAB_1002a77a7:
  uVar12 = 0;
switchD_1002a7255_caseD_113:
  if (lVar14 == local_38) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

