
void FUN_100034420(void)

{
  bool *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_58 [8];
  long local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  int local_38;
  
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_array_1022698b0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  CRingListModel::values();
  FUN_100036740(&local_50,local_58);
  local_48 = (undefined8 *)(local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8);
  local_40 = (undefined8 *)(local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8);
  local_38 = 1;
  FUN_100035ea0(local_58);
  puVar2 = PTR_s_setObject_atIndexedSubscript__1022698c0;
  if ((local_38 != 0) && (local_48 != local_40)) {
    do {
      pbVar1 = (bool *)*local_48;
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_count_102268e68);
      puVar3 = PTR__OBJC_CLASS___NSNumber_10226a848;
      uVar4 = QVariant::toInt(pbVar1);
      uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar3,PTR_s_numberWithInt__1022698b8,uVar4);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,puVar2,uVar7,uVar6);
      (*(code *)PTR__objc_release_1021e1c70)(uVar7);
      local_48 = local_48 + 1;
      local_38 = 1;
    } while (local_48 != local_40);
  }
  FUN_100035ea0(&local_50);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

