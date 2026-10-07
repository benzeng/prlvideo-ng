
bool FUN_1002af860(long param_1,QString *param_2,uint param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  QString *this;
  char cVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  QString local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x868) == 0) {
    return false;
  }
  QMutex::lock();
  if (*(int *)(param_1 + 0x8c0) < 0) {
    bVar7 = false;
    goto LAB_1002afa6d;
  }
  this = (QString *)(param_1 + 0x8b8);
  cVar1 = operator==(param_2,this);
  if (cVar1 == '\0') {
    pQVar2 = this->field0_0x0;
    if (*(int *)(pQVar2 + 4) != 0) {
      bVar7 = false;
      goto LAB_1002afa6d;
    }
  }
  else {
    pQVar2 = this->field0_0x0;
  }
  lVar6 = (ulong)param_3 * 0x8f0;
  *(int *)(param_1 + 0x994 + lVar6) = param_4;
  *(int *)(param_1 + 0x998 + lVar6) = param_5;
  *(undefined4 *)(param_1 + 0x99c + lVar6) = param_8;
  *(undefined4 *)(param_1 + 0x9a0 + lVar6) = param_9;
  *(undefined4 *)(param_1 + 0x9a4 + lVar6) = param_6;
  *(undefined4 *)(param_1 + 0x9a8 + lVar6) = param_7;
  *(uint *)(param_1 + 0x8c8) = *(uint *)(param_1 + 0x8c8) | 1 << ((byte)param_3 & 0x1f);
  if (pQVar2 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=(this,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002af9b1;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1002af9b1:
  piVar3 = (int *)(param_1 + 0x998);
  uVar4 = 0;
  do {
    if ((((piVar3[-1] != 0) || (*piVar3 != 0)) ||
        (lVar5 = (ulong)(uVar4 + 1) * 0x8f0, *(int *)(param_1 + 0x994 + lVar5) != 0)) ||
       (*(int *)(param_1 + 0x998 + lVar5) != 0)) {
      QString::operator=(this,param_2);
      break;
    }
    uVar4 = uVar4 + 2;
    piVar3 = piVar3 + 0x478;
  } while (uVar4 < 0x10);
  if (*(int *)(param_1 + 0x8c8) != 0) {
    do {
      QWaitCondition::wakeOne();
      QWaitCondition::wait((QMutex *)(param_1 + 0x890),param_1 + 0x878);
    } while (*(int *)(param_1 + 0x8c8) != 0);
  }
  if (*(int *)(param_1 + 0x994 + lVar6) == param_4) {
    bVar7 = *(int *)(param_1 + 0x998 + lVar6) == param_5;
  }
  else {
    bVar7 = false;
  }
LAB_1002afa6d:
  QMutex::unlock();
  return bVar7;
}

