
void FUN_1000f7ce0(long *param_1)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  Data *this;
  long lVar4;
  
  lVar4 = *param_1;
  iVar1 = *(int *)(lVar4 + 8);
  pDVar3 = (Data *)QListData::detach((int)param_1);
  lVar2 = *param_1;
  FUN_100055100(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,lVar4 + 0x10 + (long)iVar1 * 8);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar4 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      this = pDVar3 + (long)iVar1 * 8 + 8;
      do {
        QFileInfo::~QFileInfo((QFileInfo *)this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

