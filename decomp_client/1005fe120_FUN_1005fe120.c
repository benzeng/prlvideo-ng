
undefined8 FUN_1005fe120(undefined8 param_1,long param_2)

{
  QFileInfo local_28 [8];
  QDir local_20 [8];
  
  QFileInfo::QFileInfo(local_28,(QString *)(param_2 + 0x78));
  QFileInfo::absoluteDir();
  QDir::path();
  QDir::~QDir(local_20);
  QFileInfo::~QFileInfo(local_28);
  return param_1;
}

