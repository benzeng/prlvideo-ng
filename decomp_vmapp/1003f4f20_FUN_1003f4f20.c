
undefined1 FUN_1003f4f20(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar4 = 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(long *)(param_1 + 0x10) = param_1 + 0x10;
    *(long *)(param_1 + 0x18) = param_1 + 0x10;
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
    lVar3 = _DAApprovalSessionCreate(uVar1);
    *(long *)(param_1 + 0x38) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0;
      FUN_1008e3970("","DVDImage",0,"DAApprovalSessionCreate failed");
    }
    else {
      lVar3 = _DASessionCreate(uVar1);
      *(long *)(param_1 + 0x40) = lVar3;
      if (lVar3 == 0) {
        uVar4 = 0;
        FUN_1008e3970("","DVDImage",0,"DASessionCreate failed");
        _CFRelease(*(undefined8 *)(param_1 + 0x38));
      }
      else {
        cVar2 = QThread::isRunning();
        if (cVar2 == '\0') {
          QThread::start(param_1,2);
          do {
            if (*(long *)(param_1 + 0x30) != 0) {
              cVar2 = _CFRunLoopIsWaiting();
              if (cVar2 != '\0') break;
            }
            QThread::usleep(10000);
          } while( true );
        }
        uVar1 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8;
        _DARegisterDiskEjectApprovalCallback
                  (*(undefined8 *)(param_1 + 0x38),0,FUN_1003f5080,param_1);
        _DARegisterDiskAppearedCallback(*(undefined8 *)(param_1 + 0x40),0,FUN_1003f51d0,param_1);
        _DASessionScheduleWithRunLoop
                  (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),uVar1);
        _DAApprovalSessionScheduleWithRunLoop
                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),uVar1);
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
    }
  }
  return uVar4;
}

