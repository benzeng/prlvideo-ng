
void FUN_10049bd00(long param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar3 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x10), uVar3 != 0)) {
    QMutex::lock();
    uVar3 = uVar3 | 1;
  }
  do {
    do {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_10049bd88;
      FUN_10049aac0();
      uVar2 = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar2 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x10);
      }
      cVar1 = QWaitCondition::wait((QMutex *)(*(long *)(param_1 + 0x10) + 0x20),uVar2);
    } while (cVar1 != '\0');
    cVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  } while (cVar1 == '\0');
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30) = 0;
  }
LAB_10049bd88:
  if ((uVar3 & 1) == 0) {
    return;
  }
  QMutex::unlock();
  return;
}

