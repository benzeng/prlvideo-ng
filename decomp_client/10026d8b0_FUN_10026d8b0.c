
void FUN_10026d8b0(long param_1)

{
  QString *pQVar1;
  uint uVar2;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  pQVar1 = *(QString **)(param_1 + 0x30);
  if (pQVar1 == (QString *)0x0) {
    return;
  }
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Changing_the_Windows_SID____10226f298);
  CProgressDialog::setDescription(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026d945;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10026d945:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x30);
  }
  CProgressDialog::setValue(uVar2);
  return;
}

