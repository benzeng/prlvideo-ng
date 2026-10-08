
void FUN_100353aa0(QObject *param_1,QObject *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  Connection local_40 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d720;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  QImage::QImage((QImage *)(param_1 + 0x20));
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x48) = param_4[1];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *param_3;
  *(undefined4 *)(param_1 + 0x58) = param_5;
  QTimer::QTimer((QTimer *)(param_1 + 0x60),(QObject *)0x0);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 1;
  FUN_100353c30(param_1);
  QObject::connect(local_40,(QTimer *)(param_1 + 0x60),"2timeout()",param_1,"1requestNextImage()",0)
  ;
  QMetaObject::Connection::~Connection(local_40);
  return;
}

