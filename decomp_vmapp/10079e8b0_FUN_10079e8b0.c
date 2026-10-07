
undefined8 FUN_10079e8b0(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  QArrayData *pQVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  QArrayData *local_70;
  QArrayData *local_60;
  long *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  if (((*param_3 == 0) || (*(long *)(*param_3 + 0x10) == 0)) ||
     (cVar5 = FUN_100790e90(), cVar5 == '\0')) {
    FUN_100795ca0(param_1);
    goto LAB_10079e9d5;
  }
  FUN_10078f0a0(&local_58,param_3,param_4);
  if ((local_58 == (long *)0x0) || (local_58[2] == 0)) {
    pQVar3 = *(QArrayData **)(param_2 + 0x18);
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_49 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sCan\'t create attach client package!",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_49 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10079ea6d;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_10079ea6d:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_49 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10079ea9d;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_10079ea9d:
    FUN_100795ca0(param_1);
  }
  else {
    FUN_1007ea830();
    if ((*(ushort *)(param_2 + 0xd0) < 7) &&
       ((*(ushort *)(param_2 + 0xd0) != 6 || (*(ushort *)(param_2 + 0xd2) < 9)))) {
      plVar7 = operator_new(8,(nothrow_t *)PTR_nothrow_100ba21c8);
      bVar4 = true;
      plVar6 = (long *)0x0;
      if (plVar7 == (long *)0x0) {
LAB_10079eaf9:
        plVar7 = plVar6;
        pQVar3 = *(QArrayData **)(param_2 + 0x18);
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_49 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sCan\'t create attach client package!",
                      local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_49 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10079eb78;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_10079eb78:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_49 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10079eba8;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_10079eba8:
        if (!bVar4) {
          plVar6 = (long *)*plVar7;
          if (plVar6 != (long *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          operator_delete(plVar7);
        }
      }
      else {
        lVar8 = *param_3;
        *plVar7 = lVar8;
        if (lVar8 == 0) {
LAB_10079eaf4:
          bVar4 = false;
          plVar6 = plVar7;
          goto LAB_10079eaf9;
        }
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
        if ((*plVar7 == 0) || (*(long *)(*plVar7 + 0x10) == 0)) goto LAB_10079eaf4;
      }
      lVar8 = local_58[2];
      *(code **)(lVar8 + 0x70) = FUN_10079ed50;
      *(long **)(lVar8 + 0x78) = plVar7;
    }
    else {
      lVar8 = 0;
      if (local_58 != (long *)0x0) {
        lVar8 = local_58[2];
      }
      FUN_1007d6c60(local_48,lVar8);
      plVar6 = (long *)FUN_1007b7180(param_2 + 0x2e0,local_48);
      lVar8 = *param_3;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar7 = (long *)*plVar6;
      *plVar6 = lVar8;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    FUN_10079e810(param_1,param_2,&local_58);
  }
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_10079e9d5:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

