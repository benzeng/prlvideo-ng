
uint FUN_10058aa20(long param_1,long *param_2,long param_3,byte param_4)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint local_84;
  QArrayData *local_60;
  uint local_54;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar9 = *(long *)(param_3 + 8);
  if (lVar9 != param_3) {
    plVar1 = (long *)(param_1 + 0x28);
    local_84 = (uint)(param_4 ^ 1);
    do {
      lVar6 = lVar9 + 0x10;
      plVar3 = (long *)*plVar1;
      plVar7 = plVar1;
      if ((long *)*plVar1 == (long *)0x0) {
LAB_10058ac75:
        FUN_1007d6a70(&local_48,lVar6);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,
                      "Error searching for a successor node %s in filling writable list",
                      local_40 + *(long *)(local_40 + 0x10));
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10058ace6;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_10058ace6:
        if (*(int *)local_48 == -1) {
          return 0x80019013;
        }
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return 0x80019013;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_48,2,8);
        return 0x80019013;
      }
      do {
        while (plVar8 = plVar3, iVar4 = FUN_1007ea6f0(plVar8 + 4,lVar6), -1 < iVar4) {
          plVar7 = plVar8;
          plVar3 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_10058aab3;
        }
        plVar3 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
LAB_10058aab3:
      if ((plVar7 == plVar1) || (iVar4 = FUN_1007ea6f0(lVar6,plVar7 + 4), iVar4 < 0))
      goto LAB_10058ac75;
      FUN_100585d90(&local_50,param_1,plVar7 + 7);
      uVar5 = FUN_10058ae30(param_1,&local_50);
      local_54 = 0;
      lVar6 = FUN_10058af50(param_1,uVar5,(uint)(param_4 ^ 1),&local_50,(int)plVar7[6],&local_54);
      if ((int)local_54 < 0) {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Error reopening image %s in case of 0x%x",
                      local_60 + *(long *)(local_60 + 0x10),local_54);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10058abba;
          }
          QArrayData::deallocate(local_60,1,8);
        }
LAB_10058abba:
        local_84 = local_54;
        bVar2 = false;
      }
      else {
        plVar7 = operator_new(0x20);
        plVar7[2] = lVar6;
        *(undefined4 *)(plVar7 + 3) = uVar5;
        plVar7[1] = (long)param_2;
        lVar6 = *param_2;
        *plVar7 = lVar6;
        *(long **)(lVar6 + 8) = plVar7;
        *param_2 = (long)plVar7;
        param_2[2] = param_2[2] + 1;
        bVar2 = true;
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058abf2;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10058abf2:
      if (!bVar2) {
        return local_84;
      }
      lVar9 = *(long *)(lVar9 + 8);
    } while (lVar9 != param_3);
  }
  return 0;
}

