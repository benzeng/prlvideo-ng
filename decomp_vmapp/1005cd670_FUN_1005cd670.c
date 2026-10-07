
undefined8 FUN_1005cd670(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  QDomNode local_28 [8];
  
  uVar2 = 0x80021020;
  if ((*param_2 != 0) && (lVar1 = *(long *)(*param_2 + 0x10), lVar1 != 0)) {
    lVar1 = ___dynamic_cast(lVar1,&PTR_vtable_10111e100,&PTR_vtable_10111e120,8);
    if ((lVar1 != 0) && ((*param_3 != 0 && (lVar1 = *(long *)(*param_3 + 0x10), lVar1 != 0)))) {
      lVar1 = ___dynamic_cast(lVar1,&PTR_vtable_10111e110,&PTR_vtable_10111e120,0);
      if (lVar1 != 0) {
        QDomNode::removeChild(local_28);
        QDomNode::~QDomNode(local_28);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

