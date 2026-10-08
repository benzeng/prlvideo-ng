
void FUN_1000e3a80(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 in_R9;
  long *plVar7;
  QArrayData *local_50;
  long *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar4 = (**(code **)(*param_1 + 0x68))();
  if (*(char *)(lVar4 + 0xc) != '\0') {
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    plVar7 = param_1 + 0x11;
    QMutex::lock();
    lVar4 = *param_2;
    iVar2 = *(int *)(lVar4 + 8);
    if (iVar2 != *(int *)(lVar4 + 0xc)) {
      lVar5 = lVar4 + 0x10 + (long)iVar2 * 8;
      lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar2 * -8;
      do {
        FUN_1000f8c40(&local_48,param_1 + 0x34,lVar5);
        if ((local_48 == (long *)0x0) || (local_48[2] == 0)) {
          if (1 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("SGAC","prl_client_app",2,
                          "Cannot add \'%s\' to launchpad: it not found in bundle cache",
                          local_50 + *(long *)(local_50 + 0x10),in_R9,plVar7);
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000e3c00;
              }
              QArrayData::deallocate(local_50,1,8);
            }
          }
        }
        else {
          cVar3 = FUN_100051ba0(param_1 + 2,local_48[2],&local_40);
          if (cVar3 != '\0') {
            FUN_100051fc0(param_1 + 2,param_1 + 0x35,param_1 + 4);
            lVar6 = 0;
            if (local_48 != (long *)0x0) {
              lVar6 = local_48[2];
            }
            FUN_100da3190(lVar6,&local_40);
          }
        }
LAB_1000e3c00:
        if (local_48 != (long *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
        lVar5 = lVar5 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    QMutex::unlock();
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  return;
}

