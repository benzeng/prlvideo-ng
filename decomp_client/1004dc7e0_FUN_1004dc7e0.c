
void FUN_1004dc7e0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  QListWidgetItem *pQVar10;
  uint uVar11;
  QVariant local_40;
  
  uVar4 = FUN_1003a4d50(param_2);
  uVar5 = FUN_1003a4db0(param_2);
  lVar7 = FUN_1004dae30(param_1,uVar4,uVar5);
  if (lVar7 != 0) {
    lVar8 = lVar7 + 0x10;
    pcVar1 = *(code **)(*(long *)(lVar7 + 0x10) + 0x28);
    bVar2 = (bool)FUN_1003a4e60(param_2,2);
    QVariant::QVariant(&local_40,bVar2);
    (*pcVar1)(lVar8,0x103,&local_40);
    QVariant::~QVariant(&local_40);
    FUN_1003a4e60(param_2,8);
    if (*(QListWidgetItem **)(lVar7 + 0x28) != (QListWidgetItem *)0x0) {
      QListWidget::setItemHidden(*(QListWidgetItem **)(lVar7 + 0x28),SUB81(lVar8,0));
    }
    cVar3 = FUN_1003a4e60(param_2,8);
    if (cVar3 == '\0') {
      uVar11 = *(uint *)(lVar7 + 0x38) | 0x20;
    }
    else {
      uVar11 = *(uint *)(lVar7 + 0x38) & 0xffffffdf;
    }
    QListWidgetItem::setFlags(lVar8,uVar11);
    (**(code **)(*param_1 + 0x228))(param_1);
    QListWidget::currentRow();
    iVar6 = (**(code **)(*param_1 + 0x228))(param_1);
    lVar8 = QListWidget::item(iVar6);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = ___dynamic_cast(lVar8,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10);
    }
    if (lVar7 == lVar9) {
      pQVar10 = (QListWidgetItem *)(**(code **)(*param_1 + 0x228))(param_1);
      uVar4 = QListWidget::row(pQVar10);
      FUN_1004da970(param_1,uVar4);
    }
  }
  return;
}

