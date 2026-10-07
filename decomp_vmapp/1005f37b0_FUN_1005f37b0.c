
void FUN_1005f37b0(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  cVar1 = QThread::isRunning();
  if (cVar1 == '\0') {
    QThread::start(param_1 + 8,7);
  }
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    QMutex::lock();
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    lVar6 = 0;
    lVar3 = lVar2 - lVar5 >> 3;
    if (lVar3 != 0) {
      lVar6 = lVar3 * 0xaa + -1;
    }
    lVar3 = *(long *)(param_1 + 0x50);
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar6 - lVar3 == lVar4) {
      FUN_1005f3bb0();
      lVar4 = *(long *)(param_1 + 0x58);
      lVar3 = *(long *)(param_1 + 0x50);
      lVar5 = *(long *)(param_1 + 0x38);
      lVar2 = *(long *)(param_1 + 0x40);
    }
    puVar7 = (undefined8 *)0x0;
    if (lVar2 != lVar5) {
      puVar7 = (undefined8 *)
               (((ulong)(lVar4 + lVar3) % 0xaa) * 0x18 +
               *(long *)(lVar5 + ((ulong)(lVar4 + lVar3) / 0xaa) * 8));
    }
    *puVar7 = param_2;
    puVar7[1] = UNRECOVERED_JUMPTABLE;
    puVar7[2] = param_4;
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    QWaitCondition::wakeOne();
    QMutex::unlock();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005f38e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_4,0x80000002);
  return;
}

