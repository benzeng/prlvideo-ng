
void FUN_1001a5e70(QObject *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fe2f0;
  uVar1 = _CFNotificationCenterGetDistributedCenter();
  _CFNotificationCenterRemoveObserver(uVar1,param_1,0,0);
  (*DAT_1023119d0)(FUN_1001a5f00,0x2db,param_1);
  (*DAT_1023119d0)(FUN_1001a5f00,0x4b4,param_1);
  FUN_10005ae20(param_1);
  QObject::~QObject(param_1);
  return;
}

