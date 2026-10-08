
int FUN_100b31d10(long *param_1,undefined8 param_2)

{
  long lVar1;
  uid_t uVar2;
  int iVar3;
  undefined4 uVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [24];
  int local_30;
  undefined1 local_29;
  
  uVar2 = _getuid();
  if (uVar2 == 0) {
    QString::toUtf8();
    lVar1 = *(long *)(local_60 + 0x10);
    iVar3 = (**(code **)(*param_1 + 0x1c8))(param_1);
    local_30 = _open((char *)(local_60 + lVar1),iVar3);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b31ea8;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100b31ea8:
    iVar3 = local_30;
    if (local_30 < 0) {
      QString::toUtf8();
      lVar1 = *(long *)(local_68 + 0x10);
      uVar4 = FUN_100db96d0();
      FUN_100df99c0("","dimg",0,"Open: \'%s\' device open error. (%d)",local_68 + lVar1,uVar4);
      iVar3 = -1;
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          if (*(int *)local_68 != 0) {
            return -1;
          }
          local_29 = 0;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
    return iVar3;
  }
  FUN_100b34200(local_48);
  local_50 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b34460(local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b31d8a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b31d8a:
  iVar3 = FUN_100b35100(local_48,param_2,(int)param_1[3],&local_30);
  FUN_100b342c0(local_48);
  if (iVar3 != 0) {
    QString::toUtf8();
    FUN_100df99c0("","dimg",0,"Open: \'%s\' SUO device open error. (0x%x)",
                  local_58 + *(long *)(local_58 + 0x10),iVar3);
    local_30 = -1;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b31f2d;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_100b31f2d:
  FUN_100b34450(local_48);
  return local_30;
}

