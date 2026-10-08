
/* Function Stack Size: 0x10 bytes */

void DeallocHook::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  objc_super local_30;
  
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_block_10226a6c8);
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_release_1021e1c70)(lVar3);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar3 != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_block_10226a6c8);
    lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
    (**(code **)(lVar3 + 0x10))(lVar3);
    (*(code *)PTR__objc_release_1021e1c70)(lVar3);
    (*(code *)puVar1)(param_1,PTR_s_setBlock__10226a6d0,0);
  }
  local_30.super_class = (class_t *)PTR_DeallocHook_10226ac50;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_102268c60);
  return;
}

