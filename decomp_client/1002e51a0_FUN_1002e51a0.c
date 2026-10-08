
void FUN_1002e51a0(long *param_1,int param_2)

{
  QUrl local_20 [8];
  
  if (param_2 == 0x3c94) {
    QUrl::QUrl(local_20,param_1[4] + 8,0);
    QDesktopServices::openUrl(local_20);
    QUrl::~QUrl(local_20);
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

