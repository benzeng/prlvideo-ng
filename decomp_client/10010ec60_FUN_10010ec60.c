
undefined1 FUN_10010ec60(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QRegExp local_50 [8];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_58 = (QArrayData *)
             QString::fromAscii_helper("^[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}$",0x30);
  QRegExp::QRegExp(local_50,&local_58,1,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010ece2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10010ece2:
  iVar1 = QString::indexOf((QRegExp *)&local_48,(int)local_50);
  if (iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if (*(int *)(local_48.field0_0x0 + 4) == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
      do {
        local_68 = (QArrayData *)QString::fromAscii_helper(".",1);
        iVar1 = QString::indexOf(&local_48,&local_68,0,1);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10010ed8b;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_10010ed8b:
        if (iVar1 < 0) {
          QString::operator=(&local_60,&local_48);
          QString::fromUtf8_helper((char *)&local_40,0x1e41978);
          QString::operator=(&local_48,&local_40);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_31 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10010eea9;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
LAB_10010eea9:
          uVar2 = QString::toInt((bool *)&local_60,0);
        }
        else {
          QString::left((int)&local_70);
          QString::operator=(&local_60,&local_70);
          if (*(int *)local_70.field0_0x0 != -1) {
            if (*(int *)local_70.field0_0x0 != 0) {
              LOCK();
              *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
              local_31 = *(int *)local_70.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10010eddd;
            }
            QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
          }
LAB_10010eddd:
          QString::right((int)&local_78);
          QString::operator=(&local_48,&local_78);
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10010ee31;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
LAB_10010ee31:
          uVar2 = QString::toInt((bool *)&local_60,0);
        }
        if (0xff < uVar2) {
          uVar3 = 0;
        }
      } while (*(int *)(local_48.field0_0x0 + 4) != 0);
    }
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010ef14;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_10010ef14:
  QRegExp::~QRegExp(local_50);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar3;
}

