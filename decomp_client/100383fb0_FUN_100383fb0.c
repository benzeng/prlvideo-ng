
/* WARNING: Removing unreachable block (ram,0x000100384371) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100383fb0(long *param_1,QPen *param_2)

{
  double dVar1;
  ulong uVar2;
  Data *pDVar3;
  char cVar4;
  int iVar5;
  Data *pDVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  Data *local_100;
  double local_f8;
  double local_e8;
  QArrayData *local_d8;
  QBrush local_d0 [8];
  QBrush local_c8 [8];
  QPen local_c0 [8];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [16];
  double local_88;
  double local_80;
  undefined1 local_78 [24];
  double local_60;
  Data *local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  if ((int)param_1[7] == 1) {
    return;
  }
  (**(code **)(*param_1 + 0x88))(&local_b8,param_1);
  if (local_a8 <= 0.0) {
    return;
  }
  if (local_a0 <= 0.0) {
    return;
  }
  dVar10 = local_a8 * DAT_100e110f0 + local_b8;
  if ((int)param_1[7] == 4) {
    QPainter::setBrush(param_2,0);
    QBrush::QBrush(local_c8,3,1);
    QPen::QPen(SUB84(DAT_100e19938,0),local_c0,local_c8,1,0x10,0x40);
    QPainter::setPen(param_2);
    QPen::~QPen(local_c0);
    QBrush::~QBrush(local_c8);
    local_38 = local_a0 + local_b0;
    local_48 = local_b0;
    local_50 = dVar10;
    local_40 = dVar10;
    QPainter::drawLines((QLineF *)param_2,(int)&local_50);
  }
  QBrush::QBrush(local_d0,3,1);
  QPainter::setBrush((QBrush *)param_2);
  QBrush::~QBrush(local_d0);
  QPainter::setPen(param_2,0);
  QGraphicsItem::mapToScene((QRectF *)&local_d8);
  QPolygonF::boundingRect();
  local_e8 = local_e8 * DAT_100e110f0;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      local_50 = (double)CONCAT71(local_50._1_7_,*(int *)local_d8 != 0);
      if (*(int *)local_d8 != 0) goto LAB_1003841c0;
    }
    QArrayData::deallocate(local_d8,0x10,8);
  }
LAB_1003841c0:
  dVar12 = local_a8;
  dVar1 = (local_e8 + local_f8) - (double)param_1[8];
  dVar11 = dVar10;
  if ((*(uint *)(param_1 + 7) & 0xfffffffe) != 2) {
    dVar11 = dVar10 - dVar1;
  }
  local_100 = (Data *)PTR_shared_null_1021e15e8;
  dVar10 = dVar10 - dVar11;
  dVar13 = dVar10;
  if (dVar10 < 0.0) {
    dVar13 = (double)(DAT_100e14fe0 ^ (ulong)dVar10);
  }
  if (dVar13 <= local_a8) {
    local_58 = (Data *)PTR_shared_null_1021e15e8;
    local_60 = 0.0;
    FUN_1001413e0(&local_58,&local_60);
    dVar12 = (double)(~-(ulong)(dVar10 < 0.0) & (ulong)dVar10 |
                     (DAT_100e14fe0 ^ (ulong)dVar10) & -(ulong)(dVar10 < 0.0)) / dVar12;
    local_60 = dVar12 / DAT_100e19938 + _DAT_100e19948;
    FUN_1001413e0(&local_58,&local_60);
    local_60 = dVar12 / DAT_100e11010 + _DAT_100e19950;
    FUN_1001413e0(&local_58,&local_60);
    local_60 = 1.0;
    FUN_1001413e0(&local_58,&local_60);
    dVar12 = local_b0 + DAT_100e11130;
    dVar13 = (local_a0 + local_b0 + _DAT_100e19940) - dVar12;
    local_78._0_8_ = dVar11 + 0.0;
    local_78._8_8_ =
         *(double *)(local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10) * dVar13 + dVar12;
    FUN_100186da0(&local_100,local_78);
    local_78._0_8_ = dVar11 + dVar10 / DAT_100e19938;
    local_78._8_8_ =
         *(double *)(local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x18) * dVar13 + dVar12;
    FUN_100186da0(&local_100,local_78);
    local_78._8_8_ =
         *(double *)(local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x20) * dVar13 + dVar12;
    local_78._0_8_ = dVar11 + (dVar10 + dVar10) / DAT_100e19938;
    FUN_100186da0(&local_100,local_78);
    dVar12 = dVar13 * *(double *)(local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x28) + dVar12;
    local_78._8_4_ = SUB84(dVar12,0);
    local_78._0_8_ = dVar11 + (dVar10 * DAT_100e19938) / DAT_100e19938;
    local_78._12_4_ = (int)((ulong)dVar12 >> 0x20);
    FUN_100186da0(&local_100,local_78);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        local_50 = (double)CONCAT71(local_50._1_7_,*(int *)local_58 != 0);
        if (*(int *)local_58 != 0) goto LAB_1003844c5;
      }
      QListData::dispose(local_58);
    }
  }
LAB_1003844c5:
  uVar7 = *(int *)(local_100 + 0xc) - *(int *)(local_100 + 8);
  uVar8 = (ulong)uVar7;
  if ((uVar7 != 0) && (*(int *)(local_100 + 8) <= *(int *)(local_100 + 0xc))) {
    uVar2 = DAT_100e14fe0 ^ (ulong)dVar1;
    iVar5 = 0;
    lVar9 = 0;
    do {
      dVar10 = DAT_100e11050;
      if ((((*(uint *)(param_1 + 7) & 0xfffffffe) != 2) &&
          (dVar12 = (local_a8 -
                    (double)(~-(ulong)(dVar1 < 0.0) & (ulong)dVar1 | uVar2 & -(ulong)(dVar1 < 0.0)))
                    / local_a8, dVar10 = DAT_100e19958, DAT_100e19958 <= dVar12)) &&
         (dVar10 = DAT_100e11050, dVar12 <= DAT_100e11050)) {
        dVar10 = dVar12;
      }
      dVar10 = ((double)((int)uVar8 + iVar5) * (double)param_1[10] + DAT_100e19938) * dVar10;
      if ((_DAT_100e110c8 < dVar10) && (cVar4 = _CGRectIsInfinite(), cVar4 == '\0')) {
        dVar12 = (*(double **)(local_100 + (*(int *)(local_100 + 8) + lVar9) * 8 + 0x10))[1] -
                 dVar10;
        local_88 = dVar10 + dVar10;
        local_98._8_4_ = SUB84(dVar12,0);
        local_98._0_8_ =
             **(double **)(local_100 + (*(int *)(local_100 + 8) + lVar9) * 8 + 0x10) - dVar10;
        local_98._12_4_ = (int)((ulong)dVar12 >> 0x20);
        local_80 = local_88;
        QPainter::drawEllipse((QRectF *)param_2);
      }
      lVar9 = lVar9 + 1;
      uVar8 = (long)*(int *)(local_100 + 0xc) - (long)*(int *)(local_100 + 8);
      iVar5 = iVar5 + -1;
    } while (lVar9 < (long)uVar8);
  }
  pDVar3 = local_100;
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      UNLOCK();
      local_50 = (double)CONCAT71(local_50._1_7_,*(int *)local_100 != 0);
      if (*(int *)local_100 != 0) {
        return;
      }
    }
    iVar5 = *(int *)(local_100 + 0xc);
    if (iVar5 != *(int *)(local_100 + 8)) {
      lVar9 = (long)*(int *)(local_100 + 8) * 8 + (long)iVar5 * -8;
      pDVar6 = local_100 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

