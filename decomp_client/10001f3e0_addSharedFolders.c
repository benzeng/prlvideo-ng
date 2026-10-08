
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarViewContaner::addSharedFolders(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  lVar3 = _vm;
  puVar2 = PTR__objc_msgSend_1021e1c68;
  if (((*(long *)(param_1 + _vm) != 0) && (*(int *)(*(long *)(param_1 + _vm) + 4) != 0)) &&
     (*(long *)(_vm + 8 + param_1) != 0)) {
    dVar7 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_buttonsWidth_102269448);
    (*(code *)puVar2)(dVar7 + DAT_100e110c0,param_1,PTR_s_setButtonsWidth__1022693c8);
    dVar7 = (double)(*(code *)puVar2)(param_1,PTR_s_buttonsWidth_102269448);
    if (dVar7 < 0.0) {
      return;
    }
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR_PDSharedFoldersBarButtonItem_10226a7f8,PTR_s_alloc_102268b58);
    lVar1 = *(long *)(param_1 + lVar3);
    uVar5 = 0;
    if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar5 = *(undefined8 *)(lVar3 + 8 + param_1);
    }
    uVar5 = (*(code *)puVar2)(uVar4,PTR_s_initWithVm__102268e40,uVar5);
    (*(code *)puVar2)(param_1,PTR_s_setSharedFoldersButton__102269430,uVar5);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_sharedFoldersButton_102269460);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_addSubview__102268d70,uVar6);
    puVar2 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    (*(code *)puVar2)(uVar4);
    (*(code *)puVar2)(uVar5);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"VM object does not exist!");
  return;
}

