
int FUN_10057d190(long *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  QArrayData *local_a0;
  QArrayData *local_98;
  int local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_1[0x225] == param_1[0x226]) {
    FUN_1008e3970("Backup","vdisk",0,"Disk was not opened correctly!");
    iVar2 = -0x7ffe6fea;
  }
  else {
    local_90[0] = 1;
    iVar2 = (**(code **)(**(long **)(param_1[1] + 0x10) + 0x188))
                      (*(long **)(param_1[1] + 0x10),local_90);
    if ((iVar2 < 0) || (local_90[0] == 0)) {
      (**(code **)(*param_1 + 0x230))(&local_a0,param_1);
      QString::toUtf8();
      FUN_1008e3970("Backup","vdisk",0,"%s: Backup API disabled by config",
                    local_98 + *(long *)(local_98 + 0x10));
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          UNLOCK();
          local_90[0] = CONCAT31(local_90[0]._1_3_,*(int *)local_98 != 0);
          if (*(int *)local_98 != 0) goto LAB_10057d2f8;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_10057d2f8:
      iVar2 = -0x7ffdefcb;
      lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          UNLOCK();
          local_90[0] = CONCAT31(local_90[0]._1_3_,*(int *)local_a0 != 0);
          if (*(int *)local_a0 != 0) goto LAB_10057d48b;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
      goto LAB_10057d48b;
    }
    cVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (cVar1 == '\0') {
      lVar3 = FUN_1005f6150(2,param_1);
      if ((lVar3 == 0) ||
         (plVar4 = (long *)___dynamic_cast(lVar3,&PTR_vtable_100bc7fa0,&PTR_vtable_100bc80a0,0),
         plVar4 == (long *)0x0)) {
        FUN_1008e3970("Backup","vdisk",0,"Failed to create object");
        iVar2 = -0x7ffeffed;
      }
      else {
        FUN_1007d6870(&local_88);
        local_6c = 0;
        local_68 = 0xffffffff;
        local_60 = 0xff;
        local_58._8_4_ = (int)PTR_shared_null_100ba2188;
        local_58._0_8_ = PTR_shared_null_100ba2188;
        local_58._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
        local_88 = *param_2;
        local_80 = param_2[1];
        local_78 = param_3;
        local_70 = param_4;
        local_48 = local_58;
        iVar2 = (**(code **)(*plVar4 + 0x128))(plVar4,param_1 + 1,&local_88,param_5,param_6);
        if (iVar2 < 0) {
          FUN_1008e3970("Backup","vdisk",0,"Operation init failed, err = 0x%X",iVar2);
          (**(code **)(*plVar4 + 0x58))(plVar4);
        }
        else {
          param_1[0x239] = (long)plVar4;
          iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        FUN_10057e7b0(&local_88);
      }
    }
    else {
      FUN_1008e3970("Backup","vdisk",0,"PrepareBackup() found uncommited operation");
      iVar2 = -0x7ffdef9e;
    }
  }
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10057d48b:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

