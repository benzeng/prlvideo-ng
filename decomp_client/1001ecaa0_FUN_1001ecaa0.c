
QString * FUN_1001ecaa0(QString *param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  QMapNodeBase *pQVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QVariant local_168;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QVariant local_138;
  QArrayData *local_128;
  QArrayData *local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QString local_90;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QVariant local_50;
  QString local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  lVar8 = *(long *)(param_2 + 0x10);
  pQVar5 = *(QMapNodeBase **)(lVar8 + 0x18);
  if (*(int *)pQVar5 == 0) {
    pQVar5 = (QMapNodeBase *)QMapDataBase::createData();
    lVar8 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10);
    local_38 = pQVar5;
    if (lVar8 != 0) {
      puVar6 = (ulong *)FUN_10008d330(lVar8,pQVar5);
      *(ulong **)(pQVar5 + 0x10) = puVar6;
      *puVar6 = *puVar6 & 3 | (ulong)(pQVar5 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    local_38 = pQVar5;
    if (*(int *)pQVar5 != -1) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      pQVar5 = *(QMapNodeBase **)(lVar8 + 0x18);
      local_38 = pQVar5;
    }
  }
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)QString::fromAscii_helper("bytesDownloaded",0xf);
  FUN_1001eeaf0(&local_50,&local_38,&local_58);
  uVar7 = QVariant::toULongLong((bool *)&local_50);
  FUN_100def650(&local_40,uVar7,1);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ecba8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001ecba8:
  local_78 = (QArrayData *)QString::fromAscii_helper("bytesTotal",10);
  FUN_1001eeaf0(&local_70,&local_38,&local_78);
  uVar7 = QVariant::toULongLong((bool *)&local_70);
  FUN_100def650(&local_60,uVar7,1);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ecc23;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001ecc23:
  QString::right((int)&local_80);
  QString::right((int)&local_88);
  cVar2 = operator==(&local_80,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ecc86;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1001ecc86:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001eccb6;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1001eccb6:
  if (cVar2 != '\0') {
    local_a8 = (QArrayData *)QString::fromAscii_helper("bytesDownloaded",0xf);
    FUN_1001eeaf0(&local_a0,&local_38,&local_a8);
    uVar7 = QVariant::toULongLong((bool *)&local_a0);
    FUN_100def650(&local_90,uVar7,0);
    QString::operator=(&local_40,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_29 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ecd52;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_1001ecd52:
    QVariant::~QVariant(&local_a0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ecd94;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
  }
LAB_1001ecd94:
  iVar3 = *(int *)(*(long *)(param_2 + 0x10) + 0x10);
  if ((iVar3 == 0) || (iVar3 == 2)) {
    local_170 = (QArrayData *)QString::fromAscii_helper("bytesTotal",10);
    FUN_1001eeaf0(&local_168,&local_38,&local_170);
    lVar8 = QVariant::toULongLong((bool *)&local_168);
    QVariant::~QVariant(&local_168);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_29 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ece2a;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_1001ece2a:
    if (lVar8 != 0) {
      QMetaObject::tr((char *)&local_178,PTR_staticMetaObject_1021e1520,0x1dda8a7);
      QString::arg(&local_188,&local_178,&local_40,0,0x20);
      QString::arg(&local_180,&local_188,&local_60,0,0x20);
      QString::operator=(param_1,&local_180);
      if (*(int *)local_180.field0_0x0 != -1) {
        if (*(int *)local_180.field0_0x0 != 0) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
          local_29 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001eced8;
        }
        QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
      }
LAB_1001eced8:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_29 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ecf0e;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_1001ecf0e:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_29 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed509;
        }
        QArrayData::deallocate(local_178,2,8);
      }
    }
  }
  else if (iVar3 == 1) {
    QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,0x1dda878);
    QString::arg(&local_c0,&local_b0,&local_40,0,0x20);
    QString::arg(&local_b8,&local_c0,&local_60,0,0x20);
    QString::operator=(param_1,&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_29 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ecfff;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_1001ecfff:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_29 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ed035;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1001ed035:
    local_d8 = (QArrayData *)QString::fromAscii_helper("rate",4);
    FUN_1001eeaf0(&local_d0,&local_38,&local_d8);
    iVar3 = QVariant::toUInt((bool *)&local_d0);
    QVariant::~QVariant(&local_d0);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ed0b6;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1001ed0b6:
    if (iVar3 == 0) {
      bVar1 = false;
    }
    else {
      local_f8 = (QArrayData *)QString::fromAscii_helper("rate",4);
      FUN_1001eeaf0(&local_f0,&local_38,&local_f8);
      uVar4 = QVariant::toUInt((bool *)&local_f0);
      FUN_100def650(&local_e0,uVar4,1);
      QVariant::~QVariant(&local_f0);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_29 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed150;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1001ed150:
      QMetaObject::tr((char *)&local_108,PTR_staticMetaObject_1021e1520,0x1dda881);
      QString::arg(&local_100,&local_108,&local_e0,0,0x20);
      QString::append(param_1);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_29 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed1d9;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_1001ed1d9:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_29 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed20f;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1001ed20f:
      bVar1 = true;
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_29 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed24d;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
    }
LAB_1001ed24d:
    local_120 = (QArrayData *)QString::fromAscii_helper("eta",3);
    FUN_1001eeaf0(&local_118,&local_38,&local_120);
    iVar3 = QVariant::toUInt((bool *)&local_118);
    QVariant::~QVariant(&local_118);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_29 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ed2ce;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_1001ed2ce:
    if (iVar3 == 0) {
      if (!bVar1) {
        QMetaObject::tr((char *)&local_158,PTR_staticMetaObject_1021e1520,0x1dda89b);
        QString::append(param_1);
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_29 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1001ed4d3;
          }
          QArrayData::deallocate(local_158,2,8);
        }
      }
    }
    else {
      local_140 = (QArrayData *)QString::fromAscii_helper("eta",3);
      FUN_1001eeaf0(&local_138,&local_38,&local_140);
      uVar4 = QVariant::toUInt((bool *)&local_138);
      FUN_100defbb0(&local_128,uVar4,1);
      QVariant::~QVariant(&local_138);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_29 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed368;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1001ed368:
      QMetaObject::tr((char *)&local_150,PTR_staticMetaObject_1021e1520,0x1dda88b);
      QString::arg(&local_148,&local_150,&local_128,0,0x20);
      QString::append(param_1);
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_29 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed3f1;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_1001ed3f1:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_29 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed427;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1001ed427:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_29 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001ed4d3;
        }
        QArrayData::deallocate(local_128,2,8);
      }
    }
LAB_1001ed4d3:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ed509;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
  }
LAB_1001ed509:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ed539;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001ed539:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ed569;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001ed569:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
  return param_1;
}

