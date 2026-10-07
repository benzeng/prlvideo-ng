
void FUN_1002671c0(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  uint uVar9;
  long lVar10;
  undefined1 local_121;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QRegExp local_b8 [8];
  QDir local_b0 [8];
  Data *local_a8;
  Data *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  FUN_10050fa80(1,&local_38,0);
  local_58 = (QArrayData *)QString::fromAscii_helper("%1 printed document%2.pdf",0x19);
  QString::arg(&local_50,&local_58,&local_40,0,0x20);
  local_60 = (QArrayData *)QString::fromAscii_helper("%1%2",4);
  QString::arg(&local_48,&local_50,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026729b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10026729b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002672cb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002672cb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002672fb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002672fb:
  local_78 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  FUN_1006fbe60(&local_80);
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  QString::arg(&local_68,&local_70,&local_38,0,0x20);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026737b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10026737b:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002673ab;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002673ab:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002673db;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002673db:
  local_98 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_90,&local_98,&local_68,0,0x20);
  QString::arg(&local_88,&local_90,&local_48,0,0x20);
  QString::operator=((QString *)&DAT_1011c37f0,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026746e;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10026746e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002674a4;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1002674a4:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002674da;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1002674da:
  QDir::QDir(local_b0,&local_68);
  QDir::entryList(&local_a8,local_b0,10,0);
  QRegExp::escape(&local_d0);
  local_d8 = (QArrayData *)QString::fromAscii_helper("-",1);
  QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
  local_e0 = (QArrayData *)QString::fromAscii_helper("[0-9]+",6);
  QString::arg(&local_c0,&local_c8,&local_e0,0,0x20);
  QRegExp::QRegExp(local_b8,&local_c0,1,0);
  QtPrivate::QStringList_filter((QStringList *)&local_a0,(QRegExp *)&local_a8);
  QRegExp::~QRegExp(local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002675fe;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1002675fe:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100267634;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100267634:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026766a;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10026766a:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002676a0;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1002676a0:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_29 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002676d6;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1002676d6:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100267761;
    }
    iVar4 = *(int *)(local_a8 + 0xc);
    if (iVar4 != *(int *)(local_a8 + 8)) {
      lVar10 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = local_a8 + (long)iVar4 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100267740:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100267740;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_a8);
  }
LAB_100267761:
  QDir::~QDir(local_b0);
  uVar1 = *(uint *)(local_a0 + 8);
  uVar2 = *(uint *)(local_a0 + 0xc);
  if (uVar2 == uVar1) {
    local_f8 = (QArrayData *)QString::fromAscii_helper("",0);
    QString::arg(&local_f0,&DAT_1011c37f0,&local_f8,0,0x20);
    local_100 = (QArrayData *)QString::fromAscii_helper("",0);
    QString::arg(&local_e8,&local_f0,&local_100,0,0x20);
    bVar3 = QFile::exists(&local_e8);
    DAT_101115b30 = (uint)bVar3;
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_29 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026783e;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
LAB_10026783e:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_29 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100267874;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_100267874:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_29 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002678aa;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1002678aa:
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_29 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100267ab6;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
  }
  else {
    uVar9 = uVar1;
    if (1 < *(uint *)local_a0) {
      FUN_100022c80(&local_a0,*(uint *)(local_a0 + 4));
      uVar9 = *(uint *)(local_a0 + 8);
    }
    pDVar7 = local_a0;
    local_118 = (QArrayData *)QString::fromAscii_helper("%1 printed document-",0x14);
    QString::arg(&local_110,&local_118,&local_40,0,0x20);
    uVar5 = QString::remove(pDVar7 + ((long)(int)((uVar2 - 1) - uVar1) + (long)(int)uVar9) * 8 +
                                     0x10,&local_110,1);
    local_120 = (QArrayData *)QString::fromAscii_helper(".pdf",4);
    puVar6 = (undefined8 *)QString::remove(uVar5,&local_120,1);
    local_108 = (QArrayData *)*puVar6;
    if (1 < *(int *)local_108 + 1U) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + 1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
    }
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_29 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002679ed;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_1002679ed:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_29 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100267a23;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100267a23:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100267a59;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_100267a59:
    local_121 = 1;
    iVar4 = QString::toInt((bool *)&local_108,(int)&local_121);
    DAT_101115b30 = iVar4 + 1;
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_29 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100267ab6;
      }
      QArrayData::deallocate(local_108,2,8);
    }
  }
LAB_100267ab6:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100267b51;
    }
    iVar4 = *(int *)(local_a0 + 0xc);
    if (iVar4 != *(int *)(local_a0 + 8)) {
      lVar10 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = local_a0 + (long)iVar4 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100267b30:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100267b30;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_a0);
  }
LAB_100267b51:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100267b81;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100267b81:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100267bb1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100267bb1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100267be1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100267be1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

