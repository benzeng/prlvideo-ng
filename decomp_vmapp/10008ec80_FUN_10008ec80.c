
void FUN_10008ec80(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffffd8 >> 0x20);
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    uVar10 = CONCAT44(uVar11,0x6e);
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","newState < m_uStatesNum",
                  "StateMachine.cpp",uVar10,"stateChange");
    uVar11 = (undefined4)((ulong)uVar10 >> 0x20);
  }
  uVar1 = *(uint *)(param_1 + 0xa4);
  LOCK();
  uVar6 = *(uint *)(param_1 + 0xa4);
  if (uVar1 == uVar6) {
    *(uint *)(param_1 + 0xa4) = param_2;
    uVar6 = uVar1;
  }
  UNLOCK();
  if (uVar6 == param_2) {
    return;
  }
  if (uVar6 < *(uint *)(param_1 + 0x18)) {
    lVar3 = *(long *)(param_1 + 0x10);
    iVar2 = *(int *)(lVar3 + 0x30 + (ulong)param_2 * 0x38);
    iVar9 = *(int *)(lVar3 + 0x30 + (ulong)uVar6 * 0x38);
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
    if ((0 < iVar9 % 0x10) && (DAT_1011b55f8 < iVar9 % 0x10)) goto LAB_10008ed96;
    uVar10 = *(undefined8 *)(lVar3 + (ulong)uVar6 * 0x38);
    uVar11 = (undefined4)((ulong)*(undefined8 *)(lVar3 + (ulong)param_2 * 0x38) >> 0x20);
    pcVar7 = "%s state(%s): changed to %s";
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 0x38);
    pcVar7 = "%s state(unknown): initialized to %s";
    iVar9 = 0;
  }
  FUN_1008e3970("","vm",iVar9,pcVar7,param_1 + 0x81,uVar10);
LAB_10008ed96:
  QMutex::lock();
  if (*(long *)(param_1 + 0xe0) != param_1 + 0xe0) {
    do {
      plVar4 = *(long **)(param_1 + 0xe8);
      lVar3 = *plVar4;
      plVar5 = (long *)plVar4[1];
      *(long **)(lVar3 + 8) = plVar5;
      *plVar5 = lVar3;
      *plVar4 = 0x112233;
      plVar4[1] = (long)&DAT_00445566;
      lVar3 = *(long *)(param_1 + 0xd0);
      *(long **)(lVar3 + 8) = plVar4;
      *plVar4 = lVar3;
      plVar4[1] = param_1 + 0xd0;
      *(long **)(param_1 + 0xd0) = plVar4;
      *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(param_1 + 0xa4);
    } while (*(long *)(param_1 + 0xe0) != param_1 + 0xe0);
  }
  QMutex::unlock();
  lVar3 = *(long *)(param_1 + 0x10);
  lVar8 = (ulong)*(uint *)(param_1 + 0xa4) * 0x38;
  *(long *)(param_1 + 0xa8) = lVar3 + lVar8;
  uVar10 = *(undefined8 *)(lVar3 + 8 + lVar8);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar3 + 0x10 + lVar8);
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  uVar10 = *(undefined8 *)(lVar3 + 0x18 + lVar8);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar3 + 0x20 + lVar8);
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar10 = CONCAT44(uVar11,0x88);
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pCurStateHandler",
                  "StateMachine.cpp",uVar10,"stateChange");
    uVar11 = (undefined4)((ulong)uVar10 >> 0x20);
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pCurTimerHandler",
                  "StateMachine.cpp",CONCAT44(uVar11,0x89),"stateChange");
  }
  return;
}

