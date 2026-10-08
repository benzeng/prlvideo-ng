
void FUN_1005f2e80(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  long local_48;
  QVariant local_40;
  
  if ((param_2 != 0) &&
     ((lVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38), *(int *)(lVar3 + 0x50) != 4 ||
      (*(int *)(param_2 + 0x10) == 0x80f)))) {
    if (*(int *)(param_2 + 0x80) == 3) {
      iVar6 = 0;
    }
    else {
      iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 8);
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0xc);
      iVar6 = iVar1 - iVar2;
      if ((*(int *)(param_2 + 0x80) == 1) && (lVar3 = 0, iVar2 < iVar1)) {
        do {
          lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220780);
          if (*(int *)(lVar4 + 0x80) != 3) {
            iVar6 = (int)lVar3;
            break;
          }
          lVar3 = lVar3 + 1;
          lVar4 = *(long *)(param_1 + 0x18);
        } while (lVar3 < (long)*(int *)(lVar4 + 0xc) - (long)*(int *)(lVar4 + 8));
      }
    }
    lVar3 = CDeclarativeWizardPage::pageContentItem();
    if (lVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0x20);
      pcVar5 = (char *)CDeclarativeWizardPage::pageContentItem();
      QVariant::QVariant(&local_40,(uint)(iVar6 <= iVar2) + iVar2);
      QObject::setProperty(pcVar5,(QVariant *)"currentAutodetectedIndex");
      QVariant::~QVariant(&local_40);
    }
    local_48 = param_2;
    FUN_1005fa3b0((long *)(param_1 + 0x18),iVar6,&local_48);
  }
  return;
}

