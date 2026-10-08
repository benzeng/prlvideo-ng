
undefined8 FUN_100cecba0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  QString *this;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
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
  
  this = (QString *)(param_1 + 0x1b0);
  lVar3 = 0;
  do {
    local_48 = (QArrayData *)QString::fromAscii_helper("ethernet%1",10);
    QString::arg(&local_40,&local_48,lVar3,0,10,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cecc33;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100cecc33:
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
        if ((bool)local_31) goto LAB_100ceccda;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100ceccda:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cecd0a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cecd0a:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cecd3a;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100cecd3a:
    local_78 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
    iVar2 = QString::compare(&local_58,&local_78,0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cecd91;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cecd91:
    if (iVar2 == 0) {
      local_80.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("connectionType",0xe);
      QString::operator=(&local_50,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cecdec;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100cecdec:
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
      local_a0 = (QArrayData *)QString::fromAscii_helper("bridged",7);
      (*pcVar1)(&local_88,param_2,&local_90,&local_98,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cece96;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100cece96:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cececc;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100cececc:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cecf02;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100cecf02:
      local_a8 = (QArrayData *)QString::fromAscii_helper("bridged",7);
      iVar2 = QString::compare(&local_88,&local_a8,0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cecf64;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100cecf64:
      if (iVar2 == 0) {
        *(undefined4 *)((long)&this[-4].field0_0x0 + 4) = 1;
LAB_100ced058:
        *(undefined2 *)&this[-4].field0_0x0 = 0x101;
        local_c0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("startConnected",0xe);
        QString::operator=(&local_50,&local_c0);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced0bd;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
LAB_100ced0bd:
        pcVar1 = *(code **)*param_2;
        local_d0 = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        local_d8 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_e0 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
        (*pcVar1)(&local_c8,param_2,&local_d0,&local_d8,&local_e0);
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced16a;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_100ced16a:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced1a0;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_100ced1a0:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced1d6;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_100ced1d6:
        local_e8 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
        iVar2 = QString::compare(&local_c8,&local_e8,0);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced23b;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_100ced23b:
        if (iVar2 == 0) {
          *(undefined1 *)((long)&this[-4].field0_0x0 + 2) = 1;
        }
        local_f0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("generatedAddress",0x10);
        QString::operator=(&local_50,&local_f0);
        if (*(int *)local_f0.field0_0x0 != -1) {
          if (*(int *)local_f0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
            local_31 = *(int *)local_f0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced2a2;
          }
          QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
        }
LAB_100ced2a2:
        pcVar1 = *(code **)*param_2;
        local_100 = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        local_108 = (QArrayData *)local_50.field0_0x0;
        if (1 < *(int *)local_50.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_110 = (QArrayData *)PTR_shared_null_1021e1288;
        (*pcVar1)(&local_f8,param_2,&local_100,&local_108,&local_110);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced348;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_100ced348:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced37e;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100ced37e:
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced3b4;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100ced3b4:
        if (*(int *)(local_f8.field0_0x0 + 4) != 0) {
          QString::remove(&local_f8,0x3a,1);
          QString::operator=(this,&local_f8);
        }
        if (*(int *)local_f8.field0_0x0 != -1) {
          if (*(int *)local_f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
            local_31 = *(int *)local_f8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced41b;
          }
          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
        }
LAB_100ced41b:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced451;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
      }
      else {
        local_b0 = (QArrayData *)QString::fromAscii_helper("hostonly",8);
        iVar2 = QString::compare(&local_88,&local_b0,0);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cecfce;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_100cecfce:
        if (iVar2 == 0) {
          *(undefined4 *)((long)&this[-4].field0_0x0 + 4) = 2;
          goto LAB_100ced058;
        }
        local_b8 = (QArrayData *)QString::fromAscii_helper("nat",3);
        iVar2 = QString::compare(&local_88,&local_b8,0);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ced034;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100ced034:
        if (iVar2 == 0) {
          *(undefined4 *)((long)&this[-4].field0_0x0 + 4) = 4;
          goto LAB_100ced058;
        }
      }
LAB_100ced451:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ced490;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_100ced490:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ced4c0;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100ced4c0:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ced4f0;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100ced4f0:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ced520;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100ced520:
    lVar3 = lVar3 + 1;
    this = this + 7;
    if (4 < lVar3) {
      return 0x8000000;
    }
  } while( true );
}

