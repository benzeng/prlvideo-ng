
QPixmap * FUN_100733b10(QPixmap *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  QMapNodeBase *pQVar7;
  QMapNodeBase *pQVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  QMapNodeBase *pQVar13;
  Data *pDVar14;
  Data *pDVar15;
  uint uVar16;
  uint uVar17;
  QArrayData *pQVar18;
  QSize QVar19;
  long lVar20;
  QColor local_d0 [16];
  QPixmap local_c0 [32];
  QArrayData *local_a0;
  QSize local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  local_78 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::split(&local_70,param_3,&local_78,1,1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100733b8d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100733b8d:
  if (*(int *)(local_70 + 8) < *(int *)(local_70 + 0xc)) {
    local_80 = *(QArrayData **)(local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10);
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  else {
    local_80 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  uVar3 = QString::toInt((bool *)&local_80,0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100733c07;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100733c07:
  if (*(int *)(local_70 + 0xc) - *(int *)(local_70 + 8) < 2) {
    local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    local_88 = *(QArrayData **)(local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x18);
    if (1 < *(int *)local_88 + 1U) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  uVar4 = QString::toInt((bool *)&local_88,0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100733c86;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100733c86:
  if (*(int *)(local_70 + 0xc) - *(int *)(local_70 + 8) < 3) {
    local_90 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    local_90 = *(QArrayData **)(local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x20);
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  iVar5 = QString::toInt((bool *)&local_90,0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100733d11;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100733d11:
  if (*(uint *)(DAT_1023123d0 + 4) != 0) {
    for (puVar9 = *(undefined8 **)
                   (DAT_1023123d0[1] +
                   ((ulong)*(uint *)((long)DAT_1023123d0 + 0x24) %
                   (ulong)*(uint *)(DAT_1023123d0 + 4)) * 8); puVar9 != DAT_1023123d0;
        puVar9 = (undefined8 *)*puVar9) {
      if (((*(uint *)(puVar9 + 1) == *(uint *)((long)DAT_1023123d0 + 0x24)) &&
          (iVar5 == *(int *)((long)puVar9 + 0xc))) && (iVar5 == *(int *)(puVar9 + 2))) {
        if (puVar9 != DAT_1023123d0) {
          QVar19.field1_0x4 = iVar5;
          QVar19.field0_0x0 = iVar5;
          goto LAB_1007340fb;
        }
        break;
      }
    }
  }
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  FUN_1007348a0(&local_48,&DAT_1023123d0);
  local_68 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_68);
      iVar1 = *(int *)(local_68 + 8);
      if (iVar1 != *(int *)(local_68 + 0xc)) {
        pDVar15 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
        pDVar14 = local_68 + (long)iVar1 * 8 + 0x10;
        lVar20 = (long)*(int *)(local_68 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          *(undefined8 *)pDVar14 = *(undefined8 *)pDVar15;
          pDVar14 = pDVar14 + 8;
          pDVar15 = pDVar15 + 8;
          lVar20 = lVar20 + -8;
        } while (lVar20 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  pDVar15 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_60 = pDVar15;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      iVar6 = *(int *)pDVar15 - iVar5;
      iVar1 = -iVar6;
      if (0 < iVar6) {
        iVar1 = iVar6;
      }
      iVar11 = *(int *)(pDVar15 + 4) - iVar5;
      iVar6 = -iVar11;
      if (0 < iVar11) {
        iVar6 = iVar11;
      }
      local_60 = pDVar15;
      if (1 < *(uint *)local_40) {
        FUN_100734b40(&local_40);
      }
      uVar17 = iVar6 + iVar1;
      pQVar7 = (QMapNodeBase *)0x0;
      pQVar8 = *(QMapNodeBase **)(local_40 + 0x10);
      if (*(QMapNodeBase **)(local_40 + 0x10) == (QMapNodeBase *)0x0) {
        pQVar13 = local_40 + 8;
LAB_100733ef2:
        pQVar7 = (QMapNodeBase *)
                 QMapDataBase::createNode((int)local_40,0x28,(QMapNodeBase *)0x8,SUB81(pQVar13,0));
        *(uint *)(pQVar7 + 0x18) = uVar17;
      }
      else {
        do {
          while (pQVar13 = pQVar8, uVar16 = *(uint *)(pQVar13 + 0x18), (int)uVar16 < (int)uVar17) {
            pQVar8 = *(QMapNodeBase **)(pQVar13 + 0x10);
            if (*(QMapNodeBase **)(pQVar13 + 0x10) == (QMapNodeBase *)0x0) {
              if (pQVar7 == (QMapNodeBase *)0x0) goto LAB_100733ef2;
              uVar16 = *(uint *)(pQVar7 + 0x18);
              goto LAB_100733eca;
            }
          }
          pQVar7 = pQVar13;
          pQVar8 = *(QMapNodeBase **)(pQVar13 + 8);
        } while (*(QMapNodeBase **)(pQVar13 + 8) != (QMapNodeBase *)0x0);
LAB_100733eca:
        if ((int)uVar17 < (int)uVar16) goto LAB_100733ef2;
      }
      *(undefined8 *)(pQVar7 + 0x1c) = *(undefined8 *)pDVar15;
      pDVar15 = local_60 + 8;
      local_60 = pDVar15;
    } while (pDVar15 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100733f61;
    }
    QListData::dispose(local_68);
  }
LAB_100733f61:
  if (1 < *(uint *)local_40) {
    FUN_100734b40(&local_40);
  }
  pQVar7 = local_40;
  if (*(long *)(local_40 + 0x10) == 0) {
    pQVar8 = local_40 + 8;
  }
  else {
    pQVar8 = *(QMapNodeBase **)(local_40 + 0x20);
  }
  QVar19 = *(QSize *)(pQVar8 + 0x1c);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007340c4;
    }
    QListData::dispose(local_48);
  }
LAB_1007340c4:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007340fb;
    }
    if (*(long *)(pQVar7 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar7,(int)*(long *)(pQVar7 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar7);
  }
LAB_1007340fb:
  uVar12 = 0;
  if ((*(int *)((long)DAT_1023123d0 + 0x14) != 0) && (*(uint *)(DAT_1023123d0 + 4) != 0)) {
    uVar17 = *(uint *)((long)DAT_1023123d0 + 0x24) ^ QVar19.field0_0x0 ^ QVar19.field1_0x4;
    for (puVar9 = *(undefined8 **)
                   (DAT_1023123d0[1] + ((ulong)uVar17 % (ulong)*(uint *)(DAT_1023123d0 + 4)) * 8);
        uVar12 = 0, puVar9 != DAT_1023123d0; puVar9 = (undefined8 *)*puVar9) {
      if (((*(uint *)(puVar9 + 1) == uVar17) && (QVar19.field0_0x0 == *(uint *)((long)puVar9 + 0xc))
          ) && (QVar19.field1_0x4 == *(uint *)(puVar9 + 2))) {
        uVar12 = 0;
        if (puVar9 != DAT_1023123d0) {
          uVar12 = *(undefined4 *)((long)puVar9 + 0x14);
        }
        break;
      }
    }
  }
  local_98 = QVar19;
  ResourceUtils::getOsIconPath(&local_a0,uVar3,uVar4,uVar12);
  QPixmap::QPixmap(param_1,&local_a0,0,0);
  if (param_4 != (undefined8 *)0x0) {
    uVar10 = QPixmap::size();
    *param_4 = uVar10;
  }
  cVar2 = QPixmap::isNull();
  if (cVar2 != '\0') {
    QPixmap::QPixmap(local_c0,&local_98);
    QPixmap::operator=(param_1,local_c0);
    QPixmap::~QPixmap(local_c0);
    QColor::QColor(local_d0,0x13);
    QPixmap::fill((QColor *)param_1);
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073422c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10073422c:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if (iVar1 != *(int *)(local_70 + 8)) {
      lVar20 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
      pDVar15 = local_70 + (long)iVar1 * 8 + 8;
      do {
        pQVar18 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar18 == 0) {
LAB_100734290:
          QArrayData::deallocate(pQVar18,2,8);
        }
        else if (*(int *)pQVar18 != -1) {
          LOCK();
          *(int *)pQVar18 = *(int *)pQVar18 + -1;
          local_31 = *(int *)pQVar18 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar18 = *(QArrayData **)pDVar15;
            goto LAB_100734290;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar20 = lVar20 + 8;
      } while (lVar20 != 0);
    }
    QListData::dispose(local_70);
  }
  return param_1;
}

