
void FUN_10008f090(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  bool bVar6;
  
  QMutex::lock();
  *(long *)(param_1 + 0xc0) = param_1 + 0xc0;
  *(long *)(param_1 + 200) = param_1 + 0xc0;
  QMutex::unlock();
  uVar2 = *(uint *)(param_1 + 0x28);
  pvVar4 = *(void **)(param_1 + 0x98);
  bVar6 = pvVar4 == (void *)0x0;
  lVar5 = 0x24;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if ((!bVar6) && (iVar1 = *(int *)((long)pvVar4 + lVar5 + -4), iVar1 != 0)) {
        FUN_10008f1c0(param_1,*(undefined4 *)((long)pvVar4 + lVar5 + -0x1c),
                      (long)*(int *)((long)pvVar4 + lVar5),iVar1,1);
        uVar2 = *(uint *)(param_1 + 0x28);
        pvVar4 = *(void **)(param_1 + 0x98);
      }
      uVar3 = uVar3 + 1;
      bVar6 = pvVar4 == (void *)0x0;
      lVar5 = lVar5 + 0x28;
    } while (uVar3 < uVar2);
  }
  if (!bVar6) {
    operator_delete__(pvVar4);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (*(uint *)(param_1 + 0x18) <= uVar2) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_uPrevState < m_uStatesNum",
                  "StateMachine.cpp",0xa6,"stateRestore");
    uVar2 = *(uint *)(param_1 + 0xa0);
  }
  FUN_10008ec80(param_1,uVar2);
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  return;
}

