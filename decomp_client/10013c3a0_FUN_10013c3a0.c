
void FUN_10013c3a0(undefined8 param_1,long *param_2,int param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *local_68;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  
  if (param_3 == 0) {
    QObject::blockSignals(SUB81(param_1,0));
    (**(code **)(*param_2 + 0x18))(&local_60,param_2,0,10);
    uVar3 = QVariant::toInt((bool *)&local_60);
    QVariant::~QVariant(&local_60);
    FUN_10013c110(param_1,uVar3,param_2);
    plVar1 = (long *)param_2[5];
    if (plVar1 != (long *)0x0) {
      iVar4 = FUN_10013bc40(param_1,plVar1);
      pcVar2 = *(code **)(*plVar1 + 0x20);
      QVariant::QVariant(&local_50,iVar4);
      (*pcVar2)(plVar1,0,10,&local_50);
      QVariant::~QVariant(&local_50);
    }
    QObject::blockSignals(SUB81(param_1,0));
    (**(code **)(*param_2 + 0x18))(&local_40,param_2,0,10);
    iVar4 = QVariant::toInt((bool *)&local_40);
    QVariant::~QVariant(&local_40);
    if (iVar4 == 0) {
      local_68 = PTR_shared_null_1021e15e8;
      uVar5 = QTreeWidget::invisibleRootItem();
      FUN_10013aa50(param_1,&local_68,uVar5);
      if (*(int *)(local_68 + 0xc) == *(int *)(local_68 + 8)) {
        uVar5 = QTreeWidget::invisibleRootItem();
        FUN_10013c250(param_1,uVar5,param_2);
      }
      FUN_100039a80(&local_68);
    }
  }
  return;
}

