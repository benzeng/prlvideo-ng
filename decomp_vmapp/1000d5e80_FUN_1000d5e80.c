
void FUN_1000d5e80(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  FUN_1008e3970("","vm",0,"Copying swap pages...");
  cVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x28))(*(long **)(param_1 + 0x30),uVar2,uVar1);
  if (cVar3 == '\0') {
    FUN_1008e3970("","vm",0,"Failed to copy swap pages");
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x80020000;
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Copying swap pages... done");
  }
  uVar4 = param_1 + 0xa0;
  if ((uVar4 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar4 = uVar4 | 1;
  }
  FUN_1000b4770(*(undefined8 *)(param_1 + 0x18),0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((uVar4 & 1) == 0) {
    return;
  }
  QReadWriteLock::unlock();
  return;
}

