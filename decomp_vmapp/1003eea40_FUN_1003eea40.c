
int FUN_1003eea40(QString *param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_40,param_2);
  piVar4 = (int *)PTR_shared_null_100ba20d0;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar1 = QIODevice::isOpen();
  iVar3 = -0xf;
  if (cVar1 == '\0' && *(int *)(param_2->field0_0x0 + 4) != 0) {
    QFile::setFileName(param_1);
    QFile::open(param_1,0x11);
    cVar1 = QIODevice::isOpen();
    iVar3 = -1;
    if (cVar1 != '\0') {
      QString::operator=(param_1 + 2,param_2);
LAB_1003eeace:
      do {
        iVar2 = FUN_1003f14d0(param_1,&local_48);
        iVar3 = 0;
        if (iVar2 == 0) break;
        QString::trimmed();
        QString::operator=(&local_48,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003eeb2a;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_1003eeb2a:
        local_58 = (QArrayData *)QString::fromAscii_helper("FILE",4);
        cVar1 = QString::startsWith(&local_48,&local_58,0);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003eeb7f;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1003eeb7f:
        if (cVar1 == '\0') {
          local_60 = (QArrayData *)QString::fromAscii_helper("TRACK",5);
          cVar1 = QString::startsWith(&local_48,&local_60,0);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003eebf5;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1003eebf5:
          if (cVar1 == '\0') {
            local_68 = (QArrayData *)QString::fromAscii_helper("INDEX",5);
            cVar1 = QString::startsWith(&local_48,&local_68,0);
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003eec61;
              }
              QArrayData::deallocate(local_68,2,8);
            }
LAB_1003eec61:
            if (cVar1 == '\0') {
              local_70 = (QArrayData *)QString::fromAscii_helper("PREGAP",6);
              cVar1 = QString::startsWith(&local_48,&local_70,0);
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003eeccd;
                }
                QArrayData::deallocate(local_70,2,8);
              }
LAB_1003eeccd:
              if (cVar1 == '\0') {
                local_78 = (QArrayData *)QString::fromAscii_helper("POSTGAP",7);
                cVar1 = QString::startsWith(&local_48,&local_78,0);
                if (*(int *)local_78 != -1) {
                  if (*(int *)local_78 != 0) {
                    LOCK();
                    *(int *)local_78 = *(int *)local_78 + -1;
                    local_31 = *(int *)local_78 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003eed36;
                  }
                  QArrayData::deallocate(local_78,2,8);
                }
LAB_1003eed36:
                if (cVar1 == '\0') goto LAB_1003eeace;
                iVar3 = FUN_1003f0420(param_1,&local_48);
              }
              else {
                iVar3 = FUN_1003f02e0(param_1,&local_48);
              }
            }
            else {
              iVar3 = FUN_1003f0150(param_1,&local_48);
            }
          }
          else {
            iVar3 = FUN_1003ef470(param_1,&local_48);
          }
        }
        else {
          iVar3 = FUN_1003ef110(param_1,&local_48,local_40);
        }
      } while (iVar3 == 0);
      piVar4 = (int *)PTR_shared_null_100ba20d0;
      FUN_1003f0560(param_1);
      if (iVar3 == 0) {
        iVar3 = FUN_1003f0640(param_1);
      }
    }
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003eede8;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003eede8:
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003eee19;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_1003eee19:
  QFileInfo::~QFileInfo(local_40);
  return iVar3;
}

