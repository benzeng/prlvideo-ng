
void FUN_100292660(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined4 local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0x18);
  FUN_100323d90(&local_40,param_2);
  local_44 = FUN_100323e20(param_2);
  FUN_1002931b0(pCVar1,&local_40,&local_44);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002926ef;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002926ef:
  *(undefined ***)param_1 = &PTR_FUN_102206cc0;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 4);
  *(undefined8 *)(param_1 + 0x50) = param_3[3];
  *(undefined8 *)(param_1 + 0x48) = param_3[2];
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3[1];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  auVar3 = FUN_1003261e0(param_2);
  *(undefined1 (*) [16])(param_1 + 0x5c) = auVar3;
  QImage::QImage((QImage *)(param_1 + 0x70));
  CAbstractTask::setLoggingType(param_1,0);
  return;
}

