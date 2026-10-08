
void FUN_1006efe40(long param_1)

{
  QString *pQVar1;
  undefined8 uVar2;
  Data *pDVar3;
  QMapNodeBase *pQVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  QArrayData *pQVar11;
  char *pcVar12;
  QString *this;
  Data *pDVar13;
  QArrayData *local_138;
  QString local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  Data *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QMapNodeBase *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QRegExp local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = (QString *)(param_1 + 0x80);
  pQVar1 = (QString *)(param_1 + 0x78);
  cVar5 = operator==(this,pQVar1);
  if (cVar5 != '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,
                  "Purchase notification for [%s] has been already sent, skipping!",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    uVar10 = 1;
    goto LAB_1006f0ae4;
  }
  CAbstractWebView::toHtml();
  if (*(int *)(local_48 + 4) != 0) {
    local_70 = (QArrayData *)QString::fromAscii_helper("PURCHASEID",10);
    local_78 = (QArrayData *)QString::fromAscii_helper("ORDERTOTAL",10);
    local_80 = (QArrayData *)QString::fromAscii_helper("LICENSEKEY",10);
    local_88 = (QArrayData *)QString::fromAscii_helper("CURRENCY",8);
    local_b8 = (QArrayData *)QString::fromAscii_helper("<!--\\s*(%1|%2|%3|%4)\\s*=.*\\s*-->",0x20);
    QString::arg(&local_b0,&local_b8,&local_70,0,0x20);
    QString::arg(&local_a8,&local_b0,&local_78,0,0x20);
    QString::arg(&local_a0,&local_a8,&local_80,0,0x20);
    QString::arg(&local_98,&local_a0,&local_88,0,0x20);
    QRegExp::QRegExp(local_90,&local_98,1,0);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f0029;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1006f0029:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f005f;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1006f005f:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f0095;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1006f0095:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f00cb;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1006f00cb:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f0101;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1006f0101:
    QRegExp::setCaseSensitivity(local_90,0);
    QRegExp::setMinimal(SUB81(local_90,0));
    local_c0 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    iVar7 = 0;
LAB_1006f0160:
    do {
      iVar6 = QRegExp::indexIn(local_90,&local_48,iVar7,0);
      if (iVar6 == -1) goto LAB_1006f0540;
      QRegExp::cap((int)&local_c8);
      QRegExp::cap((int)&local_d0);
      local_e0 = (QArrayData *)QString::fromAscii_helper("=",1);
      QString::split(&local_d8,&local_c8,&local_e0,0,1);
      QString::operator=(&local_c8,(QString *)(local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x18));
      pDVar3 = local_d8;
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f0293;
        }
        iVar7 = *(int *)(local_d8 + 0xc);
        if (iVar7 != *(int *)(local_d8 + 8)) {
          lVar9 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar7 * -8;
          pDVar13 = local_d8 + (long)iVar7 * 8 + 8;
          do {
            pQVar11 = *(QArrayData **)pDVar13;
            if (*(int *)pQVar11 == 0) {
LAB_1006f0260:
              QArrayData::deallocate(pQVar11,2,8);
            }
            else if (*(int *)pQVar11 != -1) {
              LOCK();
              *(int *)pQVar11 = *(int *)pQVar11 + -1;
              local_31 = *(int *)pQVar11 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar11 = *(QArrayData **)pDVar13;
                goto LAB_1006f0260;
              }
            }
            pDVar13 = pDVar13 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        QListData::dispose(pDVar3);
      }
LAB_1006f0293:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f02c9;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1006f02c9:
      QString::left((int)&local_f0);
      QString::simplified();
      QString::operator=(&local_c8,&local_e8);
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_31 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f033f;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
LAB_1006f033f:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f0378;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_1006f0378:
      FUN_1006f3070(&local_c0,&local_d0,&local_c8);
      iVar7 = QRegExp::matchedLength();
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f03cf;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1006f03cf:
      iVar7 = iVar7 + iVar6;
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f0160;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
    } while( true );
  }
  FUN_100df99c0("","prl_client_app",0,"Failed to parse purchase result!");
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10073fe60(*(undefined8 *)(param_1 + 0x18),0,&local_50,&local_58,&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f04a0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006f04a0:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f04d0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006f04d0:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0500;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006f0500:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0530;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006f0530:
  QString::operator=(this,pQVar1);
  goto LAB_1006f0abe;
LAB_1006f0540:
  puVar8 = (undefined8 *)FUN_1006f3180(&local_c0,&local_70);
  local_f8 = (QArrayData *)*puVar8;
  if (1 < *(int *)local_f8 + 1U) {
    LOCK();
    *(int *)local_f8 = *(int *)local_f8 + 1;
    local_31 = *(int *)local_f8 != 0;
    UNLOCK();
  }
  puVar8 = (undefined8 *)FUN_1006f3180(&local_c0,&local_80);
  local_100 = (QArrayData *)*puVar8;
  if (1 < *(int *)local_100 + 1U) {
    LOCK();
    *(int *)local_100 = *(int *)local_100 + 1;
    local_31 = *(int *)local_100 != 0;
    UNLOCK();
  }
  puVar8 = (undefined8 *)FUN_1006f3180(&local_c0,&local_78);
  local_108 = (QArrayData *)*puVar8;
  if (1 < *(int *)local_108 + 1U) {
    LOCK();
    *(int *)local_108 = *(int *)local_108 + 1;
    local_31 = *(int *)local_108 != 0;
    UNLOCK();
  }
  puVar8 = (undefined8 *)FUN_1006f3180(&local_c0,&local_88);
  local_110 = (QArrayData *)*puVar8;
  if (1 < *(int *)local_110 + 1U) {
    LOCK();
    *(int *)local_110 = *(int *)local_110 + 1;
    local_31 = *(int *)local_110 != 0;
    UNLOCK();
  }
  iVar7 = *(int *)(local_100 + 4);
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    pQVar11 = local_118;
    lVar9 = *(long *)(local_118 + 0x10);
    iVar6 = *(int *)(local_100 + 4);
    QString::toUtf8();
    if (iVar6 == 0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = "available";
    }
    FUN_100df99c0("","prl_client_app",2,
                  "Purchase completed. OrderRefId=[%s] LicenseKey=[%s] OrderTotal=[%s]",
                  pQVar11 + lVar9,pcVar12,local_120 + *(long *)(local_120 + 0x10));
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f0761;
      }
      QArrayData::deallocate(local_120,1,8);
    }
LAB_1006f0761:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f079a;
      }
      QArrayData::deallocate(local_118,1,8);
    }
  }
LAB_1006f079a:
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_128 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100df0d70(&local_138,&local_110);
  local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_138;
  if (1 < *(int *)local_138 + 1U) {
    LOCK();
    *(int *)local_138 = *(int *)local_138 + 1;
    local_31 = *(int *)local_138 != 0;
    UNLOCK();
  }
  QString::append(&local_130);
  FUN_10073fe60(uVar2,iVar7 != 0,&local_f8,&local_100,&local_128,&local_130);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0854;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_1006f0854:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f088a;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1006f088a:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f08c0;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1006f08c0:
  QString::operator=(this,pQVar1);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0909;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1006f0909:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f093f;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1006f093f:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0975;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1006f0975:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f09ab;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1006f09ab:
  pQVar4 = local_c0;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f09f2;
    }
    if (*(long *)(local_c0 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_1006f09f2:
  QRegExp::~QRegExp(local_90);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0a2e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006f0a2e:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0a5e;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006f0a5e:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0a8e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006f0a8e:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f0abe;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006f0abe:
  if (*(int *)local_48 == -1) {
    return;
  }
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return;
    }
    local_31 = 0;
  }
  uVar10 = 2;
  local_40 = local_48;
LAB_1006f0ae4:
  QArrayData::deallocate(local_40,uVar10,8);
  return;
}

