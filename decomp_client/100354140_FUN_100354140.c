
void FUN_100354140(long param_1,QImage *param_2)

{
  char cVar1;
  undefined8 uVar2;
  QImage local_48 [32];
  
  uVar2 = QImage::size();
  cVar1 = QImage::isNull();
  if ((cVar1 == '\0') &&
     (((int)uVar2 != *(int *)(param_1 + 0x50) ||
      ((int)((ulong)uVar2 >> 0x20) != *(int *)(param_1 + 0x54))))) {
    QImage::scaled(local_48,param_2,param_1 + 0x50,1,1);
    QImage::operator=((QImage *)(param_1 + 0x20),local_48);
    QImage::~QImage(local_48);
  }
  else {
    QImage::operator=((QImage *)(param_1 + 0x20),param_2);
  }
  FUN_1008315f0(param_1,param_1 + 0x20);
  return;
}

