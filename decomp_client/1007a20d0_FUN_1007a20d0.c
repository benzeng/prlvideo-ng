
void FUN_1007a20d0(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  size_t sVar9;
  long *plVar10;
  undefined8 *puVar11;
  QArrayData *pQVar12;
  QArrayData *pQVar13;
  QArrayData *pQVar14;
  long lVar15;
  long *plVar16;
  
  puVar3 = (uint *)*param_1;
  uVar1 = *puVar3;
  puVar5 = (uint *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    if ((uVar1 < 2) && ((puVar3[2] & 0x7fffffff) == param_3)) {
      uVar2 = puVar3[1];
      lVar15 = (long)(int)uVar2;
      if ((int)uVar2 < (int)param_2) {
        if (uVar2 != param_2) {
          _memset_pattern16((void *)((long)puVar3 + lVar15 * 8 + *(long *)(puVar3 + 4)),
                            &PTR_shared_null_1021f75f0,((int)param_2 - lVar15) * 8);
        }
      }
      else if (uVar2 != param_2) {
        puVar11 = (undefined8 *)((long)puVar3 + (long)(int)param_2 * 8 + *(long *)(puVar3 + 4));
        lVar15 = lVar15 * 8 + (long)(int)param_2 * -8;
        do {
          pQVar13 = (QArrayData *)*puVar11;
          if (*(int *)pQVar13 == 0) {
LAB_1007a2300:
            QArrayData::deallocate(pQVar13,8,8);
          }
          else if (*(int *)pQVar13 != -1) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            UNLOCK();
            if (*(int *)pQVar13 == 0) {
              pQVar13 = (QArrayData *)*puVar11;
              goto LAB_1007a2300;
            }
          }
          puVar11 = puVar11 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      puVar3[1] = param_2;
      puVar5 = puVar3;
    }
    else {
      puVar5 = (uint *)QArrayData::allocate(8,8,(long)(int)param_3);
      if (puVar5 == (uint *)0x0) {
        qBadAlloc();
      }
      puVar5[1] = param_2;
      lVar15 = *param_1;
      plVar16 = (long *)(*(long *)(lVar15 + 0x10) + lVar15);
      uVar2 = *(uint *)(lVar15 + 4);
      uVar8 = param_2;
      if ((int)uVar2 <= (int)param_2) {
        uVar8 = uVar2;
      }
      plVar10 = (long *)(*(long *)(puVar5 + 4) + (long)puVar5);
      if (uVar1 < 2) {
        sVar9 = (long)(plVar16 + (int)uVar8) - (long)plVar16;
        _memcpy(plVar10,plVar16,sVar9);
        plVar10 = (long *)((sVar9 & 0xfffffffffffffff8) + (long)plVar10);
        lVar15 = *param_1;
        uVar2 = *(uint *)(lVar15 + 4);
        if (((int)param_2 < (int)uVar2) && (uVar2 != param_2)) {
          puVar11 = (undefined8 *)(lVar15 + *(long *)(lVar15 + 0x10) + (long)(int)param_2 * 8);
          lVar15 = (long)(int)uVar2 * 8 + (long)(int)param_2 * -8;
          do {
            pQVar13 = (QArrayData *)*puVar11;
            if (*(int *)pQVar13 == 0) {
LAB_1007a23a0:
              QArrayData::deallocate(pQVar13,8,8);
            }
            else if (*(int *)pQVar13 != -1) {
              LOCK();
              *(int *)pQVar13 = *(int *)pQVar13 + -1;
              UNLOCK();
              if (*(int *)pQVar13 == 0) {
                pQVar13 = (QArrayData *)*puVar11;
                goto LAB_1007a23a0;
              }
            }
            puVar11 = puVar11 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
      else if (plVar16 != plVar16 + (int)uVar8) {
        uVar8 = ~param_2;
        if ((int)~param_2 <= (int)~uVar2) {
          uVar8 = ~uVar2;
        }
        lVar15 = (long)(int)~uVar8 << 3;
        do {
          piVar7 = (int *)*plVar16;
          if (*piVar7 == 0) {
            if (piVar7[2] < 0) {
              lVar6 = QArrayData::allocate(8,8,piVar7[2] & 0x7fffffff,0);
              *plVar10 = lVar6;
              if (lVar6 == 0) {
                qBadAlloc();
                lVar6 = *plVar10;
              }
              *(byte *)(lVar6 + 0xb) = *(byte *)(lVar6 + 0xb) | 0x80;
            }
            else {
              lVar6 = QArrayData::allocate(8,8,(long)piVar7[1],0);
              *plVar10 = lVar6;
              if (lVar6 == 0) {
                qBadAlloc();
              }
            }
            lVar6 = *plVar10;
            if ((*(uint *)(lVar6 + 8) & 0x7fffffff) != 0) {
              lVar4 = *plVar16;
              _memcpy((void *)(lVar6 + *(long *)(lVar6 + 0x10)),
                      (void *)(*(long *)(lVar4 + 0x10) + lVar4),(long)*(int *)(lVar4 + 4) << 3);
              *(undefined4 *)(*plVar10 + 4) = *(undefined4 *)(*plVar16 + 4);
            }
          }
          else {
            if (*piVar7 != -1) {
              LOCK();
              *piVar7 = *piVar7 + 1;
              UNLOCK();
              piVar7 = (int *)*plVar16;
            }
            *plVar10 = (long)piVar7;
          }
          plVar10 = plVar10 + 1;
          plVar16 = plVar16 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      lVar15 = *param_1;
      if ((*(int *)(lVar15 + 4) < (int)param_2) &&
         (plVar16 = (long *)((long)puVar5 + (long)(int)puVar5[1] * 8 + *(long *)(puVar5 + 4)),
         plVar10 != plVar16)) {
        _memset_pattern16(plVar10,&PTR_shared_null_1021f75f0,
                          (long)plVar16 - (long)plVar10 & 0xfffffffffffffff8);
        lVar15 = *param_1;
      }
      puVar5[2] = puVar5[2] & 0x7fffffff | *(uint *)(lVar15 + 8) & 0x80000000;
    }
  }
  puVar3 = (uint *)*param_1;
  if (puVar3 == puVar5) {
    return;
  }
  if (*puVar3 != 0xffffffff) {
    if (*puVar3 != 0) {
      LOCK();
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if (*puVar3 != 0) goto LAB_1007a24de;
    }
    if ((uVar1 < 2) && (param_3 != 0)) {
      QArrayData::deallocate((QArrayData *)*param_1,8,8);
    }
    else {
      pQVar13 = (QArrayData *)*param_1;
      lVar15 = (long)*(int *)(pQVar13 + 4) << 3;
      if (lVar15 != 0) {
        pQVar12 = pQVar13 + *(long *)(pQVar13 + 0x10);
        do {
          pQVar14 = *(QArrayData **)pQVar12;
          if (*(int *)pQVar14 == 0) {
LAB_1007a24b0:
            QArrayData::deallocate(pQVar14,8,8);
          }
          else if (*(int *)pQVar14 != -1) {
            LOCK();
            *(int *)pQVar14 = *(int *)pQVar14 + -1;
            UNLOCK();
            if (*(int *)pQVar14 == 0) {
              pQVar14 = *(QArrayData **)pQVar12;
              goto LAB_1007a24b0;
            }
          }
          pQVar12 = pQVar12 + 8;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      QArrayData::deallocate(pQVar13,8,8);
    }
  }
LAB_1007a24de:
  *param_1 = (long)puVar5;
  return;
}

