
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000109a0(ID param_1)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58 [4];
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  
  if (param_1 == 0) {
    local_58[2] = 0.0;
    local_58[3] = 0.0;
    local_58[0] = 0.0;
    local_58[1] = 0.0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    dStack_70 = 0.0;
    local_88 = 0.0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    dStack_a0 = 0.0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_28 = _DAT_100e11030;
    dStack_20 = _UNK_100e11038;
    dVar1 = _DAT_100e11020;
    dVar2 = _UNK_100e11028;
  }
  else {
    _objc_msgSend_stret((undefined *)local_58,param_1,PTR_s_frame_102268b50);
    dVar4 = local_58[0];
    _objc_msgSend_stret((undefined *)&local_78,param_1,PTR_s_frame_102268b50);
    dVar2 = dStack_70;
    _objc_msgSend_stret((undefined *)&local_98,param_1,PTR_s_frame_102268b50);
    dVar1 = local_88;
    _objc_msgSend_stret((undefined *)&local_b8,param_1,PTR_s_frame_102268b50);
    local_28 = dVar1 + _DAT_100e11030;
    dStack_20 = dStack_a0 + _UNK_100e11038;
    dVar1 = dVar4 + _DAT_100e11020;
    dVar2 = dVar2 + _UNK_100e11028;
  }
  puVar3 = PTR__objc_msgSend_1021e1c68;
  local_38._8_4_ = SUB84(dVar2,0);
  local_38._0_8_ = dVar1;
  local_38._12_4_ = (int)((ulong)dVar2 >> 0x20);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_childWindow);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar3)(uVar5,PTR_s_setFrame_display__102268c00,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  return;
}

