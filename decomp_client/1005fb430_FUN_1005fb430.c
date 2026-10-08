
void FUN_1005fb430(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  QVariant local_40;
  
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_40);
  uVar3 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  lVar5 = param_1 + 0x38;
  uVar1 = FUN_1005ec990(lVar5);
  iVar4 = FUN_100358a60(uVar3);
  FUN_1005b9840(uVar1,iVar4 != 3);
  lVar2 = FUN_1005ec990(lVar5);
  *(undefined4 *)(lVar2 + 0x164) = uVar3;
  lVar2 = FUN_1005ec9b0(lVar5);
  lVar5 = FUN_1005ec9d0(lVar5);
  if ((lVar2 != 0) && (lVar5 != 0)) {
    FUN_1001bc010(uVar3,lVar2,lVar5);
  }
  CAbstractWizardPage::leavePage(param_1,param_2);
  return;
}

