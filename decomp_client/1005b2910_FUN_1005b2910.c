
void FUN_1005b2910(QObject *param_1,int param_2)

{
  if (param_2 == 0x30000004) {
    QTimer::singleShot(0x5dc,param_1,"1showInstallOsPage()");
    return;
  }
  return;
}

