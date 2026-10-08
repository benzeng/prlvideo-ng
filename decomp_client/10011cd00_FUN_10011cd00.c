
QFileInfo * FUN_10011cd00(QFileInfo *param_1,QString *param_2)

{
  QFileInfo local_30 [8];
  QFileIconProvider local_28 [16];
  
  QFileIconProvider::QFileIconProvider(local_28);
  QFileInfo::QFileInfo(local_30,param_2);
  QFileIconProvider::icon(param_1);
  QFileInfo::~QFileInfo(local_30);
  QFileIconProvider::~QFileIconProvider(local_28);
  return param_1;
}

