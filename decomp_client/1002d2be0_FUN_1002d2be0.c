
void FUN_1002d2be0(undefined8 *param_1,QHostAddress *param_2)

{
  undefined8 *puVar1;
  QHostAddress *this;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    this = operator_new(8);
    QHostAddress::QHostAddress(this,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_1002d2d90(param_1,0x7fffffff,1);
    this = operator_new(8);
    QHostAddress::QHostAddress(this,param_2);
  }
  *puVar1 = this;
  return;
}

