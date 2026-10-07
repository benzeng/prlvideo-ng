
void FUN_1002b4480(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  if (param_2 - 1U < 0xc0) {
    local_30 = param_2;
    local_2c = param_3;
    local_28 = FUN_1007d88c0();
    QMutex::lock();
    iVar3 = FUN_1007d72c0(*(undefined8 *)(param_1 + 0x98),&local_30,1);
    if (iVar3 == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0xf0);
      *plVar1 = *plVar1 + 1;
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x28) + 0xf0);
      *plVar1 = *plVar1 + 1;
      lVar2 = *(long *)(param_1 + 0x98);
      uVar4 = *(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8) & *(uint *)(lVar2 + 0x14);
      if (uVar4 == 1) {
        QWaitCondition::wakeAll();
      }
      if (*(long *)(*(long *)(param_1 + 0x58) + 0xf0) < (long)(ulong)uVar4) {
        *(ulong *)(*(long *)(param_1 + 0x58) + 0xf0) = (ulong)uVar4;
      }
    }
    QMutex::unlock();
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  return;
}

