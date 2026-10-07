
undefined8 FUN_1002686c0(QThread *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_100264270(param_1 + 0x10);
  if (-1 < (int)uVar4) {
    FUN_1007da300("devices.threadpool.timeout",420000);
    iVar2 = QThreadPool::globalInstance();
    QThreadPool::setExpiryTimeout(iVar2);
    uVar1 = FUN_1006d81f0(1);
    uVar3 = FUN_1007da300("devices.printer.pdf2gui",uVar1);
    *(undefined4 *)(param_1 + 0x128) = uVar3;
    QObject::thread();
    QObject::moveToThread(param_1);
    uVar4 = 0;
  }
  return uVar4;
}

