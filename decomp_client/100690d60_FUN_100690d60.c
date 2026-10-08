
void FUN_100690d60(long param_1)

{
  long lVar1;
  QObject *pQVar2;
  void *pvVar3;
  void *local_50;
  undefined4 local_44;
  QObject *local_40;
  undefined4 local_34;
  QObject *local_30;
  undefined4 local_24;
  
  local_24 = 1;
  pQVar2 = operator_new(0x18);
  QObject::QObject(pQVar2,(QObject *)0x0);
  lVar1 = param_1 + 0x28;
  *(undefined ***)pQVar2 = &PTR_FUN_102224ba0;
  local_30 = pQVar2;
  FUN_100691b10(lVar1,&local_24,&local_30);
  local_34 = 2;
  pQVar2 = operator_new(0x20);
  QObject::QObject(pQVar2,(QObject *)0x0);
  *(undefined ***)pQVar2 = &PTR_FUN_102224c70;
  local_40 = pQVar2;
  FUN_100691b10(lVar1,&local_34,&local_40);
  local_44 = 3;
  pvVar3 = operator_new(0x30);
  FUN_1006998c0(pvVar3);
  local_50 = pvVar3;
  FUN_100691b10(lVar1,&local_44,&local_50);
  FUN_100690e70(param_1);
  FUN_1006a6660(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_self_1021e1388);
  return;
}

