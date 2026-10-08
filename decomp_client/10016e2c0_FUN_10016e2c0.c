
void FUN_10016e2c0(long param_1,QString *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  CSdkRequest *pCVar9;
  void *pvVar10;
  long lVar11;
  QArrayData *pQVar12;
  QTypedArrayData<unsigned_short> *local_170;
  QTypedArrayData<unsigned_short> *local_168;
  QTypedArrayData<unsigned_short> *local_160;
  QTypedArrayData<unsigned_short> *local_158;
  QTypedArrayData<unsigned_short> *pQStack_150;
  QTypedArrayData<unsigned_short> *local_148;
  QVariant local_140;
  QTypedArrayData<unsigned_short> *local_130;
  QTypedArrayData<unsigned_short> *local_128;
  QTypedArrayData<unsigned_short> *local_120;
  QTypedArrayData<unsigned_short> *local_118;
  QTypedArrayData<unsigned_short> *local_110;
  QTypedArrayData<unsigned_short> *local_108;
  QTypedArrayData<unsigned_short> *local_100;
  QTypedArrayData<unsigned_short> *local_f8;
  QTypedArrayData<unsigned_short> *local_f0;
  QTypedArrayData<unsigned_short> *local_e8;
  QTypedArrayData<unsigned_short> *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  bool local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  char local_79;
  undefined8 local_78;
  QTypedArrayData<unsigned_short> *local_70;
  QTypedArrayData<unsigned_short> *local_68;
  QTypedArrayData<unsigned_short> *pQStack_60;
  QTypedArrayData<unsigned_short> *local_58;
  QVariant local_50;
  QTypedArrayData<unsigned_short> *local_40;
  undefined1 local_31;
  
  local_78 = param_2[3].field0_0x0;
  local_70 = param_2[4].field0_0x0;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_31 = *(int *)local_70 != 0;
    UNLOCK();
  }
  local_68 = param_2[5].field0_0x0;
  pQStack_60 = param_2[6].field0_0x0;
  local_58 = param_2[7].field0_0x0;
  if (pQStack_60 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQStack_60 = *(int *)pQStack_60 + 1;
    local_31 = *(int *)pQStack_60 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_50,(QVariant *)(param_2 + 8));
  if ((char)local_78 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Can\'t get request info.");
    goto LAB_10016ed24;
  }
  local_79 = '\0';
  iVar5 = CSdkRequest::getResultCode((bool *)param_2);
  if (local_79 == '\0') {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: couldn\'t get job return code. Return code: [%.8X]",iVar5);
    goto LAB_10016ed24;
  }
  iVar2 = local_78._4_4_;
  if (local_78._4_4_ != 0x30da8) {
    QString::toUtf8();
    if ((1 < *(uint *)local_88) || (*(long *)(local_88 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_88,*(uint *)(local_88 + 4) + 1,*(uint *)(local_88 + 8) >> 0x1f)
      ;
    }
    pQVar12 = local_88 + *(long *)(local_88 + 0x10);
    uVar7 = FUN_100dd9170(iVar2);
    uVar8 = FUN_100dddcf0(iVar5);
    FUN_100df99c0("","prl_client_app",0,"%s: received result for [%s]. RC = [%s]",pQVar12,uVar7,
                  uVar8);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016e42a;
      }
      QArrayData::deallocate(local_88,1,8);
    }
  }
LAB_10016e42a:
  if (iVar5 < 0) {
    bVar4 = FUN_100d80630(1);
    if (((iVar5 == -0x7ffeef88 & bVar4) == 1) && (cVar3 = FUN_100627020(), cVar3 != '\0')) {
      if (DAT_102310958 == (void *)0x0) {
        pvVar10 = operator_new(0x18);
        FUN_100612710(pvVar10);
        DAT_102271170 = 1;
        DAT_102310958 = pvVar10;
      }
      pvVar10 = DAT_102310958;
      uVar7 = 0;
      if ((*(long *)(param_1 + 0xa8) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0xb0);
      }
      cVar3 = FUN_10061b4d0(uVar7,0x20);
      local_90 = *(QArrayData **)(param_1 + 0x70);
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      local_c8 = (undefined1  [16])0x0;
      local_b0 = 0;
      local_b8 = 0;
      local_a0 = 0x80000000;
      local_a8.field7 = 0;
      local_98 = 1;
      FUN_10060b2b0(pvVar10,(cVar3 == '\0') * '\x02' + '\x06',&local_90,local_c8,0);
      QVariant::~QVariant((QVariant *)&local_a8);
      if ((QMetaObject *)local_c8._0_8_ != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_c8._0_8_ = *(int *)local_c8._0_8_ + -1;
        local_31 = *(int *)local_c8._0_8_ != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((QMetaObject *)local_c8._0_8_ != (QMetaObject *)0x0)) {
          operator_delete((void *)local_c8._0_8_);
        }
      }
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016e999;
        }
        QArrayData::deallocate(local_90,2,8);
      }
    }
    else {
      cVar3 = FUN_1003038c0(param_2);
      if (cVar3 == '\0') {
        uVar6 = CSdkRequest::getResultCode((bool *)param_2);
        uVar7 = FUN_100dddcf0(uVar6);
        FUN_100df99c0("","prl_client_app",0,"Error message %s was skipped",uVar7);
      }
      else {
        pCVar9 = (CSdkRequest *)CMessageManager::instance();
        local_d8._8_8_ = local_70;
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        CMessageManager::showMessageBoxForRequest(pCVar9,param_2,(CSlotInfo *)(local_d8 + 8));
        if (*(int *)local_d8._8_8_ != -1) {
          if (*(int *)local_d8._8_8_ != 0) {
            LOCK();
            *(int *)local_d8._8_8_ = *(int *)local_d8._8_8_ + -1;
            local_31 = *(int *)local_d8._8_8_ != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016e999;
          }
          QArrayData::deallocate((QArrayData *)local_d8._8_8_,2,8);
        }
      }
    }
LAB_10016e999:
    FUN_100162d30(param_1,param_2);
    goto LAB_10016ec08;
  }
  if (iVar5 != 0) {
    cVar3 = FUN_1003038c0(param_2);
    if (cVar3 == '\0') {
      uVar6 = CSdkRequest::getResultCode((bool *)param_2);
      uVar7 = FUN_100dddcf0(uVar6);
      FUN_100df99c0("","prl_client_app",0,"Error message %s was skipped",uVar7);
    }
    else {
      pCVar9 = (CSdkRequest *)CMessageManager::instance();
      local_d8._0_8_ = PTR_shared_null_1021e1288;
      CMessageManager::showMessageBoxForRequest(pCVar9,param_2,(CSlotInfo *)local_d8);
      if (*(int *)local_d8._0_8_ != -1) {
        if (*(int *)local_d8._0_8_ != 0) {
          LOCK();
          *(int *)local_d8._0_8_ = *(int *)local_d8._0_8_ + -1;
          local_31 = *(int *)local_d8._0_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016e758;
        }
        QArrayData::deallocate((QArrayData *)local_d8._0_8_,2,8);
      }
    }
  }
LAB_10016e758:
  pQVar1 = param_2[2].field0_0x0;
  if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
    _PrlHandle_AddRef(pQVar1);
  }
  if (iVar2 < 0x7ea) {
    if (iVar2 < 0x3f3) {
      if (iVar2 != 0x3e9) {
        if (iVar2 != 0x3ec) goto switchD_10016e9cc_caseD_7f8;
        if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
          _PrlHandle_AddRef(pQVar1);
        }
        local_100 = local_70;
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        local_40 = pQVar1;
        if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
          _PrlHandle_AddRef(pQVar1);
        }
        FUN_100166730(param_1,&local_40,&local_100);
        if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
          _PrlHandle_Free(pQVar1);
        }
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10016e832;
          }
          QArrayData::deallocate((QArrayData *)local_100,2,8);
        }
LAB_10016e832:
        if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
          _PrlHandle_Free(pQVar1);
          goto LAB_10016ec00;
        }
        goto LAB_10016ec08;
      }
    }
    else {
      if (iVar2 == 0x3f3) {
        local_128 = pQVar1;
        if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
          _PrlHandle_AddRef(pQVar1);
        }
        FUN_100167520();
        if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
          _PrlHandle_Free(pQVar1);
          goto LAB_10016ec00;
        }
        goto LAB_10016ec08;
      }
      if (iVar2 != 0x40c) goto switchD_10016e9cc_caseD_7f8;
    }
    local_118 = pQVar1;
    if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
      _PrlHandle_AddRef(pQVar1);
    }
    local_120 = local_70;
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
    FUN_10016f530(param_1,&local_118,&local_120);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016ea98;
      }
      QArrayData::deallocate((QArrayData *)local_120,2,8);
    }
LAB_10016ea98:
    if (pQVar1 == (QTypedArrayData<unsigned_short> *)0x0) goto LAB_10016ec08;
    _PrlHandle_Free(pQVar1);
LAB_10016ec00:
    _PrlHandle_Free(pQVar1);
  }
  else if (iVar2 < 0x820) {
    if (iVar2 < 0x7f6) {
      if (iVar2 == 0x7ea) {
        local_108 = local_70;
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        lVar11 = FUN_10015cb20(param_1,&local_108);
        if (lVar11 == 0) {
          FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
        }
        else {
          cVar3 = FUN_10018da40(lVar11);
          if (cVar3 != '\0') {
            uVar7 = FUN_10018c2b0(lVar11);
            FUN_100192870(lVar11,uVar7,0);
          }
        }
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto switchD_10016e9cc_caseD_7f8;
          }
          QArrayData::deallocate((QArrayData *)local_108,2,8);
        }
      }
      goto switchD_10016e9cc_caseD_7f8;
    }
    switch(iVar2) {
    case 0x7f6:
      local_110 = pQVar1;
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_AddRef(pQVar1);
      }
      FUN_100167490();
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_Free(pQVar1);
        goto LAB_10016ec00;
      }
      break;
    case 0x7f7:
    case 0x7f9:
      local_130 = pQVar1;
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_AddRef(pQVar1);
      }
      FUN_100163c20(param_1,&local_130);
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_Free(pQVar1);
        goto LAB_10016ec00;
      }
      break;
    default:
      goto switchD_10016e9cc_caseD_7f8;
    case 0x7fd:
      local_e8 = pQVar1;
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_AddRef(pQVar1);
      }
      FUN_100165c20(param_1,&local_e8);
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_Free(pQVar1);
        goto LAB_10016ec00;
      }
      break;
    case 0x800:
      local_f8 = pQVar1;
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_AddRef(pQVar1);
      }
      FUN_1001661d0(param_1,&local_f8);
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_Free(pQVar1);
        goto LAB_10016ec00;
      }
      break;
    case 0x803:
      local_e0 = pQVar1;
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_AddRef(pQVar1);
      }
      FUN_100164be0(param_1,&local_e0);
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_Free(pQVar1);
        goto LAB_10016ec00;
      }
    }
  }
  else {
    if (iVar2 - 0x820U < 2) {
      local_f0 = pQVar1;
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_AddRef(pQVar1);
      }
      FUN_100163aa0(param_1,&local_f0);
      if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
        _PrlHandle_Free(pQVar1);
        goto LAB_10016ec00;
      }
      goto LAB_10016ec08;
    }
    if (iVar2 == 0x83e) {
      FUN_1001653e0(param_1,param_2);
    }
switchD_10016e9cc_caseD_7f8:
    if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) goto LAB_10016ec00;
  }
LAB_10016ec08:
  local_168 = param_2[3].field0_0x0;
  local_160 = param_2[4].field0_0x0;
  if (1 < *(int *)local_160 + 1U) {
    LOCK();
    *(int *)local_160 = *(int *)local_160 + 1;
    local_31 = *(int *)local_160 != 0;
    UNLOCK();
  }
  local_158 = param_2[5].field0_0x0;
  pQStack_150 = param_2[6].field0_0x0;
  local_148 = param_2[7].field0_0x0;
  if (pQStack_150 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQStack_150 = *(int *)pQStack_150 + 1;
    local_31 = *(int *)pQStack_150 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_140,(QVariant *)(param_2 + 8));
  pQVar1 = param_2[2].field0_0x0;
  local_170 = pQVar1;
  if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
    _PrlHandle_AddRef(pQVar1);
  }
  FUN_100161f20(param_1,iVar5,&local_168,&local_170);
  if (pQVar1 != (QTypedArrayData<unsigned_short> *)0x0) {
    _PrlHandle_Free(pQVar1);
  }
  QVariant::~QVariant(&local_140);
  if (pQStack_150 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQStack_150 = *(int *)pQStack_150 + -1;
    local_31 = *(int *)pQStack_150 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (pQStack_150 != (QTypedArrayData<unsigned_short> *)0x0)) {
      operator_delete(pQStack_150);
    }
  }
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016ed24;
    }
    QArrayData::deallocate((QArrayData *)local_160,2,8);
  }
LAB_10016ed24:
  QVariant::~QVariant(&local_50);
  if (pQStack_60 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQStack_60 = *(int *)pQStack_60 + -1;
    local_31 = *(int *)pQStack_60 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (pQStack_60 != (QTypedArrayData<unsigned_short> *)0x0)) {
      operator_delete(pQStack_60);
    }
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_70,2,8);
  }
  return;
}

