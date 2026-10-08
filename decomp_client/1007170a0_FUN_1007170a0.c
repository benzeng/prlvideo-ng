
char * FUN_1007170a0(char *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  QString *pQVar11;
  _func_void_Node_ptr *p_Var12;
  uint uVar13;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QKeySequence local_80 [8];
  _func_void_Node_ptr *local_78;
  QKeySequence local_70 [8];
  QKeySequence local_68 [8];
  QKeySequence local_60 [8];
  QKeySequence local_58 [8];
  QKeySequence local_50 [8];
  QKeySequence local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = QKeySequence::operator[](param_2);
  iVar6 = QKeySequence::operator[](param_2);
  iVar7 = QKeySequence::operator[](param_2);
  iVar8 = QKeySequence::operator[](param_2);
  QKeySequence::QKeySequence(local_48,uVar5 & 0xdfffffff,iVar6,iVar7,iVar8);
  cVar4 = QKeySequence::isEmpty();
  if (cVar4 != '\0') {
    *(undefined **)param_1 = PTR_shared_null_1021e1288;
    goto LAB_100717a83;
  }
  QKeySequence::QKeySequence(local_50,DAT_100e27200,0,0,0);
  cVar4 = QKeySequence::operator==(local_48,local_50);
  QKeySequence::~QKeySequence(local_50);
  if (cVar4 != '\0') {
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)PTR_s_Switch_Language_10226f920);
    goto LAB_100717a83;
  }
  QKeySequence::QKeySequence(local_58,DAT_100e271fc,0,0,0);
  cVar4 = QKeySequence::operator==(local_48,local_58);
  QKeySequence::~QKeySequence(local_58);
  if (cVar4 != '\0') {
    if (DAT_102310a18 == (void *)0x0) {
      pvVar10 = operator_new(0x20);
      FUN_1007eff80(pvVar10);
      DAT_10226c4da = 1;
      DAT_102310a18 = pvVar10;
    }
    FUN_1007f0520(local_60,DAT_102310a18,1);
    FUN_1007170a0(param_1,local_60,0);
    QKeySequence::~QKeySequence(local_60);
    goto LAB_100717a83;
  }
  QKeySequence::QKeySequence(local_68,DAT_100e271f8,0,0,0);
  cVar4 = QKeySequence::operator==(local_48,local_68);
  QKeySequence::~QKeySequence(local_68);
  if (cVar4 != '\0') {
    if (DAT_102310a18 == (void *)0x0) {
      pvVar10 = operator_new(0x20);
      FUN_1007eff80(pvVar10);
      DAT_10226c4da = 1;
      DAT_102310a18 = pvVar10;
    }
    FUN_1007f0520(local_70,DAT_102310a18,0);
    FUN_1007170a0(param_1,local_70,0);
    QKeySequence::~QKeySequence(local_70);
    goto LAB_100717a83;
  }
  uVar5 = QKeySequence::operator[]((uint)local_48);
  FUN_100717ee0(&local_78);
  uVar13 = uVar5 & 0x1ffffff;
  if (*(uint *)(local_78 + 0x20) == 0) {
    bVar2 = false;
  }
  else {
    for (p_Var12 = *(_func_void_Node_ptr **)
                    (*(long *)(local_78 + 8) +
                    ((ulong)(*(uint *)(local_78 + 0x24) ^ uVar13) %
                    (ulong)*(uint *)(local_78 + 0x20)) * 8); p_Var12 != local_78;
        p_Var12 = *(_func_void_Node_ptr **)p_Var12) {
      if ((*(uint *)(p_Var12 + 8) == (*(uint *)(local_78 + 0x24) ^ uVar13)) &&
         (uVar13 == *(uint *)(p_Var12 + 0xc))) {
        if (p_Var12 == local_78) {
          bVar2 = false;
        }
        else {
          uVar9 = QKeySequence::operator[]((uint)local_48);
          iVar6 = QKeySequence::operator[]((uint)local_48);
          iVar7 = QKeySequence::operator[]((uint)local_48);
          iVar8 = QKeySequence::operator[]((uint)local_48);
          QKeySequence::QKeySequence
                    (local_80,uVar9 & ((uVar5 | 0xfe000000) ^ 0x1ffffff),iVar6,iVar7,iVar8);
          QKeySequence::operator=(local_48,local_80);
          bVar2 = true;
          QKeySequence::~QKeySequence(local_80);
        }
        goto LAB_1007173d1;
      }
    }
    bVar2 = false;
  }
LAB_1007173d1:
  if (param_3 == 0) {
    bVar3 = false;
    QKeySequence::toString(&local_88,local_48,0);
    goto LAB_100717784;
  }
  QKeySequence::toString(&local_88,local_48,1);
  local_90 = (QArrayData *)QString::fromLatin1_helper("Ctrl",4);
  if (param_3 == 2) {
    QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,0x1dd350b);
  }
  else {
    QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,0x1dd3507);
  }
  pQVar11 = (QString *)QString::replace(&local_88,&local_90,&local_98,1);
  QString::operator=(&local_88,pQVar11);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007174c8;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007174c8:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007174fe;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1007174fe:
  local_a0 = (QArrayData *)QString::fromLatin1_helper("Meta",4);
  QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,0x1dd3502);
  pQVar11 = (QString *)QString::replace(&local_88,&local_a0,&local_a8,1);
  QString::operator=(&local_88,pQVar11);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100717596;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100717596:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007175cc;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1007175cc:
  local_b0 = (QArrayData *)QString::fromLatin1_helper("Alt",3);
  QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,0x1dd350f);
  pQVar11 = (QString *)QString::replace(&local_88,&local_b0,&local_b8,1);
  QString::operator=(&local_88,pQVar11);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100717664;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100717664:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071769a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10071769a:
  local_c0 = (QArrayData *)QString::fromLatin1_helper("Shift",5);
  QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,0x1dd3519);
  pQVar11 = (QString *)QString::replace(&local_88,&local_c0,&local_c8,1);
  QString::operator=(&local_88,pQVar11);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100717732;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100717732:
  if (*(int *)local_c0 == -1) {
LAB_10071775c:
    bVar3 = true;
  }
  else {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071775c;
    }
    bVar3 = true;
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100717784:
  iVar6 = 0x1eeaa68;
LAB_1007177b0:
  do {
    local_d0 = (QArrayData *)QString::fromAscii_helper("+",1);
    cVar4 = QString::endsWith(&local_88,&local_d0,1);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10071780d;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_10071780d:
    if (cVar4 == '\0') break;
    QString::left((int)&local_d8);
    QString::operator=(&local_88,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007177b0;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
  } while( true );
  if (bVar2) {
    if (bVar3) {
      if (*(int *)(local_88.field0_0x0 + 4) == 0) {
        iVar6 = 0x1e41978;
      }
      QString::fromUtf8_helper((char *)&local_40,iVar6);
      pQVar11 = (QString *)QString::append(&local_88);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100717935;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100717935:
      QString::operator=(&local_88,pQVar11);
    }
    if ((*(int *)(local_78 + 0x14) != 0) && (*(uint *)(local_78 + 0x20) != 0)) {
      for (p_Var12 = *(_func_void_Node_ptr **)
                      (*(long *)(local_78 + 8) +
                      ((ulong)(*(uint *)(local_78 + 0x24) ^ uVar13) %
                      (ulong)*(uint *)(local_78 + 0x20)) * 8); p_Var12 != local_78;
          p_Var12 = *(_func_void_Node_ptr **)p_Var12) {
        if ((*(uint *)(p_Var12 + 8) == (*(uint *)(local_78 + 0x24) ^ uVar13)) &&
           (uVar13 == *(uint *)(p_Var12 + 0xc))) {
          if (p_Var12 != local_78) {
            local_e0 = *(QArrayData **)(p_Var12 + 0x10);
            if (1 < *(int *)local_e0 + 1U) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + 1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
            }
            goto LAB_1007179b3;
          }
          break;
        }
      }
    }
    local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
LAB_1007179b3:
    pQVar11 = (QString *)QString::append(&local_88);
    QString::operator=(&local_88,pQVar11);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100717a05;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
  }
LAB_100717a05:
  *(QTypedArrayData<unsigned_short> **)param_1 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_31 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100717a55;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100717a55:
  if (*(int *)(local_78 + 0x10) != -1) {
    if (*(int *)(local_78 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_78 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100717a83;
    }
    QHashData::free_helper(local_78);
  }
LAB_100717a83:
  QKeySequence::~QKeySequence(local_48);
  return param_1;
}

