
void FUN_10008f1c0(long param_1,uint param_2,long param_3,int param_4,char param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  undefined8 in_stack_ffffffffffffffa0;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
  if (param_3 == 0) {
    uVar8 = 1;
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","delayMs","StateMachine.cpp",0xcc,
                  "stateStartTimer");
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 1;
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pTimers","StateMachine.cpp",0xcd
                  ,"stateStartTimer");
  }
  if (*(uint *)(param_1 + 0x28) <= param_2) {
    uVar8 = 1;
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","timerId < m_uTimersNum",
                  "StateMachine.cpp",0xce,"stateStartTimer");
  }
  FUN_10008f640(param_1,param_2,param_5);
  uVar9 = (ulong)param_2;
  lVar5 = *(long *)(param_1 + 0x20);
  puVar2 = (undefined8 *)(lVar5 + uVar9 * 0x28);
  uVar7 = (undefined4)param_3;
  *(undefined4 *)(lVar5 + 0xc + uVar9 * 0x28) = uVar7;
  *(uint *)(lVar5 + 8 + uVar9 * 0x28) = param_2;
  piVar3 = (int *)(lVar5 + 0x20 + uVar9 * 0x28);
  *(int *)(lVar5 + 0x20 + uVar9 * 0x28) = param_4;
  *(undefined4 *)(lVar5 + 0x24 + uVar9 * 0x28) = uVar7;
  if (param_5 != '\0') {
    iVar12 = *(int *)(*(undefined8 **)(param_1 + 0xa8) + 6);
    iVar10 = iVar12 % 0x10;
    if ((iVar10 < 1) || (iVar10 <= DAT_1011b55f8)) {
      FUN_1008e3970("","vm",iVar12,
                    "%s state(%s): started \'%s\' timer, delay %u ms, times to fire %u",
                    param_1 + 0x81,**(undefined8 **)(param_1 + 0xa8),*puVar2,CONCAT44(uVar8,uVar7),
                    param_4);
      param_4 = *piVar3;
    }
  }
  if (param_4 == 0) {
    *piVar3 = -1;
  }
  QMutex::lock();
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar8 = FUN_1007d8850();
    *(undefined4 *)(param_1 + 0x58) = uVar8;
  }
  plVar1 = (long *)(param_1 + 0xc0);
  plVar11 = *(long **)(param_1 + 0xc0);
  if (plVar11 != plVar1) {
    piVar3 = (int *)(lVar5 + 0xc + uVar9 * 0x28);
    iVar12 = *piVar3;
    do {
      iVar10 = *(int *)((long)plVar11 + -4);
      iVar13 = iVar12 - iVar10;
      if (iVar12 < iVar10) {
        *(int *)((long)plVar11 + -4) = iVar10 - iVar12;
        break;
      }
      iVar12 = iVar13;
      if (iVar13 < 0) {
        iVar12 = 0;
      }
      *piVar3 = iVar12;
      plVar11 = (long *)*plVar11;
    } while (plVar11 != plVar1);
  }
  lVar4 = lVar5 + 0x10 + uVar9 * 0x28;
  plVar6 = (long *)plVar11[1];
  plVar11[1] = lVar4;
  *(long **)(lVar5 + 0x10 + uVar9 * 0x28) = plVar11;
  *(long **)(lVar5 + 0x18 + uVar9 * 0x28) = plVar6;
  *plVar6 = lVar4;
  if (puVar2 == (undefined8 *)(*plVar1 + -0x10)) {
    QWaitCondition::wakeOne();
  }
  QMutex::unlock();
  return;
}

