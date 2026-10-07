
QFileInfo * FUN_1000d12c0(QFileInfo *param_1,long param_2)

{
  QDir local_20 [8];
  
  QDir::QDir(local_20,(QString *)(param_2 + 0x328));
  QFileInfo::QFileInfo(param_1,local_20,(QString *)&DAT_1011c36c0);
  QDir::~QDir(local_20);
  return param_1;
}

