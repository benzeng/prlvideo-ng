
void FUN_10016fa40(long param_1,long *param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  QString *pQVar9;
  void *pvVar10;
  CTaskGenericId *pCVar11;
  uint uVar12;
  bool bVar13;
  uint in_stack_fffffffffffff92c;
  QArrayData *local_6b8;
  QArrayData *local_6b0;
  long local_6a8;
  undefined1 local_6a0 [48];
  QString local_670;
  QArrayData *local_668;
  QArrayData *local_660;
  QArrayData *local_658;
  QArrayData *local_650;
  QString local_648;
  QArrayData *local_640;
  QString local_638;
  QArrayData *local_630;
  QString local_628;
  QArrayData *local_620;
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  long local_5f8;
  undefined4 local_5f0;
  undefined4 local_5ec;
  QArrayData *local_5e8;
  CVmEvent local_5e0 [224];
  QEvent local_500 [32];
  QString local_4e0;
  QArrayData *local_4d8;
  QString local_4d0;
  undefined1 local_4c8 [16];
  undefined8 local_4b8;
  undefined4 local_4b0;
  Data_conflict local_4a8;
  undefined4 local_4a0;
  undefined1 local_498;
  undefined1 local_488 [16];
  undefined8 local_478;
  undefined4 local_470;
  Data_conflict local_468;
  undefined4 local_460;
  undefined1 local_458;
  undefined1 local_448 [24];
  QArrayData *local_430;
  QArrayData *local_428;
  undefined1 local_419;
  QArrayData *local_418;
  long local_410;
  QString local_408;
  QArrayData *local_400;
  QArrayData *local_3f8;
  int *local_3f0;
  long *local_3e8;
  long *local_3e0;
  undefined4 local_3d8;
  QArrayData *local_3d0;
  QArrayData *local_3c8;
  CTaskGenericId local_3c0 [24];
  Data_conflict local_3a8;
  undefined4 local_3a0;
  QVariant local_398;
  QVariant local_388;
  QArrayData *local_378;
  QArrayData *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  QString local_338;
  QArrayData *local_330;
  QString local_328;
  QArrayData *local_320;
  QString local_318;
  QArrayData *local_310;
  QString local_308;
  QArrayData *local_300;
  QString local_2f8;
  QString local_2f0;
  QArrayData *local_2e8;
  QString local_2e0;
  QArrayData *local_2d8;
  QString local_2d0;
  QArrayData *local_2c8;
  QString local_2c0;
  QString local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined4 local_280;
  Data_conflict local_278;
  undefined4 local_270;
  undefined1 local_268;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined4 local_240;
  Data_conflict local_238;
  undefined4 local_230;
  undefined1 local_228;
  undefined1 local_220 [24];
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  QArrayData *local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  long local_198;
  Data_conflict local_190;
  undefined4 local_188;
  QArrayData *local_180;
  QVariant local_178;
  QVariant local_168;
  QArrayData *local_158;
  CVmEvent local_150 [224];
  QEvent local_70 [32];
  long local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar3 = CSdkEvent::type();
  if (iVar3 < 0x18769) {
    if ((0x33 < iVar3 - 0x186a1U) ||
       ((0xa000100200005U >> ((ulong)(iVar3 - 0x186a1U) & 0x3f) & 1) == 0)) goto LAB_10016fae2;
  }
  else if (iVar3 < 0x189c0) {
    if ((1 < iVar3 - 0x1889fU) && ((1 < iVar3 - 0x188a9U && (iVar3 != 0x18769)))) {
LAB_10016fae2:
      QString::toUtf8();
      if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
      }
      pQVar1 = local_40;
      lVar6 = *(long *)(local_40 + 0x10);
      uVar5 = FUN_100de8410(iVar3);
      FUN_100df99c0("","prl_client_app",0,"%s: received event %s, code = [%u]",pQVar1 + lVar6,uVar5,
                    iVar3);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016fb81;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
  }
  else if ((iVar3 != 0x189c0) && (iVar3 != 0x18a25)) goto LAB_10016fae2;
LAB_10016fb81:
  CSdkEvent::job();
  lVar6 = 0;
  if (local_48 != 0) {
    _PrlHandle_Free();
    uVar5 = CSdkCommunicator::requestStorage();
    CSdkEvent::job();
    lVar6 = CRequestStorage::findRequest(uVar5,&local_50);
    if (local_50 != 0) {
      _PrlHandle_Free();
    }
  }
  CSdkEvent::xmlEventString();
  CVmEvent::CVmEvent(local_150,(QTypedArrayData<unsigned_short> *)&local_158);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016fc2b;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10016fc2b:
  if (0x18769 < iVar3) {
    if (iVar3 < 0x189c0) {
      if (iVar3 < 0x18894) {
        if (iVar3 == 0x1876a) {
          FUN_10016cec0(param_1,local_150);
        }
        else if (iVar3 == 0x18830) {
          lVar6 = *param_2;
          local_1d0 = lVar6;
          if (lVar6 != 0) {
            _PrlHandle_AddRef(lVar6);
          }
          FUN_10016b700(param_1,&local_1d0);
          if (lVar6 != 0) {
            _PrlHandle_Free(lVar6);
          }
        }
        else if (iVar3 == 0x18833) {
          FUN_100157800(*(undefined8 *)(param_1 + 0x130));
        }
        goto switchD_10016fc53_caseD_186a4;
      }
      switch(iVar3) {
      case 0x18894:
        FUN_100161ad0(param_1);
        break;
      case 0x18895:
        FUN_100161a10(param_1);
        FUN_1001604b0(param_1);
        break;
      case 0x18896:
      case 0x18897:
        lVar7 = *param_2;
        local_1c0 = lVar7;
        if (lVar7 != 0) {
          _PrlHandle_AddRef(lVar7);
        }
        CVmEventBase::getEventIssuerId();
        FUN_10016b2a0(param_1,&local_1c0,&local_1c8,lVar6);
        if (*(int *)local_1c8 != -1) {
          if (*(int *)local_1c8 != 0) {
            LOCK();
            *(int *)local_1c8 = *(int *)local_1c8 + -1;
            local_31 = *(int *)local_1c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001712a0;
          }
          QArrayData::deallocate(local_1c8,2,8);
        }
LAB_1001712a0:
        if (lVar7 != 0) {
          _PrlHandle_Free(lVar7);
        }
        FUN_100173d60(param_1,local_150);
        break;
      case 0x18898:
      case 0x1889d:
      case 0x1889e:
      case 0x1889f:
      case 0x188a0:
      case 0x188a3:
      case 0x188a4:
      case 0x188a5:
        goto switchD_10016fc53_caseD_186c1;
      case 0x188a1:
        lVar6 = *param_2;
        local_1d8 = lVar6;
        if (lVar6 != 0) {
          _PrlHandle_AddRef(lVar6);
        }
        FUN_10016b4a0();
        if (lVar6 != 0) {
          _PrlHandle_Free(lVar6);
        }
        break;
      case 0x188a2:
        if (((*(long *)(param_1 + 0xa8) != 0) && (*(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) &&
           (*(long *)(param_1 + 0xb0) != 0)) {
          local_1e0 = 0;
          lVar6 = *param_2;
          if ((lVar6 != 0) && (_PrlHandle_AddRef(lVar6), local_1e0 != 0)) {
            _PrlHandle_Free();
          }
          local_1e0 = 0;
          iVar3 = _PrlEvent_GetParamByName(lVar6,"vm_license",&local_1e0);
          if (lVar6 != 0) {
            _PrlHandle_Free(lVar6);
          }
          if (iVar3 < 0) {
            if (iVar3 == -0x7fffffec) {
              if (1 < DAT_10230ffd0) {
                FUN_100df99c0("","prl_client_app",2,
                              "Failed to get license event parameter. Error code: %.8X.Try to get license by old protocol."
                              ,0x80000014);
              }
              uVar5 = 0;
              if ((*(long *)(param_1 + 0xa8) != 0) &&
                 (uVar5 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) {
                uVar5 = *(undefined8 *)(param_1 + 0xb0);
              }
              FUN_10061c0c0(uVar5);
            }
            else {
              FUN_100df99c0("","prl_client_app",0,
                            "Error(!): Failed to get license event parameter. Error code: %.8X",
                            iVar3);
            }
          }
          else {
            local_1e8 = 0;
            iVar3 = _PrlEvtPrm_ToHandle(local_1e0,&local_1e8);
            if (iVar3 < 0) {
              FUN_100df99c0("","prl_client_app",0,
                            "Error(!): Failed to get license handle. Error code: %.8X",iVar3);
            }
            else {
              uVar5 = 0;
              if ((*(long *)(param_1 + 0xa8) != 0) &&
                 (uVar5 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) {
                uVar5 = *(undefined8 *)(param_1 + 0xb0);
              }
              local_1f0 = local_1e8;
              if (local_1e8 != 0) {
                _PrlHandle_AddRef();
              }
              FUN_100617790(uVar5,&local_1f0);
              if (local_1f0 != 0) {
                _PrlHandle_Free();
              }
            }
            if (local_1e8 != 0) {
              _PrlHandle_Free();
            }
          }
          if (local_1e0 != 0) {
            _PrlHandle_Free();
          }
        }
        break;
      case 0x188ae:
        if (lVar6 != 0) break;
        local_410 = *param_2;
        if (local_410 != 0) {
          _PrlHandle_AddRef();
        }
        MessageUtils::getMessageString(&local_408,&local_410,0);
        if (local_410 != 0) {
          _PrlHandle_Free();
        }
        local_418 = (QArrayData *)QString::fromAscii_helper("vzlicense_is_volume",0x13);
        lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
        if (*(int *)local_418 != -1) {
          if (*(int *)local_418 != 0) {
            LOCK();
            *(int *)local_418 = *(int *)local_418 + -1;
            local_31 = *(int *)local_418 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001714d7;
          }
          QArrayData::deallocate(local_418,2,8);
        }
LAB_1001714d7:
        local_419 = 0;
        if (lVar6 == 0) {
          bVar13 = false;
        }
        else {
          CVmEventParameter::getParamValue();
          iVar3 = QString::toInt((bool *)&local_428,(int)&local_419);
          bVar13 = iVar3 == 1;
          if (*(int *)local_428 != -1) {
            if (*(int *)local_428 != 0) {
              LOCK();
              *(int *)local_428 = *(int *)local_428 + -1;
              local_31 = *(int *)local_428 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171f29;
            }
            QArrayData::deallocate(local_428,2,8);
          }
        }
LAB_100171f29:
        uVar4 = CVmEventBase::getEventCode();
        FUN_1006221e0(&local_430,uVar4,bVar13);
        QString::append(&local_408);
        if (*(int *)local_430 != -1) {
          if (*(int *)local_430 != 0) {
            LOCK();
            *(int *)local_430 = *(int *)local_430 + -1;
            local_31 = *(int *)local_430 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100171f8f;
          }
          QArrayData::deallocate(local_430,2,8);
        }
LAB_100171f8f:
        iVar3 = CMessageManager::instance();
        uVar12 = 0x80015510;
        if (bVar13 != false) {
          uVar12 = 0x80015509;
        }
        local_448._16_8_ = QString::fromAscii_helper("",0);
        local_448._8_8_ = PTR_shared_null_1021e15e8;
        local_448._0_8_ = PTR_shared_null_1021e15e8;
        FUN_1000341d0(local_448,&local_408);
        local_488 = (undefined1  [16])0x0;
        local_470 = 0;
        local_478 = 0;
        local_460 = 0x80000000;
        local_468.field7 = 0;
        local_458 = 1;
        local_4c8 = (undefined1  [16])0x0;
        local_4b0 = 0;
        local_4b8 = 0;
        local_4a0 = 0x80000000;
        local_4a8.field7 = 0;
        local_498 = 1;
        CMessageManager::showMessageBox
                  (iVar3,(QString *)(ulong)uVar12,(QStringList *)(local_448 + 0x10),
                   (QStringList *)(local_448 + 8),(CSlotInfo *)local_448,SUB81(local_488,0),
                   (QWidget *)((ulong)in_stack_fffffffffffff92c << 0x20),(CSlotInfo *)0x0);
        QVariant::~QVariant((QVariant *)&local_4a8);
        if ((int *)local_4c8._0_8_ != (int *)0x0) {
          LOCK();
          *(int *)local_4c8._0_8_ = *(int *)local_4c8._0_8_ + -1;
          local_31 = *(int *)local_4c8._0_8_ != 0;
          UNLOCK();
          if ((!(bool)local_31) && ((int *)local_4c8._0_8_ != (int *)0x0)) {
            operator_delete((void *)local_4c8._0_8_);
          }
        }
        QVariant::~QVariant((QVariant *)&local_468);
        if ((int *)local_488._0_8_ != (int *)0x0) {
          LOCK();
          *(int *)local_488._0_8_ = *(int *)local_488._0_8_ + -1;
          local_31 = *(int *)local_488._0_8_ != 0;
          UNLOCK();
          if ((!(bool)local_31) && ((int *)local_488._0_8_ != (int *)0x0)) {
            operator_delete((void *)local_488._0_8_);
          }
        }
        FUN_100039a80(local_448);
        FUN_100039a80(local_448 + 8);
        if (*(int *)local_448._16_8_ != -1) {
          if (*(int *)local_448._16_8_ != 0) {
            LOCK();
            *(int *)local_448._16_8_ = *(int *)local_448._16_8_ + -1;
            local_31 = *(int *)local_448._16_8_ != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10017215d;
          }
          QArrayData::deallocate((QArrayData *)local_448._16_8_,2,8);
        }
LAB_10017215d:
        if (*(int *)local_408.field0_0x0 != -1) {
          if (*(int *)local_408.field0_0x0 != 0) {
            LOCK();
            *(int *)local_408.field0_0x0 = *(int *)local_408.field0_0x0 + -1;
            local_31 = *(int *)local_408.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_408.field0_0x0,2,8);
        }
        break;
      case 0x188af:
        local_4d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        local_4d8 = (QArrayData *)QString::fromAscii_helper("disp_vm_request_payload",0x17);
        lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
        if (*(int *)local_4d8 != -1) {
          if (*(int *)local_4d8 != 0) {
            LOCK();
            *(int *)local_4d8 = *(int *)local_4d8 + -1;
            local_31 = *(int *)local_4d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001715c9;
          }
          QArrayData::deallocate(local_4d8,2,8);
        }
LAB_1001715c9:
        if (lVar6 == 0) {
          local_4e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
        }
        else {
          CVmEventParameter::getParamValue();
        }
        QString::operator=(&local_4d0,&local_4e0);
        if (*(int *)local_4e0.field0_0x0 != -1) {
          if (*(int *)local_4e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_4e0.field0_0x0 = *(int *)local_4e0.field0_0x0 + -1;
            local_31 = *(int *)local_4e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100171863;
          }
          QArrayData::deallocate((QArrayData *)local_4e0.field0_0x0,2,8);
        }
LAB_100171863:
        local_5e8 = (QArrayData *)local_4d0.field0_0x0;
        if (1 < *(int *)local_4d0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_4d0.field0_0x0 = *(int *)local_4d0.field0_0x0 + 1;
          local_31 = *(int *)local_4d0.field0_0x0 != 0;
          UNLOCK();
        }
        CVmEvent::CVmEvent(local_5e0,(QTypedArrayData<unsigned_short> *)&local_5e8);
        if (*(int *)local_5e8 != -1) {
          if (*(int *)local_5e8 != 0) {
            LOCK();
            *(int *)local_5e8 = *(int *)local_5e8 + -1;
            local_31 = *(int *)local_5e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001718cb;
          }
          QArrayData::deallocate(local_5e8,2,8);
        }
LAB_1001718cb:
        iVar3 = CVmEventBase::getEventType();
        if (iVar3 == 0x18b55) {
          local_618._8_4_ = (int)PTR_shared_null_1021e1288;
          local_618._0_8_ = PTR_shared_null_1021e1288;
          local_618._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
          local_5f8 = 0;
          local_608 = local_618;
          local_620 = (QArrayData *)QString::fromAscii_helper("spool_file_name",0xf);
          lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_5e0);
          if (*(int *)local_620 != -1) {
            if (*(int *)local_620 != 0) {
              LOCK();
              *(int *)local_620 = *(int *)local_620 + -1;
              local_31 = *(int *)local_620 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10017196e;
            }
            QArrayData::deallocate(local_620,2,8);
          }
LAB_10017196e:
          if (lVar6 == 0) {
            local_628.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
          }
          else {
            CVmEventParameter::getParamValue();
          }
          QString::operator=((QString *)(local_608 + 8),&local_628);
          if (*(int *)local_628.field0_0x0 != -1) {
            if (*(int *)local_628.field0_0x0 != 0) {
              LOCK();
              *(int *)local_628.field0_0x0 = *(int *)local_628.field0_0x0 + -1;
              local_31 = *(int *)local_628.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171a8e;
            }
            QArrayData::deallocate((QArrayData *)local_628.field0_0x0,2,8);
          }
LAB_100171a8e:
          local_630 = (QArrayData *)QString::fromAscii_helper("printer_sys_name",0x10);
          lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_5e0);
          if (*(int *)local_630 != -1) {
            if (*(int *)local_630 != 0) {
              LOCK();
              *(int *)local_630 = *(int *)local_630 + -1;
              local_31 = *(int *)local_630 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171af2;
            }
            QArrayData::deallocate(local_630,2,8);
          }
LAB_100171af2:
          if (lVar6 == 0) {
            local_638.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
          }
          else {
            CVmEventParameter::getParamValue();
          }
          QString::operator=((QString *)(local_618 + 8),&local_638);
          if (*(int *)local_638.field0_0x0 != -1) {
            if (*(int *)local_638.field0_0x0 != 0) {
              LOCK();
              *(int *)local_638.field0_0x0 = *(int *)local_638.field0_0x0 + -1;
              local_31 = *(int *)local_638.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171b66;
            }
            QArrayData::deallocate((QArrayData *)local_638.field0_0x0,2,8);
          }
LAB_100171b66:
          local_640 = (QArrayData *)QString::fromAscii_helper("printer_sys_id",0xe);
          lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_5e0);
          if (*(int *)local_640 != -1) {
            if (*(int *)local_640 != 0) {
              LOCK();
              *(int *)local_640 = *(int *)local_640 + -1;
              local_31 = *(int *)local_640 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171bca;
            }
            QArrayData::deallocate(local_640,2,8);
          }
LAB_100171bca:
          if (lVar6 == 0) {
            local_648.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
          }
          else {
            CVmEventParameter::getParamValue();
          }
          QString::operator=((QString *)local_608,&local_648);
          if (*(int *)local_648.field0_0x0 != -1) {
            if (*(int *)local_648.field0_0x0 != 0) {
              LOCK();
              *(int *)local_648.field0_0x0 = *(int *)local_648.field0_0x0 + -1;
              local_31 = *(int *)local_648.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171c3e;
            }
            QArrayData::deallocate((QArrayData *)local_648.field0_0x0,2,8);
          }
LAB_100171c3e:
          local_650 = (QArrayData *)QString::fromAscii_helper("number_of_pages",0xf);
          lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_5e0);
          if (*(int *)local_650 != -1) {
            if (*(int *)local_650 != 0) {
              LOCK();
              *(int *)local_650 = *(int *)local_650 + -1;
              local_31 = *(int *)local_650 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171ca2;
            }
            QArrayData::deallocate(local_650,2,8);
          }
LAB_100171ca2:
          if (lVar6 == 0) {
            local_5f0 = 0;
          }
          else {
            CVmEventParameter::getParamValue();
            local_5f0 = QString::toInt((bool *)&local_658,0);
            if (*(int *)local_658 != -1) {
              if (*(int *)local_658 != 0) {
                LOCK();
                *(int *)local_658 = *(int *)local_658 + -1;
                local_31 = *(int *)local_658 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100171d11;
              }
              QArrayData::deallocate(local_658,2,8);
            }
          }
LAB_100171d11:
          local_660 = (QArrayData *)QString::fromAscii_helper("number_of_copies",0x10);
          lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_5e0);
          if (*(int *)local_660 != -1) {
            if (*(int *)local_660 != 0) {
              LOCK();
              *(int *)local_660 = *(int *)local_660 + -1;
              local_31 = *(int *)local_660 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171d75;
            }
            QArrayData::deallocate(local_660,2,8);
          }
LAB_100171d75:
          if (lVar6 == 0) {
            local_5ec = 0;
          }
          else {
            CVmEventParameter::getParamValue();
            local_5ec = QString::toInt((bool *)&local_668,0);
            if (*(int *)local_668 != -1) {
              if (*(int *)local_668 != 0) {
                LOCK();
                *(int *)local_668 = *(int *)local_668 + -1;
                local_31 = *(int *)local_668 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100171de4;
              }
              QArrayData::deallocate(local_668,2,8);
            }
          }
LAB_100171de4:
          CVmEventBase::getEventIssuerId();
          QString::operator=((QString *)local_618,&local_670);
          if (*(int *)local_670.field0_0x0 != -1) {
            if (*(int *)local_670.field0_0x0 != 0) {
              LOCK();
              *(int *)local_670.field0_0x0 = *(int *)local_670.field0_0x0 + -1;
              local_31 = *(int *)local_670.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100171e40;
            }
            QArrayData::deallocate((QArrayData *)local_670.field0_0x0,2,8);
          }
LAB_100171e40:
          lVar6 = *param_2;
          if (lVar6 != 0) {
            _PrlHandle_AddRef(lVar6);
          }
          if (local_5f8 != 0) {
            _PrlHandle_Free();
          }
          local_5f8 = lVar6;
          if (lVar6 != 0) {
            _PrlHandle_AddRef(lVar6);
            _PrlHandle_Free(lVar6);
          }
          pvVar10 = operator_new(0x98);
          FUN_100178f70(local_6a0,local_618);
          FUN_1002cdb90(pvVar10,local_6a0);
          FUN_1001790e0(local_6a0);
          CAbstractTask::execute();
          FUN_1001790e0(local_618);
        }
        else {
          local_6a8 = 0;
          lVar6 = *param_2;
          if ((lVar6 != 0) && (_PrlHandle_AddRef(lVar6), local_6a8 != 0)) {
            _PrlHandle_Free();
          }
          local_6a8 = 0;
          iVar3 = _PrlEvent_CreateResponse(lVar6,&local_6a8);
          if (lVar6 != 0) {
            _PrlHandle_Free(lVar6);
          }
          if (-1 < iVar3) {
            lVar6 = *(long *)(param_1 + 0x80);
            if (lVar6 != 0) {
              _PrlHandle_AddRef(lVar6);
            }
            _PrlSrv_SendAnswer(lVar6,local_6a8);
            if (lVar6 != 0) {
              _PrlHandle_Free(lVar6);
            }
          }
          if (local_6a8 != 0) {
            _PrlHandle_Free();
          }
        }
        QEvent::~QEvent(local_500);
        CVmEventBase::~CVmEventBase((CVmEventBase *)local_5e0);
        if (*(int *)local_4d0.field0_0x0 != -1) {
          if (*(int *)local_4d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_4d0.field0_0x0 = *(int *)local_4d0.field0_0x0 + -1;
            local_31 = *(int *)local_4d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_4d0.field0_0x0,2,8);
        }
        break;
      case 0x188b2:
        local_6b0 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
        lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
        if (*(int *)local_6b0 != -1) {
          if (*(int *)local_6b0 != 0) {
            LOCK();
            *(int *)local_6b0 = *(int *)local_6b0 + -1;
            local_31 = *(int *)local_6b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10017164a;
          }
          QArrayData::deallocate(local_6b0,2,8);
        }
LAB_10017164a:
        if (lVar6 != 0) {
          CVmEventParameter::getParamValue();
          iVar3 = QString::toInt((bool *)&local_6b8,0);
          if ((bool)*(char *)(param_1 + 0x13c) != (iVar3 != 0)) {
            *(bool *)(param_1 + 0x13c) = iVar3 != 0;
            FUN_100801690(param_1,iVar3 != 0);
          }
          if (*(int *)local_6b8 != -1) {
            if (*(int *)local_6b8 != 0) {
              LOCK();
              *(int *)local_6b8 = *(int *)local_6b8 + -1;
              local_31 = *(int *)local_6b8 != 0;
              UNLOCK();
              if ((bool)local_31) break;
            }
            QArrayData::deallocate(local_6b8,2,8);
          }
        }
      }
      goto switchD_10016fc53_caseD_186a4;
    }
    if (iVar3 < 0x18a88) {
      switch(iVar3) {
      case 0x189c0:
        FUN_10016d270(param_1,local_150);
        break;
      case 0x189c1:
        FUN_100168120(param_1,local_150);
        break;
      case 0x189c2:
        FUN_100168700(param_1,local_150);
        break;
      case 0x189c3:
        FUN_100173c70(param_1,local_150,1);
        break;
      case 0x189c4:
        FUN_100173c70(param_1,local_150,0);
        break;
      case 0x189c5:
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("","prl_client_app",2,
                        "ET_DSP_EVT_VM_SOFTWARE_INSTALLED is received from VM.");
        }
        local_3c8 = (QArrayData *)QString::fromAscii_helper("vmcfg_installed_software_id",0x1b);
        lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
        if (*(int *)local_3c8 != -1) {
          if (*(int *)local_3c8 != 0) {
            LOCK();
            *(int *)local_3c8 = *(int *)local_3c8 + -1;
            local_31 = *(int *)local_3c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100170079;
          }
          QArrayData::deallocate(local_3c8,2,8);
        }
LAB_100170079:
        uVar4 = DAT_100e152d4;
        if (lVar6 != 0) {
          CVmEventParameter::getParamValue();
          iVar3 = QString::toInt((bool *)&local_3d0,0);
          if (*(int *)local_3d0 != -1) {
            if (*(int *)local_3d0 != 0) {
              LOCK();
              *(int *)local_3d0 = *(int *)local_3d0 + -1;
              local_31 = *(int *)local_3d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001700e6;
            }
            QArrayData::deallocate(local_3d0,2,8);
          }
LAB_1001700e6:
          if (iVar3 == 8) {
            puVar8 = &DAT_100e15300;
          }
          else {
            if (iVar3 != 4) goto LAB_1001716f3;
            puVar8 = &DAT_100e152ec;
          }
          uVar4 = *puVar8;
        }
LAB_1001716f3:
        FUN_100173e70(param_1,uVar4);
        break;
      case 0x189c6:
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("","prl_client_app",2,
                        "PET_DSP_EVT_VM_PIS_NOTIFICATION_ASK_TO_INSTALL is received from VM.");
        }
        CVmEventBase::getEventIssuerId();
        local_368 = (QArrayData *)QString::fromAscii_helper("%1/%2/%3",8);
        local_370 = (QArrayData *)QString::fromAscii_helper("Antivirus",9);
        QString::arg(&local_360,&local_368,&local_370,0,0x20);
        QString::arg(&local_358,&local_360,&local_348,0,0x20);
        local_378 = (QArrayData *)QString::fromAscii_helper("PromoOff",8);
        QString::arg(&local_350,&local_358,&local_378,0,0x20);
        if (*(int *)local_378 != -1) {
          if (*(int *)local_378 != 0) {
            LOCK();
            *(int *)local_378 = *(int *)local_378 + -1;
            local_31 = *(int *)local_378 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10017021f;
          }
          QArrayData::deallocate(local_378,2,8);
        }
LAB_10017021f:
        if (*(int *)local_358 != -1) {
          if (*(int *)local_358 != 0) {
            LOCK();
            *(int *)local_358 = *(int *)local_358 + -1;
            local_31 = *(int *)local_358 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100170255;
          }
          QArrayData::deallocate(local_358,2,8);
        }
LAB_100170255:
        if (*(int *)local_360 != -1) {
          if (*(int *)local_360 != 0) {
            LOCK();
            *(int *)local_360 = *(int *)local_360 + -1;
            local_31 = *(int *)local_360 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10017028b;
          }
          QArrayData::deallocate(local_360,2,8);
        }
LAB_10017028b:
        if (*(int *)local_370 != -1) {
          if (*(int *)local_370 != 0) {
            LOCK();
            *(int *)local_370 = *(int *)local_370 + -1;
            local_31 = *(int *)local_370 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001702c1;
          }
          QArrayData::deallocate(local_370,2,8);
        }
LAB_1001702c1:
        if (*(int *)local_368 != -1) {
          if (*(int *)local_368 != 0) {
            LOCK();
            *(int *)local_368 = *(int *)local_368 + -1;
            local_31 = *(int *)local_368 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001702f7;
          }
          QArrayData::deallocate(local_368,2,8);
        }
LAB_1001702f7:
        QSettings::QSettings((QSettings *)&local_388,(QObject *)0x0);
        lVar6 = FUN_10015cb20(param_1,&local_348);
        if (lVar6 != 0) {
          local_3a0 = 0x80000000;
          local_3a8.field7 = 0;
          QSettings::value((QString *)&local_398,&local_388);
          cVar2 = QVariant::toBool();
          if (cVar2 == '\0') {
            pCVar11 = (CTaskGenericId *)CTaskManager::instance();
            FUN_100178ec0(local_3c0,&local_348);
            lVar7 = CTaskManager::getTaskById(pCVar11);
            bVar13 = lVar7 == 0;
            CTaskGenericId::~CTaskGenericId(local_3c0);
          }
          else {
            bVar13 = false;
          }
          QVariant::~QVariant(&local_398);
          QVariant::~QVariant((QVariant *)&local_3a8);
          if (bVar13) {
            pvVar10 = operator_new(0x60);
            FUN_1002aaf20(pvVar10,lVar6,1);
            CAbstractTask::execute();
          }
        }
        QSettings::~QSettings((QSettings *)&local_388);
        if (*(int *)local_350 != -1) {
          if (*(int *)local_350 != 0) {
            LOCK();
            *(int *)local_350 = *(int *)local_350 + -1;
            local_31 = *(int *)local_350 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001717c2;
          }
          QArrayData::deallocate(local_350,2,8);
        }
LAB_1001717c2:
        if (*(int *)local_348 != -1) {
          if (*(int *)local_348 != 0) {
            LOCK();
            *(int *)local_348 = *(int *)local_348 + -1;
            local_31 = *(int *)local_348 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate(local_348,2,8);
        }
      }
      goto switchD_10016fc53_caseD_186a4;
    }
    if (iVar3 < 0x18b50) {
      if (iVar3 - 0x18a88U < 9) {
        FUN_100173b80(param_1,local_150);
      }
      goto switchD_10016fc53_caseD_186a4;
    }
    if (0x18c7d < iVar3) {
      if (iVar3 == 0x18c7e) {
        FUN_100167ac0(param_1,local_150);
      }
      goto switchD_10016fc53_caseD_186a4;
    }
    if (0x18bb3 < iVar3) {
      if ((iVar3 - 0x18bb4U < 7) && ((0x55U >> (iVar3 - 0x18bb4U & 0x1f) & 1) != 0)) {
        uVar5 = FUN_100794960();
        FUN_100796920(uVar5,param_1,local_150);
      }
      goto switchD_10016fc53_caseD_186a4;
    }
    if (iVar3 != 0x18b50) {
      if (iVar3 == 0x18b51) {
        iVar3 = CMessageManager::instance();
        CVmEventBase::getEventIssuerId();
        local_220._8_8_ = PTR_shared_null_1021e15e8;
        local_220._0_8_ = PTR_shared_null_1021e15e8;
        local_258 = (undefined1  [16])0x0;
        local_240 = 0;
        local_248 = 0;
        local_230 = 0x80000000;
        local_238.field7 = 0;
        local_228 = 1;
        local_298 = (undefined1  [16])0x0;
        local_280 = 0;
        local_288 = 0;
        local_270 = 0x80000000;
        local_278.field7 = 0;
        local_268 = 1;
        CMessageManager::showMessageBox
                  (iVar3,(QString *)0x3b25,(QStringList *)(local_220 + 0x10),
                   (QStringList *)(local_220 + 8),(CSlotInfo *)local_220,SUB81(local_258,0),
                   (QWidget *)((ulong)in_stack_fffffffffffff92c << 0x20),(CSlotInfo *)0x0);
        QVariant::~QVariant((QVariant *)&local_278);
        if ((int *)local_298._0_8_ != (int *)0x0) {
          LOCK();
          *(int *)local_298._0_8_ = *(int *)local_298._0_8_ + -1;
          local_31 = *(int *)local_298._0_8_ != 0;
          UNLOCK();
          if ((!(bool)local_31) && ((int *)local_298._0_8_ != (int *)0x0)) {
            operator_delete((void *)local_298._0_8_);
          }
        }
        QVariant::~QVariant((QVariant *)&local_238);
        if ((int *)local_258._0_8_ != (int *)0x0) {
          LOCK();
          *(int *)local_258._0_8_ = *(int *)local_258._0_8_ + -1;
          local_31 = *(int *)local_258._0_8_ != 0;
          UNLOCK();
          if ((!(bool)local_31) && ((int *)local_258._0_8_ != (int *)0x0)) {
            operator_delete((void *)local_258._0_8_);
          }
        }
        FUN_100039a80(local_220);
        FUN_100039a80(local_220 + 8);
        if (*(int *)local_220._16_8_ != -1) {
          if (*(int *)local_220._16_8_ != 0) {
            LOCK();
            *(int *)local_220._16_8_ = *(int *)local_220._16_8_ + -1;
            local_31 = *(int *)local_220._16_8_ != 0;
            UNLOCK();
            if ((bool)local_31) goto switchD_10016fc53_caseD_186a4;
          }
          QArrayData::deallocate((QArrayData *)local_220._16_8_,2,8);
        }
      }
      goto switchD_10016fc53_caseD_186a4;
    }
    CVmEventBase::getEventIssuerId();
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Vm with uuid %s is ready to boot.",
                  local_1f8 + *(long *)(local_1f8 + 0x10));
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016fe2b;
      }
      QArrayData::deallocate(local_1f8,1,8);
    }
LAB_10016fe2b:
    if (*(int *)local_200 != -1) {
      if (*(int *)local_200 != 0) {
        LOCK();
        *(int *)local_200 = *(int *)local_200 + -1;
        local_31 = *(int *)local_200 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016fe61;
      }
      QArrayData::deallocate(local_200,2,8);
    }
LAB_10016fe61:
    CVmEventBase::getEventIssuerId();
    lVar6 = FUN_10015cb20(param_1,&local_208);
    if ((lVar6 != 0) && (lVar7 = FUN_100190010(lVar6), lVar7 != 0)) {
      uVar5 = FUN_100190010(lVar6);
      FUN_100244ed0(uVar5);
    }
    if (*(int *)local_208 != -1) {
      if (*(int *)local_208 != 0) {
        LOCK();
        *(int *)local_208 = *(int *)local_208 + -1;
        local_31 = *(int *)local_208 != 0;
        UNLOCK();
        if ((bool)local_31) goto switchD_10016fc53_caseD_186a4;
      }
      QArrayData::deallocate(local_208,2,8);
    }
    goto switchD_10016fc53_caseD_186a4;
  }
  switch(iVar3) {
  case 0x186a1:
    FUN_10016dcc0(param_1,local_150);
    break;
  case 0x186a2:
    FUN_100169850(param_1,local_150,0);
    break;
  case 0x186a3:
    FUN_10016a520(param_1,local_150);
    break;
  case 0x186a5:
    FUN_1001678a0(param_1,local_150,lVar6 == 0);
    break;
  case 0x186a6:
    FUN_100167c60(param_1,local_150,lVar6 == 0);
    break;
  case 0x186aa:
    CVmEventBase::getEventIssuerId();
    lVar6 = FUN_10015cb20(param_1,&local_1a0);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10017060b;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_10017060b:
    if (lVar6 != 0) {
      FUN_10018c880(lVar6,0x3000000b);
      FUN_10018c880(lVar6,0x30000004);
    }
    break;
  case 0x186b0:
  case 0x186b1:
  case 0x186c6:
    FUN_100168040(param_1,local_150,iVar3);
    break;
  case 0x186b5:
    lVar6 = *param_2;
    local_1b8 = lVar6;
    if (lVar6 != 0) {
      _PrlHandle_AddRef(lVar6);
    }
    FUN_100169930(param_1,&local_1b8);
    if (lVar6 != 0) {
      _PrlHandle_Free(lVar6);
    }
    break;
  case 0x186b7:
    QSettings::QSettings((QSettings *)&local_168,(QObject *)0x0);
    local_180 = (QArrayData *)QString::fromAscii_helper("NoProblemReportOnEvent",0x16);
    local_188 = 0x80000000;
    local_190.field7 = 0;
    QSettings::value((QString *)&local_178,&local_168);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_178);
    QVariant::~QVariant((QVariant *)&local_190);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170727;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_100170727:
    if (cVar2 == '\0') {
      lVar6 = *param_2;
      local_198 = lVar6;
      if (lVar6 != 0) {
        _PrlHandle_AddRef(lVar6);
      }
      FUN_10016c430(param_1,&local_198);
      if (lVar6 != 0) {
        _PrlHandle_Free(lVar6);
      }
    }
    QSettings::~QSettings((QSettings *)&local_168);
    break;
  case 0x186b9:
    lVar6 = *param_2;
    local_1b0 = lVar6;
    if (lVar6 != 0) {
      _PrlHandle_AddRef(lVar6);
    }
    FUN_10016a110(param_1,&local_1b0);
    if (lVar6 != 0) {
      _PrlHandle_Free(lVar6);
    }
    break;
  case 0x186ba:
    FUN_100167dd0(param_1,local_150,lVar6 == 0);
    break;
  case 0x186be:
    CVmEventBase::getEventIssuerId();
    FUN_100801250(param_1,&local_2a0);
    if (*(int *)local_2a0 != -1) {
      if (*(int *)local_2a0 != 0) {
        LOCK();
        *(int *)local_2a0 = *(int *)local_2a0 + -1;
        local_31 = *(int *)local_2a0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_2a0,2,8);
    }
    break;
  case 0x186bf:
    CVmEventBase::getEventIssuerId();
    FUN_1008012f0(param_1,&local_2b0);
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_31 = *(int *)local_2b0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
    break;
  case 0x186c0:
    CVmEventBase::getEventIssuerId();
    FUN_1008012a0(param_1,&local_2a8);
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_31 = *(int *)local_2a8 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_2a8,2,8);
    }
    break;
  case 0x186c1:
  case 0x186d2:
  case 0x186d3:
  case 0x186d4:
  case 0x186e0:
switchD_10016fc53_caseD_186c1:
    FUN_100168a60(param_1,local_150,lVar6,iVar3);
    break;
  case 0x186c4:
    FUN_100167b90(param_1,local_150);
    break;
  case 0x186c7:
    CVmEventBase::getEventIssuerId();
    lVar6 = FUN_10015cb20(param_1,&local_1a8);
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170966;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
LAB_100170966:
    if ((lVar6 != 0) && (iVar3 = FUN_10018a9d0(lVar6), iVar3 == 0x30000004)) {
      FUN_10018c880(lVar6,0x30000007);
    }
    break;
  case 0x186c9:
  case 0x186ca:
    FUN_100167f50(param_1,local_150,iVar3);
    break;
  case 0x186cd:
    *(undefined1 *)(*(long *)(param_1 + 0x130) + 0x18) = 1;
    break;
  case 0x186d1:
    local_2b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_2c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_2c8 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_uuid",0x16);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
    if (*(int *)local_2c8 != -1) {
      if (*(int *)local_2c8 != 0) {
        LOCK();
        *(int *)local_2c8 = *(int *)local_2c8 + -1;
        local_31 = *(int *)local_2c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170a1d;
      }
      QArrayData::deallocate(local_2c8,2,8);
    }
LAB_100170a1d:
    if (lVar6 != 0) {
      CVmEventParameter::getParamValue();
      QString::operator=(&local_2b8,&local_2d0);
      if (*(int *)local_2d0.field0_0x0 != -1) {
        if (*(int *)local_2d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_2d0.field0_0x0 = *(int *)local_2d0.field0_0x0 + -1;
          local_31 = *(int *)local_2d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100170a7a;
        }
        QArrayData::deallocate((QArrayData *)local_2d0.field0_0x0,2,8);
      }
    }
LAB_100170a7a:
    local_2d8 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_description",0x1d);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
    if (*(int *)local_2d8 != -1) {
      if (*(int *)local_2d8 != 0) {
        LOCK();
        *(int *)local_2d8 = *(int *)local_2d8 + -1;
        local_31 = *(int *)local_2d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170ade;
      }
      QArrayData::deallocate(local_2d8,2,8);
    }
LAB_100170ade:
    if (lVar6 != 0) {
      CVmEventParameter::getParamValue();
      QString::operator=(&local_2c0,&local_2e0);
      if (*(int *)local_2e0.field0_0x0 != -1) {
        if (*(int *)local_2e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
          local_31 = *(int *)local_2e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100170b3b;
        }
        QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
      }
    }
LAB_100170b3b:
    CVmEventBase::getEventIssuerId();
    FUN_100801580(param_1,&local_2e8,&local_2b8,&local_2c0);
    if (*(int *)local_2e8 != -1) {
      if (*(int *)local_2e8 != 0) {
        LOCK();
        *(int *)local_2e8 = *(int *)local_2e8 + -1;
        local_31 = *(int *)local_2e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170ba1;
      }
      QArrayData::deallocate(local_2e8,2,8);
    }
LAB_100170ba1:
    if (*(int *)local_2c0.field0_0x0 != -1) {
      if (*(int *)local_2c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2c0.field0_0x0 = *(int *)local_2c0.field0_0x0 + -1;
        local_31 = *(int *)local_2c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170bd7;
      }
      QArrayData::deallocate((QArrayData *)local_2c0.field0_0x0,2,8);
    }
LAB_100170bd7:
    if (*(int *)local_2b8.field0_0x0 != -1) {
      if (*(int *)local_2b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2b8.field0_0x0 = *(int *)local_2b8.field0_0x0 + -1;
        local_31 = *(int *)local_2b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_2b8.field0_0x0,2,8);
    }
    break;
  case 0x186d7:
    FUN_100169490(param_1,local_150,"hddResizeProgressChanged");
    break;
  case 0x186d8:
    FUN_10016d660(param_1,local_150);
    break;
  case 0x186d9:
    local_2f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_2f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_300 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_uuid",0x16);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
    if (*(int *)local_300 != -1) {
      if (*(int *)local_300 != 0) {
        LOCK();
        *(int *)local_300 = *(int *)local_300 + -1;
        local_31 = *(int *)local_300 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170cc2;
      }
      QArrayData::deallocate(local_300,2,8);
    }
LAB_100170cc2:
    if (lVar6 != 0) {
      CVmEventParameter::getParamValue();
      QString::operator=(&local_2f0,&local_308);
      if (*(int *)local_308.field0_0x0 != -1) {
        if (*(int *)local_308.field0_0x0 != 0) {
          LOCK();
          *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
          local_31 = *(int *)local_308.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100170d1f;
        }
        QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
      }
    }
LAB_100170d1f:
    local_310 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_description",0x1d);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
    if (*(int *)local_310 != -1) {
      if (*(int *)local_310 != 0) {
        LOCK();
        *(int *)local_310 = *(int *)local_310 + -1;
        local_31 = *(int *)local_310 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170d83;
      }
      QArrayData::deallocate(local_310,2,8);
    }
LAB_100170d83:
    if (lVar6 != 0) {
      CVmEventParameter::getParamValue();
      QString::operator=(&local_2f8,&local_318);
      if (*(int *)local_318.field0_0x0 != -1) {
        if (*(int *)local_318.field0_0x0 != 0) {
          LOCK();
          *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + -1;
          local_31 = *(int *)local_318.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100170de0;
        }
        QArrayData::deallocate((QArrayData *)local_318.field0_0x0,2,8);
      }
    }
LAB_100170de0:
    CVmEventBase::getEventIssuerId();
    FUN_1008015e0(param_1,&local_320,&local_2f0,&local_2f8);
    if (*(int *)local_320 != -1) {
      if (*(int *)local_320 != 0) {
        LOCK();
        *(int *)local_320 = *(int *)local_320 + -1;
        local_31 = *(int *)local_320 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170e46;
      }
      QArrayData::deallocate(local_320,2,8);
    }
LAB_100170e46:
    if (*(int *)local_2f8.field0_0x0 != -1) {
      if (*(int *)local_2f8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2f8.field0_0x0 = *(int *)local_2f8.field0_0x0 + -1;
        local_31 = *(int *)local_2f8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170e7c;
      }
      QArrayData::deallocate((QArrayData *)local_2f8.field0_0x0,2,8);
    }
LAB_100170e7c:
    if (*(int *)local_2f0.field0_0x0 != -1) {
      if (*(int *)local_2f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2f0.field0_0x0 = *(int *)local_2f0.field0_0x0 + -1;
        local_31 = *(int *)local_2f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_2f0.field0_0x0,2,8);
    }
    break;
  case 0x186da:
    local_328.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_330 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_uuid",0x16);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
    if (*(int *)local_330 != -1) {
      if (*(int *)local_330 != 0) {
        LOCK();
        *(int *)local_330 = *(int *)local_330 + -1;
        local_31 = *(int *)local_330 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170f31;
      }
      QArrayData::deallocate(local_330,2,8);
    }
LAB_100170f31:
    if (lVar6 != 0) {
      CVmEventParameter::getParamValue();
      QString::operator=(&local_328,&local_338);
      if (*(int *)local_338.field0_0x0 != -1) {
        if (*(int *)local_338.field0_0x0 != 0) {
          LOCK();
          *(int *)local_338.field0_0x0 = *(int *)local_338.field0_0x0 + -1;
          local_31 = *(int *)local_338.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100170f8e;
        }
        QArrayData::deallocate((QArrayData *)local_338.field0_0x0,2,8);
      }
    }
LAB_100170f8e:
    CVmEventBase::getEventIssuerId();
    FUN_100801640(param_1,&local_340,&local_328);
    if (*(int *)local_340 != -1) {
      if (*(int *)local_340 != 0) {
        LOCK();
        *(int *)local_340 = *(int *)local_340 + -1;
        local_31 = *(int *)local_340 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100170fed;
      }
      QArrayData::deallocate(local_340,2,8);
    }
LAB_100170fed:
    if (*(int *)local_328.field0_0x0 != -1) {
      if (*(int *)local_328.field0_0x0 != 0) {
        LOCK();
        *(int *)local_328.field0_0x0 = *(int *)local_328.field0_0x0 + -1;
        local_31 = *(int *)local_328.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_328.field0_0x0,2,8);
    }
    break;
  case 0x186dd:
    FUN_100179800(&local_3f0,param_1 + 200);
    local_3e8 = (long *)(local_3f0 + (long)local_3f0[2] * 2 + 4);
    local_3e0 = (long *)(local_3f0 + (long)local_3f0[3] * 2 + 4);
    if (local_3f0[2] != local_3f0[3]) {
      do {
        local_3d8 = 1;
        lVar6 = *(long *)*local_3e8;
        if (((lVar6 != 0) && (*(int *)(lVar6 + 4) != 0)) &&
           (lVar6 = ((long *)*local_3e8)[1], lVar6 != 0)) {
          pQVar9 = (QString *)CMessageManager::instance();
          FUN_100188480(&local_3f8,lVar6);
          CMessageManager::closeSpecificMessageBox(pQVar9,(int)&local_3f8);
          if (*(int *)local_3f8 != -1) {
            if (*(int *)local_3f8 != 0) {
              LOCK();
              *(int *)local_3f8 = *(int *)local_3f8 + -1;
              local_31 = *(int *)local_3f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001710f6;
            }
            QArrayData::deallocate(local_3f8,2,8);
          }
        }
LAB_1001710f6:
        local_3e8 = local_3e8 + 1;
      } while (local_3e8 != local_3e0);
    }
    local_3d8 = 1;
    if (*local_3f0 != -1) {
      if (*local_3f0 != 0) {
        LOCK();
        *local_3f0 = *local_3f0 + -1;
        local_31 = *local_3f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100171152;
      }
      FUN_100179430(&local_3f0,local_3f0);
    }
LAB_100171152:
    pQVar9 = (QString *)CMessageManager::instance();
    local_400 = *(QArrayData **)(param_1 + 0x68);
    if (1 < *(int *)local_400 + 1U) {
      LOCK();
      *(int *)local_400 = *(int *)local_400 + 1;
      local_31 = *(int *)local_400 != 0;
      UNLOCK();
    }
    CMessageManager::closeSpecificMessageBox(pQVar9,(int)&local_400);
    if (*(int *)local_400 != -1) {
      if (*(int *)local_400 != 0) {
        LOCK();
        *(int *)local_400 = *(int *)local_400 + -1;
        local_31 = *(int *)local_400 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_400,2,8);
    }
    break;
  case 0x186de:
    FUN_100169490(param_1,local_150,"hddConvertProgressChanged ");
    break;
  case 0x186f2:
    if (DAT_1023108f0 == (void *)0x0) {
      pvVar10 = operator_new(0x18);
      FUN_1001beb60(pvVar10);
      DAT_10226db18 = 1;
      DAT_1023108f0 = pvVar10;
    }
    FUN_1001bebc0(DAT_1023108f0,local_150);
  }
switchD_10016fc53_caseD_186a4:
  QEvent::~QEvent(local_70);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_150);
  return;
}

