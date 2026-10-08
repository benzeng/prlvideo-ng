
void FUN_10039f8c0(long param_1,undefined4 param_2)

{
  long *plVar1;
  Connection local_30 [8];
  Connection local_28 [8];
  
  switch(param_2) {
  case 1:
    plVar1 = operator_new(0x58);
    FUN_1004de870(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
    break;
  case 2:
    plVar1 = operator_new(0x50);
    FUN_1004e2d10(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
    break;
  case 3:
    plVar1 = operator_new(0x50);
    FUN_1004dec80(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
    break;
  case 4:
    plVar1 = operator_new(0x58);
    FUN_1004e4400(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
    break;
  case 5:
    plVar1 = operator_new(0x58);
    FUN_1004e4850(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
    break;
  case 6:
    plVar1 = operator_new(0x58);
    FUN_1004e4ca0(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
    break;
  case 7:
    plVar1 = operator_new(0x58);
    FUN_1004e50f0(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
    break;
  default:
    goto switchD_10039f8e9_default;
  }
  (**(code **)(*plVar1 + 0x1a0))(plVar1);
  QObject::connect(local_28,plVar1,"2currentItemChanged(VmEditorTypes::VmEditorItems, uint)",param_1
                   ,"1onPageChanged()",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,plVar1,"2sectionSizeChanged(VmEditorTypes::VmEditorSections)",param_1,
                   "1onSectionSizeChanged(VmEditorTypes::VmEditorSections)",0);
  QMetaObject::Connection::~Connection(local_30);
  QStackedWidget::addWidget(*(QWidget **)(param_1 + 0x38));
switchD_10039f8e9_default:
  return;
}

