
void FUN_1004215a0(long param_1)

{
  undefined8 uVar1;
  Connection local_78 [8];
  Connection local_70 [8];
  Connection local_68 [8];
  Connection local_60 [8];
  Connection local_58 [8];
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [8];
  Connection local_28 [8];
  
  uVar1 = 0;
  QObject::connect(local_28,*(undefined8 *)(param_1 + 0xb8),"2resized()",param_1,
                   "1updateControlWidgets()",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xd8),"2accepted()",param_1,
                   "1accept()",0);
  QMetaObject::Connection::~Connection(local_30);
  QObject::connect(local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xd8),"2rejected()",param_1,
                   "1reject()",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x58),
                   "2valueChanged(double)",param_1,"1onSpinBoxValueChanged(double)",0);
  QMetaObject::Connection::~Connection(local_40);
  QObject::connect(local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x60),
                   "2memoryValueChanged(int)",param_1,"1onSliderValueChanged(int)",0);
  QMetaObject::Connection::~Connection(local_48);
  QObject::connect(local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x70),"2clicked(bool)",
                   param_1,"1onExpandingCheckBoxClicked(bool)",0);
  QMetaObject::Connection::~Connection(local_50);
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
  }
  QObject::connect(local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x68),"2clicked(bool)",uVar1
                   ,"1slotChangeSplitted(bool)",0);
  QMetaObject::Connection::~Connection(local_58);
  QObject::connect(local_60,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),
                   "2currentItemChanged(CPrlFileDevSelectorItem::FileDevSelectorItemType, QString, QString)"
                   ,param_1,
                   "1onCurrentItemChanged(CPrlFileDevSelectorItem::FileDevSelectorItemType, QString, QString)"
                   ,0);
  QMetaObject::Connection::~Connection(local_60);
  uVar1 = CPrlFileDevSelectorWidget::getFileDevSelector();
  QObject::connect(local_68,uVar1,"2beforeBrowse()",param_1,"1onBeforeBrowse()",0);
  QMetaObject::Connection::~Connection(local_68);
  uVar1 = CPrlFileDevSelectorWidget::getFileDevSelector();
  QObject::connect(local_70,uVar1,"2afterBrowse()",param_1,"1onAfterBrowse()",0);
  QMetaObject::Connection::~Connection(local_70);
  QObject::connect(local_78,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),
                   "2currentIndexChanged(int, int)",param_1,"1onTypeChanged(int, int)",0);
  QMetaObject::Connection::~Connection(local_78);
  return;
}

