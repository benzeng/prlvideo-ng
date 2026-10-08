
undefined8 FUN_100313920(MessageData *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  Data_conflict local_60;
  undefined4 local_58;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (*(int *)(*(long *)(param_2 + 2) + 4) != 0) {
    QSettings::QSettings((QSettings *)&local_38,(QObject *)0x0);
    local_40 = (QArrayData *)QString::fromAscii_helper("Shown Once For VM Messages ID List",0x22);
    QSettings::beginGroup((QString *)&local_38);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10031399e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10031399e:
    local_58 = 0x80000000;
    local_60.field7 = 0;
    QSettings::value((QString *)&local_50,&local_38);
    QVariant::QVariant(&local_70,*param_2);
    cVar1 = QVariant::cmp(&local_50);
    QVariant::~QVariant(&local_70);
    QVariant::~QVariant(&local_50);
    QVariant::~QVariant((QVariant *)&local_60);
    QSettings::~QSettings((QSettings *)&local_38);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  iVar2 = *param_2;
  if (iVar2 < -0x7ffffdba) {
    uVar4 = iVar2 + 0x7ffffefc;
    if (0x14 < uVar4) goto LAB_100313c6e;
    uVar5 = 0x10400d;
  }
  else {
    if (-0x7ffffbef < iVar2) {
      if (iVar2 < -0x7fffeffc) {
        if (iVar2 < -0x7ffffb9e) {
          if (iVar2 == -0x7ffffbee) {
            return 0;
          }
          if (iVar2 == -0x7ffffbcc) {
            return 0;
          }
        }
        else {
          if (iVar2 == -0x7ffffb9e) {
            return 0;
          }
          if (iVar2 == -0x7ffffad8) {
            return 0;
          }
        }
      }
      else if (iVar2 < -0x7ffdfffa) {
        if (iVar2 < -0x7fff6ffe) {
          if (iVar2 == -0x7fffeffc) {
            return 0;
          }
          if (iVar2 == -0x7fff6fff) {
            return 0;
          }
        }
        else if ((iVar2 == -0x7fff6ffe) || (iVar2 == -0x7ffeffeb)) {
          QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                          (int)PTR_s_CD_DVD_10226e5a0);
          iVar2 = QString::indexOf(param_2 + 6,&local_78,0,1);
          if (iVar2 == -1) {
            QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                            (int)PTR_s_Floppy_Disk_10226e598);
            QString::indexOf(param_2 + 6,&local_80,0,1);
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_21 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_21) goto LAB_100313c20;
              }
              QArrayData::deallocate(local_80,2,8);
            }
          }
LAB_100313c20:
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              UNLOCK();
              if (*(int *)local_78 != 0) {
                return 0;
              }
              local_21 = 0;
            }
            QArrayData::deallocate(local_78,2,8);
          }
          return 0;
        }
      }
      else if (iVar2 < 100000) {
        if (iVar2 + 0x7ffbed00U < 2) {
          return 0;
        }
        if (iVar2 == -0x7ffdfffa) {
          return 0;
        }
        if (iVar2 == -0x7ffd9000) {
          return 0;
        }
      }
      else if (iVar2 == 100000) {
        return 0;
      }
      goto LAB_100313c6e;
    }
    if (iVar2 < -0x7ffffc8c) {
      if (iVar2 < -0x7ffffd8b) {
        if (iVar2 == -0x7ffffdba) {
          return 0;
        }
        if (iVar2 == -0x7ffffdaf) {
          return 0;
        }
      }
      else if (iVar2 < -0x7ffffcce) {
        if (iVar2 == -0x7ffffd8b) {
          return 0;
        }
        if (iVar2 == -0x7ffffce7) {
          return 0;
        }
      }
      else {
        if (iVar2 == -0x7ffffcce) {
          return 0;
        }
        if (iVar2 == -0x7ffffcc0) {
          return 0;
        }
      }
      goto LAB_100313c6e;
    }
    uVar4 = iVar2 + 0x7ffffc8c;
    if (0x13 < uVar4) goto LAB_100313c6e;
    uVar5 = 0xc0003;
  }
  if ((uVar5 >> (uVar4 & 0x1f) & 1) != 0) {
    return 0;
  }
LAB_100313c6e:
  uVar3 = CMessageDataProvider::isNeedShowErrorByCode(param_1);
  return uVar3;
}

