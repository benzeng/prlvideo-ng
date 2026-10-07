
bool FUN_100768ef0(QString *param_1)

{
  long lVar1;
  QFileInfo local_18 [8];
  
  QFileInfo::QFileInfo(local_18,param_1);
  lVar1 = QFileInfo::size();
  QFileInfo::~QFileInfo(local_18);
  return lVar1 - 0x168000U < 0x401;
}

