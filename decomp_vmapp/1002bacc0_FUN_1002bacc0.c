
undefined4 FUN_1002bacc0(undefined4 param_1,undefined4 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  QArrayData *pQVar6;
  QString local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QString local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QString local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
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
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
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
  undefined1 local_31;
  
  lVar3 = FUN_1000915f0(DAT_1011c3698);
  if (lVar3 == 0) {
    return 0x80008008;
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  uVar2 = 0x80000018;
  iVar1 = 3;
  switch(param_2) {
  case 2:
    if (DAT_101116b50 != 0) {
      QString::fromUtf8_helper((char *)&local_70,0x9e751d);
      QString::operator=(&local_78,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bad9a;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1002bad9a:
      QString::fromUtf8_helper((char *)&local_68,0xa18349);
      QString::operator=(&local_80,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002badec;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1002badec:
      iVar1 = 3;
      goto LAB_1002bbf0f;
    }
    break;
  case 3:
    if (DAT_1011c5668 != 0) {
      QString::fromUtf8_helper((char *)&local_60,0x9e7544);
      QString::operator=(&local_78,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bae55;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1002bae55:
      QString::fromUtf8_helper((char *)&local_58,0xa18357);
      QString::operator=(&local_80,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002baea7;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1002baea7:
      iVar1 = 3;
      goto LAB_1002bbf0f;
    }
    break;
  case 4:
    if ((param_3 != (long *)0x0) && (iVar1 = CVmDevice::getEmulatedType(), iVar1 != 0)) {
      local_a0 = (QArrayData *)QString::fromAscii_helper("%1|SN%2@%3",10);
      local_a8 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@PRINTER@|203a|fffa|full|--",0x22);
      QString::arg(&local_98,&local_a0,&local_a8,0,0x20);
      uVar2 = CVmDevice::getIndex();
      QString::arg(&local_90,&local_98,uVar2,4,10,0x30);
      CVmDevice::getSystemName();
      QString::arg(&local_88,&local_90,&local_b0,0,0x20);
      QString::operator=(&local_78,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bafb7;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_1002bafb7:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bafed;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1002bafed:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb023;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1002bb023:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb059;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1002bb059:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb08f;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1002bb08f:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb0c5;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1002bb0c5:
      local_c8 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
      local_d0 = (QArrayData *)QString::fromAscii_helper("Virtual Printer",0xf);
      QString::arg(&local_c0,&local_c8,&local_d0,0,0x20);
      CVmDevice::getUserFriendlyName();
      QString::arg(&local_b8,&local_c0,&local_d8,0,0x20);
      QString::operator=(&local_80,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb18e;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_1002bb18e:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb1c4;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1002bb1c4:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb1fa;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1002bb1fa:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb230;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1002bb230:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbf0f;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
      goto LAB_1002bbf0f;
    }
    break;
  case 5:
    goto switchD_1002bad39_caseD_5;
  case 6:
    iVar1 = 1;
switchD_1002bad39_caseD_5:
    if (param_3 != (long *)0x0) {
      local_100 = (QArrayData *)QString::fromAscii_helper("%1|%2%3@%4",10);
      local_108 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@PRINTER@|203a|fffa|full|--",0x22)
      ;
      QString::arg(&local_f8,&local_100,&local_108,0,0x20);
      FUN_10009d940(&local_110);
      QString::arg(&local_f0,&local_f8,&local_110,0,0x20);
      (**(code **)(*param_3 + 0xb8))(&local_120,param_3);
      FUN_10009d990(&local_118,&local_120);
      QString::arg(&local_e8,&local_f0,&local_118,0,0x20);
      (**(code **)(*param_3 + 0xb8))(&local_128,param_3);
      QString::arg(&local_e0,&local_e8,&local_128,0,0x20);
      QString::operator=(&local_78,&local_e0);
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb3cc;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_1002bb3cc:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb402;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1002bb402:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb438;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_1002bb438:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb46e;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1002bb46e:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb4a4;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1002bb4a4:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb4da;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_1002bb4da:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb510;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1002bb510:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb546;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1002bb546:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb57c;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1002bb57c:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb5b2;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_1002bb5b2:
      local_140 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
      local_148 = (QArrayData *)QString::fromAscii_helper("Virtual Printer",0xf);
      QString::arg(&local_138,&local_140,&local_148,0,0x20);
      (**(code **)(*param_3 + 0xa8))(&local_150,param_3);
      QString::arg(&local_130,&local_138,&local_150,0,0x20);
      QString::operator=(&local_80,&local_130);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb683;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_1002bb683:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb6b9;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1002bb6b9:
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb6ef;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_1002bb6ef:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb725;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_1002bb725:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbf0f;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1002bbf0f:
      uVar2 = FUN_1002b8890(lVar3,param_1,&local_78,&local_80,iVar1,0);
    }
    break;
  case 7:
    if (param_3 != (long *)0x0) {
      local_168 = (QArrayData *)QString::fromAscii_helper("%1|%2",5);
      local_170 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@UVC@|203a|fff9|high|--",0x1e);
      QString::arg(&local_160,&local_168,&local_170,0,0x20);
      sVar4 = _strlen((char *)param_3);
      local_178 = (QArrayData *)QString::fromAscii_helper((char *)param_3,(int)sVar4);
      QString::arg(&local_158,&local_160,&local_178,0,0x20);
      QString::operator=(&local_78,&local_158);
      if (*(int *)local_158.field0_0x0 != -1) {
        if (*(int *)local_158.field0_0x0 != 0) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
          local_31 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb844;
        }
        QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
      }
LAB_1002bb844:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb87a;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1002bb87a:
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb8b0;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1002bb8b0:
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb8e6;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_1002bb8e6:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb91c;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_1002bb91c:
      QString::fromUtf8_helper((char *)&local_50,0xa183de);
      QString::operator=(&local_80,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bb96e;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_1002bb96e:
      iVar1 = 3;
      goto LAB_1002bbf0f;
    }
    break;
  case 8:
    QString::fromUtf8_helper((char *)&local_48,0xa183f3);
    QString::operator=(&local_78,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bb9ca;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1002bb9ca:
    QString::fromUtf8_helper((char *)&local_40,0xa18417);
    QString::operator=(&local_80,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bba1c;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1002bba1c:
    iVar1 = 3;
    goto LAB_1002bbf0f;
  case 9:
    if (param_3 != (long *)0x0) {
      CHwHardDisk::getDeviceName();
      QString::toUtf8();
      QCryptographicHash::hash(&local_190,&local_198,2);
      QByteArray::toHex();
      lVar5 = 0;
      pQVar6 = local_188 + *(long *)(local_188 + 0x10);
      if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_188 + 4) != 0)) {
        lVar5 = 0;
        do {
          if (pQVar6[lVar5] == (QArrayData)0x0) break;
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < *(uint *)(local_188 + 4));
      }
      local_180 = (QArrayData *)QString::fromAscii_helper((char *)pQVar6,(int)lVar5);
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbae6;
        }
        QArrayData::deallocate(local_188,1,8);
      }
LAB_1002bbae6:
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbb1c;
        }
        QArrayData::deallocate(local_190,1,8);
      }
LAB_1002bbb1c:
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbb52;
        }
        QArrayData::deallocate(local_198,1,8);
      }
LAB_1002bbb52:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbb88;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_1002bbb88:
      local_1d0 = (QArrayData *)QString::fromAscii_helper("%1@%2|%3|%4@%5",0xe);
      local_1d8 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MSC",0xb);
      QString::arg(&local_1c8,&local_1d0,&local_1d8,0,0x20);
      QString::arg(&local_1c0,&local_1c8,&local_180,0,0x20);
      local_1e0 = (QArrayData *)QString::fromAscii_helper("203a|fff7|unknown|--",0x14);
      QString::arg(&local_1b8,&local_1c0,&local_1e0,0,0x20);
      QString::arg(&local_1b0,&local_1b8,&local_180,0,0x20);
      CHwHardDisk::getDeviceId();
      QString::arg(&local_1a8,&local_1b0,&local_1e8,0,0x20);
      QString::operator=(&local_78,&local_1a8);
      if (*(int *)local_1a8.field0_0x0 != -1) {
        if (*(int *)local_1a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
          local_31 = *(int *)local_1a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbccf;
        }
        QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
      }
LAB_1002bbccf:
      if (*(int *)local_1e8 != -1) {
        if (*(int *)local_1e8 != 0) {
          LOCK();
          *(int *)local_1e8 = *(int *)local_1e8 + -1;
          local_31 = *(int *)local_1e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbd05;
        }
        QArrayData::deallocate(local_1e8,2,8);
      }
LAB_1002bbd05:
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_31 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbd3b;
        }
        QArrayData::deallocate(local_1b0,2,8);
      }
LAB_1002bbd3b:
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_31 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbd71;
        }
        QArrayData::deallocate(local_1b8,2,8);
      }
LAB_1002bbd71:
      if (*(int *)local_1e0 != -1) {
        if (*(int *)local_1e0 != 0) {
          LOCK();
          *(int *)local_1e0 = *(int *)local_1e0 + -1;
          local_31 = *(int *)local_1e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbda7;
        }
        QArrayData::deallocate(local_1e0,2,8);
      }
LAB_1002bbda7:
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_31 = *(int *)local_1c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbddd;
        }
        QArrayData::deallocate(local_1c0,2,8);
      }
LAB_1002bbddd:
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbe13;
        }
        QArrayData::deallocate(local_1c8,2,8);
      }
LAB_1002bbe13:
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_31 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbe49;
        }
        QArrayData::deallocate(local_1d8,2,8);
      }
LAB_1002bbe49:
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_31 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbe7f;
        }
        QArrayData::deallocate(local_1d0,2,8);
      }
LAB_1002bbe7f:
      CHwHardDisk::getDeviceName();
      QString::operator=(&local_80,&local_1f0);
      if (*(int *)local_1f0.field0_0x0 != -1) {
        if (*(int *)local_1f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
          local_31 = *(int *)local_1f0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbed4;
        }
        QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
      }
LAB_1002bbed4:
      iVar1 = 3;
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bbf0f;
        }
        QArrayData::deallocate(local_180,2,8);
      }
      goto LAB_1002bbf0f;
    }
  }
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bbf5e;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1002bbf5e:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_78.field0_0x0 != 0) {
        return uVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
  return uVar2;
}

