
undefined8 * FUN_10032d120(undefined8 *param_1,long param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_70;
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
LAB_10032d17c:
    local_5c = 0;
    iVar1 = _PrlTisRecord_GetText(local_40,0,&local_5c);
    if (-1 < iVar1) {
      QByteArray::QByteArray((QByteArray *)&local_68,local_5c,'?');
      if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
      }
      iVar1 = _PrlTisRecord_GetText(local_40,local_68 + *(long *)(local_68 + 0x10),&local_5c);
      if (iVar1 < 0) {
        uVar2 = FUN_100dddcf0(iVar1);
        FUN_100df99c0("","prl_client_app",0,
                      "(!)Error: PrlTisRecord_GetText failed with RC = %.8X [%s]",iVar1,uVar2);
        *param_1 = PTR_shared_null_1021e1288;
      }
      else {
        pQVar3 = local_68 + *(long *)(local_68 + 0x10);
        if ((pQVar3 != (QArrayData *)0x0) && (local_5c == 0)) {
          _strlen((char *)pQVar3);
        }
        QString::fromUtf8_helper((char *)&local_70,(int)pQVar3);
        QString::normalized(param_1,&local_70,1,0);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10032d410;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_10032d410:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10032d440;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_10032d440:
      if (local_40 == 0) {
        return param_1;
      }
      goto LAB_10032d445;
    }
    uVar2 = FUN_100dddcf0(iVar1);
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlTisRecord_GetText failed with RC = %.8X [%s]",
                  iVar1,uVar2);
  }
  else {
    local_44 = 0;
    iVar1 = _PrlTisRecord_GetState(local_40,&local_44);
    if (-1 < iVar1) {
      if (local_44 == 1) goto LAB_10032d17c;
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
            if ((bool)local_31) goto LAB_10032d39c;
          }
          QArrayData::deallocate(local_50,1,8);
        }
LAB_10032d39c:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10032d3cc;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
LAB_10032d3cc:
      *param_1 = PTR_shared_null_1021e1288;
      goto LAB_10032d440;
    }
    uVar2 = FUN_100dddcf0(iVar1);
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlTisRecord_GetState failed with RC = %.8X [%s]"
                  ,iVar1,uVar2);
  }
  *param_1 = PTR_shared_null_1021e1288;
LAB_10032d445:
  _PrlHandle_Free(local_40);
  return param_1;
}

