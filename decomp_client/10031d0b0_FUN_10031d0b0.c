
QPolygon * FUN_10031d0b0(QPolygon *param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  QMapNodeBase *pQVar4;
  ulong *puVar5;
  QPoint *pQVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  QMapNodeBase *pQVar9;
  long lVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  QMatrix local_c8 [48];
  QPainterPath local_98 [8];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QPainterPath local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  pQVar4 = *(QMapNodeBase **)(param_2 + 0x48);
  if (*(int *)pQVar4 == 0) {
    pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
    lVar10 = *(long *)(*(long *)(param_2 + 0x48) + 0x10);
    if (lVar10 != 0) {
      puVar5 = (ulong *)FUN_1000340b0(lVar10,pQVar4);
      *(ulong **)(pQVar4 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar4 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar4 != -1) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
    pQVar4 = *(QMapNodeBase **)(param_2 + 0x48);
  }
  if (*(long *)(pQVar4 + 0x10) != 0) {
    pQVar9 = *(QMapNodeBase **)(pQVar4 + 0x20);
    while (pQVar9 != pQVar4 + 8) {
      if ((((*(long *)(pQVar9 + 0x20) != 0) && (*(int *)(*(long *)(pQVar9 + 0x20) + 4) != 0)) &&
          (lVar10 = *(long *)(pQVar9 + 0x28), lVar10 != 0)) &&
         ((iVar3 = FUN_100325aa0(lVar10), iVar3 != 0 &&
          (pQVar6 = (QPoint *)FUN_100323e30(lVar10,0), pQVar6 != (QPoint *)0x0)))) {
        uVar7 = *(undefined8 *)(*(long *)(pQVar6 + 0x28) + 0x14);
        uVar1 = *(undefined8 *)(*(long *)(pQVar6 + 0x28) + 0x1c);
        local_58._0_4_ = (int)uVar7;
        local_50._0_4_ = (int)uVar1;
        bVar2 = (int)local_58 <= (int)local_50;
        local_58 = uVar7;
        local_50 = uVar1;
        if (bVar2) {
          local_58._4_4_ = (int)((ulong)uVar7 >> 0x20);
          local_50._4_4_ = (int)((ulong)uVar1 >> 0x20);
          bVar2 = local_58._4_4_ <= local_50._4_4_;
          if (bVar2) {
            local_60 = 0;
            uVar7 = QWidget::mapToGlobal(pQVar6);
            local_50 = CONCAT44(local_50._4_4_ + ((int)((ulong)uVar7 >> 0x20) - local_58._4_4_),
                                (int)local_50 + ((int)uVar7 - (int)local_58));
            local_58 = uVar7;
            QPolygon::QPolygon((QPolygon *)&local_70,(QRect *)&local_58,true);
            QPolygon::united((QPolygon *)&local_68);
            if (local_68 != *(QArrayData **)param_1) {
              if (*(int *)local_68 == 0) {
                if ((int)*(uint *)(local_68 + 8) < 0) {
                  pQVar8 = (QArrayData *)
                           QArrayData::allocate(8,8,*(uint *)(local_68 + 8) & 0x7fffffff,0);
                  local_48 = pQVar8;
                  if (pQVar8 == (QArrayData *)0x0) {
                    qBadAlloc();
                  }
                  pQVar8[0xb] = (QArrayData)((byte)pQVar8[0xb] | 0x80);
                  pQVar11 = pQVar8;
                }
                else {
                  pQVar8 = (QArrayData *)QArrayData::allocate(8,8,(long)*(int *)(local_68 + 4),0);
                  pQVar11 = pQVar8;
                  local_48 = pQVar8;
                  if (pQVar8 == (QArrayData *)0x0) {
                    qBadAlloc();
                    pQVar11 = (QArrayData *)0x0;
                  }
                }
                if ((*(uint *)(pQVar11 + 8) & 0x7fffffff) != 0) {
                  lVar10 = (long)*(int *)(local_68 + 4) << 3;
                  if (lVar10 != 0) {
                    pQVar8 = local_68 + *(long *)(local_68 + 0x10);
                    pQVar12 = pQVar11 + *(long *)(pQVar11 + 0x10);
                    do {
                      uVar7 = *(undefined8 *)pQVar8;
                      pQVar8 = pQVar8 + 8;
                      *(undefined8 *)pQVar12 = uVar7;
                      pQVar12 = pQVar12 + 8;
                      lVar10 = lVar10 + -8;
                      pQVar11 = local_48;
                    } while (lVar10 != 0);
                  }
                  *(int *)(pQVar11 + 4) = *(int *)(local_68 + 4);
                  pQVar8 = local_48;
                }
              }
              else {
                pQVar8 = local_68;
                if (*(int *)local_68 != -1) {
                  LOCK();
                  *(int *)local_68 = *(int *)local_68 + 1;
                  local_31 = *(int *)local_68 != 0;
                  UNLOCK();
                }
              }
              local_48 = *(QArrayData **)param_1;
              *(QArrayData **)param_1 = pQVar8;
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10031d35b;
                }
                QArrayData::deallocate(local_48,8,8);
              }
            }
LAB_10031d35b:
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10031d395;
              }
              QArrayData::deallocate(local_68,8,8);
            }
LAB_10031d395:
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10031d3d0;
              }
              QArrayData::deallocate(local_70,8,8);
            }
          }
        }
      }
LAB_10031d3d0:
      pQVar9 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031d429;
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_10031d429:
  QPainterPath::QPainterPath(local_78);
  QPolygonF::QPolygonF((QPolygonF *)&local_80,param_1);
  QPainterPath::addPolygon((QPolygonF *)local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031d47b;
    }
    QArrayData::deallocate(local_80,0x10,8);
  }
LAB_10031d47b:
  QPainterPath::simplified();
  QMatrix::QMatrix(local_c8);
  QPainterPath::toFillPolygon((QMatrix *)&local_90);
  QPolygonF::toPolygon();
  if (local_88 != *(QArrayData **)param_1) {
    if (*(int *)local_88 == 0) {
      if ((int)*(uint *)(local_88 + 8) < 0) {
        pQVar8 = (QArrayData *)QArrayData::allocate(8,8,*(uint *)(local_88 + 8) & 0x7fffffff,0);
        local_40 = pQVar8;
        if (pQVar8 == (QArrayData *)0x0) {
          qBadAlloc();
        }
        pQVar8[0xb] = (QArrayData)((byte)pQVar8[0xb] | 0x80);
        pQVar11 = pQVar8;
      }
      else {
        pQVar8 = (QArrayData *)QArrayData::allocate(8,8,(long)*(int *)(local_88 + 4),0);
        pQVar11 = pQVar8;
        local_40 = pQVar8;
        if (pQVar8 == (QArrayData *)0x0) {
          qBadAlloc();
          pQVar11 = (QArrayData *)0x0;
        }
      }
      if ((*(uint *)(pQVar11 + 8) & 0x7fffffff) != 0) {
        lVar10 = (long)*(int *)(local_88 + 4) << 3;
        if (lVar10 != 0) {
          pQVar8 = local_88 + *(long *)(local_88 + 0x10);
          pQVar12 = pQVar11 + *(long *)(pQVar11 + 0x10);
          do {
            uVar7 = *(undefined8 *)pQVar8;
            pQVar8 = pQVar8 + 8;
            *(undefined8 *)pQVar12 = uVar7;
            pQVar12 = pQVar12 + 8;
            lVar10 = lVar10 + -8;
            pQVar11 = local_40;
          } while (lVar10 != 0);
        }
        *(int *)(pQVar11 + 4) = *(int *)(local_88 + 4);
        pQVar8 = local_40;
      }
    }
    else {
      pQVar8 = local_88;
      if (*(int *)local_88 != -1) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
    }
    local_40 = *(QArrayData **)param_1;
    *(QArrayData **)param_1 = pQVar8;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10031d5ea;
      }
      QArrayData::deallocate(local_40,8,8);
    }
  }
LAB_10031d5ea:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031d61a;
    }
    QArrayData::deallocate(local_88,8,8);
  }
LAB_10031d61a:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031d650;
    }
    QArrayData::deallocate(local_90,0x10,8);
  }
LAB_10031d650:
  QPainterPath::~QPainterPath(local_98);
  QPainterPath::~QPainterPath(local_78);
  return param_1;
}

