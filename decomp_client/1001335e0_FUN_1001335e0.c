
void FUN_1001335e0(undefined8 param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if ((param_3 == 1) && (DAT_100e15294 == param_2)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Warning: try to set scsi controller slot rejected");
    return;
  }
  iVar1 = QComboBox::count();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      QComboBox::itemData((int)&local_58,(int)param_1);
      iVar2 = QVariant::toUInt((bool *)&local_58);
      QVariant::~QVariant(&local_58);
      if (iVar2 == param_2) {
        QComboBox::itemData((int)&local_48,(int)param_1);
        iVar2 = QVariant::toUInt((bool *)&local_48);
        QVariant::~QVariant(&local_48);
        if (iVar2 == param_3) {
          if (DAT_10230ffd0 < 3) goto LAB_1001337b6;
          EnumUtils::enumToString(&local_68,param_3);
          QString::toUtf8();
          if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
          }
          FUN_100df99c0("","prl_client_app",3,"Set interface to %s %d (index in combo = %d)",
                        local_60 + *(long *)(local_60 + 0x10),param_2,iVar1);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100133786;
            }
            QArrayData::deallocate(local_60,1,8);
          }
LAB_100133786:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001337b6;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_1001337b6:
          FUN_1001326d0(param_1,iVar1,param_4);
          return;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = QComboBox::count();
    } while (iVar1 < iVar2);
  }
  return;
}

