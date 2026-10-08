
void FUN_10062cbf0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  CDownloadedKeyInfo *pCVar1;
  CDownloadedKeyInfo *this;
  long lVar2;
  
  if (param_2 - param_3 != 0) {
    lVar2 = 0;
    do {
      this = operator_new(0x1e0);
      pCVar1 = *(CDownloadedKeyInfo **)(param_4 + lVar2);
      CDownloadedKeyInfo::CDownloadedKeyInfo(this,pCVar1);
      CDownloadedKeyInfo::CDownloadedKeyInfo(this + 0xf0,pCVar1 + 0xf0);
      *(CDownloadedKeyInfo **)(param_2 + lVar2) = this;
      lVar2 = lVar2 + 8;
    } while ((param_2 - param_3) + lVar2 != 0);
  }
  return;
}

