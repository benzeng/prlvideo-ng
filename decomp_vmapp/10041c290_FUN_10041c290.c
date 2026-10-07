
undefined8 FUN_10041c290(QByteArray *param_1,long *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QArrayData *local_58;
  char local_49;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QByteArray::QByteArray((QByteArray *)&local_40,";",-1);
  uVar3 = 0;
  iVar1 = QByteArray::indexOf(param_1,(int)param_2);
  if (iVar1 != 0) goto LAB_10041c3ca;
  iVar1 = QByteArray::indexOf(param_1,(int)&local_40);
  if (iVar1 == -1) {
    iVar1 = *(int *)(*(long *)param_1 + 4);
    uVar3 = 0;
    if (iVar1 == -1) goto LAB_10041c3ca;
  }
  uVar3 = 0;
  if (iVar1 <= *(int *)(*param_2 + 4)) goto LAB_10041c3ca;
  QByteArray::mid((int)&local_48,(int)param_1);
  uVar2 = QByteArray::toInt((bool *)&local_48,(int)&local_49);
  uVar3 = 0;
  if (local_49 != '\0') {
    *param_3 = uVar2;
    QByteArray::mid((int)&local_58,(int)param_1);
    QByteArray::operator=(param_1,(QByteArray *)&local_58);
    uVar3 = 1;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10041c39a;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_10041c39a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041c3ca;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10041c3ca:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar3;
}

