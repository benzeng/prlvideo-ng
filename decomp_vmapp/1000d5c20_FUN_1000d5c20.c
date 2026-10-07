
bool FUN_1000d5c20(long param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = param_1 + 0xa0;
  if ((uVar3 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar3 = uVar3 | 1;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    if (param_4 != '\0') {
      cVar1 = FUN_1000b4770(*(undefined8 *)(param_1 + 0x18),1);
      if (cVar1 != '\0') {
        *(undefined8 *)(param_1 + 0x90) = param_2;
        *(undefined4 *)(param_1 + 0x98) = param_3;
        bVar4 = true;
        QThread::start(param_1,7);
        goto LAB_1000d5d91;
      }
      FUN_1008e3970("","vm",0,"Failed to protect WS pages. Fallback to sync copy");
    }
    FUN_1008e3970("","vm",0,"Copying swap pages...");
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x28))
                      (*(long **)(param_1 + 0x30),param_2,param_3);
    if (cVar1 == '\0') {
      FUN_1008e3970("","vm",0,"Failed to copy swap pages");
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x14) = 0x80020000;
        iVar2 = -0x7ffe0000;
      }
      FUN_1008e3970("","vm",0,"Failed to copy pages (%u)",iVar2);
    }
    else {
      FUN_1008e3970("","vm",0,"Copying swap pages... done");
    }
    bVar4 = *(int *)(param_1 + 0x14) == 0;
  }
  else {
    bVar4 = false;
    FUN_1008e3970("","vm",0,"Failed to copy pages (busy)");
  }
LAB_1000d5d91:
  if ((uVar3 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return bVar4;
}

