
void FUN_100712630(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = (double)_CFAbsoluteTimeGetCurrent();
  if (param_4 == 0) {
    lVar3 = 0;
    cVar1 = FUN_100712050(param_1,0);
    if (cVar1 != '\0') {
      lVar3 = FUN_100711370(*(undefined4 *)(param_1 + 0x1c));
    }
    if (*(char *)(param_1 + 0x19) != '\0') {
      (**(code **)(param_1 + 0x80))(0xe0000280);
    }
    *(undefined2 *)(param_1 + 0x19) = 0;
  }
  else {
    if ((param_4 & 2) == 0) {
      lVar3 = 0;
      *(byte *)(param_1 + 0x19) = (byte)((param_4 & 4) >> 2) ^ 1;
      if ((param_4 & 4) != 0) goto LAB_100712747;
      cVar1 = FUN_100712050(param_1,0);
      if (cVar1 != '\0') {
        cVar1 = QThread::isRunning();
        if (cVar1 == '\0') {
          if (*(long *)(param_1 + 0x28) - (long)dVar4 <
              (long)(ulong)(*(uint *)(param_1 + 0x1c) >> 1)) {
            *(ulong *)(param_1 + 0x28) = (ulong)*(uint *)(param_1 + 0x1c) + (long)dVar4;
            iVar2 = _IOPMAssertionCreateWithName
                              (&cf_DenySystemSleep,0xff,&cf_CMacPowerHelper__DoBackgroundTasks,
                               param_1 + 0x30);
            if (iVar2 == 0) {
              *(undefined1 *)(param_1 + 0x1a) = 1;
              QThread::start(param_1,7);
            }
          }
        }
      }
      (**(code **)(param_1 + 0x80))(0xe0000300);
    }
    else {
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
    lVar3 = 0;
  }
LAB_100712747:
  (**(code **)(param_1 + 0x78))(param_2,param_3,lVar3);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
    return;
  }
  return;
}

