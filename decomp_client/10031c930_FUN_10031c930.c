
QPolygon * FUN_10031c930(QPolygon *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  QMapNodeBase *pQVar3;
  ulong *puVar4;
  QArrayData *pQVar5;
  QMapNodeBase *pQVar6;
  long lVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  undefined1 auVar10 [16];
  QMatrix local_c0 [48];
  QPainterPath local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QPainterPath local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_58 [16];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  pQVar3 = *(QMapNodeBase **)(param_2 + 0x48);
  if (*(int *)pQVar3 == 0) {
    pQVar3 = (QMapNodeBase *)QMapDataBase::createData();
    lVar7 = *(long *)(*(long *)(param_2 + 0x48) + 0x10);
    if (lVar7 != 0) {
      puVar4 = (ulong *)FUN_1000340b0(lVar7,pQVar3);
      *(ulong **)(pQVar3 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | (ulong)(pQVar3 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar3 != -1) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
    pQVar3 = *(QMapNodeBase **)(param_2 + 0x48);
  }
  if (*(long *)(pQVar3 + 0x10) != 0) {
    pQVar6 = *(QMapNodeBase **)(pQVar3 + 0x20);
    while (pQVar6 != pQVar3 + 8) {
      if (((*(long *)(pQVar6 + 0x20) != 0) && (*(int *)(*(long *)(pQVar6 + 0x20) + 4) != 0)) &&
         (lVar7 = *(long *)(pQVar6 + 0x28), lVar7 != 0)) {
        iVar2 = FUN_100325aa0(lVar7);
        if (iVar2 != 0) {
          auVar10 = FUN_100325fd0(lVar7);
          local_58 = auVar10;
          if ((auVar10._0_4_ <= auVar10._8_4_) && (auVar10._4_4_ <= auVar10._12_4_)) {
            QPolygon::QPolygon((QPolygon *)&local_68,(QRect *)local_58,true);
            QPolygon::united((QPolygon *)&local_60);
            if (local_60 != *(QArrayData **)param_1) {
              if (*(int *)local_60 == 0) {
                if ((int)*(uint *)(local_60 + 8) < 0) {
                  pQVar5 = (QArrayData *)
                           QArrayData::allocate(8,8,*(uint *)(local_60 + 8) & 0x7fffffff,0);
                  local_48 = pQVar5;
                  if (pQVar5 == (QArrayData *)0x0) {
                    qBadAlloc();
                  }
                  pQVar5[0xb] = (QArrayData)((byte)pQVar5[0xb] | 0x80);
                  pQVar8 = pQVar5;
                }
                else {
                  pQVar5 = (QArrayData *)QArrayData::allocate(8,8,(long)*(int *)(local_60 + 4),0);
                  pQVar8 = pQVar5;
                  local_48 = pQVar5;
                  if (pQVar5 == (QArrayData *)0x0) {
                    qBadAlloc();
                    pQVar8 = (QArrayData *)0x0;
                  }
                }
                if ((*(uint *)(pQVar8 + 8) & 0x7fffffff) != 0) {
                  lVar7 = (long)*(int *)(local_60 + 4) << 3;
                  if (lVar7 != 0) {
                    pQVar5 = local_60 + *(long *)(local_60 + 0x10);
                    pQVar9 = pQVar8 + *(long *)(pQVar8 + 0x10);
                    do {
                      uVar1 = *(undefined8 *)pQVar5;
                      pQVar5 = pQVar5 + 8;
                      *(undefined8 *)pQVar9 = uVar1;
                      pQVar9 = pQVar9 + 8;
                      lVar7 = lVar7 + -8;
                      pQVar8 = local_48;
                    } while (lVar7 != 0);
                  }
                  *(int *)(pQVar8 + 4) = *(int *)(local_60 + 4);
                  pQVar5 = local_48;
                }
              }
              else {
                pQVar5 = local_60;
                if (*(int *)local_60 != -1) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + 1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                }
              }
              local_48 = *(QArrayData **)param_1;
              *(QArrayData **)param_1 = pQVar5;
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10031cb8a;
                }
                QArrayData::deallocate(local_48,8,8);
              }
            }
LAB_10031cb8a:
            if (*(int *)local_60 != -1) {
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_31 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10031cbc4;
              }
              QArrayData::deallocate(local_60,8,8);
            }
LAB_10031cbc4:
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10031cc00;
              }
              QArrayData::deallocate(local_68,8,8);
            }
          }
        }
      }
LAB_10031cc00:
      pQVar6 = (QMapNodeBase *)QMapNodeBase::nextNode();
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031cc5b;
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_10031cc5b:
  QPainterPath::QPainterPath(local_70);
  QPolygonF::QPolygonF((QPolygonF *)&local_78,param_1);
  QPainterPath::addPolygon((QPolygonF *)local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031ccad;
    }
    QArrayData::deallocate(local_78,0x10,8);
  }
LAB_10031ccad:
  QPainterPath::simplified();
  QMatrix::QMatrix(local_c0);
  QPainterPath::toFillPolygon((QMatrix *)&local_88);
  QPolygonF::toPolygon();
  if (local_80 != *(QArrayData **)param_1) {
    if (*(int *)local_80 == 0) {
      if ((int)*(uint *)(local_80 + 8) < 0) {
        pQVar5 = (QArrayData *)QArrayData::allocate(8,8,*(uint *)(local_80 + 8) & 0x7fffffff,0);
        local_40 = pQVar5;
        if (pQVar5 == (QArrayData *)0x0) {
          qBadAlloc();
        }
        pQVar5[0xb] = (QArrayData)((byte)pQVar5[0xb] | 0x80);
        pQVar8 = pQVar5;
      }
      else {
        pQVar5 = (QArrayData *)QArrayData::allocate(8,8,(long)*(int *)(local_80 + 4),0);
        pQVar8 = pQVar5;
        local_40 = pQVar5;
        if (pQVar5 == (QArrayData *)0x0) {
          qBadAlloc();
          pQVar8 = (QArrayData *)0x0;
        }
      }
      if ((*(uint *)(pQVar8 + 8) & 0x7fffffff) != 0) {
        lVar7 = (long)*(int *)(local_80 + 4) << 3;
        if (lVar7 != 0) {
          pQVar5 = local_80 + *(long *)(local_80 + 0x10);
          pQVar9 = pQVar8 + *(long *)(pQVar8 + 0x10);
          do {
            uVar1 = *(undefined8 *)pQVar5;
            pQVar5 = pQVar5 + 8;
            *(undefined8 *)pQVar9 = uVar1;
            pQVar9 = pQVar9 + 8;
            lVar7 = lVar7 + -8;
            pQVar8 = local_40;
          } while (lVar7 != 0);
        }
        *(int *)(pQVar8 + 4) = *(int *)(local_80 + 4);
        pQVar5 = local_40;
      }
    }
    else {
      pQVar5 = local_80;
      if (*(int *)local_80 != -1) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
    }
    local_40 = *(QArrayData **)param_1;
    *(QArrayData **)param_1 = pQVar5;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10031ce0a;
      }
      QArrayData::deallocate(local_40,8,8);
    }
  }
LAB_10031ce0a:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031ce3a;
    }
    QArrayData::deallocate(local_80,8,8);
  }
LAB_10031ce3a:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031ce6a;
    }
    QArrayData::deallocate(local_88,0x10,8);
  }
LAB_10031ce6a:
  QPainterPath::~QPainterPath(local_90);
  QPainterPath::~QPainterPath(local_70);
  return param_1;
}

