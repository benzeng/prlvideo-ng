
int FUN_100d41070(undefined8 param_1,QByteArray *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long local_48;
  QArrayData *local_40;
  long local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  
  local_38 = 0;
  iVar3 = FUN_100d41340(param_1,&local_38);
  if (iVar3 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the user profile, 0x%x",iVar3);
    goto LAB_100d412bc;
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_2c = 0;
  iVar3 = _PrlUsrCfg_GetDefaultVmFolder(local_38,0,&local_2c);
  if ((iVar3 == -0x7ffffffa) || (iVar3 == 0)) {
    QByteArray::resize((int)&local_40);
    lVar2 = local_38;
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    iVar3 = _PrlUsrCfg_GetDefaultVmFolder(lVar2,local_40 + *(long *)(local_40 + 0x10),&local_2c);
  }
  if (iVar3 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the user default vm directory, 0x%x",iVar3);
  }
  else {
    if (*(uint *)(local_40 + 4) == 0) {
      local_48 = 0;
      iVar3 = FUN_100d41480(param_1,&local_48,100000);
      if (iVar3 < 0) {
        bVar1 = true;
        FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the dispatcher configuration, 0x%x",iVar3);
      }
      else {
        local_28 = 0;
        iVar3 = _PrlDispCfg_GetDefaultVmDir(local_48,0,&local_28);
        if ((iVar3 == -0x7ffffffa) || (iVar3 == 0)) {
          QByteArray::resize((int)&local_40);
          lVar2 = local_48;
          if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
          }
          iVar3 = _PrlDispCfg_GetDefaultVmDir(lVar2,local_40 + *(long *)(local_40 + 0x10),&local_28)
          ;
        }
        if (iVar3 < 0) {
          bVar1 = true;
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the dispatcher default vm directory, 0x%x"
                        ,iVar3);
        }
        else {
          bVar1 = false;
        }
      }
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
      if (bVar1) goto LAB_100d4128c;
    }
    iVar3 = 0;
    QByteArray::operator=(param_2,(QByteArray *)&local_40);
  }
LAB_100d4128c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d412bc;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d412bc:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return iVar3;
}

