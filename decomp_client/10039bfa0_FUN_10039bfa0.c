
undefined8 FUN_10039bfa0(long param_1,long param_2,long param_3)

{
  void **ppvVar1;
  int iVar2;
  long *plVar3;
  QImage *this;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  Data *pDVar11;
  long lVar12;
  uint *puVar13;
  long *plVar14;
  int iVar15;
  code *pcVar16;
  Data *pDVar17;
  QPaintDevice *pQVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  long local_1f8;
  double local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined4 local_1b8;
  QPainter local_1b0 [8];
  QImage local_1a8 [32];
  Data *local_188;
  undefined1 local_170 [16];
  QBrush local_160 [8];
  undefined1 local_158 [16];
  QBrush local_148 [8];
  QTransform local_140 [88];
  undefined8 local_e8;
  undefined8 local_e0;
  QPainter local_d8 [8];
  undefined8 local_d0;
  QImage local_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  int local_58 [3];
  int local_4c;
  int local_48 [3];
  int local_3c;
  undefined1 local_31;
  
  if ((*(long *)(*(long *)(param_1 + 8) + 0x10) != param_2) || (*(short *)(param_3 + 0x10) != 0xc))
  {
    return 0;
  }
  lVar8 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1728,0);
  lVar22 = *(long *)(lVar8 + 0x28);
  iVar15 = *(int *)(lVar22 + 0x1c) - *(int *)(lVar22 + 0x14);
  iVar19 = *(int *)(lVar22 + 0x20) - *(int *)(lVar22 + 0x18);
  iVar2 = iVar15 + 1;
  local_d0 = CONCAT44(iVar19 + 1,iVar2);
  QImage::QImage(local_c8,&local_d0,5);
  QImage::fill(local_c8,2);
  QPainter::QPainter(local_d8,(QPaintDevice *)local_c8);
  QPainter::setRenderHints(local_d8,0xd,1);
  QPainter::save();
  iVar20 = -(iVar15 / 2);
  iVar23 = -(iVar19 / 2);
  local_e8 = CONCAT44(iVar23,iVar20);
  local_e0 = CONCAT44(iVar19 - iVar19 / 2,iVar15 - iVar15 / 2);
  QPainter::setWindow((QRect *)local_d8);
  ppvVar1 = (void **)(param_1 + 0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + 8) < *(int *)(*(long *)(param_1 + 0x10) + 0xc)) {
    dVar6 = (double)(iVar19 + 1);
    lVar22 = 0;
    do {
      FUN_10039d540(ppvVar1);
      lVar12 = *(long *)((long)*ppvVar1 + (*(int *)((long)*ppvVar1 + 8) + lVar22) * 8 + 0x10);
      lVar9 = QElapsedTimer::elapsed();
      puVar13 = *(uint **)(lVar12 + 0x20);
      uVar24 = puVar13[2];
      local_1e0 = 0.0;
      pcVar16 = FUN_10039d500;
      local_1f0 = DAT_100e11050;
      local_1d0 = DAT_100e11050;
      local_1d8 = DAT_100e11050;
      local_1c0 = 0.0;
      local_1c8 = 0.0;
      local_1f8 = 0;
      dVar26 = 0.0;
      dVar30 = 0.0;
      dVar29 = 0.0;
      lVar10 = 0;
      dVar25 = DAT_100e11050;
      dVar27 = DAT_100e11050;
      dVar28 = DAT_100e11050;
      if ((int)uVar24 < (int)puVar13[3]) {
        plVar14 = (long *)(lVar12 + 0x20);
        lVar21 = 0;
        lVar10 = 0;
        pcVar7 = FUN_10039d500;
        dVar26 = 0.0;
        dVar29 = 0.0;
        dVar30 = 0.0;
        do {
          local_1c0 = dVar30;
          local_1c8 = dVar29;
          local_1d0 = dVar28;
          local_1d8 = dVar27;
          local_1e0 = dVar26;
          local_1f0 = dVar25;
          pcVar16 = pcVar7;
          local_1f8 = lVar10;
          if (1 < *puVar13) {
            pDVar11 = (Data *)QListData::detach((int)plVar14);
            lVar10 = *plVar14;
            FUN_10039d130(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8,
                          lVar10 + 0x10 + (long)*(int *)(lVar10 + 0xc) * 8,
                          puVar13 + (long)(int)uVar24 * 2 + 4);
            if (*(int *)pDVar11 != -1) {
              if (*(int *)pDVar11 != 0) {
                LOCK();
                *(int *)pDVar11 = *(int *)pDVar11 + -1;
                local_31 = *(int *)pDVar11 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10039c350;
              }
              iVar15 = *(int *)(pDVar11 + 0xc);
              if (iVar15 != *(int *)(pDVar11 + 8)) {
                lVar10 = (long)*(int *)(pDVar11 + 8) * 8 + (long)iVar15 * -8;
                pDVar17 = pDVar11 + (long)iVar15 * 8 + 8;
                do {
                  if (*(void **)pDVar17 != (void *)0x0) {
                    operator_delete(*(void **)pDVar17);
                  }
                  pDVar17 = pDVar17 + -8;
                  lVar10 = lVar10 + 8;
                } while (lVar10 != 0);
              }
              QListData::dispose(pDVar11);
            }
          }
LAB_10039c350:
          puVar13 = (uint *)*plVar14;
          uVar24 = puVar13[2];
          plVar3 = *(long **)(puVar13 + ((int)uVar24 + lVar21) * 2 + 4);
          lVar10 = *plVar3;
          dVar29 = (double)plVar3[1];
          dVar30 = (double)plVar3[2];
          dVar27 = (double)plVar3[3];
          dVar28 = (double)plVar3[4];
          dVar26 = (double)plVar3[5];
          dVar25 = (double)plVar3[6];
          if (lVar9 < lVar10) break;
          lVar21 = lVar21 + 1;
          pcVar7 = (code *)plVar3[7];
        } while (lVar21 < (long)(int)puVar13[3] - (long)(int)uVar24);
      }
      local_1b8 = SUB84(DAT_100e11050,0);
      if (lVar9 <= lVar10) {
        local_1b8 = SUB84((double)(lVar9 - local_1f8) / (double)(lVar10 - local_1f8),0);
      }
      QTransform::QTransform(local_140);
      dVar4 = (double)(*pcVar16)(local_1b8);
      dVar5 = (double)(*pcVar16)(local_1b8);
      QTransform::translate
                (((dVar29 - local_1c8) * dVar4 + local_1c8) * (double)iVar2,
                 ((dVar30 - local_1c0) * dVar5 + local_1c0) * dVar6);
      dVar29 = (double)(*pcVar16)(local_1b8);
      dVar30 = (double)(*pcVar16)(local_1b8);
      QTransform::scale((dVar27 - local_1d8) * dVar29 + local_1d8,
                        (dVar28 - local_1d0) * dVar30 + local_1d0);
      dVar29 = (double)(*pcVar16)(local_1b8);
      QTransform::rotate(SUB84((dVar26 - local_1e0) * dVar29 + local_1e0,0),local_140,2);
      QPainter::setTransform((QTransform *)local_d8,SUB81(local_140,0));
      dVar29 = (double)(*pcVar16)(local_1b8);
      QPainter::setOpacity((dVar25 - local_1f0) * dVar29 + local_1f0);
      auVar31 = QImage::rect();
      local_98 = (double)auVar31._0_4_;
      local_90 = (double)auVar31._4_4_;
      local_88 = (double)((1 - auVar31._0_4_) + auVar31._8_4_);
      local_80 = (double)((1 - auVar31._4_4_) + auVar31._12_4_);
      local_78 = (double)iVar20;
      local_70 = (double)iVar23;
      local_68 = (double)iVar2;
      local_60 = dVar6;
      QPainter::drawImage(local_d8,&local_78,lVar12,&local_98,0);
      lVar22 = lVar22 + 1;
    } while (lVar22 < (long)*(int *)((long)*ppvVar1 + 0xc) - (long)*(int *)((long)*ppvVar1 + 8));
  }
  QPainter::restore();
  QColor::setRgb((int)local_158,0xf0,0x29,0x10);
  QBrush::QBrush(local_148,local_158,1);
  local_58[0] = (iVar2 * 0x104) / 0x1c5;
  iVar15 = (iVar2 * 0x46) / 0x1c5;
  local_58[1] = 0;
  local_58[2] = local_58[0] + -1 + iVar15;
  local_4c = iVar19;
  QPainter::fillRect((QRect *)local_d8,(QBrush *)local_58);
  QBrush::~QBrush(local_148);
  QColor::setRgb((int)local_170,0xf0,0x29,0x10);
  QBrush::QBrush(local_160,local_170,1);
  local_48[0] = (iVar2 * 0x177) / 0x1c5;
  local_48[1] = 0;
  local_48[2] = iVar15 + -1 + local_48[0];
  local_3c = iVar19;
  QPainter::fillRect((QRect *)local_d8,(QBrush *)local_48);
  QBrush::~QBrush(local_160);
  do {
    if (*(int *)((long)*ppvVar1 + 0xc) == *(int *)((long)*ppvVar1 + 8)) {
LAB_10039cb41:
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      FUN_10039b9d0(local_1a8);
      FUN_10039b640(ppvVar1,local_1a8);
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10039cbdf;
        }
        iVar2 = *(int *)(local_188 + 0xc);
        if (iVar2 != *(int *)(local_188 + 8)) {
          lVar22 = (long)*(int *)(local_188 + 8) * 8 + (long)iVar2 * -8;
          pDVar11 = local_188 + (long)iVar2 * 8 + 8;
          do {
            if (*(void **)pDVar11 != (void *)0x0) {
              operator_delete(*(void **)pDVar11);
            }
            pDVar11 = pDVar11 + -8;
            lVar22 = lVar22 + 8;
          } while (lVar22 != 0);
        }
        QListData::dispose(local_188);
      }
LAB_10039cbdf:
      QImage::~QImage(local_1a8);
LAB_10039cbeb:
      QPainter::~QPainter(local_d8);
      pQVar18 = (QPaintDevice *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        pQVar18 = (QPaintDevice *)0x0;
      }
      QPainter::QPainter(local_1b0,pQVar18);
      local_a8 = 0;
      uStack_a0 = 0;
      QPainter::drawImage((QPointF *)local_1b0,(QImage *)&local_a8);
      QPainter::~QPainter(local_1b0);
      QImage::~QImage(local_c8);
      return 1;
    }
    FUN_10039d540(ppvVar1);
    lVar12 = QElapsedTimer::elapsed();
    FUN_10039d540(ppvVar1);
    lVar22 = *(long *)((long)*ppvVar1 + (long)*(int *)((long)*ppvVar1 + 8) * 8 + 0x10);
    puVar13 = *(uint **)(lVar22 + 0x20);
    plVar14 = (long *)(lVar22 + 0x20);
    if (1 < *puVar13) {
      uVar24 = puVar13[2];
      pDVar11 = (Data *)QListData::detach((int)plVar14);
      lVar22 = *plVar14;
      FUN_10039d130(lVar22 + 0x10 + (long)*(int *)(lVar22 + 8) * 8,
                    lVar22 + 0x10 + (long)*(int *)(lVar22 + 0xc) * 8,
                    puVar13 + (long)(int)uVar24 * 2 + 4);
      if (*(int *)pDVar11 != -1) {
        if (*(int *)pDVar11 != 0) {
          LOCK();
          *(int *)pDVar11 = *(int *)pDVar11 + -1;
          local_31 = *(int *)pDVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10039c920;
        }
        iVar2 = *(int *)(pDVar11 + 0xc);
        if (iVar2 != *(int *)(pDVar11 + 8)) {
          lVar22 = (long)*(int *)(pDVar11 + 8) * 8 + (long)iVar2 * -8;
          pDVar17 = pDVar11 + (long)iVar2 * 8 + 8;
          do {
            if (*(void **)pDVar17 != (void *)0x0) {
              operator_delete(*(void **)pDVar17);
            }
            pDVar17 = pDVar17 + -8;
            lVar22 = lVar22 + 8;
          } while (lVar22 != 0);
        }
        QListData::dispose(pDVar11);
      }
    }
LAB_10039c920:
    if (lVar12 <= **(long **)(*plVar14 + 8 + (long)*(int *)(*plVar14 + 0xc) * 8)) {
      if (*(int *)((long)*ppvVar1 + 0xc) != *(int *)((long)*ppvVar1 + 8)) {
        FUN_10039d540(ppvVar1);
        lVar22 = *(long *)((long)*ppvVar1 + (long)*(int *)((long)*ppvVar1 + 0xc) * 8 + 8);
        puVar13 = *(uint **)(lVar22 + 0x20);
        plVar14 = (long *)(lVar22 + 0x20);
        if (*puVar13 < 2) goto LAB_10039cb05;
        uVar24 = puVar13[2];
        pDVar11 = (Data *)QListData::detach((int)plVar14);
        lVar22 = *plVar14;
        FUN_10039d130(lVar22 + 0x10 + (long)*(int *)(lVar22 + 8) * 8,
                      lVar22 + 0x10 + (long)*(int *)(lVar22 + 0xc) * 8,
                      puVar13 + (long)(int)uVar24 * 2 + 4);
        if (*(int *)pDVar11 == -1) goto LAB_10039cb05;
        if (*(int *)pDVar11 != 0) {
          LOCK();
          *(int *)pDVar11 = *(int *)pDVar11 + -1;
          local_31 = *(int *)pDVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10039cb05;
        }
        iVar2 = *(int *)(pDVar11 + 0xc);
        if (iVar2 != *(int *)(pDVar11 + 8)) {
          lVar22 = (long)*(int *)(pDVar11 + 8) * 8 + (long)iVar2 * -8;
          pDVar17 = pDVar11 + (long)iVar2 * 8 + 8;
          do {
            if (*(void **)pDVar17 != (void *)0x0) {
              operator_delete(*(void **)pDVar17);
            }
            pDVar17 = pDVar17 + -8;
            lVar22 = lVar22 + 8;
          } while (lVar22 != 0);
        }
        QListData::dispose(pDVar11);
LAB_10039cb05:
        lVar22 = **(long **)(*plVar14 + 8 + (long)*(int *)(*plVar14 + 0xc) * 8);
        FUN_10039d540(ppvVar1);
        lVar12 = QElapsedTimer::elapsed();
        if (1999 < lVar22 - lVar12) goto LAB_10039cbeb;
      }
      goto LAB_10039cb41;
    }
    FUN_10039d540(ppvVar1);
    puVar13 = *ppvVar1;
    if (1 < *puVar13) {
      FUN_10039d540(ppvVar1);
      puVar13 = *ppvVar1;
    }
    this = *(QImage **)(puVar13 + (long)(int)puVar13[2] * 2 + 4);
    if (this != (QImage *)0x0) {
      pDVar11 = *(Data **)(this + 0x20);
      if (*(int *)pDVar11 != -1) {
        if (*(int *)pDVar11 != 0) {
          LOCK();
          *(int *)pDVar11 = *(int *)pDVar11 + -1;
          local_31 = *(int *)pDVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10039c9e6;
          pDVar11 = *(Data **)(this + 0x20);
        }
        iVar2 = *(int *)(pDVar11 + 0xc);
        if (iVar2 != *(int *)(pDVar11 + 8)) {
          lVar22 = (long)*(int *)(pDVar11 + 8) * 8 + (long)iVar2 * -8;
          pDVar17 = pDVar11 + (long)iVar2 * 8 + 8;
          do {
            if (*(void **)pDVar17 != (void *)0x0) {
              operator_delete(*(void **)pDVar17);
            }
            pDVar17 = pDVar17 + -8;
            lVar22 = lVar22 + 8;
          } while (lVar22 != 0);
        }
        QListData::dispose(pDVar11);
      }
LAB_10039c9e6:
      QImage::~QImage(this);
      operator_delete(this);
    }
    QListData::erase(ppvVar1);
  } while( true );
}

