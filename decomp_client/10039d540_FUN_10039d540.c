
void FUN_10039d540(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  QImage *this;
  Data *pDVar5;
  Data *pDVar6;
  Data *pDVar7;
  long lVar8;
  Data *pDVar9;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    uVar1 = puVar4[2];
    pDVar5 = (Data *)QListData::detach((int)param_1);
    lVar8 = *param_1;
    FUN_10039cf10(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8,
                  lVar8 + 0x10 + (long)*(int *)(lVar8 + 0xc) * 8,puVar4 + (long)(int)uVar1 * 2 + 4);
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        UNLOCK();
        if (*(int *)pDVar5 != 0) {
          return;
        }
      }
      iVar2 = *(int *)(pDVar5 + 8);
      if (*(int *)(pDVar5 + 0xc) != iVar2) {
        pDVar6 = pDVar5 + (long)*(int *)(pDVar5 + 0xc) * 8 + 0x10;
        do {
          this = *(QImage **)(pDVar6 + -8);
          if (this != (QImage *)0x0) {
            pDVar9 = *(Data **)(this + 0x20);
            if (*(int *)pDVar9 != -1) {
              if (*(int *)pDVar9 != 0) {
                LOCK();
                *(int *)pDVar9 = *(int *)pDVar9 + -1;
                UNLOCK();
                if (*(int *)pDVar9 != 0) goto LAB_10039d654;
                pDVar9 = *(Data **)(this + 0x20);
              }
              iVar3 = *(int *)(pDVar9 + 0xc);
              if (iVar3 != *(int *)(pDVar9 + 8)) {
                lVar8 = (long)*(int *)(pDVar9 + 8) * 8 + (long)iVar3 * -8;
                pDVar7 = pDVar9 + (long)iVar3 * 8 + 8;
                do {
                  if (*(void **)pDVar7 != (void *)0x0) {
                    operator_delete(*(void **)pDVar7);
                  }
                  pDVar7 = pDVar7 + -8;
                  lVar8 = lVar8 + 8;
                } while (lVar8 != 0);
              }
              QListData::dispose(pDVar9);
            }
LAB_10039d654:
            QImage::~QImage(this);
            operator_delete(this);
          }
          pDVar6 = pDVar6 + -8;
        } while (pDVar6 != pDVar5 + (long)iVar2 * 8 + 0x10);
      }
      QListData::dispose(pDVar5);
    }
  }
  return;
}

