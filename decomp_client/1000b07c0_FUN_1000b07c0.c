
void FUN_1000b07c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    pQVar4 = local_40;
    lVar3 = *(long *)(local_40 + 0x10);
    iVar1 = *(int *)(*param_5 + 8);
    iVar2 = *(int *)(*param_5 + 0xc);
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",2,
                  "stub {%u,%u} with path \'%s\' (hwnds=%d) connected to %s",param_4,param_4 >> 0x20
                  ,pQVar4 + lVar3,iVar2 - iVar1,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b08aa;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1000b08aa:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b08e9;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1000b08e9:
  local_50 = (QArrayData *)*param_2;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  local_58 = (QArrayData *)*param_3;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  FUN_1007f6940(param_1,&local_50,&local_58,param_4,param_5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b0960;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000b0960:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

