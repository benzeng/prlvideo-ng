
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarViewContaner::addDevices(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  Data *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  lVar7 = _vm;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"VM object does not exist!");
    return;
  }
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_new_102269070);
  (*(code *)puVar1)(param_1,PTR_s_setDeviceButtons__102269400,uVar2);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  lVar5 = *(long *)(param_1 + lVar7);
  uVar2 = 0;
  if ((lVar5 != 0) && (uVar2 = 0, *(int *)(lVar5 + 4) != 0)) {
    uVar2 = *(undefined8 *)(lVar7 + 8 + param_1);
  }
  uVar2 = FUN_10018f4e0(uVar2);
  plVar3 = (long *)FUN_1007c65a0(uVar2);
  local_40 = (Data *)*plVar3;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar5 = (long)*(int *)(local_40 + 8);
      lVar7 = *plVar3;
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_40 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_40 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar5 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  if (0 < *(int *)(local_40 + 0xc) - *(int *)(local_40 + 8)) {
    lVar7 = (long)(*(int *)(local_40 + 0xc) - *(int *)(local_40 + 8)) + 1;
    do {
      puVar1 = PTR_s_buttonsWidth_102269448;
      dVar8 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_buttonsWidth_102269448);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (dVar8 + DAT_100e110c0,param_1,PTR_s_setButtonsWidth__1022693c8);
      dVar8 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(param_1,puVar1);
      if (dVar8 < 0.0) break;
      uVar2 = *(undefined8 *)(local_40 + (*(int *)(local_40 + 8) + lVar7) * 8);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR_PDDeviceBarButtonItem_10226a7f0,PTR_s_alloc_102268b58);
      uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_initWithActionSet__102268ec0,uVar2)
      ;
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_addSubview__102268d70,uVar2);
      (*(code *)PTR__objc_release_1021e1c70)(uVar4);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceButtons_102269458);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_insertObject_atIndex__102269080,uVar2,0);
      puVar1 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar4);
      (*(code *)puVar1)(uVar2);
      lVar7 = lVar7 + -1;
    } while (1 < lVar7);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

