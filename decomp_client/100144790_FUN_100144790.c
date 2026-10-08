
void FUN_100144790(CBaseDialog *param_1,undefined8 param_2)

{
  QString *pQVar1;
  void *pvVar2;
  undefined8 uVar3;
  Connection local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fc518;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fc708;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fc758;
  pvVar2 = operator_new(0x30);
  *(void **)(param_1 + 0x60) = pvVar2;
  FUN_100145bb0(pvVar2,param_1);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x60) + 0x18);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Importing_the_data____10226fef8);
  QLabel::setText(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10014484b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10014484b:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x60) + 8);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Please_wait_while_importing_Boot_10226ff10);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001448b1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001448b1:
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  QWidget::setFixedSize((int)param_1,0x172);
  uVar3 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),0x400000);
  QObject::connect(local_40,uVar3,"2clicked()",param_1,"2canceled()",0);
  QMetaObject::Connection::~Connection(local_40);
  return;
}

