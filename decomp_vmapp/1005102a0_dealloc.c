
/* Function Stack Size: 0x10 bytes */

void DeallocHook::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  objc_super local_30;
  
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_block_100bed910);
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_release_100ba25f0)(lVar3);
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (lVar3 != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_block_100bed910);
    lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
    (**(code **)(lVar3 + 0x10))(lVar3);
    (*(code *)PTR__objc_release_100ba25f0)(lVar3);
    (*(code *)puVar1)(param_1,PTR_s_setBlock__100bed918,0);
  }
  local_30.super_class = (class_t *)PTR_DeallocHook_100bedc90;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_100bed598);
  return;
}

