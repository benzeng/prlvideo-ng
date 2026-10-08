
void FUN_10005edb0(QObject *param_1,undefined8 param_2)

{
  QObject *pQVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  QObject *local_38;
  
  uVar2 = 0;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ed6d0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pQVar1 = *(QObject **)PTR_self_1021e1388;
  if (pQVar1 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = pQVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_10005ef30(param_1);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,PTR_s_defaultCenter_102268ba8)
  ;
  uVar2 = *(undefined8 *)PTR__NSWindowDidBecomeKeyNotification_1021e1158;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSOperationQueue_10226a920,PTR_s_mainQueue_102269910);
  local_58 = PTR___NSConcreteStackBlock_1021e1280;
  local_50 = 0xc0000000;
  local_4c = 0;
  local_48 = FUN_10005f2e0;
  local_40 = &DAT_1021ed730;
  local_38 = param_1;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,PTR_s_addObserverForName_object_queue__1022692e0,uVar2,0,uVar4,&local_58)
  ;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  return;
}

