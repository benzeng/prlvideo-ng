
void FUN_100020ad0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID self;
  undefined8 uVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = DAT_100e110f8;
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar3 = DAT_100e110f0;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,param_2,PTR_s_setDuration__102269520);
  local_80 = 0;
  lVar1 = param_1 + 0x20;
  if (*(char *)(param_1 + 0x29) == '\0') {
    uVar3 = _objc_loadWeakRetained(lVar1);
    local_80 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_availableWidth_1022694e8);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
  uVar3 = _objc_loadWeakRetained(lVar1);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_internalContainer_1022693c0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_animator_102269528);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = _objc_loadWeakRetained(lVar1);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_availableWidth_1022694e8);
  self = _objc_loadWeakRetained(lVar1);
  if (self == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self,PTR_s_bounds_1022693a0);
  }
  local_50 = local_80;
  local_48 = 0;
  local_40 = uVar7;
  local_38 = uStack_60;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setFrame__102268fc0);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(self);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  return;
}

