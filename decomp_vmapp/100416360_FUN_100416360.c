
undefined1 FUN_100416360(long param_1,int param_2)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if (iVar3 == 2) {
    QMutex::lock();
    iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
    if (iVar3 != 0) {
      QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
    }
    QMutex::unlock();
  }
  if (param_2 != 0) {
    local_60 = 3;
    local_5c = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    local_58 = 0;
    local_54 = 0;
    iVar3 = FUN_10041b790(param_1,&local_60);
    uVar2 = 0;
    if (iVar3 == 0) goto LAB_10041645d;
  }
  QMutex::lock();
  iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x80))();
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
  }
  QMutex::unlock();
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_10041645d:
  if (lVar1 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

