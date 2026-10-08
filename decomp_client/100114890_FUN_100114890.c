
undefined1 FUN_100114890(QString *param_1,char param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  undefined1 uVar7;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    pcVar6 = "image file";
    if (param_2 != '\0') {
      pcVar6 = "real CD";
    }
    FUN_100df99c0("","prl_client_app",2,"DetectCD: Trying to detect OS distribution on %s %s",pcVar6
                  ,local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100114930;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_100114930:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 == '\0') {
    QString::operator=(&local_48,param_1);
LAB_100114a3b:
    *(undefined1 *)(param_3 + 0x11) = 1;
    QString::toUtf8();
    lVar4 = *(long *)(local_68 + 0x10);
    QString::toUtf8();
    iVar5 = FUN_100d50af0(local_68 + lVar4,local_70 + *(long *)(local_70 + 0x10),param_3);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100114aaa;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_100114aaa:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100114ada;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100114ada:
    if (iVar5 == 0) {
      uVar7 = 1;
      if (1 < DAT_10230ffd0) {
        uVar1 = param_3[2];
        uVar2 = *param_3;
        uVar3 = param_3[1];
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",2,
                      "DetectCD: Detection succeeded. Media type = %d, OS Version = %d, OS Arch = %d, Build = %s."
                      ,uVar1,uVar2,uVar3,local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100114ba1;
          }
          QArrayData::deallocate(local_78,1,8);
        }
      }
    }
    else {
      uVar7 = 0;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",1,"DetectCD: Detection failed.");
        uVar7 = 0;
      }
    }
  }
  else {
    MacUtils::getRealCdMountName(&local_58,param_1);
    QString::operator=(&local_50,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100114992;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100114992:
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",2,"DetectCD: Mount path is \'%s\'",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001149ff;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
LAB_1001149ff:
    if (*(int *)(local_50.field0_0x0 + 4) != 0) goto LAB_100114a3b;
    FUN_100df99c0("","prl_client_app",0,"DetectCD: Invalid args.");
    uVar7 = 0;
  }
LAB_100114ba1:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100114bd1;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100114bd1:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar7;
}

