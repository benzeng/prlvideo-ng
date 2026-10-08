
void FUN_100037f30(QObject *param_1,undefined8 param_2)

{
  QObject *pQVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  int *local_a0;
  QObject *local_98;
  QArrayData *local_90;
  Connection local_88 [8];
  Connection local_80 [8];
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined **)param_1 = &DAT_1021ed290;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_100188480(param_1 + 0x20,param_2);
  puVar2 = PTR_deleteLater_1021e1518;
  local_68 = PTR_destroyed_1021e1528;
  local_60 = 0;
  local_78 = PTR_deleteLater_1021e1518;
  local_70 = 0;
  puVar3 = operator_new(0x20);
  *puVar3 = 1;
  *(code **)(puVar3 + 2) = FUN_100039b20;
  *(undefined **)(puVar3 + 4) = puVar2;
  *(undefined8 *)(puVar3 + 6) = 0;
  QObject::connectImpl
            (local_80,param_2,&local_68,param_1,&local_78,puVar3,0,0,PTR_staticMetaObject_1021e1520)
  ;
  QMetaObject::Connection::~Connection(local_80);
  pvVar4 = operator_new(0x18);
  FUN_1007333f0(pvVar4,param_1);
  *(void **)(param_1 + 0x28) = pvVar4;
  FUN_1007334c0(pvVar4,param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  local_48 = FUN_100856530;
  local_40 = 0;
  local_58 = FUN_100038540;
  local_50 = 0;
  puVar3 = operator_new(0x20);
  *puVar3 = 1;
  *(code **)(puVar3 + 2) = FUN_100039b80;
  *(code **)(puVar3 + 4) = FUN_100038540;
  *(undefined8 *)(puVar3 + 6) = 0;
  QObject::connectImpl
            (local_88,uVar5,&local_48,param_1,&local_58,puVar3,0,0,&PTR_staticMetaObject_1022273e0);
  QMetaObject::Connection::~Connection(local_88);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___PDResourceUsagePanelController_10226a918,
                     PTR_s_alloc_102268b58);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                     param_1 + 0x20);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_initWithVmUuid__102269900,uVar6);
  pQVar1 = param_1 + 0x10;
  uVar5 = *(undefined8 *)pQVar1;
  *(undefined8 *)pQVar1 = uVar7;
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  (*(code *)puVar2)(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = *(undefined8 *)pQVar1;
  FUN_10018d830(&local_90,param_2);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_stringWithQString__102268d00,&local_90);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setVmName__102269908,uVar6);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000381d3;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1000381d3:
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,PTR_s_defaultCenter_102268ba8)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = *(undefined8 *)PTR__NSWindowWillCloseNotification_1021e1180;
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)pQVar1,PTR_s_window_102268c08);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSOperationQueue_10226a920,PTR_s_mainQueue_102269910);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  local_c0 = PTR___NSConcreteStackBlock_1021e1280;
  local_b8 = 0xc6000000;
  local_b4 = 0;
  local_b0 = FUN_100038850;
  local_a8 = &DAT_1021ed2f0;
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    local_31 = *piVar8 != 0;
    UNLOCK();
  }
  local_a0 = piVar8;
  local_98 = param_1;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar6,PTR_s_addObserverForName_object_queue__1022692e0,uVar5,uVar7,uVar9,
                     &local_c0);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  (*(code *)puVar2)(uVar9);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_showWindow__102269918,0);
  if (local_a0 != (int *)0x0) {
    LOCK();
    *local_a0 = *local_a0 + -1;
    local_31 = *local_a0 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_a0 != (int *)0x0)) {
      operator_delete(local_a0);
    }
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar8);
    }
  }
  return;
}

