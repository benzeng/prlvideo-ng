
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarViewContaner::viewFrameChanged(ID param_1,SEL param_2)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  undefined local_88 [32];
  undefined local_68 [16];
  double local_58;
  undefined local_48 [16];
  double local_38;
  
  bVar2 = 0;
  uVar7 = 0;
  if (*(long *)(param_1 + _vm) != 0) {
    if (*(int *)(*(long *)(param_1 + _vm) + 4) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = 0;
      uVar7 = 0;
      if (*(long *)(_vm + 8 + param_1) == 0) goto LAB_100020407;
      bVar2 = FUN_10011a720();
    }
    uVar7 = (uint)bVar2;
  }
LAB_100020407:
  _objc_msgSend_stret(local_48,param_1,PTR_s_bounds_1022693a0);
  cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_animationIsInProgress_1022694a0);
  if (cVar3 == '\0') {
    lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_lastUpdateForFrameWidth_1022694a8);
    if ((lVar4 == (long)local_38) &&
       (cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (param_1,PTR_s_lastUpdateForDevicesAvailable_1022694b0),
       (int)cVar3 == uVar7)) {
      return;
    }
    puVar1 = PTR__objc_msgSend_1021e1c68;
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_setLastUpdateForFrameWidth__1022694b8,(long)local_38);
    (*(code *)puVar1)(param_1,PTR_s_setLastUpdateForDevicesAvailable_1022694c0,bVar2);
    (*(code *)puVar1)(param_1,PTR_s_updateInstrinsicSize_1022694c8);
    _objc_msgSend_stret(local_68,param_1,PTR_s_bounds_1022693a0);
    fVar9 = (float)_floorf(CONCAT44((int)((ulong)(local_58 / DAT_100e110d0) >> 0x20),
                                    (float)(local_58 / DAT_100e110d0)));
    uVar8 = (long)fVar9;
    if (DAT_100e11100 <= fVar9) {
      uVar8 = (long)(fVar9 - DAT_100e11100) ^ 0x8000000000000000;
    }
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_lastUpdateForItemsCount_1022694d0);
    if (uVar5 == uVar8) {
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      _objc_msgSend_stret(local_88,param_1,PTR_s_rectForDeviceContainer_1022693a8);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setFrame__102268fc0);
      (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    }
    else {
      (*(code *)puVar1)(param_1,PTR_s_setLastUpdateForItemsCount__1022694d8,uVar8);
      (*(code *)puVar1)(param_1,PTR_s_updateContainer_102269380);
    }
  }
  return;
}

