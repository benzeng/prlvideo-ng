
void FUN_10028f390(long *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *local_58;
  int *local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  QObject::sender();
  lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get request object to update usb associations list");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    param_2 = 0x80000009;
  }
  else {
    uVar3 = CSdkRequest::getResultParamCount();
    if (uVar3 != 0) {
      local_40 = (int *)PTR_shared_null_1021e15e8;
      uVar8 = 0;
      do {
        CSdkRequest::getResultAsString((int)&local_48);
        if (*(int *)(local_48 + 4) != 0) {
          FUN_1000341d0(&local_40,&local_48);
        }
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10028f452;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_10028f452:
        uVar8 = uVar8 + 1;
        if (uVar3 <= uVar8) {
          local_50 = (int *)param_1[3];
          if (*local_50 != -1) {
            if (*local_50 == 0) {
              QListData::detach((int)&local_50);
              iVar1 = local_50[2];
              if (iVar1 != local_50[3]) {
                puVar5 = (undefined8 *)(param_1[3] + 0x10 + (long)*(int *)(param_1[3] + 8) * 8);
                piVar6 = local_50 + (long)iVar1 * 2 + 4;
                lVar4 = (long)local_50[3] * 8 + (long)iVar1 * -8;
                do {
                  piVar7 = (int *)*puVar5;
                  *(int **)piVar6 = piVar7;
                  if (1 < *piVar7 + 1U) {
                    LOCK();
                    *piVar7 = *piVar7 + 1;
                    local_31 = *piVar7 != 0;
                    UNLOCK();
                  }
                  piVar6 = piVar6 + 2;
                  puVar5 = puVar5 + 1;
                  lVar4 = lVar4 + -8;
                } while (lVar4 != 0);
              }
            }
            else {
              LOCK();
              *local_50 = *local_50 + 1;
              local_31 = *local_50 != 0;
              UNLOCK();
            }
          }
          local_58 = local_40;
          if (*local_40 != -1) {
            if (*local_40 == 0) {
              QListData::detach((int)&local_58);
              iVar1 = local_58[2];
              if (iVar1 != local_58[3]) {
                piVar6 = local_40 + (long)local_40[2] * 2 + 4;
                piVar7 = local_58 + (long)iVar1 * 2 + 4;
                lVar4 = (long)local_58[3] * 8 + (long)iVar1 * -8;
                do {
                  piVar2 = *(int **)piVar6;
                  *(int **)piVar7 = piVar2;
                  if (1 < *piVar2 + 1U) {
                    LOCK();
                    *piVar2 = *piVar2 + 1;
                    local_31 = *piVar2 != 0;
                    UNLOCK();
                  }
                  piVar7 = piVar7 + 2;
                  piVar6 = piVar6 + 2;
                  lVar4 = lVar4 + -8;
                } while (lVar4 != 0);
              }
            }
            else {
              LOCK();
              *local_40 = *local_40 + 1;
              local_31 = *local_40 != 0;
              UNLOCK();
            }
          }
          FUN_1001b2370(&local_50,&local_58);
          FUN_100039a80(&local_58);
          FUN_100039a80(&local_50);
          (**(code **)(*param_1 + 0xb0))(param_1,param_2);
          FUN_100039a80(&local_40);
          return;
        }
      } while( true );
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010028f537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

