
void FUN_10018e250(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_58;
  long local_50;
  QString local_48;
  long local_40;
  QString local_38;
  int local_2c;
  int local_28;
  undefined1 local_21;
  
  local_40 = *(long *)(param_1 + 0x70);
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getParamAsString(&local_38,&local_40);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  local_50 = *param_2;
  if (local_50 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getParamAsString(&local_48,&local_50);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  cVar2 = operator==(&local_48,&local_38);
  if (cVar2 == '\0') {
    plVar1 = (long *)(param_1 + 0x70);
    if (plVar1 != param_2) {
      if (*plVar1 != 0) {
        _PrlHandle_Free();
      }
      lVar4 = *param_2;
      *plVar1 = lVar4;
      if (lVar4 != 0) {
        _PrlHandle_AddRef();
      }
    }
    if ((*(int *)(local_48.field0_0x0 + 4) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
      lVar4 = CVmConfiguration::getVmSecurity();
      local_58 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      CBaseNode::fromString
                ((QTypedArrayData<unsigned_short> *)(lVar4 + 0x10),SUB81(&local_58,0),(QString *)0x0
                 ,(int *)0x0,(int *)0x0);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_21 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10018e3e8;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_10018e3e8:
    if ((*(int *)(param_1 + 100) == 1) && (iVar3 = CVmConfiguration::getValidRc(), iVar3 == 0)) {
      if (*(int *)(param_1 + 100) == 3) {
LAB_10018e43c:
        *(undefined4 *)(param_1 + 100) = 0;
        FUN_100805240(param_1,0);
      }
      else if (*(long *)(param_1 + 0x70) != 0) {
        iVar3 = _PrlAcl_IsAllowed(*(long *)(param_1 + 0x70),10,&local_28);
        if (iVar3 < 0) {
          uVar5 = FUN_100dddcf0(iVar3);
          FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlAcl_IsAllowed failed. RC = %.8X, (%s)",
                        iVar3,uVar5);
        }
        else if ((local_28 != 0) && (*(int *)(param_1 + 100) != 0)) goto LAB_10018e43c;
      }
    }
    FUN_1008056b0(param_1);
  }
  else if ((*(int *)(param_1 + 100) == 1) && (iVar3 = CVmConfiguration::getValidRc(), iVar3 == 0)) {
    if (*(int *)(param_1 + 100) == 3) {
LAB_10018e32d:
      *(undefined4 *)(param_1 + 100) = 0;
      FUN_100805240(param_1,0);
    }
    else if (*(long *)(param_1 + 0x70) != 0) {
      iVar3 = _PrlAcl_IsAllowed(*(long *)(param_1 + 0x70),10,&local_2c);
      if (iVar3 < 0) {
        uVar5 = FUN_100dddcf0(iVar3);
        FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlAcl_IsAllowed failed. RC = %.8X, (%s)",
                      iVar3,uVar5);
      }
      else if ((local_2c != 0) && (*(int *)(param_1 + 100) != 0)) goto LAB_10018e32d;
    }
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018e4e6;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10018e4e6:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

