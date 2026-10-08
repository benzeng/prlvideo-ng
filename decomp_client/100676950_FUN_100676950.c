
void FUN_100676950(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  QWidget *pQVar4;
  uint uVar5;
  byte bVar6;
  undefined8 *puVar7;
  bool bVar8;
  Data_conflict local_50;
  undefined4 local_48;
  Data_conflict local_40;
  undefined4 local_38;
  
  iVar3 = CAbstractWizardModel::currentPageId();
  if (iVar3 == 3) {
    cVar2 = CContentModel::isBusy();
    if (cVar2 == '\0') {
      puVar1 = *(undefined8 **)(param_3 + 8);
      if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
        uVar5 = *(uint *)((long)puVar1 + 0x24) ^ 0xf;
        for (puVar7 = *(undefined8 **)
                       (puVar1[1] + ((ulong)uVar5 % (ulong)*(uint *)(puVar1 + 4)) * 8);
            puVar7 != puVar1; puVar7 = (undefined8 *)*puVar7) {
          if ((*(uint *)(puVar7 + 1) == uVar5) && (*(int *)((long)puVar7 + 0xc) == 0xf)) {
            if (puVar7 != puVar1) {
              QVariant::QVariant((QVariant *)&local_40,(QVariant *)(puVar7 + 2));
              goto LAB_1006769e6;
            }
            break;
          }
        }
      }
      local_38 = 0x80000000;
      local_40.field7 = 0;
LAB_1006769e6:
      cVar2 = QVariant::toBool();
      if (cVar2 == '\0') {
        QVariant::~QVariant((QVariant *)&local_40);
      }
      else {
        puVar1 = *(undefined8 **)(param_2 + 8);
        if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
          uVar5 = *(uint *)((long)puVar1 + 0x24) ^ 0xf;
          for (puVar7 = *(undefined8 **)
                         (puVar1[1] + ((ulong)uVar5 % (ulong)*(uint *)(puVar1 + 4)) * 8);
              puVar7 != puVar1; puVar7 = (undefined8 *)*puVar7) {
            if ((*(uint *)(puVar7 + 1) == uVar5) && (*(int *)((long)puVar7 + 0xc) == 0xf)) {
              if (puVar7 != puVar1) {
                QVariant::QVariant((QVariant *)&local_50,(QVariant *)(puVar7 + 2));
                goto LAB_100676a61;
              }
              break;
            }
          }
        }
        local_48 = 0x80000000;
        local_50.field7 = 0;
LAB_100676a61:
        cVar2 = QVariant::toBool();
        QVariant::~QVariant((QVariant *)&local_50);
        QVariant::~QVariant((QVariant *)&local_40);
        if (cVar2 == '\0') {
          CContentModel::setBusy(SUB81(param_1,0));
          FUN_100676b60(param_1,0);
        }
      }
    }
  }
  bVar6 = 1;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    bVar6 = (*(byte *)(param_3 + 1) & 2) >> 1;
  }
  if (*(int *)(param_1 + 0x154) == 2) {
    iVar3 = CAbstractWizardModel::currentPageId();
    bVar8 = iVar3 == 1;
  }
  else {
    bVar8 = false;
  }
  iVar3 = CAbstractWizardModel::currentPageId();
  if (bVar6 == 0 && !(bool)(~bVar8 & iVar3 != 2)) {
    if (bVar8) {
      *(undefined4 *)(param_1 + 0x154) = 3;
      pQVar4 = (QWidget *)CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      CWizardController::parentWidget();
      CMessageManager::closeMessageBoxes(pQVar4);
    }
    FUN_100677d80(param_1);
  }
  return;
}

