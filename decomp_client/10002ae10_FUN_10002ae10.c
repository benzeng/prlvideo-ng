
void FUN_10002ae10(QObject *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined **)param_1 = &DAT_1021ed1b0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  QDateTime::QDateTime((QDateTime *)(param_1 + 0x28));
  QDateTime::QDateTime((QDateTime *)(param_1 + 0x30));
  param_1[0x44] = (QObject)0x0;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_PDLFeedbackButtonDelegate_10226a8d8,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_initWithOwner__1022697e8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  pvVar3 = operator_new(0x18);
  FUN_1007daf50(pvVar3,param_1);
  *(void **)(param_1 + 0x20) = pvVar3;
  return;
}

