
void FUN_10039b640(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  QImage *this;
  Data *pDVar5;
  undefined8 uVar6;
  long lVar7;
  Data *pDVar8;
  Data *pDVar9;
  Data *pDVar10;
  int local_38;
  undefined1 local_33;
  undefined1 local_32;
  
  puVar4 = (uint *)*param_1;
  if (*puVar4 < 2) {
    uVar6 = QListData::append();
    FUN_10039ce10(uVar6,param_2);
    return;
  }
  local_38 = 0x7fffffff;
  uVar1 = puVar4[2];
  pDVar5 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar7 = *param_1;
  FUN_10039cf10(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8,
                lVar7 + 0x10 + ((long)local_38 + (long)*(int *)(lVar7 + 8)) * 8,
                puVar4 + (long)(int)uVar1 * 2 + 4);
  lVar7 = *param_1;
  FUN_10039cf10(lVar7 + 0x18 + ((long)*(int *)(lVar7 + 8) + (long)local_38) * 8,
                lVar7 + 0x10 + (long)*(int *)(lVar7 + 0xc) * 8,
                puVar4 + ((long)(int)uVar1 + (long)local_38) * 2 + 4);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      local_32 = *(int *)pDVar5 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10039b7d1;
    }
    iVar2 = *(int *)(pDVar5 + 8);
    if (*(int *)(pDVar5 + 0xc) != iVar2) {
      pDVar10 = pDVar5 + (long)*(int *)(pDVar5 + 0xc) * 8 + 0x10;
      do {
        this = *(QImage **)(pDVar10 + -8);
        if (this != (QImage *)0x0) {
          pDVar8 = *(Data **)(this + 0x20);
          if (*(int *)pDVar8 != -1) {
            if (*(int *)pDVar8 != 0) {
              LOCK();
              *(int *)pDVar8 = *(int *)pDVar8 + -1;
              local_33 = *(int *)pDVar8 != 0;
              UNLOCK();
              if ((bool)local_33) goto LAB_10039b7a7;
              pDVar8 = *(Data **)(this + 0x20);
            }
            iVar3 = *(int *)(pDVar8 + 0xc);
            if (iVar3 != *(int *)(pDVar8 + 8)) {
              lVar7 = (long)*(int *)(pDVar8 + 8) * 8 + (long)iVar3 * -8;
              pDVar9 = pDVar8 + (long)iVar3 * 8 + 8;
              do {
                if (*(void **)pDVar9 != (void *)0x0) {
                  operator_delete(*(void **)pDVar9);
                }
                pDVar9 = pDVar9 + -8;
                lVar7 = lVar7 + 8;
              } while (lVar7 != 0);
            }
            QListData::dispose(pDVar8);
          }
LAB_10039b7a7:
          QImage::~QImage(this);
          operator_delete(this);
        }
        pDVar10 = pDVar10 + -8;
      } while (pDVar10 != pDVar5 + (long)iVar2 * 8 + 0x10);
    }
    QListData::dispose(pDVar5);
  }
LAB_10039b7d1:
  FUN_10039ce10(*param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8,param_2);
  return;
}

