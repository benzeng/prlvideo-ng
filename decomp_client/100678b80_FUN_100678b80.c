
void FUN_100678b80(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QVariant local_28;
  
  *(undefined1 *)(param_1 + 0x161) = 1;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar2 = FUN_10016f500(uVar2);
  FUN_10061abe0(&local_28,uVar2,0xf);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_28);
  if (cVar1 == '\0') {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
    }
    uVar2 = FUN_10016f500(uVar2);
    cVar1 = FUN_10061b500(uVar2,0x20000);
    if (cVar1 == '\0') {
      FUN_10067a130(param_1,2);
      return;
    }
    uVar2 = 0xb;
  }
  else {
    uVar2 = 3;
  }
  CAbstractWizardModel::goToPage(param_1,uVar2,0);
  return;
}

