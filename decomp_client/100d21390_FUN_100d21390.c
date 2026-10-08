
undefined1 FUN_100d21390(QString *param_1,QIODevice *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int local_3c;
  QArrayData *local_38;
  QFile local_30 [23];
  undefined1 local_19;
  
  QFile::QFile(local_30,param_1);
  cVar1 = QFile::open(local_30,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_38 = (QArrayData *)PTR_shared_null_1021e1288;
    local_3c = -1;
    uVar2 = QDomDocument::setContent
                      (param_2,SUB81(local_30,0),(QString *)0x1,(int *)&local_38,&local_3c);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d21432;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100d21432:
  QFile::~QFile(local_30);
  return uVar2;
}

