
undefined8 FUN_1005a83e0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((int)param_1[8] == 1) {
    puVar4 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar4 != (undefined8 *)0x0) {
      plVar5 = operator_new(8,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar5 != (long *)0x0) {
        *plVar5 = 0;
        *puVar4 = plVar5;
        *(undefined4 *)(puVar4 + 1) = 1;
        lVar1 = *param_2;
        if (lVar1 == 0) {
          *plVar5 = 0;
        }
        else {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
          plVar2 = (long *)*plVar5;
          *plVar5 = lVar1;
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar5 = plVar2 + 1;
            lVar1 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar1 == 1) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
        }
        puVar3 = (undefined8 *)param_1[4];
        param_1[4] = (long)(puVar4 + 2);
        puVar4[2] = param_1 + 3;
        puVar4[3] = puVar3;
        *puVar3 = puVar4 + 2;
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        return 0;
      }
      *puVar4 = 0;
      (**(code **)(*param_1 + 0xa0))(&local_60,param_1,param_2);
      QString::toLocal8Bit();
      FUN_1008e3970("","vdisk",0,"Error allocating memory for data for entry %s",
                    local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005a866e;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_1005a866e:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005a869e;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1005a869e:
      operator_delete(puVar4);
      return 0x80000002;
    }
    (**(code **)(*param_1 + 0xa0))(&local_50,param_1,param_2);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Error allocating memory for entry %s",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005a85ad;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1005a85ad:
    uVar6 = 0x80000002;
    if (*(int *)local_50 == -1) {
      return 0x80000002;
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0x80000002;
      }
      local_29 = 0;
    }
    goto LAB_1005a85db;
  }
  FUN_1005a9cd0(&local_40);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Add file called in incorrect filter state (%s)",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a84fe;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1005a84fe:
  uVar6 = 0x80000516;
  if (*(int *)local_40 == -1) {
    return 0x80000516;
  }
  local_50 = local_40;
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return 0x80000516;
    }
    local_29 = 0;
  }
LAB_1005a85db:
  QArrayData::deallocate(local_50,2,8);
  return uVar6;
}

