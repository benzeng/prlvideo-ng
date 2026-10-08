
objc_object * FUN_10008e070(undefined8 param_1,undefined8 param_2,QObject *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  objc_object *poVar4;
  CSignalSelectorBinding *pCVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  QObject *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  QObject *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  QObject *local_30;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___PDProgress_10226aa60,PTR_s_new_102269070);
  poVar4 = (objc_object *)(*(code *)puVar2)(uVar3,PTR_s_autorelease_102269a10);
  uVar3 = (*(code *)puVar2)(PTR_PDProgressOperation_10226aa70,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_initWithOperation__10226a158,param_3);
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_autorelease_102269a10);
  _objc_setAssociatedObject(poVar4,&DAT_100e139c0,uVar3,0x301);
  pCVar5 = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar5,param_3,"2progressChanged(int)",poVar4,
             (objc_selector *)PTR_s_updateProgress_10226a160);
  pCVar5 = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar5,param_3,"2nameChanged(QString)",poVar4,
             (objc_selector *)PTR_s_updateName_10226a168);
  pCVar5 = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar5,param_3,"2descriptionChanged(QString)",poVar4,
             (objc_selector *)PTR_s_updateDescription_10226a170);
  pCVar5 = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar5,param_3,"2pausableChanged(bool)",poVar4,
             (objc_selector *)PTR_s_updatePausable_10226a178);
  pCVar5 = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar5,param_3,"2cancellableChanged(bool)",poVar4,
             (objc_selector *)PTR_s_updateCancellable_10226a180);
  pCVar5 = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar5,param_3,"2stateChanged(CAbstractProgressOperation::State)",poVar4,
             (objc_selector *)PTR_s_syncState_10226a188);
  (*(code *)puVar2)(poVar4,PTR_s_updateProgress_10226a160);
  (*(code *)puVar2)(poVar4,PTR_s_updateName_10226a168);
  (*(code *)puVar2)(poVar4,PTR_s_updateDescription_10226a170);
  (*(code *)puVar2)(poVar4,PTR_s_updatePausable_10226a178);
  (*(code *)puVar2)(poVar4,PTR_s_updateCancellable_10226a180);
  (*(code *)puVar2)(poVar4,PTR_s_syncState_10226a188);
  puVar1 = PTR___NSConcreteStackBlock_1021e1280;
  local_50 = PTR___NSConcreteStackBlock_1021e1280;
  local_48 = 0xc0000000;
  local_44 = 0;
  local_40 = FUN_10008e340;
  local_38 = &DAT_1021edfc0;
  local_30 = param_3;
  (*(code *)puVar2)(poVar4,PTR_s_setPausingHandler__10226a190,&local_50);
  local_78 = puVar1;
  local_70 = 0xc0000000;
  local_6c = 0;
  local_68 = FUN_10008e360;
  local_60 = &DAT_1021edfe0;
  local_58 = param_3;
  (*(code *)puVar2)(poVar4,PTR_s_setResumingHandler__10226a198,&local_78);
  local_a0 = puVar1;
  local_98 = 0xc0000000;
  local_94 = 0;
  local_90 = FUN_10008e380;
  local_88 = &DAT_1021ee000;
  local_80 = param_3;
  (*(code *)puVar2)(poVar4,PTR_s_setCancellationHandler__10226a1a0,&local_a0);
  return poVar4;
}

