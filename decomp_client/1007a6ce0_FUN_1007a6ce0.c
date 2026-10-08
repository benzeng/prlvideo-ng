
void FUN_1007a6ce0(undefined8 *param_1,QPixmap *param_2)

{
  undefined8 *puVar1;
  QPixmap *this;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    this = operator_new(0x20);
    QPixmap::QPixmap(this,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_1007a6dd0(param_1,0x7fffffff,1);
    this = operator_new(0x20);
    QPixmap::QPixmap(this,param_2);
  }
  *puVar1 = this;
  return;
}

