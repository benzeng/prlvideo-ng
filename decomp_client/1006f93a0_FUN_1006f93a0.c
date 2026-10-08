
void FUN_1006f93a0(QObject *param_1)

{
  undefined *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f5a40;
  puVar1 = PTR_m_instance_1021e1450;
  if (*(long **)PTR_m_instance_1021e1450 != (long *)0x0) {
    (**(code **)(**(long **)PTR_m_instance_1021e1450 + 0x20))();
  }
  *(undefined8 *)puVar1 = 0;
  if (DAT_1023109a0 != (long *)0x0) {
    (**(code **)(*DAT_1023109a0 + 0x20))();
  }
  DAT_1023109a0 = (long *)0x0;
  FUN_100720a70(param_1 + 0x48);
  FUN_10070f960(param_1 + 0x30);
  FUN_100704a10(param_1 + 0x18);
  QObject::~QObject(param_1);
  return;
}

