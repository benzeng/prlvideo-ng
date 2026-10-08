
void FUN_10062cd30(undefined8 param_1,long param_2,long param_3)

{
  CDownloadedKeyInfo *this;
  
  for (; param_3 != param_2; param_3 = param_3 + -8) {
    this = *(CDownloadedKeyInfo **)(param_3 + -8);
    if (this != (CDownloadedKeyInfo *)0x0) {
      CDownloadedKeyInfo::~CDownloadedKeyInfo(this + 0xf0);
      CDownloadedKeyInfo::~CDownloadedKeyInfo(this);
      operator_delete(this);
    }
  }
  return;
}

