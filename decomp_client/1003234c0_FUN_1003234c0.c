
void FUN_1003234c0(QObject *param_1,QObject *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220b920;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  QImage::QImage((QImage *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xc0) = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined **)(param_1 + 0xd0) = PTR_shared_null_1021e1288;
  param_1[0xd8] = (QObject)0x0;
  FUN_100323740(param_1);
  FUN_100323840(param_1);
  return;
}

