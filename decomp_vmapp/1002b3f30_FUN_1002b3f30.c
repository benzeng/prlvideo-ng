
void FUN_1002b3f30(QThread *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bb2f50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bb2fe8;
  QMutex::QMutex((QMutex *)(param_1 + 0x60),0);
  FUN_10061bbb0(param_1 + 0x68);
  QMutex::QMutex((QMutex *)(param_1 + 0x80),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x88));
  param_1[0x6a8] = (QThread)0x0;
  *(char **)(param_1 + 0x18) = "CBaseKeyboard";
  LOCK();
  DAT_1011c4a90 = 0;
  UNLOCK();
  FUN_100430030(*(undefined8 *)(DAT_1011c3698 + 0xf0),0);
  uVar3 = FUN_10070e6f0("I@devices.hid.scancodes");
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar3 = FUN_10070e6f0("I@devices.hid.enq.keys");
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = FUN_10070e6f0("I@devices.hid.delayed.keys");
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  uVar3 = FUN_10070e6f0("A@devices.hid.sleep.time");
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  uVar3 = FUN_10070e6f0("I@devices.hid.delay.time");
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  uVar3 = FUN_10070e6f0("A@devices.hid.queue.max");
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  uVar1 = FUN_1007da300("devices.kbd.delay_ms",10);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar1 = 0x32;
  if ((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) != 0x800) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  iVar2 = CVmRunTimeOptions::getOptimizeModifiers();
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x94);
  }
  uVar1 = FUN_1007da300("devices.kbd.end_delay",uVar1);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(QThread **)(param_1 + 0x98) = param_1 + 0x6a9;
  FUN_1007d7110(param_1 + 0x6a9,0x1000,0x10);
  ___bzero(param_1 + 0xa0,0x608);
  QThread::start(param_1,7);
  return;
}

