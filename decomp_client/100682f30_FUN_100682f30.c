
void FUN_100682f30(undefined8 param_1,Data *param_2)

{
  int iVar1;
  CDownloadedKeyInfo *this;
  Data *pDVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar3 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar2 = param_2 + (long)iVar1 * 8 + 8;
    do {
      this = *(CDownloadedKeyInfo **)pDVar2;
      if (this != (CDownloadedKeyInfo *)0x0) {
        CDownloadedKeyInfo::~CDownloadedKeyInfo(this + 0xf0);
        CDownloadedKeyInfo::~CDownloadedKeyInfo(this);
        operator_delete(this);
      }
      pDVar2 = pDVar2 + -8;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0);
  }
  QListData::dispose(param_2);
  return;
}

