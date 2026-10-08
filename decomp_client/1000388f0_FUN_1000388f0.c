
void FUN_1000388f0(QObject *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  
  *(undefined **)param_1 = &DAT_1021ed290;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,PTR_s_defaultCenter_102268ba8)
  ;
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar2,PTR_s_removeObserver__102268c30,*(undefined8 *)(param_1 + 0x18));
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x10),PTR_s_close_102269920);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  FUN_1007334c0(*(undefined8 *)(param_1 + 0x28),0);
  pQVar3 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000389a1;
      pQVar3 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000389a1:
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(*(undefined8 *)(param_1 + 0x18));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x10));
  QObject::~QObject(param_1);
  return;
}

