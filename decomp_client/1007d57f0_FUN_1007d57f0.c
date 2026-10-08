
undefined1 FUN_1007d57f0(QIODevice *param_1,QString *param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  QXmlStreamAttribute *this;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  QString local_f8 [2];
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0 [2];
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8 [2];
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  long *local_80;
  int local_78;
  undefined4 uStack_74;
  QXmlStreamReader local_70 [8];
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50 [2];
  QString local_40;
  undefined1 local_31;
  
  cVar2 = (**(code **)(*(long *)param_1 + 0x68))(param_1,0x11);
  puVar7 = PTR_shared_null_1021e1288;
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"MAC KIS: Cannot open config file");
    return 0;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QXmlStreamReader::QXmlStreamReader(local_70,param_1);
LAB_1007d5860:
  do {
    do {
      do {
        cVar2 = QXmlStreamReader::atEnd();
        if ((cVar2 != '\0') || (iVar3 = QXmlStreamReader::error(), iVar3 != 0)) goto LAB_1007d5dcc;
        iVar3 = QXmlStreamReader::readNext();
      } while (iVar3 != 4);
      QXmlStreamReader::name();
      if (local_80 == (long *)0x0) {
        puVar5 = puVar7 + *(long *)(puVar7 + 0x10);
      }
      else {
        puVar5 = (undefined *)(*local_80 + *(long *)(*local_80 + 0x10) + (long)local_78 * 2);
      }
      iVar3 = QString::compare_helper(puVar5,uStack_74,"tSTRING",0xffffffff,1);
    } while (iVar3 != 0);
    QXmlStreamReader::attributes();
    local_90 = (QArrayData *)QString::fromAscii_helper("name",4);
    QXmlStreamAttributes::value(local_50);
    if (local_50[0].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
      bVar8 = false;
    }
    else {
      bVar8 = *(undefined **)local_50[0].field0_0x0 != puVar7;
    }
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d595b;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1007d595b:
    if (bVar8) {
      local_b0 = (QArrayData *)QString::fromAscii_helper("name",4);
      QXmlStreamAttributes::value(local_a8);
      QStringRef::toString();
      iVar3 = QString::compare_helper
                        (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),
                         "ProductType",0xffffffff,1);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d5a05;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1007d5a05:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d5a3b;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1007d5a3b:
      if (iVar3 == 0) {
        QXmlStreamReader::readElementText(&local_b8,local_70,0);
        QString::operator=(&local_58,&local_b8);
        if (*(int *)local_b8.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            local_31 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d5a97;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
        }
      }
LAB_1007d5a97:
      local_d8 = (QArrayData *)QString::fromAscii_helper("name",4);
      QXmlStreamAttributes::value(local_d0);
      QStringRef::toString();
      iVar3 = QString::compare_helper
                        (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4),
                         "ProductVersion",0xffffffff,1);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d5b39;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1007d5b39:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d5b6f;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1007d5b6f:
      if (iVar3 == 0) {
        QXmlStreamReader::readElementText(&local_e0,local_70,0);
        QString::operator=(&local_60,&local_e0);
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d5bcb;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
      }
LAB_1007d5bcb:
      local_100 = (QArrayData *)QString::fromAscii_helper("name",4);
      QXmlStreamAttributes::value(local_f8);
      QStringRef::toString();
      iVar3 = QString::compare_helper
                        (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),
                         "ProductVersionPrl",0xffffffff,1);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d5c6d;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_1007d5c6d:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d5ca3;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_1007d5ca3:
      if (iVar3 == 0) {
        QXmlStreamReader::readElementText(&local_108,local_70,0);
        QString::operator=(&local_68,&local_108);
        if (*(int *)local_108.field0_0x0 != -1) {
          if (*(int *)local_108.field0_0x0 != 0) {
            LOCK();
            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
            local_31 = *(int *)local_108.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d5cff;
          }
          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
        }
      }
    }
LAB_1007d5cff:
    pQVar1 = local_88;
  } while (*(int *)local_88 == -1);
  if (*(int *)local_88 != 0) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + -1;
    local_31 = *(int *)local_88 != 0;
    UNLOCK();
    if ((bool)local_31) goto LAB_1007d5860;
  }
  lVar6 = (long)*(int *)(local_88 + 4) * 0x50;
  if (lVar6 != 0) {
    this = (QXmlStreamAttribute *)(local_88 + *(long *)(local_88 + 0x10));
    do {
      QXmlStreamAttribute::~QXmlStreamAttribute(this);
      this = this + 0x50;
      lVar6 = lVar6 + -0x50;
    } while (lVar6 != 0);
  }
  QArrayData::deallocate(pQVar1,0x50,8);
  puVar7 = PTR_shared_null_1021e1288;
  goto LAB_1007d5860;
LAB_1007d5dcc:
  if ((*(int *)(local_58.field0_0x0 + 4) == 0) || (*(int *)(local_60.field0_0x0 + 4) == 0)) {
    uVar4 = 0;
    FUN_100df99c0("","prl_client_app",0,"MAC KIS: ProductType or ProductVersion not found");
  }
  else {
    local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Generic",7)
    ;
    if (*(int *)(local_68.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_40,0x1de8568);
      QString::operator=(&local_110,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d5e66;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
LAB_1007d5e66:
    local_130 = (QArrayData *)QString::fromAscii_helper("Type: %1; Version: %2; Edition: %3",0x22);
    QString::arg(&local_128,&local_130,&local_58,0,0x20);
    QString::arg(&local_120,&local_128,&local_60,0,0x20);
    QString::arg(&local_118,&local_120,&local_110,0,0x20);
    QString::operator=(param_2,&local_118);
    if (*(int *)local_118.field0_0x0 != -1) {
      if (*(int *)local_118.field0_0x0 != 0) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
        local_31 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d5f23;
      }
      QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
    }
LAB_1007d5f23:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d5f59;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_1007d5f59:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d5f8f;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1007d5f8f:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d5fc5;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_1007d5fc5:
    uVar4 = 1;
    if (*(int *)local_110.field0_0x0 != -1) {
      if (*(int *)local_110.field0_0x0 != 0) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
        local_31 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d601f;
      }
      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
    }
  }
LAB_1007d601f:
  QXmlStreamReader::~QXmlStreamReader(local_70);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d6058;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007d6058:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d6088;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1007d6088:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return uVar4;
}

