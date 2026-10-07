
void FUN_1003f4c70(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  QArrayData *pQVar5;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    _DASessionUnscheduleFromRunLoop
              (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8);
    _DAUnregisterCallback(*(undefined8 *)(param_1 + 0x40),FUN_1003f51d0,param_1);
    _DAUnregisterApprovalCallback(*(undefined8 *)(param_1 + 0x38),FUN_1003f5080,0);
    cVar3 = QThread::isRunning();
    if (cVar3 != '\0') {
      _CFRunLoopStop(*(undefined8 *)(param_1 + 0x30));
      QThread::wait(param_1);
    }
    _CFRelease(*(undefined8 *)(param_1 + 0x38));
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    while (puVar4 != (undefined8 *)(param_1 + 0x10)) {
      puVar1 = (undefined8 *)*puVar4;
      puVar2 = (undefined8 *)puVar4[1];
      puVar1[1] = puVar2;
      *puVar2 = puVar1;
      *puVar4 = 0x112233;
      puVar4[1] = &DAT_00445566;
      pQVar5 = (QArrayData *)puVar4[-1];
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          UNLOCK();
          if (*(int *)pQVar5 != 0) goto LAB_1003f4d00;
          pQVar5 = (QArrayData *)puVar4[-1];
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_1003f4d00:
      operator_delete(puVar4 + -2);
      puVar4 = puVar1;
    }
  }
  return;
}

