
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100184d10(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  QGraphicsItem *pQVar9;
  Data *pDVar10;
  long lVar11;
  Data *pDVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  QArrayData *pQVar16;
  Data *pDVar17;
  bool bVar18;
  Data *local_158;
  Data *local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  QGraphicsItem *local_118;
  QArrayData *local_110;
  int *local_108;
  int *local_100;
  int *local_f8;
  uint local_f0;
  Data *local_e8;
  QMatrix local_e0 [48];
  int *local_b0;
  QPainterPath local_a8 [40];
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  QPainterPath local_60 [47];
  undefined1 local_31;
  
  FUN_100186100();
  if (*(int *)(*param_2 + 0xc) == *(int *)(*param_2 + 8)) {
    return 0;
  }
  QPainterPath::QPainterPath(local_60);
  uVar7 = QGraphicsItem::scene();
  local_80 = (Data *)*param_2;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_80);
      lVar13 = (long)*(int *)(local_80 + 8);
      lVar11 = *param_2;
      if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_80 + lVar13 * 8) &&
         (lVar15 = *(int *)(local_80 + 0xc) - lVar13,
         lVar15 != 0 && lVar13 <= *(int *)(local_80 + 0xc))) {
        _memcpy(local_80 + lVar13 * 8 + 0x10,
                (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar15 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
    do {
      local_68 = 1;
      QGraphicsItem::sceneBoundingRect();
      QPainterPath::addRect((QRectF *)local_60);
      local_78 = local_78 + 8;
    } while (local_78 != local_70);
  }
  local_68 = 1;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100184e55;
    }
    QListData::dispose(local_80);
  }
LAB_100184e55:
  QPainterPath::simplified();
  QPainterPath::operator=(local_60,local_a8);
  QPainterPath::~QPainterPath(local_a8);
  QMatrix::QMatrix(local_e0);
  QPainterPath::toFillPolygons((QMatrix *)&local_b0);
  local_e8 = (Data *)*param_2;
  if (*(uint *)local_e8 != 0xffffffff) {
    if (*(uint *)local_e8 == 0) {
      QListData::detach((int)&local_e8);
      lVar13 = (long)(int)*(uint *)(local_e8 + 8);
      lVar11 = *param_2;
      if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_e8 + lVar13 * 8) &&
         (lVar15 = (int)*(uint *)(local_e8 + 0xc) - lVar13,
         lVar15 != 0 && lVar13 <= (int)*(uint *)(local_e8 + 0xc))) {
        _memcpy(local_e8 + lVar13 * 8 + 0x10,
                (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar15 * 8);
      }
    }
    else {
      LOCK();
      *(uint *)local_e8 = *(uint *)local_e8 + 1;
      local_31 = *(uint *)local_e8 != 0;
      UNLOCK();
    }
  }
  FUN_100187200(&local_108,&local_b0);
  local_100 = local_108 + (long)local_108[2] * 2 + 4;
  local_f8 = local_108 + (long)local_108[3] * 2 + 4;
  local_f0 = 1;
  if (local_108[2] != local_108[3]) {
    do {
      plVar4 = *(long **)local_100;
      pQVar16 = (QArrayData *)*plVar4;
      if (*(int *)pQVar16 == 0) {
        if ((int)*(uint *)(pQVar16 + 8) < 0) {
          local_110 = (QArrayData *)
                      QArrayData::allocate(0x10,8,*(uint *)(pQVar16 + 8) & 0x7fffffff,0);
          if (local_110 == (QArrayData *)0x0) {
            qBadAlloc();
          }
          local_110[0xb] = (QArrayData)((byte)local_110[0xb] | 0x80);
        }
        else {
          local_110 = (QArrayData *)QArrayData::allocate(0x10,8,(long)*(int *)(pQVar16 + 4),0);
          if (local_110 == (QArrayData *)0x0) {
            qBadAlloc();
          }
        }
        if ((*(uint *)(local_110 + 8) & 0x7fffffff) != 0) {
          lVar11 = *plVar4;
          lVar13 = (long)*(int *)(lVar11 + 4) << 4;
          if (lVar13 != 0) {
            puVar8 = (undefined8 *)(lVar11 + *(long *)(lVar11 + 0x10));
            pQVar16 = local_110 + *(long *)(local_110 + 0x10);
            do {
              uVar5 = *puVar8;
              puVar1 = puVar8 + 1;
              puVar8 = puVar8 + 2;
              *(undefined8 *)(pQVar16 + 8) = *puVar1;
              *(undefined8 *)pQVar16 = uVar5;
              pQVar16 = pQVar16 + 0x10;
              lVar13 = lVar13 + -0x10;
            } while (lVar13 != 0);
            lVar11 = *plVar4;
          }
          *(int *)(local_110 + 4) = *(int *)(lVar11 + 4);
        }
      }
      else {
        local_110 = pQVar16;
        if (*(int *)pQVar16 != -1) {
          LOCK();
          *(int *)pQVar16 = *(int *)pQVar16 + 1;
          local_31 = *(int *)pQVar16 != 0;
          UNLOCK();
          local_110 = (QArrayData *)*plVar4;
        }
      }
      if (local_f0 != 0) {
        pQVar9 = operator_new(0x20);
        FUN_100181a20(pQVar9,uVar7);
        local_118 = pQVar9;
        FUN_100187490(param_1 + 0x30,&local_118);
        pDVar17 = local_e8;
        if (1 < *(uint *)local_e8) {
          uVar14 = *(uint *)(local_e8 + 8);
          pDVar10 = (Data *)QListData::detach((int)&local_e8);
          lVar11 = (long)(int)*(uint *)(local_e8 + 8);
          if ((pDVar17 + (long)(int)uVar14 * 8 + 0x10 != local_e8 + lVar11 * 8 + 0x10) &&
             (lVar13 = (int)*(uint *)(local_e8 + 0xc) - lVar11,
             lVar13 != 0 && lVar11 <= (int)*(uint *)(local_e8 + 0xc))) {
            _memcpy(local_e8 + lVar11 * 8 + 0x10,pDVar17 + (long)(int)uVar14 * 8 + 0x10,lVar13 * 8);
          }
          if (*(int *)pDVar10 != -1) {
            if (*(int *)pDVar10 != 0) {
              LOCK();
              *(int *)pDVar10 = *(int *)pDVar10 + -1;
              local_31 = *(int *)pDVar10 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100185110;
            }
            QListData::dispose(pDVar10);
          }
        }
LAB_100185110:
        pDVar17 = local_e8 + (long)(int)*(uint *)(local_e8 + 8) * 8 + 0x10;
LAB_10018513b:
        pDVar10 = local_e8;
        if (1 < *(uint *)local_e8) {
          uVar14 = *(uint *)(local_e8 + 8);
          pDVar12 = (Data *)QListData::detach((int)&local_e8);
          lVar11 = (long)(int)*(uint *)(local_e8 + 8);
          if ((pDVar10 + (long)(int)uVar14 * 8 + 0x10 != local_e8 + lVar11 * 8 + 0x10) &&
             (lVar13 = (int)*(uint *)(local_e8 + 0xc) - lVar11,
             lVar13 != 0 && lVar11 <= (int)*(uint *)(local_e8 + 0xc))) {
            _memcpy(local_e8 + lVar11 * 8 + 0x10,pDVar10 + (long)(int)uVar14 * 8 + 0x10,lVar13 * 8);
          }
          if (*(int *)pDVar12 != -1) {
            if (*(int *)pDVar12 != 0) {
              LOCK();
              *(int *)pDVar12 = *(int *)pDVar12 + -1;
              local_31 = *(int *)pDVar12 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001851b0;
            }
            QListData::dispose(pDVar12);
          }
        }
LAB_1001851b0:
        if (pDVar17 != local_e8 + (long)(int)*(uint *)(local_e8 + 0xc) * 8 + 0x10) {
          lVar11 = *(long *)pDVar17;
          QGraphicsItem::sceneBoundingRect();
          local_128 = local_138 * _DAT_100e150b0 + local_148;
          dStack_120 = dStack_130 * _UNK_100e150b8 + dStack_140;
          cVar6 = QPolygonF::containsPoint(&local_110,&local_128,0);
          if (cVar6 == '\0') {
            pDVar17 = pDVar17 + 8;
          }
          else {
            if (lVar11 != 0) {
              QGraphicsItemGroup::addToGroup(pQVar9);
              QGraphicsItem::sceneBoundingRect();
              QPainterPath::addRect((QRectF *)(pQVar9 + 0x10));
            }
            local_158 = pDVar17;
            FUN_1001865e0(&local_150,&local_e8,&local_158);
            pDVar17 = local_150;
          }
          goto LAB_10018513b;
        }
        local_f0 = 0;
      }
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001852c0;
        }
        QArrayData::deallocate(local_110,0x10,8);
      }
LAB_1001852c0:
      local_100 = local_100 + 2;
      uVar14 = local_f0 ^ 1;
      bVar18 = local_f0 != 1;
      local_f0 = uVar14;
    } while ((bVar18) && (local_100 != local_f8));
  }
  if (*local_108 != -1) {
    if (*local_108 != 0) {
      LOCK();
      *local_108 = *local_108 + -1;
      local_31 = *local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100185328;
    }
    FUN_100187150(&local_108,local_108);
  }
LAB_100185328:
  iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 0xc);
  iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100185365;
    }
    QListData::dispose(local_e8);
  }
LAB_100185365:
  if (*local_b0 != -1) {
    if (*local_b0 != 0) {
      LOCK();
      *local_b0 = *local_b0 + -1;
      local_31 = *local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100185398;
    }
    FUN_100187150(&local_b0,local_b0);
  }
LAB_100185398:
  QPainterPath::~QPainterPath(local_60);
  return iVar2 - iVar3;
}

