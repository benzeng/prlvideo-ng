
void FUN_1004df720(undefined8 *param_1,QFileInfo *param_2)

{
  QFileInfo *this;
  undefined8 *puVar1;
  undefined8 local_20;
  
  if (*(uint *)*param_1 < 2) {
    QFileInfo::QFileInfo((QFileInfo *)&local_20,param_2);
    puVar1 = (undefined8 *)QListData::append();
    *puVar1 = local_20;
  }
  else {
    this = (QFileInfo *)FUN_1004df7d0(param_1,0x7fffffff,1);
    QFileInfo::QFileInfo(this,param_2);
  }
  return;
}

