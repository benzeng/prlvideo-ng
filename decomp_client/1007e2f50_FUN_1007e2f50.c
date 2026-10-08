
undefined8 FUN_1007e2f50(undefined8 param_1,long *param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  char *pcVar4;
  QArrayData *local_70;
  QString local_68;
  AnonymousUnion0 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("-W",2);
  local_48 = pQVar2;
  FUN_1000341d0(&local_40,&local_48);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e2fc5;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1007e2fc5:
  FUN_1000341d0(&local_40,param_1);
  if (*(int *)(*param_2 + 0xc) != *(int *)(*param_2 + 8)) {
    pQVar2 = (QArrayData *)QString::fromAscii_helper("--args",6);
    local_50 = pQVar2;
    FUN_1000341d0(&local_40,&local_50);
    FUN_1001d3590(&local_40,param_2);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e303e;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1007e303e:
  if (1 < DAT_10230ffd0) {
    pQVar2 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_60.field0,(QChar *)&local_40,
               (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Install Parallels Toolbox command [open %s]",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e30e3;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_1007e30e3:
    if (*(int *)local_60.field1 != -1) {
      if (*(int *)local_60.field1 != 0) {
        LOCK();
        *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
        local_31 = *(int *)local_60.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e3113;
      }
      QArrayData::deallocate((QArrayData *)local_60.field1,2,8);
    }
LAB_1007e3113:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e3140;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1007e3140:
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("open",4);
  iVar1 = QProcess::execute(&local_68,(QStringList *)&local_40.field0);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007e3198;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007e3198:
  uVar3 = 0;
  if (iVar1 < 0) {
    QString::toUtf8();
    pcVar4 = "The process has been aborted unexpectedly";
    if (iVar1 == -2) {
      pcVar4 = "Failed to start";
    }
    FUN_100df99c0("","prl_client_app",0,"Failed to run : %s file. %s",
                  local_70 + *(long *)(local_70 + 0x10),pcVar4);
    uVar3 = 0x80000009;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007e3223;
      }
      QArrayData::deallocate(local_70,1,8);
    }
  }
LAB_1007e3223:
  FUN_100039a80(&local_40);
  return uVar3;
}

