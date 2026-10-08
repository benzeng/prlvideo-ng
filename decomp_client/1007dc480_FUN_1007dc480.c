
undefined1 FUN_1007dc480(QString *param_1)

{
  int iVar1;
  undefined8 uVar2;
  QMapNodeBase *pQVar3;
  undefined1 uVar4;
  QMapNodeBase *local_48;
  QMapNodeBase *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100748240();
  local_38 = (QArrayData *)QString::fromAscii_helper("toolbox",7);
  uVar2 = FUN_100748290(uVar2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007dc4ee;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007dc4ee:
  FUN_100746c20(&local_40,uVar2);
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007dc546;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
LAB_1007dc546:
  if (iVar1 == 0) {
    uVar4 = 0;
    FUN_100df99c0("","prl_client_app",0,"Empty toolbox catalog");
  }
  else {
    FUN_100746c20(&local_48,uVar2);
    if (1 < *(uint *)local_48) {
      FUN_100283ba0(&local_48);
    }
    if (*(long *)(local_48 + 0x10) == 0) {
      pQVar3 = local_48 + 8;
    }
    else {
      pQVar3 = *(QMapNodeBase **)(local_48 + 0x20);
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
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return 1;
        }
        local_29 = 0;
      }
      if (*(long *)(local_48 + 0x10) != 0) {
        FUN_100283b30();
        QMapDataBase::freeTree(local_48,(int)*(undefined8 *)(local_48 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_48);
    }
  }
  return uVar4;
}

