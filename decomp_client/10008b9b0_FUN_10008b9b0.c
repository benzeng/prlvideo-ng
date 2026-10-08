
void FUN_10008b9b0(long param_1)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_10008a170(*(undefined8 *)(param_1 + 0x10));
  puVar2 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),PTR_s_setProgress__10226a088,0);
  (*(code *)puVar2)(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),PTR_s_setSelectable__1022690c8
                    ,1);
  lVar3 = *(long *)(param_1 + 0x10);
  pvVar1 = *(void **)(lVar3 + 0x40);
  if (pvVar1 != (void *)0x0) {
    FUN_10008c830(pvVar1);
    operator_delete(pvVar1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  *(undefined8 *)(lVar3 + 0x40) = 0;
  FUN_100867860(param_1);
  return;
}

