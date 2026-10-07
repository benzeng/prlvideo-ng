
undefined8 FUN_1000d5620(ulong param_1)

{
  char cVar1;
  
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    FUN_1008e3970("","vm",0,"Stop async memory copying...");
    QThread::wait(param_1);
    FUN_1008e3970("","vm",0,"Stop async memory copying... done (%u)",*(undefined4 *)(param_1 + 0x14)
                 );
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x48))();
  }
  FUN_100554620(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}

