
void FUN_100594880(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  plVar3 = (long *)*puVar2;
  *(undefined8 *)(param_1 + 0x10) = puVar2[1];
  *(undefined8 *)(param_1 + 0x48) = puVar2[2];
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  *(uint *)(plVar3 + 0x220) = *(uint *)(plVar3 + 0x220) | *(uint *)(param_1 + 8) & 0xfc;
  *(uint *)((long)plVar3 + 0x1104) = *(uint *)((long)plVar3 + 0x1104) | *(uint *)(param_1 + 0x28);
  FUN_10070aed0(param_1);
  QMutex::lock();
  plVar1 = plVar3 + 0x221;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    *(undefined4 *)(plVar3 + 0x21b) = 8;
    QWaitCondition::wakeAll();
    lVar4 = *plVar3;
    *plVar3 = 0;
    if (lVar4 != 0) {
      FUN_10059a420(lVar4,plVar3 + 0x21c);
    }
  }
  QMutex::unlock();
  return;
}

