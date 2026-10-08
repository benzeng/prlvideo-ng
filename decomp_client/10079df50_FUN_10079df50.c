
void FUN_10079df50(QObject *param_1,QObject *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long local_50;
  long local_48;
  long local_40 [2];
  
  uVar3 = 0;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222c770;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e1288;
  if (param_2 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  pvVar4 = operator_new(0x20);
  FUN_100d3d190(pvVar4);
  *(void **)(param_1 + 0x28) = pvVar4;
  FUN_10079e220(param_1);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar5 = FUN_1007b56d0(uVar3);
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
  }
  else {
    QObject::connect(local_40,lVar5,"2snapshotsTreeChanged()",param_1,"1UpdateModel()",0);
    bVar1 = 1;
    if (local_40[0] != 0) {
      bVar1 = QMetaObject::Connection::isConnected_helper();
      bVar1 = bVar1 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)local_40);
    uVar3 = FUN_10018d490(lVar5);
    QObject::connect(&local_48,uVar3,"2beforeVmRemoved(const GUI::VmId&)",param_1,"1UpdateModel()",0
                    );
    if (bVar1 == 0) {
      if (local_48 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    else {
      cVar2 = '\0';
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = FUN_10018d490(lVar5);
    QObject::connect(&local_50,uVar3,"2afterVmAdded(const GUI::VmId&)",param_1,"1UpdateModel()",0);
    if ((cVar2 != '\0') && (local_50 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    FUN_100194170(lVar5,0);
  }
  return;
}

