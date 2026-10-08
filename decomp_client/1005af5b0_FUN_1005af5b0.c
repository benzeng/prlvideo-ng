
void FUN_1005af5b0(long param_1)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  QArrayData *local_70;
  undefined4 local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int local_40;
  QArrayData *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("",0);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_21 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_30 = 3;
  local_38 = pQVar3;
  FUN_1005b3950(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005af62b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005af62b:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005af658;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005af658:
  uVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b4030(&local_60,uVar4);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar6 = local_58 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_21 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_60 = local_60 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_21 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  FUN_100039a80(&local_60);
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      local_70 = *(QArrayData **)local_50;
      if (1 < *(int *)local_70 + 1U) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
      }
      local_68 = 1;
      FUN_1005b3950(param_1,&local_70);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_21 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1005af79a;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1005af79a:
      local_50 = local_50 + 2;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  FUN_100039a80(&local_58);
  return;
}

