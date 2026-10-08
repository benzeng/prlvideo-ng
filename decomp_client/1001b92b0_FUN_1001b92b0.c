
void FUN_1001b92b0(QObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  CHostDesktop *this;
  long local_30 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021eeba0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  param_1[0x18] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  puVar1 = PTR_m_instance_1021e12d8;
  this = *(CHostDesktop **)PTR_m_instance_1021e12d8;
  if (this == (CHostDesktop *)0x0) {
    this = operator_new(0x18);
    CHostDesktop::CHostDesktop(this);
    *(CHostDesktop **)puVar1 = this;
    DAT_102271140 = 1;
  }
  QObject::connect(local_30,this,
                   "2displaysConfigurationChanged(CGDirectDisplayID,CGDisplayChangeSummaryFlags)",
                   param_1,
                   "1onDisplayConfigurationChanged(CGDirectDisplayID,CGDisplayChangeSummaryFlags)",0
                  );
  if (local_30[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return;
}

