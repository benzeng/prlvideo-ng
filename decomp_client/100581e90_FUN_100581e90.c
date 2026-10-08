
void FUN_100581e90(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  QString *pQVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  QVariant local_78;
  Data_conflict local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10221c9d0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221cbc0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221cc10;
  pvVar7 = operator_new(0x38);
  *(void **)(param_1 + 0x60) = pvVar7;
  FUN_10055a620(param_1 + 0x68,param_2);
  FUN_100582d90(*(undefined8 *)(param_1 + 0x60),param_1);
  FUN_10055a620(&local_60,param_1 + 0x68);
  local_58 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 8) * 8);
  local_50 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 0xc) * 8);
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      pQVar3 = (QString *)*local_58;
      cVar5 = operator==(pQVar3,pQVar3 + 1);
      if (cVar5 != '\0') {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28);
        FUN_10071abd0(&local_68,pQVar3);
        QVariant::QVariant(&local_78,pQVar3);
        uVar6 = QComboBox::count();
        QIcon::QIcon(local_40);
        QComboBox::insertItem
                  ((int)uVar4,(QIcon *)(ulong)uVar6,(QString *)local_40,(QVariant *)&local_68);
        QIcon::~QIcon(local_40);
        QVariant::~QVariant(&local_78);
        if (*(int *)local_68.field15 != -1) {
          if (*(int *)local_68.field15 != 0) {
            LOCK();
            *(int *)local_68.field15 = *(int *)local_68.field15 + -1;
            local_31 = *(int *)local_68.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100581ff0;
          }
          QArrayData::deallocate((QArrayData *)local_68.field15,2,8);
        }
      }
LAB_100581ff0:
      local_58 = local_58 + 1;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  FUN_1000fe670(&local_60);
  iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x14);
  iVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x1c);
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  QWidget::setFixedSize((int)param_1,(iVar2 + 1) - iVar1);
  return;
}

