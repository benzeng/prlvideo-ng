
void FUN_100300030(QString *param_1,QString *param_2,QString *param_3,uint param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  QString *pQVar6;
  QUrl local_120 [8];
  QArrayData *local_118;
  QLocale local_110 [8];
  QArrayData *local_108;
  QArrayData *local_100;
  QUrl local_f8 [8];
  QArrayData *local_f0;
  QLocale local_e8 [8];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QString local_a8;
  QVariant local_a0;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  pQVar6 = param_2;
  if (-0x7ffffcff < (int)param_4) {
    if ((int)param_4 < -0x7fff7000) {
      pQVar6 = param_3;
      if ((int)param_4 < -0x7fffa000) {
        if ((int)param_4 < -0x7fffbffc) {
          if (param_4 == 0x80000302) {
            uVar3 = FUN_100152280();
            lVar4 = FUN_1001548f0(uVar3,param_5);
            if (lVar4 == 0) {
              return;
            }
            FUN_10018d830(&local_40,lVar4);
            QString::arg(&local_38,param_2,&local_40,0,0x20);
            QString::operator=(param_2,&local_38);
            if (*(int *)local_38.field0_0x0 != -1) {
              if (*(int *)local_38.field0_0x0 != 0) {
                LOCK();
                *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
                local_29 = *(int *)local_38.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1003007d2;
              }
              QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
            }
LAB_1003007d2:
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_29 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_100300802;
              }
              QArrayData::deallocate(local_40,2,8);
            }
LAB_100300802:
            FUN_10018d830(&local_50,lVar4);
            QString::arg(&local_48,param_3,&local_50,0,0x20);
            QString::operator=(param_3,&local_48);
            if (*(int *)local_48.field0_0x0 != -1) {
              if (*(int *)local_48.field0_0x0 != 0) {
                LOCK();
                *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
                local_29 = *(int *)local_48.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_100300864;
              }
              QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
            }
LAB_100300864:
            if (*(int *)local_50 == -1) {
              return;
            }
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              UNLOCK();
              if (*(int *)local_50 != 0) {
                return;
              }
              local_29 = 0;
            }
            goto LAB_100300b9e;
          }
          if (param_4 != 0x80000328) {
            if (param_4 != 0x80000446) goto LAB_100300bbd;
            uVar3 = FUN_100152280();
            lVar4 = FUN_1001548f0(uVar3,param_5);
            if (lVar4 == 0) {
              return;
            }
            MessageUtils::getMessageString((int)&local_a8,true);
            QString::operator=(param_2,&local_a8);
            if (*(int *)local_a8.field0_0x0 != -1) {
              if (*(int *)local_a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                local_29 = *(int *)local_a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1003001de;
              }
              QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
            }
LAB_1003001de:
            FUN_10018d830(&local_b8,lVar4);
            QString::arg(&local_b0,param_2,&local_b8,0,0x20);
            QString::operator=(param_2,&local_b0);
            if (*(int *)local_b0.field0_0x0 != -1) {
              if (*(int *)local_b0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                local_29 = *(int *)local_b0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_10030024f;
              }
              QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
            }
LAB_10030024f:
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_29 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_100300285;
              }
              QArrayData::deallocate(local_b8,2,8);
            }
LAB_100300285:
            MessageUtils::getMessageString((int)&local_c0,true);
            QString::operator=(param_3,&local_c0);
            if (*(int *)local_c0.field0_0x0 == -1) {
              return;
            }
            local_50 = (QArrayData *)local_c0.field0_0x0;
            if (*(int *)local_c0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
              UNLOCK();
              if (*(int *)local_c0.field0_0x0 != 0) {
                return;
              }
              local_29 = 0;
            }
            goto LAB_100300b9e;
          }
        }
        else {
          if (-0x7fffbff8 < (int)param_4) {
            pQVar6 = param_2;
            if ((param_4 != 0x80004009) && (param_4 != 0x80004010)) goto LAB_100300bbd;
            goto LAB_10030053c;
          }
          if (param_4 == 0x80004004) goto LAB_10030053c;
          if (param_4 != 0x80004006) goto LAB_100300bbd;
        }
      }
      else if ((2 < param_4 + 0x7fffa000) && (2 < param_4 + 0x7fff9000)) goto LAB_100300bbd;
      MessageUtils::incDeviceIndex(param_2);
LAB_10030053c:
      MessageUtils::incDeviceIndex(pQVar6);
      return;
    }
    if (-0x7ffdefca < (int)param_4) {
      if ((int)param_4 < -0x7ffde000) {
        if (param_4 != 0x80021037) goto LAB_100300bbd;
      }
      else {
        if (0x36d1 < (int)param_4) {
          if ((param_4 != 0x36d2) && (param_4 != 0x36d6)) goto LAB_100300bbd;
          goto LAB_1003006ad;
        }
        if (param_4 != 0x80022000) {
          if (param_4 == 0x32ca) goto LAB_10030050e;
LAB_100300bbd:
          CMessageProcessor::substituteParameters
                    (param_1,param_2,(int)param_3,(QString *)(ulong)param_4);
          return;
        }
      }
LAB_100300506:
      MessageUtils::deviceIdToString(param_2);
LAB_10030050e:
      MessageUtils::deviceIdToString(param_3);
      return;
    }
    if (-0x7ffef000 < (int)param_4) {
      if (-0x7ffeef8b < (int)param_4) {
        if (param_4 != 0x80011076) {
          if (param_4 != 0x80011077) goto LAB_100300bbd;
          FUN_1006221e0(&local_d0,0x80011077,1);
          QString::fromUtf8_helper((char *)&local_c8,0x1ddad42);
          QString::append(&local_c8);
          QString::append(param_3);
          if (*(int *)local_c8.field0_0x0 != -1) {
            if (*(int *)local_c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
              local_29 = *(int *)local_c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100300b77;
            }
            QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
          }
LAB_100300b77:
          if (*(int *)local_d0 == -1) {
            return;
          }
          local_50 = local_d0;
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            UNLOCK();
            if (*(int *)local_d0 != 0) {
              return;
            }
            local_29 = 0;
          }
          goto LAB_100300b9e;
        }
        local_108 = (QArrayData *)
                    QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
        QLocale::QLocale(local_110);
        FUN_100d3f730(&local_100,&local_108,local_110);
        FUN_1006291f0(local_120,9,0);
        QUrl::toString(&local_118,local_120,0);
        QString::replace(param_3,&local_100,&local_118,1);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_29 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100300613;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_100300613:
        QUrl::~QUrl(local_120);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_29 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100300655;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100300655:
        QLocale::~QLocale(local_110);
        if (*(int *)local_108 == -1) {
          return;
        }
        local_50 = local_108;
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          UNLOCK();
          if (*(int *)local_108 != 0) {
            return;
          }
          local_29 = 0;
        }
        goto LAB_100300b9e;
      }
      if (param_4 != 0x80011001) {
        if (param_4 != 0x80011058) goto LAB_100300bbd;
        uVar3 = FUN_100152280();
        lVar4 = FUN_1001547d0(uVar3,param_5);
        if (lVar4 == 0) {
          return;
        }
        iVar2 = FUN_10015a6e0(lVar4);
        if (iVar2 != 0) {
          return;
        }
        uVar3 = FUN_10016f500(lVar4);
        cVar1 = FUN_10061b4d0(uVar3,0x2000);
        if (cVar1 == '\0') {
          return;
        }
        FUN_10061abe0(&local_a0,uVar3,7);
        iVar2 = QVariant::toInt((bool *)&local_a0);
        QString::arg(&local_90,param_3,(long)(iVar2 / 0xe10),0,10,0x20);
        QString::operator=(param_3,&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_29 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100300ac3;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_100300ac3:
        QVariant::~QVariant(&local_a0);
        return;
      }
      local_e0 = (QArrayData *)
                 QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
      QLocale::QLocale(local_e8);
      FUN_100d3f730(&local_d8,&local_e0,local_e8);
      FUN_1006291f0(local_f8,8,0);
      QUrl::toString(&local_f0,local_f8,0);
      QString::replace(param_3,&local_d8,&local_f0,1);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_29 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100300468;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100300468:
      QUrl::~QUrl(local_f8);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_29 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003004aa;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1003004aa:
      QLocale::~QLocale(local_e8);
      if (*(int *)local_e0 == -1) {
        return;
      }
      local_50 = local_e0;
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        UNLOCK();
        if (*(int *)local_e0 != 0) {
          return;
        }
        local_29 = 0;
      }
      goto LAB_100300b9e;
    }
    if (param_4 == 0x80009000) goto LAB_10030050e;
    if (param_4 != 0x80010015) goto LAB_100300bbd;
LAB_1003006ad:
    plVar5 = (long *)CMessageDataProvider::instance();
    (**(code **)(*plVar5 + 0x98))(&local_80,plVar5,param_4);
    if (*(int *)(local_80 + 4) != 0) {
      QString::arg(&local_88,param_3,&local_80,0,0x20);
      QString::operator=(param_3,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_29 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100300722;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
    }
LAB_100300722:
    if (*(int *)local_80 == -1) {
      return;
    }
    local_50 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_29 = 0;
    }
    goto LAB_100300b9e;
  }
  if (-0x7ffffd99 < (int)param_4) {
    if (param_4 != 0x80000268) goto LAB_100300bbd;
    goto LAB_10030053c;
  }
  if (param_4 + 0x7ffffdeb < 2) goto LAB_10030053c;
  if (param_4 != 0x80000258) {
    if (param_4 != 0x80000263) goto LAB_100300bbd;
    goto LAB_100300506;
  }
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001547d0(uVar3,param_5);
  if (lVar4 == 0) {
    return;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_10015ab00(lVar4);
  if (cVar1 == '\0') {
    QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1dcb37b);
    QString::operator=(&local_58,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_29 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003008f2;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
  else {
    QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Desktop_for_Mac_10226f638);
    QString::operator=(&local_58,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003008f2;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1003008f2:
  QString::arg(&local_70,param_2,&local_58,0,0x20);
  QString::operator=(param_2,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100300946;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100300946:
  QString::arg(&local_78,param_3,&local_58,0,0x20);
  QString::operator=(param_3,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10030099a;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10030099a:
  if (*(int *)local_58.field0_0x0 == -1) {
    return;
  }
  local_50 = (QArrayData *)local_58.field0_0x0;
  if (*(int *)local_58.field0_0x0 != 0) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_58.field0_0x0 != 0) {
      return;
    }
    local_29 = 0;
  }
LAB_100300b9e:
  QArrayData::deallocate(local_50,2,8);
  return;
}

