
QDateTime * FUN_1000ea710(QDateTime *param_1,undefined4 param_2)

{
  long lVar1;
  QFile *pQVar2;
  QDateTime local_30 [8];
  QFileInfo local_28 [8];
  
  lVar1 = FUN_1000ea580(param_2);
  if ((lVar1 != 0) && (pQVar2 = (QFile *)FUN_1000ea7d0(lVar1), pQVar2 != (QFile *)0x0)) {
    QFileInfo::QFileInfo(local_28,pQVar2);
    QFileInfo::lastModified();
    (**(code **)(*(long *)pQVar2 + 0x20))(pQVar2);
    QDateTime::QDateTime(param_1,local_30);
    QDateTime::~QDateTime(local_30);
    QFileInfo::~QFileInfo(local_28);
    return param_1;
  }
  QDateTime::QDateTime(param_1);
  return param_1;
}

