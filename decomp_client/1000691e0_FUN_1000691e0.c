
undefined8 FUN_1000691e0(QObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  int iVar4;
  undefined8 uVar5;
  QObject *this;
  undefined8 uVar6;
  long lVar7;
  QWidget *pQVar8;
  bool bVar9;
  QObject *pQVar10;
  int *local_58;
  QWidget *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_10226a8d0;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                     param_1 + 0x48);
  uVar5 = (*(code *)puVar1)(puVar2,PTR_s_fileURLWithPath__1022699c8,uVar5);
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined **)this = &DAT_10226c5a0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___PDFDocument_10226a9d8,PTR_s_alloc_102268b58);
  uVar5 = (*(code *)puVar1)(uVar6,PTR_s_initWithURL__102269c50,uVar5);
  *(undefined8 *)(this + 0x10) = uVar5;
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSPrintInfo_10226a9e0,PTR_s_sharedPrintInfo_102269c58)
  ;
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_dictionary_1022698f0);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_mutableCopy_102269158);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSPrintInfo_10226a9e0,PTR_s_alloc_102268b58);
  uVar6 = (*(code *)puVar1)(uVar6,PTR_s_initWithDictionary__102269c60,uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_release_1022699b8);
  puVar2 = PTR__OBJC_CLASS___NSPrinter_10226a9e8;
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                            param_1 + 0x28);
  lVar7 = (*(code *)puVar1)(puVar2,PTR_s_printerWithName__102269c68,uVar5);
  puVar2 = PTR__OBJC_CLASS___NSPrinter_10226a9e8;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar7 == 0) {
    pQVar10 = param_1 + 0x20;
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00);
    lVar7 = (*(code *)puVar1)(puVar2,PTR_s_printerWithName__102269c68,uVar5);
    if (lVar7 == 0) {
      QString::toUtf8();
      pQVar3 = local_40;
      lVar7 = *(long *)(local_40 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"Can\'t create printer with id %s and name %s",
                    pQVar3 + lVar7,local_48 + *(long *)(local_48 + 0x10),pQVar10);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000695df;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_1000695df:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100069384;
        }
        QArrayData::deallocate(local_40,1,8);
      }
      goto LAB_100069384;
    }
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setPrinter__102269c70,lVar7);
LAB_100069384:
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (0 < *(int *)(param_1 + 0x44)) {
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_PMPrintSettings_102269c78);
    iVar4 = _PMSetCopies(uVar5,*(undefined4 *)(param_1 + 0x44),0);
    if (iVar4 != 0) {
      FUN_100df99c0("","prl_client_app",0,"Can\'t set number of copies: %d",
                    *(undefined4 *)(param_1 + 0x44));
    }
  }
  lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(this + 0x10),PTR_s_printOperationForPrintInfo_scali_102269c80,
                     uVar6,0,1);
  *(long *)(this + 0x20) = lVar7;
  if (lVar7 != 0) {
    (*(code *)puVar1)(lVar7,PTR_s_retain_102269a88);
    (*(code *)puVar1)(*(undefined8 *)(this + 0x20),PTR_s_setShowsPrintPanel__102269c88,1);
    (*(code *)puVar1)(*(undefined8 *)(this + 0x20),PTR_s_setShowsProgressPanel__102269c90,1);
    lVar7 = FUN_1002cdc80(param_1);
    bVar9 = true;
    if (lVar7 != 0) {
      uVar5 = FUN_1002cdc80(param_1);
      uVar5 = FUN_10018c280(uVar5);
      iVar4 = FUN_100319ae0(uVar5);
      bVar9 = iVar4 != 3;
    }
    uVar5 = FUN_100370280();
    FUN_100370e30(&local_58,uVar5,param_1 + 0x18,DAT_100e152b8);
    if (local_58 != (int *)0x0) {
      pQVar8 = (QWidget *)0x0;
      if (local_58[1] != 0) {
        pQVar8 = local_50;
      }
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_58 != (int *)0x0)) {
        operator_delete(local_58);
      }
      if (((bool)(bVar9 & pQVar8 != (QWidget *)0x0)) &&
         (lVar7 = MacUtils::getWindowRef(pQVar8), lVar7 != 0)) {
        CAbstractTask::setWaitForSubTaskCompletion();
        uVar5 = (*(code *)puVar1)(PTR_PrintOperationDelegate_10226a9f0,PTR_s_alloc_102268b58);
        uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_102268ca8);
        *(undefined8 *)(this + 0x18) = uVar5;
        (*(code *)puVar1)(*(undefined8 *)(this + 0x20),
                          PTR_s_runOperationModalForWindow_deleg_102269ca0,lVar7,uVar5,
                          PTR_s_printOperationDidRun_success_con_102269c98,param_1);
        return 0;
      }
    }
    (*(code *)puVar1)(*(undefined8 *)(this + 0x20),PTR_s_setCanSpawnSeparateThread__102269ca8,1);
    (*(code *)puVar1)(*(undefined8 *)(this + 0x20),PTR_s_runOperation_102269cb0);
    return 0;
  }
  return 0x80000009;
}

