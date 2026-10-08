
undefined8 FUN_100d00810(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  QString *this;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = (QString *)(param_1 + 0x128);
  lVar4 = 0;
  do {
    local_48 = (QArrayData *)QString::fromAscii_helper("serial%1",8);
    QString::arg(&local_40,&local_48,lVar4,0,10,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d008af;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100d008af:
    local_68 = (QArrayData *)QString::fromAscii_helper("enabled",7);
    pcVar1 = *(code **)*param_2;
    local_60 = local_40;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
    local_70 = (QArrayData *)QString::fromAscii_helper("",0);
    (*pcVar1)(&local_58,param_2,&local_60,&local_68,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d00953;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100d00953:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d00983;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d00983:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d009b3;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100d009b3:
    local_78 = (QArrayData *)QString::fromAscii_helper("true",4);
    iVar2 = QString::compare(&local_58,&local_78,1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d00a0c;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d00a0c:
    if (iVar2 == 0) {
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("path",4);
      QString::operator=(&local_50,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d00a66;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100d00a66:
      pcVar1 = *(code **)*param_2;
      local_90 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_98 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_a0 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar1)(&local_88,param_2,&local_90,&local_98,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d00b0d;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100d00b0d:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d00b43;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d00b43:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d00b79;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100d00b79:
      if (*(int *)(local_88.field0_0x0 + 4) != 0) {
        local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("type",4)
        ;
        QString::operator=(&local_50,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d00be5;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_100d00be5:
        pcVar1 = *(code **)*param_2;
        local_b8 = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        local_c0 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_c8 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_b0,param_2,&local_b8,&local_c0,&local_c8);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d00c8f;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_100d00c8f:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d00cc5;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100d00cc5:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d00cfb;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100d00cfb:
        if (*(int *)(local_b0 + 4) != 0) {
          *(undefined2 *)&this[-1].field0_0x0 = 0x101;
          *(undefined1 *)((long)&this[-1].field0_0x0 + 2) = 1;
          QString::operator=(this,&local_88);
          local_d0 = (QArrayData *)QString::fromAscii_helper("HostPipe",8);
          iVar2 = QString::compare(&local_b0,&local_d0,1);
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d00d90;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_100d00d90:
          iVar3 = 3;
          if (iVar2 != 0) {
            local_d8 = (QArrayData *)QString::fromAscii_helper("HostDevice",10);
            iVar2 = QString::compare(&local_b0,&local_d8,1);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d00e02;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_100d00e02:
            iVar3 = (uint)(iVar2 == 0) * 2;
          }
          *(int *)((long)&this[-1].field0_0x0 + 4) = iVar3;
        }
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d00e50;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
      }
LAB_100d00e50:
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d00e80;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
    }
LAB_100d00e80:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d00eb0;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100d00eb0:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d00ee0;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100d00ee0:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d00f10;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100d00f10:
    lVar4 = lVar4 + 1;
    this = this + 2;
    if (3 < lVar4) {
      return 0x8000000;
    }
  } while( true );
}

