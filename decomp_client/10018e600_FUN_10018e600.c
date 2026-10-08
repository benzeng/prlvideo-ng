
void FUN_10018e600(long param_1,QString *param_2)

{
  QString *this;
  char cVar1;
  int iVar2;
  
  this = (QString *)(param_1 + 0x88);
  cVar1 = operator==(this,param_2);
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=(this,param_2);
  iVar2 = QString::lastIndexOf(this,0x40,0xffffffff,1);
  if (iVar2 != -1) {
    QString::remove((int)this,iVar2);
  }
  FUN_100804d10(param_1,this);
  return;
}

