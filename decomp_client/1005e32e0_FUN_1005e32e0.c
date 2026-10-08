
void FUN_1005e32e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    lVar1 = FUN_1005ec990(param_1 + 0x38);
    if (*(long *)(lVar1 + 0xa0) != 0) {
      uVar2 = CDeclarativeWizardPage::pageContentItem();
      QMetaObject::invokeMethod
                (uVar2,"updateDynamicAppliances",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                );
    }
  }
  return;
}

