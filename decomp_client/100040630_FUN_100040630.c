
QString * FUN_100040630(QString *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  QArrayData *local_148;
  QString local_140;
  QString local_138;
  QArrayData *local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QArrayData *local_108;
  QString local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QTypedArrayData<unsigned_short> *local_80;
  undefined1 local_78 [32];
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_4;
  if (1 < *(int *)local_b0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
    local_31 = *(int *)local_b0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_a8,0x1db674c);
  QString::append(&local_b0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000406d8;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1000406d8:
  QString::remove(&local_b0,0x3a,1);
  QString::replace(&local_b0,0x2f,0x5c,1);
  uVar4 = QDir::separator();
  local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(uint *)local_b8.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_b8.field0_0x0 = *(uint *)local_b8.field0_0x0 + 1;
    local_31 = *(uint *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  uVar6 = *(uint *)(local_b8.field0_0x0 + 4);
  if ((1 < *(uint *)local_b8.field0_0x0) ||
     ((*(uint *)(local_b8.field0_0x0 + 8) & 0x7fffffff) < uVar6 + 2)) {
    QString::reallocData((uint)&local_b8,SUB41(uVar6 + 2,0));
    uVar6 = *(uint *)(local_b8.field0_0x0 + 4);
  }
  *(uint *)(local_b8.field0_0x0 + 4) = uVar6 + 1;
  *(undefined2 *)
   (local_b8.field0_0x0 + (long)(int)uVar6 * 2 + *(long *)(local_b8.field0_0x0 + 0x10)) = uVar4;
  *(undefined2 *)
   (local_b8.field0_0x0 +
   (long)(int)*(uint *)(local_b8.field0_0x0 + 4) * 2 + *(long *)(local_b8.field0_0x0 + 0x10)) = 0;
  param_1->field0_0x0 = local_b8.field0_0x0;
  if (1 < *(uint *)local_b8.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_b8.field0_0x0 = *(uint *)local_b8.field0_0x0 + 1;
    local_31 = *(uint *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000407ec;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1000407ec:
  cVar3 = QFile::exists(param_1);
  puVar2 = PTR_shared_null_1021e1288;
  if (cVar3 != '\0') {
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_58.field0_0x0 = param_1->field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1db6890);
    QString::append(&local_58);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100040874;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100040874:
    cVar3 = QFile::exists(&local_58);
    if (cVar3 != '\0') {
      local_80 = local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      FUN_100b56ca0(local_78,&local_80);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000408db;
        }
        QArrayData::deallocate((QArrayData *)local_80,2,8);
      }
LAB_1000408db:
      local_90 = (QArrayData *)QString::fromAscii_helper("System",6);
      local_98 = (QArrayData *)QString::fromAscii_helper("APP Path",8);
      local_a0 = (QArrayData *)puVar2;
      FUN_100b57250(&local_88,local_78,&local_90,&local_98,&local_a0);
      QString::operator=(&local_c0,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100040974;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_100040974:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000409aa;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1000409aa:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000409e0;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1000409e0:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100040a16;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100040a16:
      FUN_100b57060(local_78);
    }
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100040a4f;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100040a4f:
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
    local_d0 = (QArrayData *)QString::fromAscii_helper("x86",3);
    iVar5 = QString::indexOf(&local_c0,&local_d0,0,0);
    bVar7 = true;
    if (iVar5 == -1) {
      local_d8 = (QArrayData *)QString::fromAscii_helper("SysWOW64",8);
      iVar5 = QString::indexOf(&local_c0,&local_d8,0,0);
      bVar7 = iVar5 != -1;
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100040af9;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
    }
LAB_100040af9:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100040b2f;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100040b2f:
    puVar1 = param_4 + 1;
    if (bVar7) {
      local_e0 = (QArrayData *)QString::fromAscii_helper("x86",3);
      iVar5 = QString::indexOf(puVar1,&local_e0,0,0);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100040ba7;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100040ba7:
      if (iVar5 == -1) {
        QString::fromUtf8_helper((char *)&local_48,0x1db675e);
        QString::operator=(&local_c8,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100040d3e;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
      }
    }
    else {
      local_e8 = (QArrayData *)QString::fromAscii_helper("x86",3);
      iVar5 = QString::indexOf(puVar1,&local_e8,0,0);
      bVar7 = true;
      if (iVar5 == -1) {
        local_f0 = (QArrayData *)QString::fromAscii_helper("SysWOW64",8);
        iVar5 = QString::indexOf(puVar1,&local_f0,0,0);
        bVar7 = iVar5 != -1;
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100040cae;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
      }
LAB_100040cae:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100040ce4;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100040ce4:
      if (bVar7) {
        QString::fromUtf8_helper((char *)&local_40,0x1db6767);
        QString::operator=(&local_c8,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100040d3e;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
      }
    }
LAB_100040d3e:
    if (*(int *)(local_c8.field0_0x0 + 4) != 0) {
      local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_4;
      if (1 < *(int *)local_f8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
        local_31 = *(int *)local_f8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_f8);
      QString::operator=(&local_b0,&local_f8);
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100040dcd;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
LAB_100040dcd:
      QString::remove(&local_b0,0x3a,1);
      QString::replace(&local_b0,0x2f,0x5c,1);
      uVar4 = QDir::separator();
      local_108 = (QArrayData *)*param_3;
      if (1 < *(uint *)local_108 + 1) {
        LOCK();
        *(uint *)local_108 = *(uint *)local_108 + 1;
        local_31 = *(uint *)local_108 != 0;
        UNLOCK();
      }
      uVar6 = *(uint *)(local_108 + 4);
      if ((1 < *(uint *)local_108) || ((*(uint *)(local_108 + 8) & 0x7fffffff) < uVar6 + 2)) {
        QString::reallocData((uint)&local_108,SUB41(uVar6 + 2,0));
        uVar6 = *(uint *)(local_108 + 4);
      }
      *(uint *)(local_108 + 4) = uVar6 + 1;
      *(undefined2 *)(local_108 + (long)(int)uVar6 * 2 + *(long *)(local_108 + 0x10)) = uVar4;
      *(undefined2 *)
       (local_108 + (long)(int)*(uint *)(local_108 + 4) * 2 + *(long *)(local_108 + 0x10)) = 0;
      if (1 < *(uint *)local_108 + 1) {
        LOCK();
        *(uint *)local_108 = *(uint *)local_108 + 1;
        local_31 = *(uint *)local_108 != 0;
        UNLOCK();
      }
      local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_108;
      QString::append(&local_100);
      QString::operator=(param_1,&local_100);
      if (*(int *)local_100.field0_0x0 != -1) {
        if (*(int *)local_100.field0_0x0 != 0) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
          local_31 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100040ef8;
        }
        QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
      }
LAB_100040ef8:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100040f2e;
        }
        QArrayData::deallocate(local_108,2,8);
      }
    }
LAB_100040f2e:
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100040f64;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_100040f64:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100040f9a;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
  }
LAB_100040f9a:
  iVar5 = 1;
  while (cVar3 = QFile::exists(param_1), cVar3 != '\0') {
    local_120 = (QArrayData *)QString::fromAscii_helper(" [%1].app",9);
    QString::arg(&local_118,&local_120,iVar5,0,10,0x20);
    local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_4;
    if (1 < *(int *)local_110.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_110);
    QString::operator=(&local_b0,&local_110);
    if (*(int *)local_110.field0_0x0 != -1) {
      if (*(int *)local_110.field0_0x0 != 0) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
        local_31 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100041070;
      }
      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
    }
LAB_100041070:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000410a6;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_1000410a6:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000410df;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_1000410df:
    QString::remove(&local_b0,0x3a,1);
    QString::replace(&local_b0,0x2f,0x5c,1);
    uVar4 = QDir::separator();
    local_130 = (QArrayData *)*param_3;
    if (1 < *(uint *)local_130 + 1) {
      LOCK();
      *(uint *)local_130 = *(uint *)local_130 + 1;
      local_31 = *(uint *)local_130 != 0;
      UNLOCK();
    }
    uVar6 = *(uint *)(local_130 + 4);
    if ((1 < *(uint *)local_130) || ((*(uint *)(local_130 + 8) & 0x7fffffff) < uVar6 + 2)) {
      QString::reallocData((uint)&local_130,SUB41(uVar6 + 2,0));
      uVar6 = *(uint *)(local_130 + 4);
    }
    *(uint *)(local_130 + 4) = uVar6 + 1;
    *(undefined2 *)(local_130 + (long)(int)uVar6 * 2 + *(long *)(local_130 + 0x10)) = uVar4;
    *(undefined2 *)
     (local_130 + (long)(int)*(uint *)(local_130 + 4) * 2 + *(long *)(local_130 + 0x10)) = 0;
    if (1 < *(uint *)local_130 + 1) {
      LOCK();
      *(uint *)local_130 = *(uint *)local_130 + 1;
      local_31 = *(uint *)local_130 != 0;
      UNLOCK();
    }
    local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_130;
    QString::append(&local_128);
    QString::operator=(param_1,&local_128);
    if (*(int *)local_128.field0_0x0 != -1) {
      if (*(int *)local_128.field0_0x0 != 0) {
        LOCK();
        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
        local_31 = *(int *)local_128.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004120b;
      }
      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
    }
LAB_10004120b:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100040fb0;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_100040fb0:
    iVar5 = iVar5 + 1;
  }
  local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_138,&local_140);
  QDir::mkpath(&local_138);
  QDir::~QDir((QDir *)&local_138);
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_31 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000412cc;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_1000412cc:
  FUN_100041ee0(param_2,param_1,param_4,0);
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  cVar3 = QString::startsWith(param_1,&local_148,1);
  if (cVar3 != '\0') {
    uVar6 = QFile::permissions(param_1);
    FUN_100052300(param_1,uVar6 | 0x66);
  }
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004135c;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10004135c:
  FUN_100045900(param_1);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_b0.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
  return param_1;
}

