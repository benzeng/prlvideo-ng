
void FUN_1001832f0(QList *param_1,int param_2)

{
  uint uVar1;
  QPointF *pQVar2;
  Data *pDVar3;
  long lVar4;
  Data *pDVar5;
  long lVar6;
  long lVar7;
  Data *pDVar8;
  double dVar9;
  double dVar10;
  Data **local_180;
  QGraphicsItem *local_170;
  double local_168;
  double local_160;
  undefined1 local_150 [8];
  Data *local_148;
  Data *local_140;
  Data *local_138;
  Data *local_130;
  undefined4 local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  Data *local_100;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  int local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b0;
  double local_a8;
  undefined1 local_90 [8];
  Data *local_88;
  undefined8 local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  double local_48;
  double local_40;
  undefined1 local_31;
  
  local_70 = *(Data **)(param_1 + 0x10);
  if (*(uint *)local_70 != 0xffffffff) {
    if (*(uint *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar6 = (long)(int)*(uint *)(local_70 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_70 + lVar6 * 8) &&
         (lVar7 = (int)*(uint *)(local_70 + 0xc) - lVar6,
         lVar7 != 0 && lVar6 <= (int)*(uint *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar6 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(uint *)local_70 = *(uint *)local_70 + 1;
      local_31 = *(uint *)local_70 != 0;
      UNLOCK();
    }
  }
  pDVar8 = local_70;
  uVar1 = *(uint *)(local_70 + 8);
  if (*(uint *)(local_70 + 0xc) == uVar1) goto LAB_100183c5d;
  if (param_2 == 2) {
    if (1 < *(uint *)local_70) {
      pDVar3 = (Data *)QListData::detach((int)&local_70);
      pDVar8 = pDVar8 + (long)(int)uVar1 * 8 + 0x10;
      lVar4 = (long)(int)*(uint *)(local_70 + 8);
      if ((pDVar8 != local_70 + lVar4 * 8 + 0x10) &&
         (lVar6 = (int)*(uint *)(local_70 + 0xc) - lVar4,
         lVar6 != 0 && lVar4 <= (int)*(uint *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar4 * 8 + 0x10,pDVar8,lVar6 * 8);
      }
      if (*(int *)pDVar3 != -1) {
        if (*(int *)pDVar3 != 0) {
          LOCK();
          *(int *)pDVar3 = *(int *)pDVar3 + -1;
          local_31 = *(int *)pDVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001833ec;
        }
        QListData::dispose(pDVar3);
      }
    }
LAB_1001833ec:
    pDVar8 = local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 + 0x10;
    if (1 < *(uint *)local_70) {
      pDVar3 = (Data *)QListData::detach((int)&local_70);
      lVar4 = (long)(int)*(uint *)(local_70 + 8);
      if ((pDVar8 != local_70 + lVar4 * 8 + 0x10) &&
         (lVar6 = (int)*(uint *)(local_70 + 0xc) - lVar4,
         lVar6 != 0 && lVar4 <= (int)*(uint *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar4 * 8 + 0x10,pDVar8,lVar6 * 8);
      }
      if (*(int *)pDVar3 != -1) {
        if (*(int *)pDVar3 != 0) {
          LOCK();
          *(int *)pDVar3 = *(int *)pDVar3 + -1;
          local_31 = *(int *)pDVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100183455;
        }
        QListData::dispose(pDVar3);
      }
    }
LAB_100183455:
    if (pDVar8 != local_70 + (long)(int)*(uint *)(local_70 + 0xc) * 8 + 0x10) {
      local_58 = local_70 + (long)(int)*(uint *)(local_70 + 0xc) * 8 + 0x10;
      local_50 = pDVar8;
      FUN_100186a30(&local_50,&local_58,pDVar8,FUN_100183fd0);
    }
  }
  else {
    if (param_2 != 1) goto LAB_100183c5d;
    if (1 < *(uint *)local_70) {
      pDVar3 = (Data *)QListData::detach((int)&local_70);
      pDVar8 = pDVar8 + (long)(int)uVar1 * 8 + 0x10;
      lVar4 = (long)(int)*(uint *)(local_70 + 8);
      if ((pDVar8 != local_70 + lVar4 * 8 + 0x10) &&
         (lVar6 = (int)*(uint *)(local_70 + 0xc) - lVar4,
         lVar6 != 0 && lVar4 <= (int)*(uint *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar4 * 8 + 0x10,pDVar8,lVar6 * 8);
      }
      if (*(int *)pDVar3 != -1) {
        if (*(int *)pDVar3 != 0) {
          LOCK();
          *(int *)pDVar3 = *(int *)pDVar3 + -1;
          local_31 = *(int *)pDVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001834fd;
        }
        QListData::dispose(pDVar3);
      }
    }
LAB_1001834fd:
    pDVar8 = local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 + 0x10;
    if (1 < *(uint *)local_70) {
      pDVar3 = (Data *)QListData::detach((int)&local_70);
      lVar4 = (long)(int)*(uint *)(local_70 + 8);
      if ((pDVar8 != local_70 + lVar4 * 8 + 0x10) &&
         (lVar6 = (int)*(uint *)(local_70 + 0xc) - lVar4,
         lVar6 != 0 && lVar4 <= (int)*(uint *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar4 * 8 + 0x10,pDVar8,lVar6 * 8);
      }
      if (*(int *)pDVar3 != -1) {
        if (*(int *)pDVar3 != 0) {
          LOCK();
          *(int *)pDVar3 = *(int *)pDVar3 + -1;
          local_31 = *(int *)pDVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100183566;
        }
        QListData::dispose(pDVar3);
      }
    }
LAB_100183566:
    if (pDVar8 != local_70 + (long)(int)*(uint *)(local_70 + 0xc) * 8 + 0x10) {
      local_68 = local_70 + (long)(int)*(uint *)(local_70 + 0xc) * 8 + 0x10;
      local_60 = pDVar8;
      FUN_100186a30(&local_60,&local_68,pDVar8,FUN_100183f50);
    }
  }
  pDVar8 = local_70;
  if (1 < *(uint *)local_70) {
    uVar1 = *(uint *)(local_70 + 8);
    pDVar3 = (Data *)QListData::detach((int)&local_70);
    lVar4 = (long)(int)*(uint *)(local_70 + 8);
    if ((pDVar8 + (long)(int)uVar1 * 8 + 0x10 != local_70 + lVar4 * 8 + 0x10) &&
       (lVar6 = (int)*(uint *)(local_70 + 0xc) - lVar4,
       lVar6 != 0 && lVar4 <= (int)*(uint *)(local_70 + 0xc))) {
      _memcpy(local_70 + lVar4 * 8 + 0x10,pDVar8 + (long)(int)uVar1 * 8 + 0x10,lVar6 * 8);
    }
    if (*(int *)pDVar3 != -1) {
      if (*(int *)pDVar3 != 0) {
        LOCK();
        *(int *)pDVar3 = *(int *)pDVar3 + -1;
        local_31 = *(int *)pDVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100183613;
      }
      QListData::dispose(pDVar3);
    }
  }
LAB_100183613:
  local_180 = &local_70;
  pDVar8 = local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 + 0x10;
  do {
    pDVar3 = local_70;
    if (1 < *(uint *)local_70) {
      uVar1 = *(uint *)(local_70 + 8);
      pDVar5 = (Data *)QListData::detach((int)local_180);
      lVar4 = (long)(int)*(uint *)(local_70 + 8);
      if ((pDVar3 + (long)(int)uVar1 * 8 + 0x10 != local_70 + lVar4 * 8 + 0x10) &&
         (lVar6 = (int)*(uint *)(local_70 + 0xc) - lVar4,
         lVar6 != 0 && lVar4 <= (int)*(uint *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar4 * 8 + 0x10,pDVar3 + (long)(int)uVar1 * 8 + 0x10,lVar6 * 8);
      }
      if (*(int *)pDVar5 != -1) {
        if (*(int *)pDVar5 != 0) {
          LOCK();
          *(int *)pDVar5 = *(int *)pDVar5 + -1;
          local_31 = *(int *)pDVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001836a0;
        }
        QListData::dispose(pDVar5);
      }
    }
LAB_1001836a0:
    if (pDVar8 == local_70 + (long)(int)*(uint *)(local_70 + 0xc) * 8 + 0x10)
    goto code_r0x0001001836b6;
    pDVar8 = pDVar8 + 8;
  } while( true );
code_r0x000100183c15:
  if (*(int *)local_78 != -1) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + -1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
    if (!(bool)local_31) {
LAB_100183c34:
      QListData::dispose(local_78);
    }
  }
  goto LAB_1001836c0;
code_r0x0001001836b6:
  local_170 = (QGraphicsItem *)0x0;
LAB_1001836c0:
  while (pDVar8 = local_70, uVar1 = *(uint *)(local_70 + 8), *(uint *)(local_70 + 0xc) != uVar1) {
    if (1 < *(uint *)local_70) {
      pDVar3 = (Data *)QListData::detach((int)local_180);
      lVar4 = (long)(int)*(uint *)(local_70 + 8);
      if ((pDVar8 + (long)(int)uVar1 * 8 + 0x10 != local_70 + lVar4 * 8 + 0x10) &&
         (lVar6 = (int)*(uint *)(local_70 + 0xc) - lVar4,
         lVar6 != 0 && lVar4 <= (int)*(uint *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar4 * 8 + 0x10,pDVar8 + (long)(int)uVar1 * 8 + 0x10,lVar6 * 8);
      }
      if (*(int *)pDVar3 != -1) {
        if (*(int *)pDVar3 != 0) {
          LOCK();
          *(int *)pDVar3 = *(int *)pDVar3 + -1;
          local_31 = *(int *)pDVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100183740;
        }
        QListData::dispose(pDVar3);
      }
    }
LAB_100183740:
    pDVar8 = local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 + 0x10;
    if (local_170 == (QGraphicsItem *)0x0) {
      local_78 = (Data *)PTR_shared_null_1021e15e8;
      local_80 = *(undefined8 *)(local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 + 0x10);
      FUN_100186c30(&local_78,&local_80);
      local_170 = (QGraphicsItem *)QGraphicsScene::createItemGroup(param_1);
      local_88 = pDVar8;
      FUN_1001865e0(local_90,&local_70,&local_88);
      if (*(int *)local_78 != 0) goto code_r0x000100183c15;
      goto LAB_100183c34;
    }
    QGraphicsItem::sceneBoundingRect();
    local_c8 = 0.0;
    dStack_c0 = 0.0;
    local_d8 = 0.0;
    dStack_d0 = 0.0;
    QGraphicsItem::childItems();
    local_f8 = local_100;
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 == 0) {
        QListData::detach((int)&local_f8);
        lVar4 = (long)*(int *)(local_f8 + 8);
        if ((local_100 + (long)*(int *)(local_100 + 8) * 8 != local_f8 + lVar4 * 8) &&
           (lVar6 = *(int *)(local_f8 + 0xc) - lVar4,
           lVar6 != 0 && lVar4 <= *(int *)(local_f8 + 0xc))) {
          _memcpy(local_f8 + lVar4 * 8 + 0x10,local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10,
                  lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + 1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
      }
    }
    local_f0 = local_f8 + (long)*(int *)(local_f8 + 8) * 8 + 0x10;
    local_e8 = local_f8 + (long)*(int *)(local_f8 + 0xc) * 8 + 0x10;
    local_e0 = 1;
    if (*(int *)local_100 == -1) {
LAB_100183904:
      for (; local_f0 != local_e8; local_f0 = local_f0 + 8) {
        FUN_100184050(&local_120);
        dStack_c0 = local_108;
        local_c8 = local_110;
        dStack_d0 = local_118;
        local_d8 = local_120;
        local_e0 = 1;
      }
    }
    else {
      if (*(int *)local_100 == 0) {
LAB_100183887:
        QListData::dispose(local_100);
      }
      else {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_100183887;
      }
      if (local_e0 != 0) goto LAB_100183904;
    }
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10018395c;
      }
      QListData::dispose(local_f8);
    }
LAB_10018395c:
    if ((((local_c8 != 0.0) || (NAN(local_c8))) || (dStack_c0 != 0.0)) || (NAN(dStack_c0))) {
      if (local_b0 < local_d8) {
        dVar9 = local_b0 - local_d8;
        local_d8 = local_d8 + dVar9;
        local_c8 = local_c8 - dVar9;
      }
      if (local_a8 < dStack_d0) {
        dVar9 = local_a8 - dStack_d0;
        dStack_d0 = dStack_d0 + dVar9;
        dStack_c0 = dStack_c0 - dVar9;
      }
    }
    local_168 = 0.0;
    local_160 = local_c8;
    if (param_2 != 1) {
      local_160 = 0.0;
    }
    dVar9 = 0.0;
    if (param_2 != 1) {
      local_168 = dStack_c0;
    }
    local_140 = local_70;
    if (*(uint *)local_70 != 0xffffffff) {
      if (*(uint *)local_70 == 0) {
        QListData::detach((int)&local_140);
        lVar4 = (long)(int)*(uint *)(local_140 + 8);
        if ((local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 != local_140 + lVar4 * 8) &&
           (lVar6 = (int)*(uint *)(local_140 + 0xc) - lVar4,
           lVar6 != 0 && lVar4 <= (int)*(uint *)(local_140 + 0xc))) {
          _memcpy(local_140 + lVar4 * 8 + 0x10,
                  local_70 + (long)(int)*(uint *)(local_70 + 8) * 8 + 0x10,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(uint *)local_70 = *(uint *)local_70 + 1;
        local_31 = *(uint *)local_70 != 0;
        UNLOCK();
      }
    }
    local_138 = local_140 + (long)(int)*(uint *)(local_140 + 8) * 8 + 0x10;
    local_130 = local_140 + (long)(int)*(uint *)(local_140 + 0xc) * 8 + 0x10;
    if (*(uint *)(local_140 + 8) != *(uint *)(local_140 + 0xc)) {
      do {
        local_128 = 1;
        pQVar2 = *(QPointF **)local_138;
        dVar10 = (double)QGraphicsItem::pos();
        QGraphicsItem::pos();
        local_48 = dVar10 + local_160;
        dVar9 = dVar9 + local_168;
        local_40 = dVar9;
        QGraphicsItem::setPos(pQVar2);
        local_138 = local_138 + 8;
      } while (local_138 != local_130);
    }
    local_128 = 1;
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100183b89;
      }
      QListData::dispose(local_140);
    }
LAB_100183b89:
    QGraphicsItemGroup::addToGroup(local_170);
    local_148 = pDVar8;
    FUN_1001865e0(local_150,&local_70,&local_148);
  }
  QGraphicsScene::destroyItemGroup((QGraphicsItemGroup *)param_1);
LAB_100183c5d:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_70);
  }
  return;
}

