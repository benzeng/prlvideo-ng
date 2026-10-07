
undefined8 FUN_100416dc0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar3 = 1;
  if (iVar2 != 1) {
    QMutex::lock();
    iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
    if (iVar2 == 0) {
      QMutex::unlock();
      uVar3 = 0;
    }
    else {
      cVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
      QMutex::unlock();
      uVar3 = 0;
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x18 + (ulong)*(uint *)(*(long *)(param_1 + 0x640) + 0xc) * 4) =
             *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x14);
        (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

