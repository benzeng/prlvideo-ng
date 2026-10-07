
undefined8 FUN_1004172e0(long param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    if ((*(int *)(param_1 + 0x18 + (ulong)uVar3 * 4) == 3) && (*(int *)(param_1 + 0x98) != 3)) {
      return 0;
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    if ((*(int *)(param_1 + 0x18 + (ulong)uVar3 * 4) != 3) && (*(int *)(param_1 + 0x98) == 3)) {
      return 0;
    }
  }
  lVar1 = param_1 + 0x668;
  uVar5 = 0;
  QByteArray::remove((int)lVar1,0);
  FUN_10041fa10(lVar1);
  QMutex::lock();
  iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x58))(*(long **)(param_1 + 0x10),lVar1);
  if (iVar4 == 0) {
    QMutex::unlock();
  }
  else {
    cVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
    QMutex::unlock();
    uVar5 = 0;
    if (cVar2 != '\0') {
      FUN_100416cc0(param_1);
      uVar5 = 1;
    }
  }
  return uVar5;
}

