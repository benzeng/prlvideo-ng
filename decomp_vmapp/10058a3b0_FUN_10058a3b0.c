
bool FUN_10058a3b0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  if (*(long *)(param_2 + 0x10) != 1) {
    bVar8 = false;
    goto LAB_10058a820;
  }
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x10) + 0x40))(local_48);
  iVar2 = FUN_1007ea6f0(param_3,local_48);
  bVar8 = true;
  if (iVar2 == 0) goto LAB_10058a820;
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_10058a501:
    FUN_1007d6a70(&local_60,*(long *)(param_2 + 8) + 0x10);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Unable to find successor %s",local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_49 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10058a57e;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_10058a57e:
    if (*(int *)local_60 == -1) {
      bVar8 = false;
      goto LAB_10058a820;
    }
    local_70 = local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) {
        bVar8 = false;
        goto LAB_10058a820;
      }
    }
  }
  else {
    plVar1 = (long *)(param_1 + 0x28);
    lVar9 = *(long *)(param_2 + 8) + 0x10;
    plVar7 = *(long **)(param_1 + 0x28);
    plVar5 = plVar1;
    do {
      while (plVar4 = plVar7, iVar2 = FUN_1007ea6f0(plVar4 + 4,lVar9), iVar2 < 0) {
        plVar7 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) goto LAB_10058a493;
      }
      plVar5 = plVar4;
      plVar7 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
LAB_10058a493:
    lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
    if ((plVar5 == plVar1) || (iVar2 = FUN_1007ea6f0(lVar9,plVar5 + 4), iVar2 < 0))
    goto LAB_10058a501;
    plVar4 = (long *)*plVar1;
    plVar7 = plVar1;
    if ((long *)*plVar1 != (long *)0x0) {
      do {
        while (plVar6 = plVar4, iVar2 = FUN_1007ea6f0(plVar6 + 4,param_3), iVar2 < 0) {
          plVar4 = (long *)plVar6[1];
          if ((long *)plVar6[1] == (long *)0x0) goto LAB_10058a5b6;
        }
        plVar7 = plVar6;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
LAB_10058a5b6:
      lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
      if ((plVar7 != plVar1) && (iVar2 = FUN_1007ea6f0(param_3,plVar7 + 4), -1 < iVar2)) {
        FUN_100585d90(&local_80,param_1,plVar7 + 7);
        QString::toUtf8();
        lVar3 = FUN_100761ab0(local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_49 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10058a644;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_10058a644:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_49 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10058a674;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10058a674:
        FUN_100585d90(&local_90,param_1,plVar5 + 7);
        QString::toUtf8();
        lVar9 = FUN_100761ab0(local_88 + *(long *)(local_88 + 0x10));
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_49 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10058a6dd;
          }
          QArrayData::deallocate(local_88,1,8);
        }
LAB_10058a6dd:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_49 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10058a713;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_10058a713:
        if ((lVar3 == -1) || (lVar9 == -1)) {
          bVar8 = false;
          FUN_1008e3970("","vdisk",0,"Error getting sizes: Parent %llu child %llu",lVar3,lVar9);
        }
        else {
          bVar8 = lVar9 < lVar3;
        }
        lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_10058a820;
      }
    }
    FUN_1007d6a70(&local_70,param_3);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Unable to find image by uid %s",
                  local_68 + *(long *)(local_68 + 0x10));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_49 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10058a7a4;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_10058a7a4:
    if (*(int *)local_70 == -1) {
      bVar8 = false;
      goto LAB_10058a820;
    }
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) {
        bVar8 = false;
        goto LAB_10058a820;
      }
    }
  }
  QArrayData::deallocate(local_70,2,8);
  bVar8 = false;
LAB_10058a820:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar8;
}

