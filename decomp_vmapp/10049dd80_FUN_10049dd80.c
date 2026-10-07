
undefined1
FUN_10049dd80(long *param_1,undefined8 param_2,string *param_3,string *param_4,undefined4 param_5,
             undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  QDateTime local_40 [8];
  long local_38;
  
  FUN_10049d2b0(&local_38,param_3);
  cVar1 = FUN_10049d120(local_38,param_4 + 0x48);
  if ((cVar1 != '\0') && (param_1 = (long *)*param_1, param_1 != (long *)0x0)) {
    cVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_4 + 0x48);
    if (cVar1 == '\0') {
      uVar3 = 0;
      goto LAB_10049de7a;
    }
  }
  cVar1 = FUN_10049cca0(local_38,param_4 + 0x30);
  if (cVar1 == '\0') {
    if (DAT_1011b55f8 < 3) {
      uVar3 = 0;
    }
    else {
      if (((byte)*param_3 & 1) == 0) {
        param_3 = param_3 + 1;
      }
      else {
        param_3 = *(string **)(param_3 + 0x10);
      }
      uVar3 = 0;
      FUN_1008e3970("AppsCollector","prl_sharedapps",3,"getPackageDisplayName failed for %s",param_3
                    ,param_6,param_2);
    }
  }
  else {
    std::string::operator=(param_4,param_3);
    std::string::operator=(param_4 + 0x18,param_3);
    *(undefined4 *)(param_4 + 0x60) = param_5;
    QFileInfo::lastModified();
    uVar2 = QDateTime::toMSecsSinceEpoch();
    *(undefined8 *)(param_4 + 0x68) = uVar2;
    QDateTime::~QDateTime(local_40);
    param_4[0x70] = (string)0x1;
    uVar3 = 1;
  }
LAB_10049de7a:
  if (local_38 != 0) {
    _CFRelease();
  }
  return uVar3;
}

