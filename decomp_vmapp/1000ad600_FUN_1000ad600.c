
undefined8 FUN_1000ad600(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  QString *pQVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  QDir local_d8 [8];
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QTypedArrayData<unsigned_short> *local_98;
  QString local_90;
  QFileInfo local_88 [8];
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  undefined4 local_60;
  QString local_58;
  undefined8 local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_50 = QDate::currentDate();
  QDate::toString(&local_48,&local_50,1);
  local_60 = QTime::currentTime();
  local_68 = (QArrayData *)QString::fromAscii_helper("-hhmmss",7);
  QTime::toString(&local_58);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ad6b9;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000ad6b9:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ad6e9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000ad6e9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ad719;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000ad719:
  local_78 = (QArrayData *)QString::fromAscii_helper("guest_%1.dmp",0xc);
  QString::arg(&local_70,&local_78,&local_40,0,0x20);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ad777;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000ad777:
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_88,&local_90);
  QFileInfo::absolutePath();
  QFileInfo::~QFileInfo(local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ad7ee;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1000ad7ee:
  *(uint *)(param_1 + 0x1178) = *(uint *)(param_1 + 0x1178) & 0xfffffff0 | 1;
  FUN_1000f88e0(*(undefined8 *)(param_1 + 0x107d8),*(long *)(param_1 + 0x50) + 0x18);
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0xc)) {
    pQVar3 = (QString *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
    do {
      local_98 = pQVar3->field0_0x0;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      if (*(int *)(local_98 + 4) == 0) {
        cVar5 = '\x01';
        FUN_1008e3970("","vm",0,"Invalid dbgdump command format");
      }
      else {
        local_a0 = (QArrayData *)QString::fromAscii_helper("--name",6);
        iVar2 = QString::compare(&local_98,&local_a0,1);
        if (iVar2 == 0) {
          pQVar3 = pQVar3 + 1;
          bVar6 = pQVar3 != (QString *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
        }
        else {
          bVar6 = false;
        }
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000ad91c;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1000ad91c:
        if (bVar6) {
          QString::operator=(&local_70,pQVar3);
        }
        else {
          local_a8 = (QArrayData *)QString::fromAscii_helper("--path",6);
          iVar2 = QString::compare(&local_98,&local_a8,1);
          if (iVar2 == 0) {
            pQVar3 = pQVar3 + 1;
            bVar6 = pQVar3 != (QString *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
          }
          else {
            bVar6 = false;
          }
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000ad9c4;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1000ad9c4:
          if (bVar6) {
            QString::operator=(&local_80,pQVar3);
          }
          else {
            local_b0 = (QArrayData *)QString::fromAscii_helper("--mini",6);
            iVar2 = QString::compare(&local_98,&local_b0,1);
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000ada42;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
LAB_1000ada42:
            if (iVar2 == 0) {
              *(byte *)(param_1 + 0x1178) = *(byte *)(param_1 + 0x1178) | 3;
            }
            else {
              local_b8 = (QArrayData *)QString::fromAscii_helper("--kernel",8);
              iVar2 = QString::compare(&local_98,&local_b8,1);
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000adab4;
                }
                QArrayData::deallocate(local_b8,2,8);
              }
LAB_1000adab4:
              if (iVar2 == 0) {
                *(uint *)(param_1 + 0x1178) = *(uint *)(param_1 + 0x1178) & 0xfffffffc | 2;
              }
              else {
                local_c0 = (QArrayData *)QString::fromAscii_helper("--windbg",8);
                iVar2 = QString::compare(&local_98,&local_c0,1);
                if (*(int *)local_c0 != -1) {
                  if (*(int *)local_c0 != 0) {
                    LOCK();
                    *(int *)local_c0 = *(int *)local_c0 + -1;
                    local_31 = *(int *)local_c0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000adb26;
                  }
                  QArrayData::deallocate(local_c0,2,8);
                }
LAB_1000adb26:
                if (iVar2 == 0) {
                  *(uint *)(param_1 + 0x1178) = *(uint *)(param_1 + 0x1178) & 0xfffffff3 | 4;
                }
                else {
                  local_c8 = (QArrayData *)QString::fromAscii_helper("--elf",5);
                  iVar2 = QString::compare(&local_98,&local_c8,1);
                  if (*(int *)local_c8 != -1) {
                    if (*(int *)local_c8 != 0) {
                      LOCK();
                      *(int *)local_c8 = *(int *)local_c8 + -1;
                      local_31 = *(int *)local_c8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000adb98;
                    }
                    QArrayData::deallocate(local_c8,2,8);
                  }
LAB_1000adb98:
                  if (iVar2 == 0) {
                    *(byte *)(param_1 + 0x1178) = *(byte *)(param_1 + 0x1178) & 0xf3;
                  }
                }
              }
            }
          }
        }
        cVar5 = (pQVar3 == (QString *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8)) *
                '\x02';
      }
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000adc4f;
        }
        QArrayData::deallocate((QArrayData *)local_98,2,8);
      }
LAB_1000adc4f:
      if (cVar5 == '\x02') break;
      uVar4 = 0x80000009;
      if (cVar5 != '\0') goto LAB_1000add45;
      pQVar3 = pQVar3 + 1;
    } while (pQVar3 != (QString *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8));
  }
  if ((*(int *)(local_70.field0_0x0 + 4) == 0) || (*(int *)(local_80.field0_0x0 + 4) == 0)) {
    uVar4 = 0x80000009;
    FUN_1008e3970("","vm",0,"Invalid dbg dump name specified");
  }
  else {
    QDir::QDir(local_d8,&local_80);
    QDir::absoluteFilePath(&local_d0);
    QString::operator=((QString *)(param_1 + 0x1170),&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_31 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000add10;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_1000add10:
    uVar4 = 0;
    QDir::~QDir(local_d8);
  }
LAB_1000add45:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000add75;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1000add75:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000adda5;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1000adda5:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar4;
}

