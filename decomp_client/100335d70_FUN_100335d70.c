
undefined8 * FUN_100335d70(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  QMapNodeBase *pQVar7;
  ulong *puVar8;
  QMapNodeBase *pQVar9;
  uint *puVar10;
  long lVar11;
  QMapNodeBase *pQVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  
  *param_1 = PTR_shared_null_1021e12f0;
  uVar16 = 0;
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar16 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0)
     ) {
    uVar16 = *(undefined8 *)(param_2 + 0x18);
  }
  plVar6 = (long *)FUN_100319950(uVar16);
  pQVar7 = (QMapNodeBase *)*plVar6;
  if (*(int *)pQVar7 == 0) {
    pQVar7 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*plVar6 + 0x10) != 0) {
      puVar8 = (ulong *)FUN_1000340b0(*(long *)(*plVar6 + 0x10),pQVar7);
      *(ulong **)(pQVar7 + 0x10) = puVar8;
      *puVar8 = *puVar8 & 3 | (ulong)(pQVar7 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar7 != -1) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    UNLOCK();
    pQVar7 = (QMapNodeBase *)*plVar6;
  }
  pQVar9 = pQVar7;
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 == 0) {
      pQVar9 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar7 + 0x10) != 0) {
        puVar8 = (ulong *)FUN_1000340b0(*(long *)(pQVar7 + 0x10),pQVar9);
        *(ulong **)(pQVar9 + 0x10) = puVar8;
        *puVar8 = *puVar8 & 3 | (ulong)(pQVar9 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + 1;
      UNLOCK();
    }
  }
  if (*(long *)(pQVar9 + 0x10) != 0) {
    pQVar12 = *(QMapNodeBase **)(pQVar9 + 0x20);
    while (pQVar12 != pQVar9 + 8) {
      if (((*(long *)(pQVar12 + 0x20) != 0) && (*(int *)(*(long *)(pQVar12 + 0x20) + 4) != 0)) &&
         (lVar11 = *(long *)(pQVar12 + 0x28), lVar11 != 0)) {
        auVar21 = FUN_1003261e0(lVar11);
        uVar19 = auVar21._0_4_;
        uVar14 = auVar21._4_4_;
        iVar3 = auVar21._12_4_;
        iVar1 = auVar21._8_4_;
        if (2 < DAT_10230ffd0) {
          uVar4 = FUN_100323e20(lVar11);
          FUN_100df99c0("GUI_DDLL","prl_client_app",3," DISPLAY #%d CURRENT RECT: %dx%d at (%d,%d)",
                        uVar4,(iVar1 + 1) - uVar19,(iVar3 + 1) - uVar14,uVar19,uVar14);
        }
        if (((int)uVar19 <= iVar1) && ((int)uVar14 <= iVar3)) {
          uVar5 = FUN_100323e20(lVar11);
          puVar17 = (uint *)*param_1;
          if (1 < *puVar17) {
            FUN_100322820(param_1);
            puVar17 = (uint *)*param_1;
          }
          uVar18 = (iVar1 + 1) - uVar19;
          uVar20 = (iVar3 + 1) - uVar14;
          puVar10 = (uint *)0x0;
          puVar2 = *(uint **)(puVar17 + 4);
          if (*(uint **)(puVar17 + 4) == (uint *)0x0) {
            puVar13 = puVar17 + 2;
          }
          else {
            do {
              while (puVar13 = puVar2, uVar15 = puVar13[6], uVar15 < uVar5) {
                puVar2 = *(uint **)(puVar13 + 4);
                if (*(uint **)(puVar13 + 4) == (uint *)0x0) {
                  if (puVar10 == (uint *)0x0) goto LAB_100336057;
                  uVar15 = puVar10[6];
                  goto LAB_10033600d;
                }
              }
              puVar10 = puVar13;
              puVar2 = *(uint **)(puVar13 + 2);
            } while (*(uint **)(puVar13 + 2) != (uint *)0x0);
LAB_10033600d:
            if (uVar15 <= uVar5) {
              puVar10[7] = uVar18;
              puVar10[8] = uVar20;
              puVar10[9] = 0;
              puVar10[10] = 0;
              puVar10[0xb] = uVar5;
              puVar10[0xc] = uVar19;
              puVar10[0xd] = uVar14;
              puVar10[0xe] = 0;
              puVar10[0xf] = 0;
              goto LAB_1003360a0;
            }
          }
LAB_100336057:
          lVar11 = QMapDataBase::createNode((int)puVar17,0x40,(QMapNodeBase *)0x8,SUB81(puVar13,0));
          *(uint *)(lVar11 + 0x18) = uVar5;
          *(uint *)(lVar11 + 0x1c) = uVar18;
          *(uint *)(lVar11 + 0x20) = uVar20;
          *(undefined8 *)(lVar11 + 0x24) = 0;
          *(uint *)(lVar11 + 0x2c) = uVar5;
          *(uint *)(lVar11 + 0x30) = uVar19;
          *(uint *)(lVar11 + 0x34) = uVar14;
          *(undefined8 *)(lVar11 + 0x38) = 0;
        }
      }
LAB_1003360a0:
      pQVar12 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      UNLOCK();
      if (*(int *)pQVar9 != 0) goto LAB_1003360fd;
    }
    if (*(long *)(pQVar9 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar9,(int)*(undefined8 *)(pQVar9 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar9);
  }
LAB_1003360fd:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) {
        return param_1;
      }
    }
    if (*(long *)(pQVar7 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar7);
  }
  return param_1;
}

