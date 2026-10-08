
void FUN_10062e790(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QVariant local_50;
  QDateTime local_40;
  QDateTime local_38;
  QVariant local_30;
  
  if (param_2 < 0) goto LAB_10062e8a4;
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  uVar3 = FUN_10016f500(lVar4);
  FUN_10061abe0(&local_30,uVar3,0);
  iVar2 = QVariant::toInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  QDateTime::currentDateTime();
  FUN_10061abe0(&local_50,uVar3,9);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_50);
  if (iVar2 < -0x7ffeef8c) {
    if ((iVar2 != -0x7ffeefff) && (iVar2 != -0x7ffeef9b)) {
LAB_10062e84d:
      cVar1 = QDateTime::operator<(&local_38,&local_40);
      if (cVar1 != '\0') {
        CAbstractTask::clearSubTaskList();
        (**(code **)(*(long *)param_1[6] + 0x1c0))();
        QObject::deleteLater();
      }
    }
  }
  else if ((iVar2 != -0x7ffeef8c) && (iVar2 != -0x7ffeef89)) goto LAB_10062e84d;
  QDateTime::~QDateTime(&local_40);
  QDateTime::~QDateTime(&local_38);
LAB_10062e8a4:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

