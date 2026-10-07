
void FUN_100798260(QObject *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1011a59e0;
  *(undefined ***)(param_1 + 0x10) = &PTR____cxa_pure_virtual_1011a5a50;
  *(undefined ***)(param_1 + 0x18) = &PTR____cxa_pure_virtual_1011a5ad8;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("",0);
  *(undefined ***)(param_1 + 0x20) = &PTR____cxa_pure_virtual_1011a57e0;
  puVar2 = operator_new(4);
  *puVar2 = 0x14;
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar3 == (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = puVar2;
    *puVar3 = &PTR_FUN_10110ceb0;
  }
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(QArrayData **)(param_1 + 0x38) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_100792f50(param_1 + 0x50,param_2);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100798385;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100798385:
  *(undefined ***)param_1 = &PTR_FUN_100bcf9a0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcfb10;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_100bcfb98;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_100bcfc18;
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_100bcfc40;
  pvVar4 = operator_new(0xf0);
  FUN_1007b8860(pvVar4,param_1,0,0,param_4);
  *(void **)(param_1 + 0x80) = pvVar4;
  FUN_1007984f0();
  return;
}

