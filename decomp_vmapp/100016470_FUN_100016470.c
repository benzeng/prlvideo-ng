
void FUN_100016470(undefined8 *param_1,QRegExp *param_2)

{
  QRegExp *this;
  undefined8 *puVar1;
  undefined8 local_20;
  
  if (*(uint *)*param_1 < 2) {
    QRegExp::QRegExp((QRegExp *)&local_20,param_2);
    puVar1 = (undefined8 *)QListData::append();
    *puVar1 = local_20;
  }
  else {
    this = (QRegExp *)FUN_100016520(param_1,0x7fffffff,1);
    QRegExp::QRegExp(this,param_2);
  }
  return;
}

