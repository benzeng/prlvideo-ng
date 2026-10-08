
void FUN_1001a6400(CBaseDialog *param_1,undefined8 param_2)

{
  int iVar1;
  QString *pQVar2;
  char cVar3;
  uid_t uVar4;
  void *pvVar5;
  long lVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined1 local_78 [32];
  QArrayData *local_58;
  QPixmap local_50 [32];
  QArrayData *local_30;
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0x100);
  *(undefined ***)param_1 = &PTR_FUN_1021fe3b0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fe5a0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fe5f0;
  pvVar5 = operator_new(0x70);
  *(void **)(param_1 + 0x60) = pvVar5;
  FUN_1001a7390(pvVar5,param_1);
  QWidget::setWindowModality(param_1);
  local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a64b3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001a64b3:
  lVar6 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x60),0x400);
  if (lVar6 != 0) {
    QPushButton::setDefault(SUB81(lVar6,0));
  }
  QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),7);
  local_58 = (QArrayData *)
             QString::fromAscii_helper(":/PasswordDialog/images/authorization_icon.png",0x2e);
  QPixmap::QPixmap(local_50,&local_58,0,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a653f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001a653f:
  WidgetUtils::setBackgroundPixmap(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x10),local_50);
  uVar4 = _getuid();
  FUN_100d969d0(local_78);
  FUN_100d96dd0(local_78,uVar4);
  cVar3 = FUN_100d95f40(local_78);
  if (cVar3 == '\0') {
    pQVar2 = *(QString **)(*(long *)(param_1 + 0x60) + 0x18);
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Type_an_administrator_s_name_and_102270760);
    QLabel::setText(pQVar2);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001a662d;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
  else {
    pQVar2 = *(QString **)(*(long *)(param_1 + 0x60) + 0x38);
    FUN_1001c22d0(&local_80);
    QLineEdit::setText(pQVar2);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001a662d;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_1001a662d:
  FUN_1001c22d0(&local_90);
  iVar1 = *(int *)(local_90 + 4);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a6672;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001a6672:
  if (iVar1 != 0) {
    QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x48),7);
  }
  QWidget::hide();
  FUN_100d96c00(local_78);
  QPixmap::~QPixmap(local_50);
  return;
}

