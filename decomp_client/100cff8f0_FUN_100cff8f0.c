
undefined8 FUN_100cff8f0(long param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  QTypedArrayData<unsigned_short> *pQStack_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QString QStack_80;
  undefined *local_78;
  undefined1 local_70;
  undefined1 local_6f;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  local_48 = (QArrayData *)QString::fromAscii_helper("sharedfolder%1",0xe);
  local_50 = (QArrayData *)QString::fromAscii_helper("",0);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cff982;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cff982:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cff9b2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cff9b2:
  local_68 = (QArrayData *)QString::fromAscii_helper("count",5);
  pcVar1 = *(code **)(*param_2 + 0x10);
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
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
  iVar3 = (*pcVar1)(param_2,&local_60,&local_68,10,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cffa48;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cffa48:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cffa78;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cffa78:
  *(int *)(param_1 + 0x2c) = iVar3;
  puVar2 = PTR_shared_null_1021e1288;
  if (0 < iVar3) {
    lVar5 = 0;
    auVar6._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar6._0_8_ = PTR_shared_null_1021e1288;
    auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    do {
      pQStack_120 = auVar6._8_8_;
      local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      QStack_80.field0_0x0 = pQStack_120;
      local_78 = PTR_shared_null_1021e1288;
      local_98 = (QArrayData *)QString::fromAscii_helper("sharedfolder%1",0xe);
      QString::arg(&local_90,&local_98,lVar5,0,10,0x20);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cffb46;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100cffb46:
      local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("path",4);
      QString::operator=(&local_58,&local_a0);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cffba4;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_100cffba4:
      pcVar1 = *(code **)*param_2;
      local_b0 = (QArrayData *)local_90.field0_0x0;
      if (1 < *(int *)local_90.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
      }
      local_b8 = (QArrayData *)local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      local_c0 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar1)(&local_a8,param_2,&local_b0,&local_b8,&local_c0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cffc52;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100cffc52:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cffc88;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cffc88:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cffcbe;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100cffcbe:
      if (*(int *)(local_a8.field0_0x0 + 4) != 0) {
        QString::operator=(&QStack_80,&local_a8);
        local_6f = 1;
        local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("name",4)
        ;
        QString::operator=(&local_58,&local_c8);
        if (*(int *)local_c8.field0_0x0 != -1) {
          if (*(int *)local_c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
            local_31 = *(int *)local_c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cffd41;
          }
          QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
        }
LAB_100cffd41:
        pcVar1 = *(code **)*param_2;
        local_d8 = (QArrayData *)local_90.field0_0x0;
        if (1 < *(int *)local_90.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
        }
        local_e0 = (QArrayData *)local_58.field0_0x0;
        if (1 < *(int *)local_58.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
        }
        local_e8 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_d0,param_2,&local_d8,&local_e0,&local_e8);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cffdef;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_100cffdef:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cffe25;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_100cffe25:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cffe5b;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_100cffe5b:
        if (*(int *)(local_d0.field0_0x0 + 4) == 0) {
          QString::operator=(&local_88,&local_90);
        }
        else {
          QString::operator=(&local_88,&local_d0);
        }
        local_f0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("writable",8);
        QString::operator=(&local_58,&local_f0);
        if (*(int *)local_f0.field0_0x0 != -1) {
          if (*(int *)local_f0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
            local_31 = *(int *)local_f0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cffee9;
          }
          QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
        }
LAB_100cffee9:
        pcVar1 = *(code **)*param_2;
        local_100 = (QArrayData *)local_90.field0_0x0;
        if (1 < *(int *)local_90.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
        }
        local_108 = (QArrayData *)local_58.field0_0x0;
        if (1 < *(int *)local_58.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
        }
        local_110 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_f8,param_2,&local_100,&local_108,&local_110);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfff97;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_100cfff97:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfffcd;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100cfffcd:
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d00003;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100d00003:
        local_118 = (QArrayData *)QString::fromAscii_helper("true",4);
        iVar4 = QString::compare(&local_f8,&local_118,1);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d0006f;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_100d0006f:
        local_70 = iVar4 != 0;
        FUN_100d057b0(param_1 + 0x30,&local_88);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d000be;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_100d000be:
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_31 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d000f4;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
      }
LAB_100d000f4:
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d0012a;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_100d0012a:
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d00160;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100d00160:
      FUN_100d05f40(&local_88);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d001a8;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d001a8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0x8000000;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0x8000000;
}

