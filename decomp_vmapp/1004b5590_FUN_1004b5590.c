
void FUN_1004b5590(long param_1,char param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  int param_6)

{
  QString *this;
  long *plVar1;
  QArrayData *pQVar2;
  bool bVar3;
  QString local_78;
  undefined8 local_70;
  undefined8 local_68;
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    return;
  }
  QMutex::lock();
  bVar3 = true;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 8)) {
    bVar3 = true;
    goto LAB_1004b55f3;
  }
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != *(long **)(param_3 + 0x10)) goto LAB_1004b55f3;
  if (param_2 == '\0') {
    *(int *)(param_3 + 0x18) = param_6;
  }
  else {
    *(int *)(param_3 + 0x1c) = param_6;
  }
  this = (QString *)(param_1 + 8);
  if (param_6 == 0) {
    if (param_2 == '\0') {
      bVar3 = true;
      goto LAB_1004b55f3;
    }
    bVar3 = true;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    QString::fromUtf8_helper((char *)&local_40,0xa320a0);
    QString::operator=(this,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004b5766;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1004b5766:
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(*(long *)(param_1 + 0x20) + 0xc) != *(int *)(*(long *)(param_1 + 0x20) + 8)) {
      FUN_1004b5a80(&local_78,param_1 + 0x20);
      QString::operator=(this,&local_78);
      *(undefined8 *)(param_1 + 0x18) = local_68;
      *(undefined8 *)(param_1 + 0x10) = local_70;
      bVar3 = false;
      QMutex::unlock();
      FUN_1004b5020(param_1,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004b55f3;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    }
    goto LAB_1004b55f3;
  }
  pQVar2 = (QArrayData *)this->field0_0x0;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  local_60 = pQVar2;
  FUN_1004b6200(param_1 + 0x20,&local_60);
  QString::fromUtf8_helper((char *)&local_48,0xa320a0);
  QString::operator=(this,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b56bc;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004b56bc:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_6 == 1) {
    FUN_1004b5150(param_1,param_5);
  }
  if (*(int *)pQVar2 != -1) {
    bVar3 = true;
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b55f3;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004b55f3:
  if (bVar3) {
    QMutex::unlock();
  }
  return;
}

