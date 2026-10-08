
void FUN_1002913d0(CAbstractTask *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  CTaskGenericId *pCVar3;
  undefined1 auVar4 [16];
  
  pCVar3 = operator_new(0x18);
  FUN_100291a00(pCVar3,param_2 + 2,param_2 + 3,*(undefined4 *)(param_2 + 4));
  CAbstractTask::CAbstractTask(param_1,pCVar3);
  *(undefined ***)param_1 = &PTR_FUN_102206a80;
  piVar1 = (int *)*param_2;
  uVar2 = param_2[1];
  *(int **)(param_1 + 0x18) = piVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[2];
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[3];
  *(int **)(param_1 + 0x30) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x3c] = *(CAbstractTask *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 4);
  FUN_100036740(param_1 + 0x40,param_2 + 5);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  auVar4._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar4._0_8_ = PTR_shared_null_1021e1288;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar4;
  CAbstractTask::setOption(param_1,4,1);
  return;
}

