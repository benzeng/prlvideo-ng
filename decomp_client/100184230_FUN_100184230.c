
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100184230(undefined8 param_1,QPointF *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  Data *pDVar6;
  Data *pDVar7;
  bool bVar8;
  long lVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  Data *local_178;
  Data *local_170;
  Data *local_168;
  uint local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  Data *local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_b9;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  QGraphicsItem::sceneBoundingRect();
  QGraphicsItem::sceneBoundingRect();
  local_110 = (Data *)PTR_shared_null_1021e15e8;
  local_128 = local_108;
  dStack_120 = dStack_100;
  FUN_100186da0(&local_110,&local_128);
  local_138 = local_108 + local_f8;
  local_130 = dStack_100;
  FUN_100186da0(&local_110,&local_138);
  local_140 = dStack_100 + local_f0;
  local_148 = local_108;
  FUN_100186da0(&local_110,&local_148);
  local_158 = local_108 + local_f8;
  dStack_150 = dStack_100 + local_f0;
  FUN_100186da0(&local_110,&local_158);
  FUN_1001870b0(&local_178,&local_110);
  local_170 = local_178 + (long)*(int *)(local_178 + 8) * 8 + 0x10;
  local_168 = local_178 + (long)*(int *)(local_178 + 0xc) * 8 + 0x10;
  local_160 = 1;
  if (*(int *)(local_178 + 8) == *(int *)(local_178 + 0xc)) {
    bVar8 = false;
  }
  else {
    bVar8 = false;
    do {
      if (local_160 != 0) {
        dVar2 = **(double **)local_170;
        dVar3 = (*(double **)local_170)[1];
        dVar11 = dVar2 + _DAT_100e150c0;
        dVar12 = dVar3 + _UNK_100e150c8;
        local_a8 = _DAT_100e150d0;
        uStack_a0 = _UNK_100e150d8;
        local_b8 = dVar11;
        dStack_b0 = dVar12;
        cVar4 = QRectF::contains((QPointF *)&local_b8);
        if (cVar4 == '\0') {
          local_88 = _DAT_100e150d0;
          uStack_80 = _UNK_100e150d8;
          local_98 = dVar11;
          dStack_90 = dVar12;
          cVar4 = QRectF::contains((QPointF *)&local_98);
          if (cVar4 == '\0') {
            local_48 = _DAT_100e150d0;
            uStack_40 = _UNK_100e150d8;
            local_58 = dVar11;
            dStack_50 = dVar12;
            cVar4 = QRectF::contains((QPointF *)&local_58);
            if (cVar4 == '\0') {
              local_68 = _DAT_100e150d0;
              uStack_60 = _UNK_100e150d8;
              local_78 = dVar11;
              dStack_70 = dVar12;
              cVar4 = QRectF::contains((QPointF *)&local_78);
              if (cVar4 == '\0') {
                local_160 = 0;
              }
              else {
                local_e8 = dVar2 - local_d8;
                dStack_e0 = dVar3 - dStack_d0;
                bVar8 = true;
              }
            }
            else {
              dStack_e0 = dVar3 - dStack_d0;
              bVar8 = true;
              local_e8 = dVar2;
            }
            goto LAB_1001845c8;
          }
          dVar2 = dVar2 - local_d8;
        }
        local_e8 = dVar2;
        bVar8 = true;
        dStack_e0 = dVar3;
      }
LAB_1001845c8:
      local_170 = local_170 + 8;
      uVar5 = local_160 ^ 1;
      bVar10 = local_160 != 1;
      local_160 = uVar5;
    } while ((bVar10) && (local_170 != local_168));
  }
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_b9 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_10018466f;
    }
    iVar1 = *(int *)(local_178 + 0xc);
    if (iVar1 != *(int *)(local_178 + 8)) {
      lVar9 = (long)*(int *)(local_178 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_178 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_178);
  }
LAB_10018466f:
  if (bVar8) {
    QGraphicsItem::setPos(param_2);
  }
  pDVar6 = local_110;
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      UNLOCK();
      if (*(int *)local_110 != 0) {
        return bVar8;
      }
      local_b9 = 0;
    }
    iVar1 = *(int *)(local_110 + 0xc);
    if (iVar1 != *(int *)(local_110 + 8)) {
      lVar9 = (long)*(int *)(local_110 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_110 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar6);
  }
  return bVar8;
}

