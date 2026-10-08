
void FUN_1003fb170(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  QVariant local_58;
  QVariant local_48;
  uint local_34;
  
  lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1470);
  if (lVar4 != 0) {
    QObject::property((char *)&local_48);
    if (DAT_102273e70 == 0) {
      DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
    }
    uVar7 = DAT_102273e70;
    uVar3 = QVariant::userType();
    if (uVar7 == uVar3) {
      puVar5 = (uint *)QVariant::constData();
      uVar7 = *puVar5;
    }
    else {
      cVar1 = QVariant::convert((int)&local_48,(void *)(ulong)uVar7);
      uVar7 = 0;
      if (cVar1 != '\0') {
        uVar7 = local_34;
      }
    }
    QObject::property((char *)&local_58);
    uVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_58);
    CPrlFileDevSelectorWidget::setDisplayShortNames(SUB81(lVar4,0));
    if ((uVar7 < 0xc) && ((0xc68U >> (uVar7 & 0x1f) & 1) != 0)) {
      lVar6 = CPrlFileDevSelectorWidget::getFileDevSelector();
      *(undefined1 *)(lVar6 + 0x88) = 1;
    }
    lVar6 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
    if (lVar6 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    }
    else {
      FUN_1003fb300(param_1,lVar4,*(undefined8 *)(param_1 + 0x18),uVar7,uVar2,param_3);
    }
    QVariant::~QVariant(&local_48);
  }
  return;
}

