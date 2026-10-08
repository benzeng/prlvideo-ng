
undefined8 FUN_100ce84f0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QString local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("floppy%1",8);
  QString::arg(&local_38,&local_40,0,0,10,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce856a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100ce856a:
  local_60 = (QArrayData *)QString::fromAscii_helper("fileType",8);
  pcVar1 = *(code **)*param_2;
  local_58 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_29 = *(int *)local_60 != 0;
    UNLOCK();
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  local_68 = (QArrayData *)QString::fromAscii_helper("",0);
  (*pcVar1)(&local_50,param_2,&local_58,&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce860f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100ce860f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce863f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100ce863f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce866f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100ce866f:
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileName",8);
  QString::operator=(&local_48,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce86c1;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100ce86c1:
  pcVar1 = *(code **)*param_2;
  local_80 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  local_88 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_90 = (QArrayData *)QString::fromAscii_helper("",0);
  (*pcVar1)(&local_78,param_2,&local_80,&local_88,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce875d;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100ce875d:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce878d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100ce878d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce87bd;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100ce87bd:
  local_98.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("autodetect",10);
  QString::operator=(&local_48,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce881b;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100ce881b:
  pcVar1 = *(code **)*param_2;
  local_a8 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  local_b0 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
  (*pcVar1)(&local_a0,param_2,&local_a8,&local_b0,&local_b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce88c9;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100ce88c9:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce88ff;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100ce88ff:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce8935;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100ce8935:
  if (*(int *)(local_78.field0_0x0 + 4) == 0) {
    local_c0 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
    iVar3 = QString::compare(&local_a0,&local_c0,0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_29 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce89a4;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100ce89a4:
    if (iVar3 != 0) goto LAB_100ce89ac;
  }
  else {
LAB_100ce89ac:
    local_c8 = (QArrayData *)QString::fromAscii_helper("file",4);
    iVar3 = QString::compare(&local_50,&local_c8,0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_29 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8a0f;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100ce8a0f:
    *(uint *)(param_1 + 0xfc) = 2 - (uint)(iVar3 == 0);
    local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("present",7);
    QString::operator=(&local_48,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_29 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8a80;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_100ce8a80:
    pcVar1 = *(code **)*param_2;
    local_e0 = local_38;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
    local_e8 = (QArrayData *)local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    local_f0 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    (*pcVar1)(&local_d8,param_2,&local_e0,&local_e8,&local_f0);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_29 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8b2e;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100ce8b2e:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8b64;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100ce8b64:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_29 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8b9a;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100ce8b9a:
    local_f8 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    iVar4 = QString::compare(&local_d8,&local_f8,0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_29 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8bff;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100ce8bff:
    if (iVar4 == 0) {
      *(undefined2 *)(param_1 + 0xf8) = 0x101;
    }
    local_100.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("startConnected",0xe);
    QString::operator=(&local_48,&local_100);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_29 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8c6b;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
LAB_100ce8c6b:
    *(undefined1 *)(param_1 + 0xfa) = 0;
    pcVar1 = *(code **)*param_2;
    local_110 = local_38;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
    local_118 = (QArrayData *)local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    local_120 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    (*pcVar1)(&local_108,param_2,&local_110,&local_118,&local_120);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_29 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8d21;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_100ce8d21:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8d57;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_100ce8d57:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_29 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8d8d;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100ce8d8d:
    local_128 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    iVar4 = QString::compare(&local_108,&local_128,0);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_29 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8df2;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_100ce8df2:
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0xfa) = 1;
    }
    local_130 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    iVar4 = QString::compare(&local_a0,&local_130,0);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_29 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce8e63;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_100ce8e63:
    if (iVar4 != 0) {
      if (iVar3 == 0) {
        cVar2 = QDir::isRelativePath(&local_78);
        if (cVar2 != '\0') {
          local_150 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
          QString::arg(&local_148,&local_150,param_1 + 0x18,0,0x20);
          QString::arg(&local_140,&local_148,&local_78,0,0x20);
          QDir::toNativeSeparators(&local_138);
          QString::operator=(&local_78,&local_138);
          if (*(int *)local_138.field0_0x0 != -1) {
            if (*(int *)local_138.field0_0x0 != 0) {
              LOCK();
              *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
              local_29 = *(int *)local_138.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100ce8f48;
            }
            QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
          }
LAB_100ce8f48:
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_29 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100ce8f7e;
            }
            QArrayData::deallocate(local_140,2,8);
          }
LAB_100ce8f7e:
          if (*(int *)local_148 != -1) {
            if (*(int *)local_148 != 0) {
              LOCK();
              *(int *)local_148 = *(int *)local_148 + -1;
              local_29 = *(int *)local_148 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100ce8fb4;
            }
            QArrayData::deallocate(local_148,2,8);
          }
LAB_100ce8fb4:
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_29 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100ce8fea;
            }
            QArrayData::deallocate(local_150,2,8);
          }
        }
LAB_100ce8fea:
        QString::operator=((QString *)(param_1 + 0x100),&local_78);
      }
      else {
        QString::operator=((QString *)(param_1 + 0x108),&local_78);
      }
    }
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_29 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce9033;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100ce9033:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ce9069;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
  }
LAB_100ce9069:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce909f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100ce909f:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce90cf;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100ce90cf:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce90ff;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100ce90ff:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce912f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100ce912f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0x8000000;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0x8000000;
}

