
undefined8 FUN_1002dcf80(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  Data *pDVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar6 = 0;
  if (param_2 < 2) {
    plVar4 = param_1 + 4;
    if (((ulong)plVar4 & 1) == 0) {
      QReadWriteLock::lockForWrite();
      plVar4 = (long *)((ulong)plVar4 | 1);
    }
    if (*(char *)(*(long *)(param_1[5] + 0x10) + 4) != '\0') {
      uVar11 = 0;
      do {
        if (param_2 == 0) {
          lVar9 = param_1[3];
          lVar2 = uVar11 * 0x10;
          lVar3 = *(long *)(lVar9 + lVar2);
          if ((lVar3 != 0) && (lVar5 = *(long *)(lVar9 + 8 + lVar2), lVar5 != 0)) {
            plVar1 = (long *)(lVar9 + 8 + lVar2);
            lVar8 = 0;
            if (*(char *)(lVar3 + 4) == '\0') {
LAB_1002dd08f:
              if (*(long *)(lVar5 + -8) != 0) {
                lVar9 = *(long *)(lVar5 + -8) * 0x28;
                do {
                  QMutex::~QMutex((QMutex *)(lVar5 + -8 + lVar9));
                  pDVar7 = *(Data **)(lVar5 + -0x10 + lVar9);
                  if (*(int *)pDVar7 != -1) {
                    if (*(int *)pDVar7 != 0) {
                      LOCK();
                      *(int *)pDVar7 = *(int *)pDVar7 + -1;
                      UNLOCK();
                      if (*(int *)pDVar7 != 0) goto LAB_1002dd0eb;
                      pDVar7 = *(Data **)(lVar5 + -0x10 + lVar9);
                    }
                    QListData::dispose(pDVar7);
                  }
LAB_1002dd0eb:
                  pDVar7 = *(Data **)(lVar5 + -0x18 + lVar9);
                  if (*(int *)pDVar7 != -1) {
                    if (*(int *)pDVar7 != 0) {
                      LOCK();
                      *(int *)pDVar7 = *(int *)pDVar7 + -1;
                      UNLOCK();
                      if (*(int *)pDVar7 != 0) goto LAB_1002dd113;
                      pDVar7 = *(Data **)(lVar5 + -0x18 + lVar9);
                    }
                    QListData::dispose(pDVar7);
                  }
LAB_1002dd113:
                  lVar9 = lVar9 + -0x28;
                } while (lVar9 != 0);
              }
              operator_delete__((void *)(lVar5 + -8));
            }
            else {
              uVar10 = 0;
              do {
                if (*(int *)(lVar5 + lVar8) != 0) {
                  (**(code **)(*param_1 + 0xa8))(param_1,lVar5 + lVar8);
                  lVar3 = *(long *)(lVar9 + lVar2);
                }
                uVar10 = uVar10 + 1;
                lVar5 = *plVar1;
                lVar8 = lVar8 + 0x28;
              } while (uVar10 < *(byte *)(lVar3 + 4));
              if (lVar5 != 0) goto LAB_1002dd08f;
            }
            *plVar1 = 0;
          }
        }
        else {
          (**(code **)(*param_1 + 0x30))(param_1,uVar11,0);
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar10;
      } while (uVar10 < *(byte *)(*(long *)(param_1[5] + 0x10) + 4));
    }
    *(uint *)(param_1 + 2) = param_2;
    uVar6 = 1;
    if (((ulong)plVar4 & 1) != 0) {
      QReadWriteLock::unlock();
    }
  }
  return uVar6;
}

