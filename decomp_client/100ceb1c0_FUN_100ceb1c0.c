
undefined8 FUN_100ceb1c0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  QString *this;
  long lVar3;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
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
  
  this = (QString *)(param_1 + 0x168);
  lVar3 = 0;
  do {
    local_48 = (QArrayData *)QString::fromAscii_helper("parallel%1",10);
    QString::arg(&local_40,&local_48,lVar3,0,10,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ceb253;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100ceb253:
    local_68 = (QArrayData *)QString::fromAscii_helper("present",7);
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
    local_70 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
    (*pcVar1)(&local_58,param_2,&local_60,&local_68,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ceb2fa;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100ceb2fa:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ceb32a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100ceb32a:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ceb35a;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100ceb35a:
    local_78 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    iVar2 = QString::compare(&local_58,&local_78,0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ceb3b1;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100ceb3b1:
    if (iVar2 == 0) {
      *(undefined2 *)&this[-1].field0_0x0 = 0x101;
      local_80.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileType",8);
      QString::operator=(&local_50,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb42a;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100ceb42a:
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
      local_a0 = (QArrayData *)QString::fromAscii_helper("device",6);
      (*pcVar1)(&local_88,param_2,&local_90,&local_98,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb4d4;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100ceb4d4:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb50a;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100ceb50a:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb540;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100ceb540:
      local_a8 = (QArrayData *)QString::fromAscii_helper("file",4);
      iVar2 = QString::compare(&local_88,&local_a8,0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb5a2;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100ceb5a2:
      *(uint *)((long)&this[-1].field0_0x0 + 4) = 2 - (uint)(iVar2 == 0);
      local_b0.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("startConnected",0xe);
      QString::operator=(&local_50,&local_b0);
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb610;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_100ceb610:
      pcVar1 = *(code **)*param_2;
      local_c0 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_c8 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_d0 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
      (*pcVar1)(&local_b8,param_2,&local_c0,&local_c8,&local_d0);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb6bd;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100ceb6bd:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb6f3;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100ceb6f3:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb729;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100ceb729:
      local_d8 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
      iVar2 = QString::compare(&local_b8,&local_d8,0);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb78e;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100ceb78e:
      *(bool *)((long)&this[-1].field0_0x0 + 2) = iVar2 == 0;
      local_e0.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("autodetect",10);
      QString::operator=(&local_50,&local_e0);
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb7f4;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_100ceb7f4:
      pcVar1 = *(code **)*param_2;
      local_f0 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_f8 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_100 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
      (*pcVar1)(&local_e8,param_2,&local_f0,&local_f8,&local_100);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb8a1;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100ceb8a1:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb8d7;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_100ceb8d7:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb90d;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100ceb90d:
      local_108 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
      iVar2 = QString::compare(&local_e8,&local_108,0);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceb972;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100ceb972:
      if (iVar2 != 0) {
        local_110.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileName",8);
        QString::operator=(&local_50,&local_110);
        if (*(int *)local_110.field0_0x0 != -1) {
          if (*(int *)local_110.field0_0x0 != 0) {
            LOCK();
            *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
            local_31 = *(int *)local_110.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceb9d8;
          }
          QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
        }
LAB_100ceb9d8:
        pcVar1 = *(code **)*param_2;
        local_120 = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        local_128 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_130 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_118,param_2,&local_120,&local_128,&local_130);
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ceba82;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_100ceba82:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cebab8;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_100cebab8:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cebaee;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_100cebaee:
        QString::operator=(this,&local_118);
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cebb33;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
      }
LAB_100cebb33:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cebb69;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100cebb69:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cebb9f;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cebb9f:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cebbd0;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
    else {
      *(undefined1 *)&this[-1].field0_0x0 = 0;
    }
LAB_100cebbd0:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cebc00;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100cebc00:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cebc30;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100cebc30:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cebc60;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100cebc60:
    lVar3 = lVar3 + 1;
    this = this + 2;
    if (2 < lVar3) {
      return 0x8000000;
    }
  } while( true );
}

