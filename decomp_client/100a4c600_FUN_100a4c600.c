
undefined8 * FUN_100a4c600(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  undefined2 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  if (param_3 != 8) {
    piVar1 = (int *)*param_2;
    *param_1 = piVar1;
    if (*piVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return param_1;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(uint *)local_48.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_48.field0_0x0 = *(uint *)local_48.field0_0x0 + 1;
    local_30.field0_0x0._0_1_ = *(uint *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::normalized(&local_30,&local_48,0,0);
  QString::operator=(&local_48,&local_30);
  piVar1 = (int *)CONCAT71(local_30.field0_0x0._1_7_,local_30.field0_0x0._0_1_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a4c67f;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_30.field0_0x0._1_7_,local_30.field0_0x0._0_1_),2,8);
  }
LAB_100a4c67f:
  local_38 = (QArrayData *)QString::fromAscii_helper("\\",1);
  local_40 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::replace(&local_48,&local_38,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a4c6ef;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a4c6ef:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a4c71f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a4c71f:
  if ((1 < *(uint *)local_48.field0_0x0) || (*(long *)(local_48.field0_0x0 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_48,(bool)((char)*(uint *)(local_48.field0_0x0 + 4) + '\x01'));
  }
  lVar3 = (long)(int)*(uint *)(local_48.field0_0x0 + 4) * 2;
  if (lVar3 != 0) {
    pQVar4 = (QArrayData *)(local_48.field0_0x0 + *(long *)(local_48.field0_0x0 + 0x10));
    do {
      uVar2 = FUN_100a4cf50(*(undefined2 *)pQVar4);
      *(undefined2 *)pQVar4 = uVar2;
      pQVar4 = pQVar4 + 2;
      lVar3 = lVar3 + -2;
    } while (lVar3 != 0);
  }
  *param_1 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_21 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_30.field0_0x0._0_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

