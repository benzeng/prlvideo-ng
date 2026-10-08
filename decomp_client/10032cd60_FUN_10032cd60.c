
undefined8 * FUN_10032cd60(undefined8 *param_1,long param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_68;
  int local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  int local_44;
  long local_40;
  undefined1 local_31;
  
  FUN_10032ca00(&local_40);
  if (local_40 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid tis record handle");
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  if (param_3 == '\0') {
LAB_10032cdbc:
    local_5c = 0;
    iVar1 = _PrlTisRecord_GetData(local_40,0,&local_5c);
    if (-1 < iVar1) {
      QByteArray::QByteArray((QByteArray *)&local_68,local_5c,'?');
      if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
      }
      iVar1 = _PrlTisRecord_GetData(local_40,local_68 + *(long *)(local_68 + 0x10),&local_5c);
      if (iVar1 < 0) {
        uVar2 = FUN_100dddcf0(iVar1);
        FUN_100df99c0("","prl_client_app",0,
                      "(!)Error: PrlTisRecord_GetData failed with RC = %.8X [%s]",iVar1,uVar2);
        *param_1 = PTR_shared_null_1021e1288;
      }
      else {
        *param_1 = local_68;
        if (1 < *(uint *)local_68 + 1) {
          LOCK();
          *(uint *)local_68 = *(uint *)local_68 + 1;
          local_31 = *(uint *)local_68 != 0;
          UNLOCK();
        }
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10032d038;
        }
        QArrayData::deallocate(local_68,1,8);
      }
      goto LAB_10032d038;
    }
    uVar2 = FUN_100dddcf0(iVar1);
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlTisRecord_GetData failed with RC = %.8X [%s]",
                  iVar1,uVar2);
  }
  else {
    local_44 = 0;
    iVar1 = _PrlTisRecord_GetState(local_40,&local_44);
    if (iVar1 < 0) {
      uVar2 = FUN_100dddcf0(iVar1);
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: PrlTisRecord_GetState failed with RC = %.8X [%s]",iVar1,uVar2);
    }
    else {
      if (local_44 == 1) goto LAB_10032cdbc;
      if (1 < DAT_10230ffd0) {
        local_58 = *(QArrayData **)(param_2 + 0x18);
        if (1 < *(int *)local_58 + 1U) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","prl_client_app",2,"%s TIS Record state is not active. State is %d",
                      local_50 + *(long *)(local_50 + 0x10),local_44);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10032cff9;
          }
          QArrayData::deallocate(local_50,1,8);
        }
LAB_10032cff9:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10032d029;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_10032d029:
        *param_1 = PTR_shared_null_1021e1288;
        if (local_40 == 0) {
          return param_1;
        }
        goto LAB_10032d038;
      }
    }
  }
  *param_1 = PTR_shared_null_1021e1288;
LAB_10032d038:
  _PrlHandle_Free(local_40);
  return param_1;
}

