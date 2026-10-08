
void FUN_100d79630(QObject *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10225bdc0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar4 = operator_new(0x10);
  *puVar4 = param_1;
  uVar5 = _IOServiceNameMatching("IODisplayWrangler");
  uVar2 = *(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0;
  uVar1 = _IOServiceGetMatchingService(uVar2,uVar5);
  uVar5 = _IONotificationPortCreate(uVar2);
  _IOServiceAddInterestNotification(uVar5,uVar1,"IOGeneralInterest",FUN_100d798b0,puVar4,puVar4 + 1)
  ;
  uVar6 = _CFRunLoopGetCurrent();
  uVar5 = _IONotificationPortGetRunLoopSource(uVar5);
  _CFRunLoopAddSource(uVar6,uVar5,*(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950);
  _IOObjectRelease(uVar1);
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  uVar2 = _CGMainDisplayID();
  iVar3 = _CGDisplayIsAsleep(uVar2);
  *(uint *)(param_1 + 0x10) = (iVar3 == 0) + 1;
  return;
}

