
/* Function Stack Size: 0x10 bytes */

CGRect * PDDeviceBarViewContaner::rectForDeviceContainer
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined local_88 [24];
  double dStack_70;
  undefined local_68 [24];
  double dStack_50;
  undefined local_48 [16];
  double local_38;
  
  cVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceListVisible_1022694e0);
  puVar3 = PTR__objc_msgSend_1021e1c68;
  if (cVar4 == '\0') {
    dVar1 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_availableWidth_1022694e8);
    dVar2 = (double)(*(code *)puVar3)(param_1,PTR_s_availableWidth_1022694e8);
    if (param_1 == 0) {
      dStack_50 = 0.0;
    }
    else {
      _objc_msgSend_stret(local_88,param_1,PTR_s_bounds_1022693a0);
      dStack_50 = dStack_70;
    }
    (__return_storage_ptr__->field0_0x0).field0_0x0 = dVar1;
    (__return_storage_ptr__->field0_0x0).field1_0x8 = 0.0;
    (__return_storage_ptr__->field1_0x10).field0_0x0 = dVar2;
  }
  else {
    if (param_1 == 0) {
      uVar5 = SUB84(DAT_100e110d0,0);
      uVar6 = (undefined4)((ulong)DAT_100e110d0 >> 0x20);
      dStack_50 = 0.0;
    }
    else {
      _objc_msgSend_stret(local_48,param_1,PTR_s_bounds_1022693a0);
      uVar5 = SUB84(DAT_100e110d0,0);
      uVar6 = (undefined4)((ulong)DAT_100e110d0 >> 0x20);
      if (DAT_100e110d0 <= local_38) {
        uVar5 = SUB84(local_38,0);
        uVar6 = (undefined4)((ulong)local_38 >> 0x20);
      }
      _objc_msgSend_stret(local_68,param_1,PTR_s_bounds_1022693a0);
    }
    (__return_storage_ptr__->field0_0x0).field1_0x8 = 0.0;
    (__return_storage_ptr__->field0_0x0).field0_0x0 = 0.0;
    (__return_storage_ptr__->field1_0x10).field0_0x0 = (double)CONCAT44(uVar6,uVar5);
  }
  (__return_storage_ptr__->field1_0x10).field1_0x8 = dStack_50;
  return __return_storage_ptr__;
}

