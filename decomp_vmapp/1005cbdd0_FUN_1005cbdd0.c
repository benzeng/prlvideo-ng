
undefined8 FUN_1005cbdd0(undefined8 param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QDomNode local_30 [8];
  QDomNode local_28 [8];
  
  FUN_1005c2cc0(local_28,param_1);
  cVar1 = QDomNode::isNull();
  uVar3 = 0x80021020;
  if (((cVar1 == '\0') && (*param_2 != 0)) && (lVar2 = *(long *)(*param_2 + 0x10), lVar2 != 0)) {
    lVar2 = ___dynamic_cast(lVar2,&PTR_vtable_10111e100,&PTR_vtable_10111e120,8);
    if (lVar2 != 0) {
      QDomNode::removeChild(local_30);
      uVar3 = 0;
      QDomNode::~QDomNode(local_30);
    }
  }
  QDomNode::~QDomNode(local_28);
  return uVar3;
}

