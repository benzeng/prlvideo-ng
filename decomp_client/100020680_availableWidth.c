
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

double PDDeviceBarViewContaner::availableWidth(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined local_58 [16];
  double local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  dVar3 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)
                            (0,0,param_1,PTR_s_convertPoint_toView__102269500,0);
  if (param_1 == 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_38,param_1,PTR_s_bounds_1022693a0);
  }
  puVar1 = PTR__objc_msgSend_1021e1c68;
  dVar4 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)
                            (local_28,0,param_1,PTR_s_convertPoint_toView__102269500,0);
  uVar2 = (*(code *)puVar1)(param_1,PTR_s_totalItemsCount_102269508);
  if (dVar3 <= DAT_100e110d8) {
    if (param_1 == 0) {
      local_48 = 0.0;
    }
    else {
      _objc_msgSend_stret(local_58,param_1,PTR_s_bounds_1022693a0);
    }
    local_48 = local_48 - ((DAT_100e110d8 - dVar3) + DAT_100e110e0);
  }
  else {
    auVar5._8_4_ = (int)((ulong)uVar2 >> 0x20);
    auVar5._0_8_ = uVar2;
    auVar5._12_4_ = _UNK_100e11114;
    local_48 = (((double)CONCAT44(_DAT_100e11110,(int)uVar2) - _DAT_100e11120) +
               (auVar5._8_8_ - _UNK_100e11128)) * DAT_100e110d0;
    if (dVar4 - local_48 <= DAT_100e110d8) {
      local_48 = dVar4 + _DAT_100e110e8 + DAT_100e11050;
    }
  }
  return local_48;
}

