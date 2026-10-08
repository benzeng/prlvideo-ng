
void FUN_1003833e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Connection local_20 [8];
  
  QAbstractAnimation::start(*(undefined8 *)(param_1 + 0x60),0);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = QGraphicsItem::scene();
  QObject::connect(local_20,uVar1,"2finished()",uVar2,"2finished()",0);
  QMetaObject::Connection::~Connection(local_20);
  return;
}

