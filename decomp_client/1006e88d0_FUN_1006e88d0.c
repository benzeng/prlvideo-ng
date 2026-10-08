
void FUN_1006e88d0(QObject *param_1,QObject *param_2)

{
  char cVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f57f0;
  *(QObject **)(param_1 + 0x10) = param_2;
  CProductUpdateInfo::CProductUpdateInfo((CProductUpdateInfo *)(param_1 + 0x18),1);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    CProductUpdateInfo::load();
  }
  return;
}

