
void FUN_10015b540(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (((*param_2 != 0) && (*(int *)(*param_2 + 4) != 0)) && (param_2[1] != 0)) {
    lVar3 = *(long *)(param_1 + 200);
    iVar2 = *(int *)(lVar3 + 8);
    if (iVar2 != *(int *)(lVar3 + 0xc)) {
      plVar4 = (long *)(lVar3 + 0x10 + (long)iVar2 * 8);
      lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar2 * -8;
      do {
        lVar1 = *(long *)*plVar4;
        lVar5 = 0;
        if ((lVar1 != 0) && (lVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
          lVar5 = ((long *)*plVar4)[1];
        }
        if (lVar5 == param_2[1]) {
          FUN_10018c650(&local_48);
          FUN_100800590(param_1,&local_48);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10015b62a;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_10015b62a:
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10015b65a;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_10015b65a:
          lVar3 = 0;
          if ((*param_2 != 0) && (lVar3 = 0, *(int *)(*param_2 + 4) != 0)) {
            lVar3 = param_2[1];
          }
          FUN_1008005e0(param_1,lVar3);
          if (*param_2 == 0) {
            return;
          }
          if (*(int *)(*param_2 + 4) == 0) {
            return;
          }
          if (param_2[1] == 0) {
            return;
          }
          FUN_100188480(&local_50);
          FUN_1001786d0(param_1 + 200,param_2);
          if (((*param_2 != 0) && (*(int *)(*param_2 + 4) != 0)) &&
             ((long *)param_2[1] != (long *)0x0)) {
            (**(code **)(*(long *)param_2[1] + 0x20))();
          }
          local_58 = *(QArrayData **)(param_1 + 0x68);
          if (1 < *(int *)local_58 + 1U) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
          }
          local_60 = local_50;
          if (1 < *(int *)local_50 + 1U) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + 1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
          }
          iVar2 = *(int *)local_58;
          if (1 < iVar2 + 1U) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            iVar2 = *(int *)local_58;
          }
          if (iVar2 != -1) {
            if (iVar2 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10015b73e;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_10015b73e:
          FUN_100800630(param_1,&local_60);
          FUN_100800680(param_1,&local_50);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10015b786;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_10015b786:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10015b7b6;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_10015b7b6:
          if (*(int *)local_50 == -1) {
            return;
          }
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
          return;
        }
        plVar4 = plVar4 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  return;
}

