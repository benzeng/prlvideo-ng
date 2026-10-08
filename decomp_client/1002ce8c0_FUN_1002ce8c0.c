
void FUN_1002ce8c0(long param_1,int param_2)

{
  QString *pQVar1;
  uint uVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x50) + 4) == 0) {
    return;
  }
  pQVar1 = *(QString **)(param_1 + 0x58);
  if (pQVar1 == (QString *)0x0) {
    return;
  }
  if (((byte)pQVar1[5].field0_0x0[9] & 0x80) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x40) < 1) {
    QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_1022099e0,0x1de4aa4);
    QString::arg(&local_50,&local_58,(long)param_2,0,10,0x20);
    CProgressDialog::setDescription(pQVar1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ceaaa;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002ceaaa:
    if (*(int *)local_58 == -1) {
      return;
    }
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
    return;
  }
  QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_1022099e0,0x1de4a96);
  QString::arg(&local_40,&local_48,(long)param_2,0,10,0x20);
  QString::arg(&local_38,&local_40,(long)*(int *)(param_1 + 0x40),0,10,0x20);
  CProgressDialog::setDescription(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ce9ab;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002ce9ab:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ce9db;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002ce9db:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002cea0b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002cea0b:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x58);
  }
  CProgressDialog::setValue(uVar2);
  return;
}

