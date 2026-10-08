
void FUN_1002869a0(QFutureInterfaceBase *param_1,undefined8 param_2,CHostHardwareInfoBase *param_3,
                  undefined8 *param_4)

{
  int *piVar1;
  long lVar2;
  CHostHardwareInfoBase *pCVar3;
  QFutureInterfaceBase *pQVar4;
  byte bVar5;
  
  bVar5 = 0;
  QFutureInterfaceBase::QFutureInterfaceBase(param_1,0);
  *(undefined ***)param_1 = &PTR_FUN_1022721c8;
  QFutureInterfaceBase::refT();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  *(undefined ***)param_1 = &PTR_FUN_102272208;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102272238;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  CHostHardwareInfoBase::CHostHardwareInfoBase((CHostHardwareInfoBase *)(param_1 + 0x30),param_3);
  *(undefined **)(param_1 + 0x30) = PTR_vtable_1021e17c8 + 0x10;
  pCVar3 = param_3 + 0x140;
  pQVar4 = param_1 + 0x170;
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pQVar4 = *(undefined8 *)pCVar3;
    pCVar3 = pCVar3 + (ulong)bVar5 * -0x10 + 8;
    pQVar4 = pQVar4 + (ulong)bVar5 * -0x10 + 8;
  }
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_3 + 0x1a8);
  piVar1 = *(int **)(param_3 + 0x1b0);
  *(int **)(param_1 + 0x1e0) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_3 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_3 + 0x1b8);
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x1f8) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

