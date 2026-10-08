
void FUN_1009e2d70(QString *param_1,QByteArray *param_2)

{
  char cVar1;
  QArrayData *local_38;
  QFile local_30 [23];
  undefined1 local_19;
  
  QFile::QFile(local_30,param_1);
  cVar1 = QFile::open(local_30,1);
  if (cVar1 != '\0') {
    QIODevice::readAll();
    QByteArray::operator=(param_2,(QByteArray *)&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e2dea;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1009e2dea:
  QFile::~QFile(local_30);
  return;
}

