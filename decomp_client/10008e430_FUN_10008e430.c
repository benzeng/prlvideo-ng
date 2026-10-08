
void FUN_10008e430(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_operation_10226a1a8);
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (lVar2 != 0) {
    local_20 = *(QArrayData **)(lVar2 + 0x20);
    if (1 < *(int *)local_20 + 1U) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_13 = *(int *)local_20 != 0;
      UNLOCK();
    }
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar1,PTR_s_stringWithQString__102268d00,&local_20);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setLocalizedName__10226a090,uVar3);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
        local_12 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return;
}

