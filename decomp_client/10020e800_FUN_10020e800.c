
void FUN_10020e800(long *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  uint uVar6;
  bool bVar7;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  int *local_70;
  long *local_68;
  long *local_60;
  uint local_58;
  long local_50;
  int *local_48;
  long local_40;
  undefined1 local_31;
  
  if (param_2 != 0) goto LAB_10020eae0;
  CSdkRequest::getResultHandle();
  local_50 = local_40;
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_10072c070(&local_48,&local_50);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  FUN_10020ff70(param_1 + 0x13);
  FUN_100210270(&local_70,&local_48);
  local_68 = (long *)(local_70 + (long)local_70[2] * 2 + 4);
  local_60 = (long *)(local_70 + (long)local_70[3] * 2 + 4);
  local_58 = 1;
  if (local_70[2] != local_70[3]) {
    do {
      uVar2 = *(undefined8 *)*local_68;
      piVar3 = (int *)((undefined8 *)*local_68)[1];
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        LOCK();
        piVar1 = piVar3 + 1;
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_58 != 0) {
        FUN_10072c9e0(&local_88,uVar2);
        FUN_10072ca10(&local_90,uVar2);
        pQVar5 = local_88;
        pQVar4 = local_90;
        local_80 = local_88;
        if (1 < *(int *)local_88 + 1U) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + 1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
        }
        local_78 = local_90;
        if (1 < *(int *)local_90 + 1U) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
        FUN_1001c44c0(param_1 + 0x13,&local_80);
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10020e980;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_10020e980:
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10020e9af;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_10020e9af:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10020e9e5;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_10020e9e5:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10020ea15;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10020ea15:
        local_58 = 0;
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        piVar1 = piVar3 + 1;
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          (**(code **)(piVar3 + 2))(piVar3);
        }
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_31 = *piVar3 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar3);
        }
      }
      local_68 = local_68 + 1;
      uVar6 = local_58 ^ 1;
      bVar7 = local_58 != 1;
      local_58 = uVar6;
    } while ((bVar7) && (local_68 != local_60));
  }
  if (*local_70 != -1) {
    if (*local_70 != 0) {
      LOCK();
      *local_70 = *local_70 + -1;
      local_31 = *local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10020eaa8;
    }
    FUN_100210110(&local_70,local_70);
  }
LAB_10020eaa8:
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_31 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10020ead2;
    }
    FUN_100210110(&local_48,local_48);
  }
LAB_10020ead2:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
LAB_10020eae0:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

