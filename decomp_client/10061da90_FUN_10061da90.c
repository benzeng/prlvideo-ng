
void FUN_10061da90(long param_1,char param_2)

{
  QString *pQVar1;
  int iVar2;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 != '\0') {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    iVar2 = 0;
    do {
      if (*(int *)(local_48.field0_0x0 + 4) != 0) {
        QString::fromUtf8_helper((char *)&local_40,0x1db6a71);
        QString::append(&local_48);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10061db25;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
LAB_10061db25:
      QString::append(&local_48,0x25cf);
      QString::append(&local_48,0x25cf);
      QString::append(&local_48,0x25cf);
      QString::append(&local_48,0x25cf);
      QString::append(&local_48,0x25cf);
      QString::append(&local_48,0x25cf);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    CSearchLineEdit::setInactiveText
              (*(QString **)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x20));
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
    QLineEdit::setPlaceholderText(*(QString **)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))
    ;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10061dbe3;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10061dbe3:
    if (*(int *)local_48.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    return;
  }
  pQVar1 = *(QString **)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x20);
  local_58 = (QArrayData *)QString::fromAscii_helper("",0);
  CSearchLineEdit::setInactiveText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061dc7a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10061dc7a:
  pQVar1 = *(QString **)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x20);
  QObject::property((char *)&local_70);
  QVariant::toString();
  QLineEdit::setPlaceholderText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061dce4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10061dce4:
  QVariant::~QVariant(&local_70);
  return;
}

