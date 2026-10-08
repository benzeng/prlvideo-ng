
int FUN_10004bff0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  local_40 = (int *)PTR_shared_null_1021e15e8;
  FUN_10004c340(param_1,&local_40);
  iVar1 = local_40[2];
  iVar2 = 0;
  if (iVar1 != local_40[3]) {
    plVar3 = (long *)(local_40 + (long)iVar1 * 2 + 4);
    lVar4 = (long)local_40[3] * 8 + (long)iVar1 * -8;
    iVar2 = 0;
    do {
      iVar1 = FUN_100047b40(param_1,*plVar3 + 8);
      if (iVar1 == -1) {
        QString::toUtf8();
        FUN_100df99c0("SGASMGMT","prl_client_app",0,"Error: helper \"%s\" is broken",
                      local_48 + *(long *)(local_48 + 0x10));
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004c0c8;
          }
          QArrayData::deallocate(local_48,1,8);
        }
LAB_10004c0c8:
        FUN_10004cfb0(*plVar3 + 8);
LAB_10004c1f0:
        iVar2 = iVar2 + 1;
      }
      else if (iVar1 == 2) {
        if (1 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("SGASMGMT","prl_client_app",2,"Helper \"%s\" must be patched",
                        local_50 + *(long *)(local_50 + 0x10));
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10004c160;
            }
            QArrayData::deallocate(local_50,1,8);
          }
        }
LAB_10004c160:
        iVar1 = FUN_1000495e0(param_1,*plVar3 + 8,0);
        if (iVar1 == -1) {
          QString::toUtf8();
          FUN_100df99c0("SGASMGMT","prl_client_app",0,"Error: failed to patch helper \"%s\"",
                        local_58 + *(long *)(local_58 + 0x10));
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10004c1da;
            }
            QArrayData::deallocate(local_58,1,8);
          }
LAB_10004c1da:
          FUN_10004cfb0(*plVar3 + 8);
        }
        goto LAB_10004c1f0;
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return iVar2;
      }
      local_31 = 0;
    }
    FUN_100055310(&local_40,local_40);
  }
  return iVar2;
}

