
void FUN_1007d2e70(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  char *pcVar5;
  int iVar6;
  long *plVar7;
  Connection *this;
  Connection local_60 [8];
  Connection local_58 [8];
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [15];
  undefined1 local_21;
  
  if (*param_2 == 0) {
    return;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    return;
  }
  plVar7 = (long *)param_2[1];
  if (plVar7 == (long *)0x0) {
    return;
  }
  if (3 < DAT_10230ffd0) {
    (**(code **)*plVar7)();
    uVar1 = QMetaObject::className();
    FUN_100df99c0("","prl_client_app",4,"widget with class name == %s",uVar1);
    plVar7 = (long *)param_2[1];
  }
  lVar2 = (**(code **)(*plVar7 + 8))();
  plVar7 = (long *)0x0;
  if ((*param_2 != 0) && (plVar7 = (long *)0x0, *(int *)(*param_2 + 4) != 0)) {
    plVar7 = (long *)param_2[1];
  }
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*plVar7 + 8))(plVar7);
    plVar7 = (long *)0x0;
    if ((*param_2 != 0) && (plVar7 = (long *)0x0, *(int *)(*param_2 + 4) != 0)) {
      plVar7 = (long *)param_2[1];
    }
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*plVar7 + 8))(plVar7);
      plVar7 = (long *)0x0;
      if ((*param_2 != 0) && (plVar7 = (long *)0x0, *(int *)(*param_2 + 4) != 0)) {
        plVar7 = (long *)param_2[1];
      }
      if (lVar2 == 0) {
        lVar2 = (**(code **)(*plVar7 + 8))(plVar7);
        plVar7 = (long *)0x0;
        if ((*param_2 != 0) && (plVar7 = (long *)0x0, *(int *)(*param_2 + 4) != 0)) {
          plVar7 = (long *)param_2[1];
        }
        if (lVar2 == 0) {
          lVar2 = (**(code **)(*plVar7 + 8))(plVar7);
          plVar7 = (long *)0x0;
          if ((*param_2 != 0) && (plVar7 = (long *)0x0, *(int *)(*param_2 + 4) != 0)) {
            plVar7 = (long *)param_2[1];
          }
          if (lVar2 == 0) {
            lVar2 = (**(code **)(*plVar7 + 8))(plVar7);
            plVar7 = (long *)0x0;
            if ((*param_2 != 0) && (plVar7 = (long *)0x0, *(int *)(*param_2 + 4) != 0)) {
              plVar7 = (long *)param_2[1];
            }
            if (lVar2 == 0) {
              lVar2 = (**(code **)(*plVar7 + 8))(plVar7,"QAbstractItemView");
              if (lVar2 == 0) goto LAB_1007d312c;
              uVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13c0);
              pcVar5 = "2clicked(const QModelIndex&)";
              this = local_60;
            }
            else {
              uVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15a0);
              pcVar5 = "2valueChanged(int)";
              this = local_58;
            }
          }
          else {
            uVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1538);
            pcVar5 = "2sliderPressed()";
            this = local_50;
          }
        }
        else {
          uVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15f8);
          pcVar5 = "2textChanged()";
          this = local_48;
        }
      }
      else {
        uVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15e0);
        pcVar5 = "2textEdited(const QString &)";
        this = local_40;
      }
    }
    else {
      uVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350);
      pcVar5 = "2clicked(bool)";
      this = local_38;
    }
  }
  else {
    uVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
    pcVar5 = "2currentIndexChanged(int)";
    this = local_30;
  }
  QObject::connect(this,uVar1,pcVar5,param_1,"1onControlChanged()",0x80);
  QMetaObject::Connection::~Connection(this);
LAB_1007d312c:
  lVar2 = (**(code **)(*(long *)param_2[1] + 8))((long *)param_2[1],"CBaseDialog");
  if (lVar2 != 0) {
    (*(code *)**(undefined8 **)param_2[1])();
    pcVar5 = (char *)QMetaObject::className();
    iVar6 = -1;
    if (pcVar5 != (char *)0x0) {
      sVar3 = _strlen(pcVar5);
      iVar6 = (int)sVar3;
    }
    pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar6);
    FUN_1007d3200();
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        UNLOCK();
        if (*(int *)pQVar4 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
  return;
}

