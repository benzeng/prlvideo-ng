
void FUN_100185510(long *param_1)

{
  long *plVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double *pdVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double *local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  QRectF local_c8 [32];
  QArrayData *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  int local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_100186280();
  local_78 = (Data *)param_1[6];
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_78);
      lVar8 = (long)*(int *)(local_78 + 8);
      lVar9 = param_1[6];
      if (((Data *)(lVar9 + (long)*(int *)(lVar9 + 8) * 8) != local_78 + lVar8 * 8) &&
         (lVar11 = *(int *)(local_78 + 0xc) - lVar8,
         lVar11 != 0 && lVar8 <= *(int *)(local_78 + 0xc))) {
        _memcpy(local_78 + lVar8 * 8 + 0x10,(void *)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8),
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_41 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    plVar1 = param_1 + 3;
    do {
      local_60 = 1;
      dVar4 = *(double *)local_70;
      QGraphicsItem::childItems();
      local_98 = local_a0;
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 == 0) {
          QListData::detach((int)&local_98);
          lVar9 = (long)*(int *)(local_98 + 8);
          if ((local_a0 + (long)*(int *)(local_a0 + 8) * 8 != local_98 + lVar9 * 8) &&
             (lVar8 = *(int *)(local_98 + 0xc) - lVar9,
             lVar8 != 0 && lVar9 <= *(int *)(local_98 + 0xc))) {
            _memcpy(local_98 + lVar9 * 8 + 0x10,local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10,
                    lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + 1;
          local_41 = *(int *)local_a0 != 0;
          UNLOCK();
        }
      }
      local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
      local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
      local_80 = 1;
      if (*(int *)local_a0 == -1) {
LAB_1001856e9:
        for (; local_90 != local_88; local_90 = local_90 + 8) {
          QGraphicsItem::sceneBoundingRect();
          QPolygonF::QPolygonF((QPolygonF *)&local_a8,local_c8);
          uVar3 = *(uint *)(local_a8 + 4);
          if (1 < (long)(int)uVar3) {
            lVar8 = 0;
            lVar9 = 0;
            do {
              if (1 < *(uint *)local_a8) {
                if ((*(uint *)(local_a8 + 8) & 0x7fffffff) == 0) {
                  local_a8 = (QArrayData *)QArrayData::allocate(0x10,8,0,2);
                }
                else {
                  FUN_100187600(&local_a8,*(uint *)(local_a8 + 4),
                                *(uint *)(local_a8 + 8) & 0x7fffffff,0);
                }
              }
              local_d8 = *(double *)(local_a8 + lVar8 + *(long *)(local_a8 + 0x10));
              local_d0 = *(double *)(local_a8 + lVar8 + 8 + *(long *)(local_a8 + 0x10));
              if (1 < *(uint *)local_a8) {
                if ((*(uint *)(local_a8 + 8) & 0x7fffffff) == 0) {
                  local_a8 = (QArrayData *)QArrayData::allocate(0x10,8,0,2);
                }
                else {
                  FUN_100187600(&local_a8,*(uint *)(local_a8 + 4),
                                *(uint *)(local_a8 + 8) & 0x7fffffff,0);
                }
              }
              local_e8 = *(double *)(local_a8 + lVar8 + 0x10 + *(long *)(local_a8 + 0x10));
              local_e0 = *(double *)(local_a8 + lVar8 + 0x18 + *(long *)(local_a8 + 0x10));
              pdVar5 = operator_new(0x30);
              pdVar5[3] = local_e0;
              pdVar5[2] = local_e8;
              pdVar5[1] = local_d0;
              *pdVar5 = local_d8;
              *(undefined4 *)(pdVar5 + 5) = 0;
              pdVar5[4] = dVar4;
              dVar12 = *pdVar5;
              dVar2 = pdVar5[1];
              dVar13 = (pdVar5[3] - dVar2) + dVar12;
              local_f0 = pdVar5;
              if (dVar13 <= dVar12) {
                if (dVar12 <= dVar13) {
                  dVar12 = dVar2 - (pdVar5[2] - dVar12);
                  if (dVar12 <= dVar2) {
                    if (dVar12 < dVar2) {
                      *(undefined4 *)(pdVar5 + 5) = 2;
                      plVar6 = (long *)FUN_100187830(plVar1,&local_38,&local_f0);
                      if (*plVar6 == 0) {
                        puVar7 = operator_new(0x28);
                        puVar7[4] = pdVar5;
                        uVar10 = local_38;
                        goto LAB_100185a3f;
                      }
                    }
                  }
                  else {
                    *(undefined4 *)(pdVar5 + 5) = 3;
                    plVar6 = (long *)FUN_100187830(plVar1,&local_40,&local_f0);
                    if (*plVar6 == 0) {
                      puVar7 = operator_new(0x28);
                      puVar7[4] = local_f0;
                      uVar10 = local_40;
LAB_100185a3f:
                      puVar7[1] = 0;
                      *puVar7 = 0;
                      puVar7[2] = uVar10;
                      *plVar6 = (long)puVar7;
                      if (*(long *)*plVar1 != 0) {
                        *plVar1 = *(long *)*plVar1;
                        puVar7 = (undefined8 *)*plVar6;
                      }
                      FUN_1001879a0(param_1[4],puVar7);
                      param_1[5] = param_1[5] + 1;
                    }
                  }
                }
                else {
                  *(undefined4 *)(pdVar5 + 5) = 0;
                  plVar6 = (long *)FUN_100187830(param_1,&local_50,&local_f0);
                  if (*plVar6 == 0) {
                    puVar7 = operator_new(0x28);
                    puVar7[4] = local_f0;
                    uVar10 = local_50;
                    goto LAB_10018595b;
                  }
                }
              }
              else {
                *(undefined4 *)(pdVar5 + 5) = 1;
                plVar6 = (long *)FUN_100187830(param_1,&local_58,&local_f0);
                if (*plVar6 == 0) {
                  puVar7 = operator_new(0x28);
                  puVar7[4] = local_f0;
                  uVar10 = local_58;
LAB_10018595b:
                  puVar7[1] = 0;
                  *puVar7 = 0;
                  puVar7[2] = uVar10;
                  *plVar6 = (long)puVar7;
                  if (*(long *)*param_1 != 0) {
                    *param_1 = *(long *)*param_1;
                    puVar7 = (undefined8 *)*plVar6;
                  }
                  FUN_1001879a0(param_1[1],puVar7);
                  param_1[2] = param_1[2] + 1;
                }
              }
              lVar9 = lVar9 + 1;
              lVar8 = lVar8 + 0x10;
            } while (lVar9 < (long)(int)uVar3 + -1);
          }
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_41 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_41) goto LAB_1001856d0;
            }
            QArrayData::deallocate(local_a8,0x10,8);
          }
LAB_1001856d0:
          local_80 = 1;
        }
      }
      else {
        if (*(int *)local_a0 == 0) {
LAB_1001856aa:
          QListData::dispose(local_a0);
        }
        else {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_41 = *(int *)local_a0 != 0;
          UNLOCK();
          if (!(bool)local_41) goto LAB_1001856aa;
        }
        if (local_80 != 0) goto LAB_1001856e9;
      }
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_41 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_41) goto LAB_100185b1c;
        }
        QListData::dispose(local_98);
      }
LAB_100185b1c:
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_41 = 0;
    }
    QListData::dispose(local_78);
  }
  return;
}

