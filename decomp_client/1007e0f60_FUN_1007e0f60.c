
void FUN_1007e0f60(CAbstractTask *param_1,QObject *param_2)

{
  undefined *puVar1;
  CTaskGenericId *this;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0xab);
  *(undefined ***)this = &PTR_FUN_102274260;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_10222ee40;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  FUN_1001eef00(param_1 + 0x28);
  puVar1 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x68) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x70) = 0x80000007;
  *(undefined **)(param_1 + 0x78) = puVar1;
  iVar3 = *(int *)puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  auVar4._8_4_ = (int)puVar1;
  auVar4._0_8_ = puVar1;
  auVar4._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar4;
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar4;
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar4;
  *(undefined1 (*) [16])(param_1 + 0xb0) = auVar4;
  *(undefined **)(param_1 + 0xc0) = puVar1;
  *(undefined **)(param_1 + 200) = PTR_shared_null_1021e15d0;
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

