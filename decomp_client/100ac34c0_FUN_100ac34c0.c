
void FUN_100ac34c0(QObject *param_1)

{
  FUN_100ad5870(param_1,0);
  FUN_100ad4fa0(param_1);
  QObject::disconnect(*(QObject **)(param_1 + 0x18),"2ActiveSpaceChanged()",param_1,
                      "1OnActiveSpaceChanged()");
  FUN_100ac7cc0(param_1 + 0xaf0);
  FUN_100ac7cc0(param_1 + 0xaf8);
  FUN_100ac7e30(param_1 + 0xb00);
  FUN_100ac9160(*(undefined8 *)(param_1 + 0xa30));
  QTimer::stop();
  QTimer::stop();
  QTimer::stop();
  return;
}

