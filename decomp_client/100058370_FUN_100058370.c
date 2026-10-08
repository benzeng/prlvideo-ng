
bool FUN_100058370(undefined8 param_1,QString *param_2)

{
  int iVar1;
  QDir local_18 [8];
  
  QDir::QDir(local_18,param_2);
  QDir::setFilter(local_18,0x6003);
  iVar1 = QDir::count();
  QDir::~QDir(local_18);
  return iVar1 != 0;
}

