
void FUN_100433ca0(long param_1,uint param_2,undefined4 param_3,ulong param_4,uint param_5,
                  int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  bool bVar6;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  if (0xf < param_2) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_2);
    return;
  }
  QMutex::lock();
  bVar6 = true;
  *(undefined4 *)(param_1 + 0x3c + (ulong)param_2 * 0x424) = param_3;
  if (*(char *)(param_1 + 0x38 + (ulong)param_2 * 0x424) == '\0') {
    FUN_1008e3970("","IODesktopServer",0,"Error: screen of disabled display \'%d\' was updated!",
                  param_2);
  }
  else {
    FUN_100436920(&local_60,param_1 + 0x20);
    local_58 = local_60;
    if (*local_60 != -1) {
      if (*local_60 == 0) {
        QListData::detach((int)&local_58);
        iVar1 = local_58[2];
        if (iVar1 != local_58[3]) {
          local_60 = local_60 + (long)local_60[2] * 2 + 4;
          piVar5 = local_58 + (long)iVar1 * 2 + 4;
          lVar4 = (long)local_58[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)local_60;
            *(int **)piVar5 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar5 = piVar5 + 2;
            local_60 = local_60 + 2;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *local_60 = *local_60 + 1;
        local_31 = *local_60 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)local_58[2] * 2 + 4;
    local_48 = local_58 + (long)local_58[3] * 2 + 4;
    local_40 = 1;
    FUN_100037320(&local_60);
    if (local_40 != 0) {
      do {
        if (local_50 == local_48) break;
        local_68 = *(QArrayData **)local_50;
        if (1 < *(int *)local_68 + 1U) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
        }
        if (local_40 != 0) {
          FUN_100432bf0(param_1,&local_68,param_2,((ulong)param_5 << 0x20) + (param_4 & 0xffffffff),
                        CONCAT44((param_5 - 1) + param_7,(int)param_4 + -1 + param_6));
          local_40 = 0;
        }
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100433f15;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100433f15:
        local_50 = local_50 + 2;
        uVar3 = local_40 ^ 1;
        bVar6 = local_40 != 1;
        local_40 = uVar3;
      } while (bVar6);
    }
    FUN_100037320(&local_58);
    bVar6 = false;
    QMutex::unlock();
    FUN_100439670(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if (bVar6) {
    QMutex::unlock();
  }
  return;
}

