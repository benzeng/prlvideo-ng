
void FUN_10012ae80(undefined8 *param_1,QVariant *param_2)

{
  undefined8 *puVar1;
  QVariant *this;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    this = operator_new(0x10);
    QVariant::QVariant(this,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_10012af70(param_1,0x7fffffff,1);
    this = operator_new(0x10);
    QVariant::QVariant(this,param_2);
  }
  *puVar1 = this;
  return;
}

