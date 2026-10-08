
void FUN_1003a30a0(long param_1,byte param_2)

{
  long lVar1;
  QObject *pQVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 extraout_RDX;
  QArrayData *local_40;
  undefined1 local_32;
  
  lVar1 = param_1 + 0x20;
  lVar5 = FUN_1003b0a30(lVar1);
  if (lVar5 == 0) {
    pcVar9 = "(!)Error: Vm instance is null.";
  }
  else {
    lVar5 = FUN_1003b0a60(lVar1);
    if (lVar5 != 0) {
      QStackedWidget::currentWidget();
      plVar6 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
      if ((plVar6 == (long *)0x0) || (lVar5 = (**(code **)(*plVar6 + 0x1f8))(plVar6), lVar5 == 0)) {
        local_40 = (QArrayData *)PTR_shared_null_1021e1288;
      }
      else {
        FUN_10044e7e0(&local_40,lVar5);
      }
      QLabel::setText(*(QString **)(param_1 + 0x58));
      pQVar2 = *(QObject **)(param_1 + 0x58);
      uVar7 = FUN_1003b0a30(lVar1);
      iVar3 = FUN_10018f890(uVar7);
      lVar5 = FUN_1003b0a60(lVar1);
      iVar4 = -1;
      if (lVar5 != 0) {
        uVar7 = FUN_1003b0a60(lVar1);
        iVar4 = FUN_10015aae0(uVar7);
      }
      WidgetUtils::Adjuster::adjustWidgetText(pQVar2,iVar3,iVar4);
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      QStackedWidget::currentWidget();
      uVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
      FUN_10039ffd0(param_1,uVar8);
      QWidget::setFixedWidth((int)uVar7);
      param_2 = *(int *)(local_40 + 4) != 0 | param_2;
      (**(code **)(**(long **)(param_1 + 0x58) + 0x68))
                (*(long **)(param_1 + 0x58),param_2,extraout_RDX,param_2);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return;
          }
          local_32 = 0;
        }
        QArrayData::deallocate(local_40,2,8);
      }
      return;
    }
    pcVar9 = "(!)Error: Server instance is null.";
  }
  FUN_100df99c0("[CFG_ED]","prl_client_app",0,pcVar9);
  return;
}

