
QString * FUN_10019f290(QString *param_1,undefined8 param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  QMapNodeBase *local_118;
  uint local_10c;
  QString local_108;
  QString local_100;
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
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar2 = (**(code **)(*param_3 + 0x68))(param_3);
  switch(iVar2 + -3) {
  case 0:
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Floppy_Disk_10226e318);
    QString::operator=(&local_48,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
    break;
  default:
    QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,0x1dc67e3);
    QString::operator=(&local_48,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_31 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
    break;
  case 2:
    QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,(int)PTR_s_CD_DVD__1_10226e320)
    ;
    QString::arg(&local_58,&local_60,param_4 + 1,0,10,0x20);
    QString::operator=(&local_48,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019f658;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10019f658:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_60,2,8);
    }
    break;
  case 3:
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Hard_Disk__1_10226e328);
    QString::arg(&local_68,&local_70,param_4 + 1,0,10,0x20);
    QString::operator=(&local_48,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019f714;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10019f714:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_70,2,8);
    }
    break;
  case 5:
    QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Network_Adapter__1_10226e340);
    QString::arg(&local_78,&local_80,param_4 + 1,0,10,0x20);
    QString::operator=(&local_48,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019f7d0;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_10019f7d0:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_80,2,8);
    }
    break;
  case 7:
    QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Serial_Port__1_10226e330);
    QString::arg(&local_88,&local_90,param_4 + 1,0,10,0x20);
    QString::operator=(&local_48,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019f892;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_10019f892:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_90,2,8);
    }
    break;
  case 8:
    QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Printer_Port__1_10226e338);
    QString::arg(&local_98,&local_a0,param_4 + 1,0,10,0x20);
    QString::operator=(&local_48,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019f966;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_10019f966:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
    break;
  case 9:
    QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Sound_Card_10226e348
                   );
    QString::operator=(&local_48,&local_a8);
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
  case 0xc:
    QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_USB_Controller_10226e350);
    QString::operator=(&local_48,&local_b0);
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
  case 0xe:
    QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Intel_VT_d_PCIe_Device_10226e360);
    QString::operator=(&local_48,&local_c8);
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
    break;
  case 0xf:
    QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Generic_SCSI_10226e358);
    QString::operator=(&local_48,&local_c0);
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
  case 0x11:
    QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Video_Adapter_10226e3f0);
    QString::operator=(&local_48,&local_b8);
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
  }
  iVar3 = CVmDevice::getEmulatedType();
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  switch(iVar2 + -3) {
  case 0:
  case 2:
  case 3:
  case 0xe:
  case 0xf:
  case 0x11:
    EnumUtils::enumToString(&local_e0,iVar3);
    QString::operator=(&local_d8,&local_e0);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_31 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
    break;
  case 5:
    EnumUtils::enumToString(&local_e8,iVar3);
    QString::operator=(&local_d8,&local_e8);
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_31 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019fc7d;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
    goto LAB_10019fc7d;
  case 7:
    EnumUtils::enumToString(&local_f0,iVar3);
    QString::operator=(&local_d8,&local_f0);
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_31 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019f502;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
LAB_10019f502:
    if ((iVar3 == 3) &&
       (lVar4 = ___dynamic_cast(param_3,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1698,0), lVar4 != 0
       )) {
      iVar3 = CVmSerialPort::getSocketMode();
      QString::append(&local_d8,0x20);
      if (iVar3 == 0) {
        QMetaObject::tr((char *)&local_f8,PTR_staticMetaObject_1021e1520,0x1dd6645);
      }
      else {
        QMetaObject::tr((char *)&local_f8,PTR_staticMetaObject_1021e1520,0x1dd664e);
      }
      QString::append(&local_d8);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
    }
    break;
  case 8:
    EnumUtils::enumToString(&local_100,iVar3);
    QString::operator=(&local_d8,&local_100);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_31 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019fdb1;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
    goto LAB_10019fdb1;
  }
  if (iVar2 == 8) {
LAB_10019fc7d:
    local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    lVar4 = ___dynamic_cast(param_3,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16f8,0);
    if (lVar4 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to convert vm device to network device")
      ;
    }
    else {
      local_10c = CVmDevice::getEmulatedType();
      if (local_10c == 2) {
LAB_10019fd4c:
        CVmGenericNetworkAdapter::getBoundAdapterName();
        QString::operator=(&local_108,&local_120);
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_31 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10019fef6;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
      }
      else if (local_10c < 2) {
        FUN_1001241b0(&local_118,param_2);
        plVar5 = (long *)FUN_100129b20(&local_118,&local_10c);
        iVar2 = *(int *)(*plVar5 + 0xc);
        iVar3 = *(int *)(*plVar5 + 8);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10019fd42;
          }
          if (*(long *)(local_118 + 0x10) != 0) {
            FUN_10012bff0();
            QMapDataBase::freeTree(local_118,(int)*(undefined8 *)(local_118 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)local_118);
        }
LAB_10019fd42:
        if (1 < iVar2 - iVar3) goto LAB_10019fd4c;
      }
    }
  }
  else {
LAB_10019fdb1:
    local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    CVmDevice::getUserFriendlyName();
    iVar3 = CVmDevice::getEmulatedType();
    if (iVar3 != 0) {
      QDir::toNativeSeparators(&local_130);
      QString::operator=(&local_128,&local_130);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10019fe28;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
    }
LAB_10019fe28:
    if (*(int *)(local_128.field0_0x0 + 4) != 0) {
      QString::operator=(&local_108,&local_128);
    }
    if (iVar2 == 0xf) {
      QString::fromUtf8_helper((char *)&local_40,0x1e41978);
      QString::operator=(&local_108,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10019fea0;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
LAB_10019fea0:
    if (*(int *)local_128.field0_0x0 != -1) {
      if (*(int *)local_128.field0_0x0 != 0) {
        LOCK();
        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
        local_31 = *(int *)local_128.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019fef6;
      }
      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
    }
  }
LAB_10019fef6:
  local_138 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(param_1,&local_138,&local_48,0,0x20);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019ff63;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10019ff63:
  if (*(int *)(local_d8.field0_0x0 + 4) != 0) {
    local_148 = (QArrayData *)QString::fromAscii_helper(": %1",4);
    QString::arg(&local_140,&local_148,&local_d8,0,0x20);
    QString::append(param_1);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019fff7;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_10019fff7:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001a002d;
      }
      QArrayData::deallocate(local_148,2,8);
    }
  }
LAB_1001a002d:
  if (*(int *)(local_108.field0_0x0 + 4) != 0) {
    local_150 = (QArrayData *)QString::fromAscii_helper("/",1);
    iVar2 = QString::lastIndexOf(&local_108,&local_150,0xffffffff,1);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001a00ab;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_1001a00ab:
    if ((iVar2 != -1) && (1 < *(int *)(local_108.field0_0x0 + 4) - iVar2)) {
      QString::right((int)&local_158);
      QString::operator=(&local_108,&local_158);
      if (*(int *)local_158.field0_0x0 != -1) {
        if (*(int *)local_158.field0_0x0 != 0) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
          local_31 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001a0127;
        }
        QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
      }
LAB_1001a0127:
      local_168 = (QArrayData *)QString::fromAscii_helper(" - %1",5);
      QString::arg(&local_160,&local_168,&local_108,0,0x20);
      QString::append(param_1);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001a01aa;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1001a01aa:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001a01e0;
        }
        QArrayData::deallocate(local_168,2,8);
      }
    }
  }
LAB_1001a01e0:
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_31 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a0216;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_1001a0216:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a024c;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1001a024c:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

