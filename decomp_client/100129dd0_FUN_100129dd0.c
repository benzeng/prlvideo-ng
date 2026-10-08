
void FUN_100129dd0(QObject *param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_10012a0e0((QTypedArrayData<unsigned_short> *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xa4) = 0;
  puVar3 = PTR_vtable_1021e17c0;
  *(undefined **)param_1 = PTR_vtable_1021e17c0 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar3 + 0xe0;
  puVar2 = PTR_shared_null_1021e15e8;
  auVar4._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar4._0_8_ = PTR_shared_null_1021e15e8;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa8) = auVar4;
  *(undefined1 (*) [16])(param_1 + 0xb8) = auVar4;
  *(undefined1 (*) [16])(param_1 + 200) = auVar4;
  *(undefined **)(param_1 + 0xd8) = puVar2;
  *(undefined **)(param_1 + 0xe0) = PTR_shared_null_1021e1288;
  (**(code **)(puVar3 + 0xb8))(param_1);
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)(param_1 + 0x10),true,(QString *)0x0,(int *)0x0,
             (int *)0x0);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

