
void FUN_10062cb70(undefined8 param_1,undefined8 *param_2,CDownloadedKeyInfo *param_3)

{
  CDownloadedKeyInfo *this;
  
  this = operator_new(0x1e0);
  CDownloadedKeyInfo::CDownloadedKeyInfo(this,param_3);
  CDownloadedKeyInfo::CDownloadedKeyInfo(this + 0xf0,param_3 + 0xf0);
  *param_2 = this;
  return;
}

