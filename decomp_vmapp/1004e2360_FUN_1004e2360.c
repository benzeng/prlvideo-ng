
void FUN_1004e2360(undefined8 *param_1,QString *param_2,undefined8 *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_100bc3830;
  QFileInfo::QFileInfo((QFileInfo *)(param_1 + 2),param_2);
  QFile::QFile((QFile *)(param_1 + 3),param_2);
  pQVar1 = param_2->field0_0x0;
  param_1[5] = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  piVar2 = (int *)*param_3;
  param_1[6] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
  param_1[9] = 0;
  uVar3 = qHash((QString *)(param_1 + 6),0);
  *(undefined4 *)(param_1 + 8) = uVar3;
  puVar4 = operator_new(8);
  *puVar4 = PTR_shared_null_100ba2188;
  param_1[9] = puVar4;
  return;
}

