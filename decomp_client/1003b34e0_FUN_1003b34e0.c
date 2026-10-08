
QString * FUN_1003b34e0(QString *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  QString local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_100 = (QArrayData *)QString::fromAscii_helper("_%1.png",7);
  EnumUtils::enumToString(&local_108,param_3);
  QString::arg(&local_f8,&local_100,&local_108,0,0x20);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b3576;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1003b3576:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_21 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b35ac;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1003b35ac:
  local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  switch(param_2) {
  case 2:
    QString::fromUtf8_helper((char *)&local_f0,0x1df1b07);
    QString::operator=(&local_110,&local_f0);
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_21 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
    break;
  case 3:
    QString::fromUtf8_helper((char *)&local_e8,0x1df1b31);
    QString::operator=(&local_110,&local_e8);
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_21 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
    break;
  case 4:
    QString::fromUtf8_helper((char *)&local_e0,0x1df1b5e);
    QString::operator=(&local_110,&local_e0);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_21 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
    break;
  case 5:
    QString::fromUtf8_helper((char *)&local_d8,0x1df1b86);
    QString::operator=(&local_110,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_21 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
    break;
  case 6:
    QString::fromUtf8_helper((char *)&local_d0,0x1df1bb2);
    QString::operator=(&local_110,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_21 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
    break;
  case 7:
    QString::fromUtf8_helper((char *)&local_c0,0x1df1c06);
    QString::operator=(&local_110,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_21 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
    break;
  case 8:
    QString::fromUtf8_helper((char *)&local_b8,0x1df1c2f);
    QString::operator=(&local_110,&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_21 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
    break;
  case 9:
    QString::fromUtf8_helper((char *)&local_60,0x1df1d2f);
    QString::operator=(&local_110,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
    break;
  case 10:
    QString::fromUtf8_helper((char *)&local_a8,0x1df1c91);
    QString::operator=(&local_110,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_21 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
    break;
  case 0xb:
    QString::fromUtf8_helper((char *)&local_a0,0x1dc00e9);
    QString::operator=(&local_110,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_21 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
    break;
  case 0xc:
    QString::fromUtf8_helper((char *)&local_98,0x1dc010f);
    QString::operator=(&local_110,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_21 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
    break;
  case 0xd:
    QString::fromUtf8_helper((char *)&local_90,0x1df1cb9);
    QString::operator=(&local_110,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_21 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
    break;
  case 0xe:
    QString::fromUtf8_helper((char *)&local_88,0x1dc015c);
    QString::operator=(&local_110,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_21 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
    break;
  case 0xf:
    QString::fromUtf8_helper((char *)&local_80,0x1df1cdd);
    QString::operator=(&local_110,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_21 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
    break;
  case 0x10:
    QString::fromUtf8_helper((char *)&local_78,0x1dc01aa);
    QString::operator=(&local_110,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_21 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
    break;
  case 0x11:
    QString::fromUtf8_helper((char *)&local_70,0x1dc01d1);
    QString::operator=(&local_110,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
    break;
  case 0x12:
    cVar1 = FUN_100d80630(1);
    iVar2 = 0x1df1d02;
    if (cVar1 != '\0') {
      iVar2 = 0x1dc01f6;
    }
    QString::fromUtf8_helper((char *)&local_68,iVar2);
    QString::operator=(&local_110,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
    break;
  case 0x13:
    QString::fromUtf8_helper((char *)&local_b0,0x1df1c5c);
    QString::operator=(&local_110,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_21 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
    break;
  case 0x14:
    QString::fromUtf8_helper((char *)&local_c8,0x1df1bdb);
    QString::operator=(&local_110,&local_c8);
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_21 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
    break;
  case 0x15:
    QString::fromUtf8_helper((char *)&local_48,0x1df1cdd);
    QString::operator=(&local_110,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    break;
  case 0x16:
    QString::fromUtf8_helper((char *)&local_40,0x1df1ddb);
    QString::operator=(&local_110,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
    break;
  case 0x17:
    QString::fromUtf8_helper((char *)&local_38,0x1df1e09);
    QString::operator=(&local_110,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
    break;
  case 0x19:
    cVar1 = FUN_100d80630(1);
    iVar2 = 0x1df1d80;
    if (cVar1 != '\0') {
      iVar2 = 0x1df1d5c;
    }
    QString::fromUtf8_helper((char *)&local_58,iVar2);
    QString::operator=(&local_110,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
    break;
  case 0x1a:
    QString::fromUtf8_helper((char *)&local_50,0x1df1dad);
    QString::operator=(&local_110,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
    break;
  case 0x1c:
    QString::fromUtf8_helper((char *)&local_30,0x1df1e37);
    QString::operator=(&local_110,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar3;
  local_118.field0_0x0 = local_110.field0_0x0;
  if (1 < *(int *)local_110.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
    local_21 = *(int *)local_110.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_118);
  QString::operator=(param_1,&local_118);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_21 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b40b2;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1003b40b2:
  QString::operator=(param_1 + 1,param_1);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_21 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b40f4;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_1003b40f4:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      UNLOCK();
      if (*(int *)local_f8 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
  return param_1;
}

