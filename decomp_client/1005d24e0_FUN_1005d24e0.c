
undefined1 FUN_1005d24e0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  size_t sVar4;
  int iVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  cVar2 = QAbstractButton::isChecked();
  if (cVar2 == '\0') {
    return 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x28) + 9) & 0x80) != 0) {
    QComboBox::currentText();
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Select_your_Windows_edition_102274810);
    cVar2 = operator==(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d258a;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1005d258a:
    if (*(int *)local_38.field0_0x0 == -1) {
LAB_1005d25a7:
      if (cVar2 != '\0') {
        return 0;
      }
    }
    else {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d25a7;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      if (cVar2 != '\0') {
        return 0;
      }
    }
  }
  cVar2 = QAbstractButton::isChecked();
  puVar1 = PTR_s___a_z___A_Z___0_9___5___0_1___a__102274800;
  if (cVar2 == '\0') {
    return 1;
  }
  iVar5 = -1;
  if (PTR_s___a_z___A_Z___0_9___5___0_1___a__102274800 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s___a_z___A_Z___0_9___5___0_1___a__102274800);
    iVar5 = (int)sVar4;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  QRegExp::QRegExp((QRegExp *)&local_48,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d2656;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d2656:
  QLineEdit::text();
  uVar3 = QRegExp::exactMatch(&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d26a8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005d26a8:
  QRegExp::~QRegExp((QRegExp *)&local_48);
  return uVar3;
}

