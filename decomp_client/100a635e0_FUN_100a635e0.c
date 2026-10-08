
void FUN_100a635e0(long *param_1,long *param_2,undefined8 param_3)

{
  bool *pbVar1;
  bool *pbVar2;
  QString *pQVar3;
  QString *pQVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *local_a8;
  long local_a0;
  QString local_98;
  undefined4 local_90;
  QString local_88;
  undefined4 local_80;
  QString local_78;
  undefined4 local_70;
  QString local_68;
  undefined4 local_60;
  QString local_58;
  undefined4 local_50;
  QString local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar18 = *param_2;
  uVar11 = (ulong)(lVar18 - *param_1) >> 3;
  iVar5 = (int)uVar11;
  do {
    if (iVar5 < 2) {
      return;
    }
    *param_2 = lVar18 + -8;
    puVar16 = (undefined8 *)*param_1;
    pbVar1 = *(bool **)(lVar18 + -8);
    pbVar2 = (bool *)*puVar16;
    uVar6 = 0x80000000;
    if (pbVar1[9] == false) {
      uVar6 = 0;
    }
    uVar13 = 0x40000000;
    if (pbVar1[10] == false) {
      uVar13 = 0;
    }
    uVar14 = 0x20000000;
    if (pbVar1[8] == false) {
      uVar14 = 0;
    }
    uVar7 = QString::toInt(pbVar1,0);
    uVar12 = 0x80000000;
    if (pbVar2[9] == false) {
      uVar12 = 0;
    }
    uVar15 = 0x40000000;
    if (pbVar2[10] == false) {
      uVar15 = 0;
    }
    uVar8 = 0x20000000;
    if (pbVar2[8] == false) {
      uVar8 = 0;
    }
    uVar9 = QString::toInt(pbVar2,0);
    if ((uVar9 & 0xfffffff | uVar15 | uVar12 | uVar8) <
        (uVar13 | uVar6 | uVar14 | uVar7 & 0xfffffff)) {
      pQVar3 = *(QString **)*param_2;
      pQVar4 = *(QString **)*param_1;
      local_88.field0_0x0 = pQVar3->field0_0x0;
      if (1 < *(int *)local_88.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
      }
      local_80 = *(undefined4 *)&pQVar3[1].field0_0x0;
      QString::operator=(pQVar3,pQVar4);
      *(undefined4 *)&pQVar3[1].field0_0x0 = *(undefined4 *)&pQVar4[1].field0_0x0;
      QString::operator=(pQVar4,&local_88);
      *(undefined4 *)&pQVar4[1].field0_0x0 = local_80;
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a63770;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
    }
LAB_100a63770:
    iVar5 = (int)uVar11;
    if (iVar5 == 2) {
      return;
    }
    iVar10 = (int)(((uint)(uVar11 >> 0x1f) & 1) + iVar5) >> 1;
    pbVar1 = (bool *)puVar16[iVar10];
    pbVar2 = *(bool **)*param_1;
    uVar6 = 0x80000000;
    if (pbVar1[9] == false) {
      uVar6 = 0;
    }
    uVar13 = 0x40000000;
    if (pbVar1[10] == false) {
      uVar13 = 0;
    }
    uVar14 = 0x20000000;
    if (pbVar1[8] == false) {
      uVar14 = 0;
    }
    uVar7 = QString::toInt(pbVar1,0);
    uVar12 = 0x80000000;
    if (pbVar2[9] == false) {
      uVar12 = 0;
    }
    uVar15 = 0x40000000;
    if (pbVar2[10] == false) {
      uVar15 = 0;
    }
    uVar8 = 0x20000000;
    if (pbVar2[8] == false) {
      uVar8 = 0;
    }
    uVar9 = QString::toInt(pbVar2,0);
    if ((uVar9 & 0xfffffff | uVar15 | uVar12 | uVar8) <
        (uVar13 | uVar6 | uVar14 | uVar7 & 0xfffffff)) {
      pQVar3 = (QString *)puVar16[iVar10];
      pQVar4 = *(QString **)*param_1;
      local_78.field0_0x0 = pQVar3->field0_0x0;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      local_70 = *(undefined4 *)&pQVar3[1].field0_0x0;
      QString::operator=(pQVar3,pQVar4);
      *(undefined4 *)&pQVar3[1].field0_0x0 = *(undefined4 *)&pQVar4[1].field0_0x0;
      QString::operator=(pQVar4,&local_78);
      *(undefined4 *)&pQVar4[1].field0_0x0 = local_70;
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a638c0;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    }
LAB_100a638c0:
    pbVar1 = *(bool **)*param_2;
    pbVar2 = (bool *)puVar16[iVar10];
    uVar6 = 0x80000000;
    if (pbVar1[9] == false) {
      uVar6 = 0;
    }
    uVar13 = 0x40000000;
    if (pbVar1[10] == false) {
      uVar13 = 0;
    }
    uVar14 = 0x20000000;
    if (pbVar1[8] == false) {
      uVar14 = 0;
    }
    uVar7 = QString::toInt(pbVar1,0);
    uVar12 = 0x80000000;
    if (pbVar2[9] == false) {
      uVar12 = 0;
    }
    uVar15 = 0x40000000;
    if (pbVar2[10] == false) {
      uVar15 = 0;
    }
    uVar8 = 0x20000000;
    if (pbVar2[8] == false) {
      uVar8 = 0;
    }
    uVar9 = QString::toInt(pbVar2,0);
    if ((uVar9 & 0xfffffff | uVar15 | uVar12 | uVar8) <
        (uVar13 | uVar6 | uVar14 | uVar7 & 0xfffffff)) {
      pQVar3 = *(QString **)*param_2;
      pQVar4 = (QString *)puVar16[iVar10];
      local_68.field0_0x0 = pQVar3->field0_0x0;
      if (1 < *(int *)local_68.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
      }
      local_60 = *(undefined4 *)&pQVar3[1].field0_0x0;
      QString::operator=(pQVar3,pQVar4);
      *(undefined4 *)&pQVar3[1].field0_0x0 = *(undefined4 *)&pQVar4[1].field0_0x0;
      QString::operator=(pQVar4,&local_68);
      *(undefined4 *)&pQVar4[1].field0_0x0 = local_60;
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a63a00;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
    }
LAB_100a63a00:
    if (iVar5 == 3) {
      return;
    }
    pQVar3 = (QString *)puVar16[iVar10];
    pQVar4 = *(QString **)*param_2;
    local_58.field0_0x0 = pQVar3->field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    local_50 = *(undefined4 *)&pQVar3[1].field0_0x0;
    QString::operator=(pQVar3,pQVar4);
    *(undefined4 *)&pQVar3[1].field0_0x0 = *(undefined4 *)&pQVar4[1].field0_0x0;
    QString::operator=(pQVar4,&local_58);
    puVar17 = (undefined8 *)(lVar18 + -0x10);
    *(undefined4 *)&pQVar4[1].field0_0x0 = local_50;
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a63ab8;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100a63ab8:
    if (puVar16 < puVar17) {
      for (; puVar16 < puVar17; puVar16 = puVar16 + 1) {
        pbVar1 = (bool *)*puVar16;
        pbVar2 = *(bool **)*param_2;
        uVar6 = 0x80000000;
        if (pbVar1[9] == false) {
          uVar6 = 0;
        }
        uVar13 = 0x40000000;
        if (pbVar1[10] == false) {
          uVar13 = 0;
        }
        uVar14 = 0x20000000;
        if (pbVar1[8] == false) {
          uVar14 = 0;
        }
        uVar7 = QString::toInt(pbVar1,0);
        uVar12 = 0x80000000;
        if (pbVar2[9] == false) {
          uVar12 = 0;
        }
        uVar15 = 0x40000000;
        if (pbVar2[10] == false) {
          uVar15 = 0;
        }
        uVar8 = 0x20000000;
        if (pbVar2[8] == false) {
          uVar8 = 0;
        }
        uVar9 = QString::toInt(pbVar2,0);
        if ((uVar13 | uVar6 | uVar14 | uVar7 & 0xfffffff) <=
            (uVar9 & 0xfffffff | uVar15 | uVar12 | uVar8)) break;
      }
      do {
        if (puVar17 <= puVar16) break;
        pbVar1 = *(bool **)*param_2;
        pbVar2 = (bool *)*puVar17;
        uVar6 = 0x80000000;
        if (pbVar1[9] == false) {
          uVar6 = 0;
        }
        uVar13 = 0x40000000;
        if (pbVar1[10] == false) {
          uVar13 = 0;
        }
        uVar14 = 0x20000000;
        if (pbVar1[8] == false) {
          uVar14 = 0;
        }
        uVar7 = QString::toInt(pbVar1,0);
        uVar12 = 0x80000000;
        if (pbVar2[9] == false) {
          uVar12 = 0;
        }
        uVar15 = 0x40000000;
        if (pbVar2[10] == false) {
          uVar15 = 0;
        }
        uVar8 = 0x20000000;
        if (pbVar2[8] == false) {
          uVar8 = 0;
        }
        uVar9 = QString::toInt(pbVar2,0);
        if ((uVar13 | uVar6 | uVar14 | uVar7 & 0xfffffff) <=
            (uVar9 & 0xfffffff | uVar15 | uVar12 | uVar8)) goto code_r0x000100a63c40;
        puVar17 = puVar17 + -1;
      } while( true );
    }
    pbVar1 = (bool *)*puVar16;
    pbVar2 = *(bool **)*param_2;
    uVar6 = 0x80000000;
    if (pbVar1[9] == false) {
      uVar6 = 0;
    }
    uVar13 = 0x40000000;
    if (pbVar1[10] == false) {
      uVar13 = 0;
    }
    uVar14 = 0x20000000;
    if (pbVar1[8] == false) {
      uVar14 = 0;
    }
    uVar7 = QString::toInt(pbVar1,0);
    uVar12 = 0x80000000;
    if (pbVar2[9] == false) {
      uVar12 = 0;
    }
    uVar15 = 0x40000000;
    if (pbVar2[10] == false) {
      uVar15 = 0;
    }
    uVar8 = 0x20000000;
    if (pbVar2[8] == false) {
      uVar8 = 0;
    }
    uVar9 = QString::toInt(pbVar2,0);
    if ((uVar9 & 0xfffffff | uVar15 | uVar12 | uVar8) <
        (uVar13 | uVar6 | uVar14 | uVar7 & 0xfffffff)) {
      puVar16 = puVar16 + 1;
    }
    pQVar3 = *(QString **)*param_2;
    pQVar4 = (QString *)*puVar16;
    local_98.field0_0x0 = pQVar3->field0_0x0;
    if (1 < *(int *)local_98.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
    }
    local_90 = *(undefined4 *)&pQVar3[1].field0_0x0;
    QString::operator=(pQVar3,pQVar4);
    *(undefined4 *)&pQVar3[1].field0_0x0 = *(undefined4 *)&pQVar4[1].field0_0x0;
    QString::operator=(pQVar4,&local_98);
    *(undefined4 *)&pQVar4[1].field0_0x0 = local_90;
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a63e05;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_100a63e05:
    local_a0 = *param_1;
    local_a8 = puVar16;
    FUN_100a635e0(&local_a0,&local_a8,param_3);
    *param_1 = (long)(puVar16 + 1);
    lVar18 = *param_2 + 8;
    *param_2 = lVar18;
    uVar11 = (ulong)(lVar18 - *param_1) >> 3;
    iVar5 = (int)uVar11;
  } while( true );
code_r0x000100a63c40:
  pQVar3 = (QString *)*puVar16;
  pQVar4 = (QString *)*puVar17;
  local_48.field0_0x0 = pQVar3->field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_40 = *(undefined4 *)&pQVar3[1].field0_0x0;
  QString::operator=(pQVar3,pQVar4);
  *(undefined4 *)&pQVar3[1].field0_0x0 = *(undefined4 *)&pQVar4[1].field0_0x0;
  QString::operator=(pQVar4,&local_48);
  *(undefined4 *)&pQVar4[1].field0_0x0 = local_40;
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a63ab0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100a63ab0:
  puVar16 = puVar16 + 1;
  puVar17 = puVar17 + -1;
  goto LAB_100a63ab8;
}

