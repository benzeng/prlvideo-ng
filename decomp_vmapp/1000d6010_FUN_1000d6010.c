
void FUN_1000d6010(long param_1,undefined4 param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  ulong uVar5;
  
  uVar5 = param_1 + 0xa0;
  if ((uVar5 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar5 = uVar5 | 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar1 = *(long **)(param_1 + 0x30);
    pcVar2 = *(code **)(*plVar1 + 0x30);
    uVar3 = FUN_10008dcf0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1940));
    cVar4 = (*pcVar2)(plVar1,param_2,uVar3);
    if (cVar4 == '\0') {
      FUN_1008e3970("","vm",0,"Failed to copy swap page 0x%X",param_2);
    }
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
  QReadWriteLock::unlock();
  return;
}

