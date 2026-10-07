
char FUN_10065ff90(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  cVar1 = FUN_1006605f0();
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x28) != '\0') {
      return '\0';
    }
    iVar2 = FUN_100787cb0(param_2,"IOMedia");
    if (iVar2 != 0) {
      cVar1 = FUN_100660c60(param_1,iVar2);
      if (cVar1 != '\0') {
        iVar3 = FUN_100787cb0(iVar2,"IOPartitionScheme");
        if (iVar3 == 0) {
          if (DAT_1011b55f8 < 3) goto LAB_10066038d;
          FUN_100787c40(&local_70,iVar2);
          QString::toUtf8();
          FUN_1008e3970("","pvsHostInfo",3,"Disk [%s]: No partition map",
                        local_68 + *(long *)(local_68 + 0x10));
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_29 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_10066035d;
            }
            QArrayData::deallocate(local_68,1,8);
          }
LAB_10066035d:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_29 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_10066038d;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_10066038d:
          _IOObjectRelease(iVar2);
          return '\x01';
        }
        cVar1 = FUN_100661050(param_1,iVar3);
        if (cVar1 != '\0') goto LAB_1006600bb;
        FUN_100787c40(&local_80,iVar2);
        QString::toUtf8();
        FUN_1008e3970("","pvsHostInfo",0,"Disk [%s]: Error partition map processing",
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_29 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10066008b;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_10066008b:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_29 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1006600bb;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1006600bb:
        _IOObjectRelease(iVar3);
        _IOObjectRelease(iVar2);
        return cVar1;
      }
      FUN_100787c40(&local_60,iVar2);
      QString::toUtf8();
      FUN_1008e3970("","pvsHostInfo",0,"Disk [%s]: Error reading disk parameters",
                    local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100660290;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_100660290:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006602c0;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1006602c0:
      _IOObjectRelease(iVar2);
      return '\0';
    }
    FUN_100787c40(&local_50,param_2);
    QString::toUtf8();
    FUN_1008e3970("","pvsHostInfo",0,"Disk [%s]: Error IOMedia searching",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006601e2;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1006601e2:
    if (*(int *)local_50 == -1) {
      return '\0';
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return '\0';
      }
      local_29 = 0;
    }
    goto LAB_10066020b;
  }
  FUN_100787c40(&local_40,param_2);
  QString::toUtf8();
  FUN_1008e3970("","pvsHostInfo",0,"Disk [%s]: Error reading device parameters",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100660140;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100660140:
  if (*(int *)local_40 == -1) {
    return '\0';
  }
  local_50 = local_40;
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return '\0';
    }
    local_29 = 0;
  }
LAB_10066020b:
  QArrayData::deallocate(local_50,2,8);
  return '\0';
}

