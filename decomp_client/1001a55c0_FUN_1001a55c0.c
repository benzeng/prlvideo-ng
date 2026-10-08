
void FUN_1001a55c0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  Connection *this;
  long *local_48;
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [8];
  Connection local_28 [8];
  
  lVar1 = (**(code **)(*param_2 + 8))(param_2,"QLineEdit");
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2,"QComboBox");
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_2 + 8))(param_2,"QSpinBox");
      if (lVar1 == 0) {
        lVar1 = (**(code **)(*param_2 + 8))(param_2,"QAbstractSlider");
        if (lVar1 == 0) goto LAB_1001a56cd;
        uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1360);
        pcVar3 = "2valueChanged(int)";
        pcVar4 = "1updateFinishButtonState(int)";
        this = local_40;
      }
      else {
        uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15a0);
        pcVar3 = "2valueChanged(int)";
        pcVar4 = "1updateFinishButtonState(int)";
        this = local_38;
      }
    }
    else {
      uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
      pcVar3 = "2currentIndexChanged(int)";
      pcVar4 = "1updateFinishButtonState(int)";
      this = local_30;
    }
  }
  else {
    uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15e0);
    pcVar3 = "2textChanged(const QString&)";
    pcVar4 = "1updateFinishButtonState(const QString&)";
    this = local_28;
  }
  QObject::connect(this,uVar2,pcVar3,param_1,pcVar4,0);
  QMetaObject::Connection::~Connection(this);
LAB_1001a56cd:
  local_48 = param_2;
  FUN_1000630f0(param_1 + 0x30,&local_48);
  return;
}

