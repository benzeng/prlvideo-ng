
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100180cc0(long *param_1,QRectF *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  Data *pDVar5;
  long lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  Data *local_250;
  Data *local_248;
  Data *local_240;
  undefined4 local_238;
  double local_228;
  double local_210;
  QTransform local_1f0 [112];
  double local_180;
  double local_168;
  undefined1 local_158 [16];
  QArrayData *local_148 [5];
  QArrayData *local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  QArrayData *local_f8 [5];
  QArrayData *local_d0;
  QColor local_c8 [32];
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  QArrayData *local_88;
  undefined1 local_80 [32];
  QArrayData *local_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  QPainter::save();
  uVar7 = *(uint *)(param_3 + 8);
  uVar3 = QGraphicsItem::scene();
  FUN_100182900(uVar3);
  (**(code **)(*param_1 + 0x18))(local_80,param_1);
  QGraphicsItem::mapToScene((QRectF *)&local_60);
  QGraphicsView::mapFromScene((QPolygonF *)&local_88);
  auVar8 = QPolygon::boundingRect();
  lVar4 = auVar8._8_8_;
  lVar6 = auVar8._0_8_;
  local_98 = (ulong)(PTR___mh_execute_header_100e15010 + lVar6) & _DAT_100e15020 |
             _DAT_100e14ff0 + lVar6 & _DAT_100e15000;
  uStack_90 = _UNK_100e15018 + lVar4 & _UNK_100e15028 | _UNK_100e14ff8 + lVar4 & _UNK_100e15008;
  local_a8 = lVar6 + _DAT_100e15040 & _DAT_100e15020 | _DAT_100e15030 + lVar6 & _DAT_100e15000;
  uStack_a0 = lVar4 + _UNK_100e15048 & _UNK_100e15028 | _UNK_100e15038 + lVar4 & _UNK_100e15008;
  QGraphicsView::mapToScene((QRect *)local_f8);
  QPolygonF::boundingRect();
  QGraphicsItem::mapFromScene((QRectF *)&local_d0);
  QPolygonF::boundingRect();
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_51 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_100180e50;
    }
    QArrayData::deallocate(local_d0,0x10,8);
  }
LAB_100180e50:
  if (*(int *)local_f8[0] != -1) {
    if (*(int *)local_f8[0] != 0) {
      LOCK();
      *(int *)local_f8[0] = *(int *)local_f8[0] + -1;
      local_51 = *(int *)local_f8[0] != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_100180e86;
    }
    QArrayData::deallocate(local_f8[0],0x10,8);
  }
LAB_100180e86:
  QGraphicsView::mapToScene((QRect *)local_148);
  QPolygonF::boundingRect();
  QGraphicsItem::mapFromScene((QRectF *)&local_120);
  QPolygonF::boundingRect();
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_51 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_100180f0e;
    }
    QArrayData::deallocate(local_120,0x10,8);
  }
LAB_100180f0e:
  if (*(int *)local_148[0] != -1) {
    if (*(int *)local_148[0] != 0) {
      LOCK();
      *(int *)local_148[0] = *(int *)local_148[0] + -1;
      local_51 = *(int *)local_148[0] != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_100180f44;
    }
    QArrayData::deallocate(local_148[0],0x10,8);
  }
LAB_100180f44:
  uVar7 = uVar7 & 0x8000;
  if (uVar7 == 0) {
    QColor::setRgb((int)local_158,0x9b,0x9b,0x9b);
  }
  else {
    QColor::setRgb((int)local_158,0,0,0);
  }
  QPainter::fillRect(param_2,local_c8);
  QGraphicsRectItem::rect();
  QGraphicsRectItem::rect();
  QTransform::QTransform(local_1f0);
  QGraphicsRectItem::rect();
  QGraphicsRectItem::rect();
  QTransform::translate(local_118 - local_210,local_110 - local_228);
  QTransform::scale(local_108 / local_168,local_100 / local_180);
  QPainter::setTransform((QTransform *)param_2,SUB81(local_1f0,0));
  FUN_1001818c0(&local_250,param_1 + 2);
  local_248 = local_250 + (long)*(int *)(local_250 + 8) * 8 + 0x10;
  local_240 = local_250 + (long)*(int *)(local_250 + 0xc) * 8 + 0x10;
  if (*(int *)(local_250 + 8) != *(int *)(local_250 + 0xc)) {
    do {
      local_238 = 1;
      puVar2 = *(undefined8 **)local_248;
      local_40 = *(undefined4 *)(puVar2 + 2);
      local_50 = *puVar2;
      local_48 = puVar2[1];
      FUN_10017ff80(param_1,param_2,uVar7 != 0,local_1f0);
      local_248 = local_248 + 8;
    } while (local_248 != local_240);
  }
  local_238 = 1;
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_51 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_1001811ef;
    }
    iVar1 = *(int *)(local_250 + 0xc);
    if (iVar1 != *(int *)(local_250 + 8)) {
      lVar6 = (long)*(int *)(local_250 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_250 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_250);
  }
LAB_1001811ef:
  QPainter::restore();
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_51 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_100181227;
    }
    QArrayData::deallocate(local_88,8,8);
  }
LAB_100181227:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_51 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_100181257;
    }
    QArrayData::deallocate(local_60,0x10,8);
  }
LAB_100181257:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

