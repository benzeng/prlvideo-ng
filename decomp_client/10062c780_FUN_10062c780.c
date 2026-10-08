
void FUN_10062c780(undefined8 *param_1,CDownloadedKeyInfo *param_2)

{
  undefined8 *puVar1;
  CDownloadedKeyInfo *this;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    this = operator_new(0xf0);
    CDownloadedKeyInfo::CDownloadedKeyInfo(this,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_10062cdc0(param_1,0x7fffffff,1);
    this = operator_new(0xf0);
    CDownloadedKeyInfo::CDownloadedKeyInfo(this,param_2);
  }
  *puVar1 = this;
  return;
}

