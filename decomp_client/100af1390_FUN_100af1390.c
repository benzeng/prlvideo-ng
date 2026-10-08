
undefined8 FUN_100af1390(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  QArrayData *local_e8;
  QArrayData *local_e0;
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
  undefined1 local_31;
  
  puVar4 = PTR_shared_null_1021e1288;
  ppuVar6 = &PTR_s_Usb_Device_1022938b8;
  do {
    ppuVar8 = ppuVar6;
    iVar1 = *(int *)(ppuVar8 + 3);
    if (iVar1 < 0) break;
    ppuVar6 = ppuVar8 + 3;
  } while (iVar1 != param_3);
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (iVar1 < 0) {
    QString::sprintf((char *)&local_d0,"Vendor %04X");
  }
  else {
    pcVar3 = ppuVar8[5];
    if (pcVar3 != (char *)0x0) {
      _strlen(pcVar3);
    }
    QString::fromUtf8_helper((char *)&local_c8,(int)pcVar3);
    QString::operator=(&local_d0,&local_c8);
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100af146a;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
  }
LAB_100af146a:
  puVar5 = ppuVar8[4] + -0x10;
  do {
    puVar7 = puVar5;
    uVar2 = *(uint *)(puVar7 + 0x10);
    if ((int)uVar2 < 0) break;
    puVar5 = puVar7 + 0x10;
  } while (uVar2 != param_4);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar4;
  if ((int)uVar2 < 0) {
    if (param_2 < 0xdc) {
      switch(param_2) {
      case 0:
        QString::fromUtf8_helper((char *)&local_c0,0x1ecdac0);
        QString::operator=(&local_d8,&local_c0);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
        break;
      case 1:
        QString::fromUtf8_helper((char *)&local_b8,0x1df293d);
        QString::operator=(&local_d8,&local_b8);
        if (*(int *)local_b8.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            local_31 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
        }
        break;
      case 2:
        QString::fromUtf8_helper((char *)&local_b0,0x1df29c1);
        QString::operator=(&local_d8,&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
        break;
      case 3:
        QString::fromUtf8_helper((char *)&local_a8,0x1ecdaca);
        QString::operator=(&local_d8,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
        break;
      default:
switchD_100af1534_caseD_4:
        QString::sprintf((char *)&local_d8,"USB Device %04X",(ulong)param_4);
        break;
      case 7:
        QString::fromUtf8_helper((char *)&local_a0,0x1dc6853);
        QString::operator=(&local_d8,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
        break;
      case 8:
        QString::fromUtf8_helper((char *)&local_98,0x1ecdace);
        QString::operator=(&local_d8,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
        break;
      case 9:
        QString::fromUtf8_helper((char *)&local_90,0x1e44a0a);
        QString::operator=(&local_d8,&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
        break;
      case 10:
        QString::fromUtf8_helper((char *)&local_88,0x1ecdadb);
        QString::operator=(&local_d8,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
        break;
      case 0xb:
        QString::fromUtf8_helper((char *)&local_80,0x1ecdae0);
        QString::operator=(&local_d8,&local_80);
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
        break;
      case 0xd:
        QString::fromUtf8_helper((char *)&local_78,0x1ecdaef);
        QString::operator=(&local_d8,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
        break;
      case 0xe:
        QString::fromUtf8_helper((char *)&local_70,0x1df2985);
        QString::operator=(&local_d8,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
      }
    }
    else if (param_2 < 0xe0) {
      if (param_2 != 0xdc) goto switchD_100af1534_caseD_4;
      QString::fromUtf8_helper((char *)&local_68,0x1ecdb00);
      QString::operator=(&local_d8,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af17e6;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
    }
    else if (param_2 < 0xfe) {
      if (param_2 == 0xe0) {
        QString::fromUtf8_helper((char *)&local_60,0x1ecdb0b);
        QString::operator=(&local_d8,&local_60);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af17e6;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
      }
      else {
        if (param_2 != 0xef) goto switchD_100af1534_caseD_4;
        QString::fromUtf8_helper((char *)&local_58,0x1df5b97);
        QString::operator=(&local_d8,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100af17e6;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
      }
    }
    else if (param_2 == 0xfe) {
      QString::fromUtf8_helper((char *)&local_50,0x1ecdb14);
      QString::operator=(&local_d8,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af17e6;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
    else {
      if (param_2 != 0xff) goto switchD_100af1534_caseD_4;
      QString::fromUtf8_helper((char *)&local_48,0x1ecdb29);
      QString::operator=(&local_d8,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af17e6;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
  }
  else {
    pcVar3 = *(char **)(puVar7 + 0x18);
    if (pcVar3 != (char *)0x0) {
      _strlen(pcVar3);
    }
    QString::fromUtf8_helper((char *)&local_40,(int)pcVar3);
    QString::operator=(&local_d8,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100af17e6;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100af17e6:
  local_e8 = (QArrayData *)QString::fromAscii_helper("%1 - %2",7);
  QString::arg(&local_e0,&local_e8,&local_d0,0,0x20);
  QString::arg(param_1,&local_e0,&local_d8,0,0x20);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af1878;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100af1878:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af18ae;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100af18ae:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af18e4;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100af18e4:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_d0.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
  return param_1;
}

