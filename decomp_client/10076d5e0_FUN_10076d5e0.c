
undefined1 FUN_10076d5e0(QString *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  QMapNodeBase *pQVar3;
  undefined1 uVar4;
  QMapNodeBase *local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100748240();
  uVar2 = FUN_100748290(uVar2,param_2);
  FUN_100746c20(&local_38,uVar2);
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076d660;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
LAB_10076d660:
  if (iVar1 == 0) {
    uVar4 = 0;
    FUN_100df99c0("","prl_client_app",0,"Empty Acronis catalog");
  }
  else {
    FUN_100746c20(&local_40,uVar2);
    if (1 < *(uint *)local_40) {
      FUN_100283ba0(&local_40);
    }
    if (*(long *)(local_40 + 0x10) == 0) {
      pQVar3 = local_40 + 8;
    }
    else {
      pQVar3 = *(QMapNodeBase **)(local_40 + 0x20);
    }
    QString::operator=(param_1,(QString *)(pQVar3 + 0x20));
    QString::operator=(param_1 + 1,(QString *)(pQVar3 + 0x28));
    QString::operator=(param_1 + 2,(QString *)(pQVar3 + 0x30));
    QString::operator=(param_1 + 3,(QString *)(pQVar3 + 0x38));
    QString::operator=(param_1 + 4,(QString *)(pQVar3 + 0x40));
    QString::operator=(param_1 + 5,(QString *)(pQVar3 + 0x48));
    QString::operator=(param_1 + 6,(QString *)(pQVar3 + 0x50));
    QString::operator=(param_1 + 7,(QString *)(pQVar3 + 0x58));
    QString::operator=(param_1 + 8,(QString *)(pQVar3 + 0x60));
    QString::operator=(param_1 + 9,(QString *)(pQVar3 + 0x68));
    FUN_100283c40(param_1 + 10,pQVar3 + 0x70);
    uVar4 = 1;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return 1;
        }
        local_29 = 0;
      }
      if (*(long *)(local_40 + 0x10) != 0) {
        FUN_100283b30();
        QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_40);
    }
  }
  return uVar4;
}

