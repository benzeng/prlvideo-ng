
undefined8 FUN_100269cb0(long *param_1,char *param_2,int param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  size_t sVar7;
  QArrayData *pQVar8;
  long *plVar9;
  char *pcVar10;
  QArrayData *pQVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QRegExp local_e8 [8];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QRegExp local_d0 [8];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  undefined1 local_78 [8];
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined1 local_58 [8];
  long local_50;
  undefined1 local_48 [8];
  long local_40;
  undefined1 local_31;
  
  QByteArray::QByteArray((QByteArray *)&local_80,param_2,param_3);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  plVar1 = param_1 + 1;
  iVar4 = -1;
  plVar6 = (long *)0x0;
  do {
    lVar13 = *plVar1;
    if (*(int *)(lVar13 + 0x14) != 0) {
      if (1 < *(uint *)(lVar13 + 0x10)) {
        local_70 = lVar13;
        FUN_10026b030(local_78,plVar1,&local_70);
        lVar13 = *plVar1;
      }
      plVar9 = *(long **)(*(long *)(lVar13 + 8) + 0x10);
      plVar6 = (long *)0x0;
      if ((char)plVar9[1] == '\0') {
        plVar6 = plVar9;
      }
    }
    lVar13 = *param_1;
    iVar5 = 0;
    pcVar10 = (char *)(*(long *)(lVar13 + 0x10) + lVar13);
    if ((pcVar10 != (char *)0x0) && (*(uint *)(lVar13 + 4) != 0)) {
      lVar12 = 0;
      do {
        if (pcVar10[lVar12] == '\0') break;
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(lVar13 + 4));
      iVar5 = (int)lVar12;
      if (iVar5 == -1) {
        sVar7 = _strlen(pcVar10);
        iVar5 = (int)sVar7;
      }
    }
    pQVar8 = (QArrayData *)QString::fromLatin1_helper(pcVar10,iVar5);
    iVar5 = 0;
    pQVar11 = local_80 + *(long *)(local_80 + 0x10);
    if ((pQVar11 != (QArrayData *)0x0) && (*(uint *)(local_80 + 4) != 0)) {
      lVar13 = 0;
      do {
        if (pQVar11[lVar13] == (QArrayData)0x0) break;
        lVar13 = lVar13 + 1;
      } while ((uint)lVar13 < *(uint *)(local_80 + 4));
      iVar5 = (int)lVar13;
      if (iVar5 == -1) {
        sVar7 = _strlen((char *)pQVar11);
        iVar5 = (int)sVar7;
      }
    }
    local_90 = (QArrayData *)QString::fromLatin1_helper((char *)pQVar11,iVar5);
    if (1 < *(int *)pQVar8 + 1U) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + 1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
    }
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar8;
    QString::append(&local_88);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026a1ee;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10026a1ee:
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026a21d;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_10026a21d:
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",3,"[CDataSpool] PUSH: tail + src (%d + %d)",
                    *(undefined4 *)(*param_1 + 4),*(int *)(local_80 + 4));
    }
    if (plVar6 == (long *)0x0) {
      local_98 = (QArrayData *)QString::fromAscii_helper("%!PS-Adobe-3.0",0xe);
      iVar5 = QString::indexOf(&local_88,&local_98,0,1);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100269d62;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100269d62:
      if (-1 < iVar5) {
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("","LocalDevices",3,"[CDataSpool] PUSH: SOF detected at %d (%d + %d)",iVar5,
                        *(undefined4 *)(*param_1 + 4),*(int *)(local_80 + 4));
        }
        QString::mid((int)&local_a0,(int)&local_88);
        QString::operator=(&local_88,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100269e08;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_100269e08:
        QString::toLatin1();
        QByteArray::operator=((QByteArray *)&local_80,(QByteArray *)&local_a8);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100269e5e;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
LAB_100269e5e:
        QByteArray::clear();
        plVar6 = operator_new(0x18);
        *plVar6 = (long)PTR_shared_null_100ba20f0;
        *(undefined1 *)(plVar6 + 1) = 0;
        *(undefined1 *)((long)plVar6 + 9) = 0;
        *(undefined8 *)((long)plVar6 + 0xc) = 0x100000000;
        lVar13 = *plVar1;
        if (1 < *(uint *)(lVar13 + 0x10)) {
          local_60 = lVar13;
          FUN_10026b030(local_68,plVar1,&local_60);
          lVar13 = *plVar1;
        }
        plVar9 = operator_new(0x18);
        plVar9[2] = (long)plVar6;
        *plVar9 = lVar13;
        puVar2 = *(undefined8 **)(lVar13 + 8);
        plVar9[1] = (long)puVar2;
        *puVar2 = plVar9;
        *(long **)(*plVar1 + 8) = plVar9;
        *(int *)(*plVar1 + 0x14) = *(int *)(*plVar1 + 0x14) + 1;
        goto LAB_10026a262;
      }
      bVar3 = true;
      FUN_10026ac60(param_1);
      plVar6 = (long *)0x0;
    }
    else {
LAB_10026a262:
      local_b0 = (QArrayData *)QString::fromAscii_helper("%%EOF",5);
      iVar4 = QString::indexOf(&local_88,&local_b0,0,1);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026a2ca;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_10026a2ca:
      if (iVar4 < 0) {
        if (1 < *(uint *)(*plVar6 + 0x10)) {
          local_40 = *plVar6;
          FUN_10041f350(local_48,plVar6,&local_40);
        }
        plVar9 = operator_new(0x18);
        plVar9[2] = (long)local_80;
        if (1 < *(int *)local_80 + 1U) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
        }
        lVar13 = *plVar6;
        *plVar9 = lVar13;
        puVar2 = *(undefined8 **)(lVar13 + 8);
        plVar9[1] = (long)puVar2;
        *puVar2 = plVar9;
        *(long **)(*plVar6 + 8) = plVar9;
        *(int *)(*plVar6 + 0x14) = *(int *)(*plVar6 + 0x14) + 1;
        FUN_10026ac60(param_1,&local_80);
      }
      else {
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("","LocalDevices",3,"[CDataSpool] PUSH: EOF detected at %d (%d + %d)",iVar4,
                        *(undefined4 *)(*param_1 + 4),*(int *)(local_80 + 4));
        }
        iVar4 = iVar4 + 5;
        QString::truncate((int)&local_88);
        QByteArray::left((int)&local_b8);
        if (1 < *(uint *)(*plVar6 + 0x10)) {
          local_50 = *plVar6;
          FUN_10041f350(local_58,plVar6,&local_50);
        }
        plVar9 = operator_new(0x18);
        plVar9[2] = (long)local_b8;
        if (1 < *(int *)local_b8 + 1U) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + 1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
        }
        lVar13 = *plVar6;
        *plVar9 = lVar13;
        puVar2 = *(undefined8 **)(lVar13 + 8);
        plVar9[1] = (long)puVar2;
        *puVar2 = plVar9;
        *(long **)(*plVar6 + 8) = plVar9;
        *(int *)(*plVar6 + 0x14) = *(int *)(*plVar6 + 0x14) + 1;
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100269fca;
          }
          QArrayData::deallocate(local_b8,1,8);
        }
LAB_100269fca:
        QByteArray::mid((int)&local_c0,(int)&local_80);
        QByteArray::operator=((QByteArray *)&local_80,(QByteArray *)&local_c0);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10026a02e;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
LAB_10026a02e:
        QByteArray::clear();
        *(undefined1 *)(plVar6 + 1) = 1;
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 1;
        }
      }
      local_c8 = (QArrayData *)QString::fromAscii_helper("%!PS-Adobe-3.0 Query",0x14);
      iVar5 = QString::indexOf(&local_88,&local_c8,0,1);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026a3a4;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_10026a3a4:
      if ((iVar5 != -1) && (*(undefined1 *)((long)plVar6 + 9) = 1, 2 < DAT_1011b55f8)) {
        FUN_1008e3970("","LocalDevices",3,"[CDataSpool] PUSH: PS Query tag detected");
      }
      local_d8 = (QArrayData *)QString::fromAscii_helper("%%Pages:\\s*(\\d*)",0x10);
      QRegExp::QRegExp(local_d0,&local_d8,1,3);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026a446;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_10026a446:
      iVar5 = QRegExp::indexIn(local_d0,&local_88,0,0);
      if (-1 < iVar5) {
        QRegExp::cap((int)&local_e0);
        iVar5 = QString::toInt((bool *)&local_e0,0);
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10026a4c5;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_10026a4c5:
        iVar14 = *(int *)((long)plVar6 + 0xc);
        if ((0 < iVar14) && (0 < DAT_1011b55f8)) {
          FUN_1008e3970("","LocalDevices",1,
                        "[CDataSpool] PUSH: extra nuber of pages pattern: %d (%d)",iVar5);
          iVar14 = *(int *)((long)plVar6 + 0xc);
        }
        if (iVar5 <= iVar14) {
          iVar5 = iVar14;
        }
        *(int *)((long)plVar6 + 0xc) = iVar5;
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("","LocalDevices",3,"[CDataSpool] PUSH: nuber of pages: %d",iVar5);
        }
      }
      local_f0 = (QArrayData *)QString::fromAscii_helper("NumCopies\\s*(\\d*)",0x11);
      QRegExp::QRegExp(local_e8,&local_f0,1,3);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026a5a9;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_10026a5a9:
      iVar5 = QRegExp::indexIn(local_e8,&local_88,0,0);
      if (-1 < iVar5) {
        QRegExp::cap((int)&local_f8);
        iVar5 = QString::toInt((bool *)&local_f8,0);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10026a628;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_10026a628:
        iVar14 = (int)plVar6[2];
        if ((0 < iVar14) && (0 < DAT_1011b55f8)) {
          FUN_1008e3970("","LocalDevices",1,
                        "[CDataSpool] PUSH: extra nuber of copies pattern: %d (%d)",iVar5);
          iVar14 = (int)plVar6[2];
        }
        if (iVar5 <= iVar14) {
          iVar5 = iVar14;
        }
        *(int *)(plVar6 + 2) = iVar5;
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("","LocalDevices",3,"[CDataSpool] PUSH: nuber of copies: %d",iVar5);
        }
      }
      QRegExp::~QRegExp(local_e8);
      bVar3 = false;
      QRegExp::~QRegExp(local_d0);
    }
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026a6eb;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_10026a6eb:
    if (((iVar4 < 0) || (bVar3)) || (*(int *)(local_80 + 4) == 0)) {
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          UNLOCK();
          if (*(int *)local_80 != 0) {
            return 1;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_80,1,8);
      }
      return 1;
    }
  } while( true );
}

