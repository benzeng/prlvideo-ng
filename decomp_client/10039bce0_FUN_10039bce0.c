
void FUN_10039bce0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  QImage *this;
  Data *pDVar3;
  Data *pDVar4;
  Data *pDVar5;
  long lVar6;
  Data *pDVar7;
  
  pDVar3 = (Data *)*param_1;
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) {
        return;
      }
      pDVar3 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar3 + 8);
    if (*(int *)(pDVar3 + 0xc) != iVar1) {
      pDVar4 = pDVar3 + (long)*(int *)(pDVar3 + 0xc) * 8 + 0x10;
      do {
        this = *(QImage **)(pDVar4 + -8);
        if (this != (QImage *)0x0) {
          pDVar7 = *(Data **)(this + 0x20);
          if (*(int *)pDVar7 != -1) {
            if (*(int *)pDVar7 != 0) {
              LOCK();
              *(int *)pDVar7 = *(int *)pDVar7 + -1;
              UNLOCK();
              if (*(int *)pDVar7 != 0) goto LAB_10039bdb4;
              pDVar7 = *(Data **)(this + 0x20);
            }
            iVar2 = *(int *)(pDVar7 + 0xc);
            if (iVar2 != *(int *)(pDVar7 + 8)) {
              lVar6 = (long)*(int *)(pDVar7 + 8) * 8 + (long)iVar2 * -8;
              pDVar5 = pDVar7 + (long)iVar2 * 8 + 8;
              do {
                if (*(void **)pDVar5 != (void *)0x0) {
                  operator_delete(*(void **)pDVar5);
                }
                pDVar5 = pDVar5 + -8;
                lVar6 = lVar6 + 8;
              } while (lVar6 != 0);
            }
            QListData::dispose(pDVar7);
          }
LAB_10039bdb4:
          QImage::~QImage(this);
          operator_delete(this);
        }
        pDVar4 = pDVar4 + -8;
      } while (pDVar4 != pDVar3 + (long)iVar1 * 8 + 0x10);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

