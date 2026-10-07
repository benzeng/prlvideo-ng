
long * FUN_100640180(long *param_1,QString *param_2)

{
  bool bVar1;
  char cVar2;
  QArrayData *local_40;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  QFileInfo::QFileInfo(local_38,param_2);
  QFileInfo::canonicalFilePath();
  QFileInfo::~QFileInfo(local_38);
  do {
    local_40 = (QArrayData *)QString::fromAscii_helper("/",1);
    cVar2 = QString::endsWith(param_1,&local_40,1);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = 1 < *(int *)(*param_1 + 4);
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100640232;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100640232:
    if (!bVar1) {
      return param_1;
    }
    QString::chop((int)param_1);
  } while( true );
}

