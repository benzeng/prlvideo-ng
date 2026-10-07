
int FUN_10059d170(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  undefined1 local_d8 [16];
  QArrayData *local_c8;
  int local_b8;
  undefined1 local_b1;
  undefined1 local_b0 [40];
  undefined1 local_88 [48];
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_b8 = 0;
  FUN_100098d30(local_b0);
  local_c8 = (QArrayData *)PTR_shared_null_100ba20d0;
  plVar3 = (long *)FUN_100684400(param_2,1,param_3,&local_b8,0);
  if (plVar3 == (long *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Can\'t create image %s with type %u",
                  local_e0 + *(long *)(local_e0 + 0x10),param_3);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_b1 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_b1) goto LAB_10059d49b;
      }
      QArrayData::deallocate(local_e0,1,8);
    }
  }
  else {
    local_b8 = (**(code **)(*plVar3 + 0x38))(plVar3,local_d8);
    (**(code **)(*plVar3 + 0x28))(plVar3);
    (**(code **)(*plVar3 + 0x20))(plVar3);
    iVar2 = local_b8;
    if (local_b8 < 0) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error 0x%x getting parameters from image %s",iVar2,
                    local_e8 + *(long *)(local_e8 + 0x10));
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_b1 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_10059d49b;
        }
        QArrayData::deallocate(local_e8,1,8);
      }
    }
    else {
      local_b8 = FUN_10059c050(local_d8,local_b0);
      if (local_b8 < 0) {
        FUN_1008e3970("","vdisk",0,"Error 0x%x converting image info",local_b8);
      }
      else {
        plVar3 = (long *)FUN_10059a920(param_1,local_b0,0x1003,0,0,&local_b8);
        iVar2 = local_b8;
        if (local_b8 < 0) {
          QString::toUtf8();
          lVar1 = *(long *)(local_f0 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Error 0x%x when creating disk %s from image %s Type %u",iVar2,
                        local_f0 + lVar1,local_f8 + *(long *)(local_f8 + 0x10),param_3);
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_b1 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_10059d45f;
            }
            QArrayData::deallocate(local_f8,1,8);
          }
LAB_10059d45f:
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_b1 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_10059d49b;
            }
            QArrayData::deallocate(local_f0,1,8);
          }
        }
        else {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
LAB_10059d49b:
  iVar2 = local_b8;
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_b1 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_10059d4dd;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10059d4dd:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_b1 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_10059d513;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10059d513:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_b1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_10059d549;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10059d549:
  FUN_100098f20(local_88);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

