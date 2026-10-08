
undefined8 FUN_100d01440(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  QString *this;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
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
  
  this = (QString *)(param_1 + 0x1c0);
  lVar4 = 0;
  do {
    local_48 = (QArrayData *)QString::fromAscii_helper("network%1",9);
    QString::arg(&local_40,&local_48,lVar4,0,10,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d014d3;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100d014d3:
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
    local_70 = (QArrayData *)QString::fromAscii_helper("false",5);
    (*pcVar1)(&local_58,param_2,&local_60,&local_68,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d0157a;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100d0157a:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d015aa;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d015aa:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d015da;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100d015da:
    local_78 = (QArrayData *)QString::fromAscii_helper("true",4);
    iVar2 = QString::compare(&local_58,&local_78,1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d01634;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d01634:
    if (iVar2 == 0) {
      *(undefined2 *)&this[-6].field0_0x0 = 0x101;
      local_80.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("connected",9);
      QString::operator=(&local_50,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01696;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100d01696:
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
      local_a0 = (QArrayData *)QString::fromAscii_helper("false",5);
      (*pcVar1)(&local_88,param_2,&local_90,&local_98,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01740;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100d01740:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01776;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d01776:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d017ac;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100d017ac:
      local_a8 = (QArrayData *)QString::fromAscii_helper("true",4);
      iVar2 = QString::compare(&local_88,&local_a8,1);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01811;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100d01811:
      *(bool *)((long)&this[-6].field0_0x0 + 2) = iVar2 == 0;
      local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("type",4);
      QString::operator=(&local_50,&local_b0);
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01876;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_100d01876:
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
      local_d0 = (QArrayData *)QString::fromAscii_helper("Am79C970A",9);
      (*pcVar1)(&local_b8,param_2,&local_c0,&local_c8,&local_d0);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01923;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100d01923:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01959;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100d01959:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0198f;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100d0198f:
      local_d8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("address",7);
      QString::operator=(&local_50,&local_d8);
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d019ed;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_100d019ed:
      pcVar1 = *(code **)*param_2;
      local_e8 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_f0 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_f8 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar1)(&local_e0,param_2,&local_e8,&local_f0,&local_f8);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01a97;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_100d01a97:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01acd;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100d01acd:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01b03;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100d01b03:
      QString::operator=(this,&local_b8);
      QString::operator=(this + -2,&local_e0);
      pcVar1 = *(code **)*param_2;
      local_108 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_110 = (QArrayData *)QString::fromAscii_helper("conntype",8);
      local_118 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar1)(&local_100,param_2,&local_108,&local_110,&local_118);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01bc8;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_100d01bc8:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01bfe;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100d01bfe:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01c34;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100d01c34:
      uVar3 = FUN_100d02e40();
      *(undefined4 *)((long)&this[-6].field0_0x0 + 4) = uVar3;
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01c7a;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100d01c7a:
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01cb0;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_100d01cb0:
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01ce6;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_100d01ce6:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d01d20;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_100d01d20:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d01d50;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100d01d50:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d01d80;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100d01d80:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d01db0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100d01db0:
    lVar4 = lVar4 + 1;
    this = this + 7;
    if (4 < lVar4) {
      return 0x8000000;
    }
  } while( true );
}

