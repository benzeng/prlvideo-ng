
void FUN_10026d5e0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  QString *pQVar2;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_4 == 0x13) {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Copying_Snapshots____10226f290);
    QString::operator=(&local_30,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10026d742;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    goto LAB_10026d742;
  }
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Copying_Hard_Disk__1____10226f288);
  QString::arg(&local_38,&local_40,param_3 + 1,0,10,0x20);
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10026d712;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10026d712:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10026d742;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10026d742:
  pQVar2 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar2 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar2 = *(QString **)(param_1 + 0x30);
  }
  CProgressDialog::setDescription(pQVar2);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x30);
  }
  CProgressDialog::setValue(uVar1);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

