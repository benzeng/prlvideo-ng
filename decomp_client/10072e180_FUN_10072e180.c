
void FUN_10072e180(long param_1,QString *param_2)

{
  QString *this;
  char cVar1;
  
  this = (QString *)(param_1 + 0x58);
  cVar1 = operator==(param_2,this);
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x60),this);
  QString::operator=(this,param_2);
  FUN_100855640(param_1,this);
  FUN_100855690(param_1,(QString *)(param_1 + 0x60));
  return;
}

