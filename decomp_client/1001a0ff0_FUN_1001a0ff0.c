
QString * FUN_1001a0ff0(QString *param_1,long param_2)

{
  undefined *puVar1;
  Data *pDVar2;
  int iVar3;
  size_t sVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QFont local_90 [16];
  Data *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_s_<html><body><table>_1022710c8;
  iVar3 = -1;
  if (PTR_s_<html><body><table>_1022710c8 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_<html><body><table>_1022710c8);
    iVar3 = (int)sVar4;
  }
  pQVar5 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar3);
  param_1->field0_0x0 = pQVar5;
  local_48 = (QArrayData *)
             QString::fromAscii_helper
                       ("<tr><td align=\"right\"><nobr><b>%1</b></nobr></td><td width=%2><nobr>&nbsp;&nbsp;%3</nobr></td></tr>"
                        ,99);
  EnumUtils::OsVerToString((uint)&local_50);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 == 0) {
    QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1dd66fe);
    QString::operator=(&local_58,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001a119b;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
  else if (iVar3 == 2) {
    QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1dd6706);
    QString::operator=(&local_58,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001a119b;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
  else if (iVar3 == 3) {
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1dd670a);
    QString::operator=(&local_58,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001a119b;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
LAB_1001a119b:
  if (*(char *)(param_2 + 0x1c) == '\0') {
    QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Virtual_Machine_10226de48);
  }
  else {
    QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,(int)PTR_s_Template_10226de18);
  }
  local_80 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_80,param_2);
  FUN_1000341d0(&local_80,&local_50);
  FUN_1000341d0(&local_80,&local_78);
  FUN_1000341d0(&local_80,&local_58);
  FUN_1000341d0(&local_80,param_2 + 8);
  FontUtils::getToolTipFont(SUB81(local_90,0));
  iVar3 = FUN_10010f810(&local_80,local_90);
  QFont::~QFont(local_90);
  QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,(int)PTR_s_VM_Name__10226e398);
  QString::arg(&local_a8,&local_48,&local_b0,0,0x20);
  lVar8 = (long)iVar3;
  QString::arg(&local_a0,&local_a8,lVar8,0,10,0x20);
  QString::arg(&local_98,&local_a0,param_2,0,0x20);
  QString::append(param_1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1330;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1001a1330:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1366;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1001a1366:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a139c;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1001a139c:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a13d2;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1001a13d2:
  QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,(int)PTR_s_OS_Type__10226e3a0);
  QString::arg(&local_c8,&local_48,&local_d0,0,0x20);
  QString::arg(&local_c0,&local_c8,lVar8,0,10,0x20);
  QString::arg(&local_b8,&local_c0,&local_50,0,0x20);
  QString::append(param_1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a149e;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1001a149e:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a14d4;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1001a14d4:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a150a;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1001a150a:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1540;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1001a1540:
  QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,(int)PTR_s_VM_Type__10226e3a8);
  QString::arg(&local_e8,&local_48,&local_f0,0,0x20);
  QString::arg(&local_e0,&local_e8,lVar8,0,10,0x20);
  QString::arg(&local_d8,&local_e0,&local_78,0,0x20);
  QString::append(param_1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a160c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1001a160c:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1642;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1001a1642:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1678;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1001a1678:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a16ae;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1001a16ae:
  QMetaObject::tr((char *)&local_110,PTR_staticMetaObject_1021e1520,(int)PTR_s_Format__10226e3b0);
  QString::arg(&local_108,&local_48,&local_110,0,0x20);
  QString::arg(&local_100,&local_108,lVar8,0,10,0x20);
  QString::arg(&local_f8,&local_100,&local_58,0,0x20);
  QString::append(param_1);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a177a;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1001a177a:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a17b0;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1001a17b0:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a17e6;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1001a17e6:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a181c;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1001a181c:
  QMetaObject::tr((char *)&local_130,PTR_staticMetaObject_1021e1520,(int)PTR_s_Location__10226e3b8);
  QString::arg(&local_128,&local_48,&local_130,0,0x20);
  QString::arg(&local_120,&local_128,lVar8,0,10,0x20);
  QString::arg(&local_118,&local_120,param_2 + 8,0,0x20);
  QString::append(param_1);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a18e7;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1001a18e7:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a191d;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1001a191d:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1953;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1001a1953:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1989;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1001a1989:
  puVar1 = PTR_s_<_table><_body><_html>_1022710d0;
  if (PTR_s_<_table><_body><_html>_1022710d0 != (undefined *)0x0) {
    _strlen(PTR_s_<_table><_body><_html>_1022710d0);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)puVar1);
  QString::append(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a19ed;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a19ed:
  pDVar2 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1a81;
    }
    iVar3 = *(int *)(local_80 + 0xc);
    if (iVar3 != *(int *)(local_80 + 8)) {
      lVar8 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_80 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1001a1a60:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1001a1a60;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1001a1a81:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1ab1;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001a1ab1:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1ae1;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1001a1ae1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a1b11;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001a1b11:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return param_1;
}

