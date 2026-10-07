
int FUN_1000cf4d0(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  QArrayData *local_80;
  undefined1 local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  char local_59;
  QArrayData *local_58;
  long local_50;
  long *local_48;
  long local_40;
  undefined1 local_31;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Suspending Boot Camp Vm");
  }
  lVar1 = param_1 + 0x370;
  FUN_1005a5960(lVar1);
  iVar3 = 0;
  FUN_100097260(*(undefined8 *)(param_1 + 0x2b0),lVar1,0,0,0);
  FUN_1005a8040(&local_50,lVar1);
  if (local_40 != 0) goto LAB_1000cf59e;
  FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != diskList.size()",
                "SerializationApp.cpp",0x8ea,"BootCampSuspend");
  do {
    if (local_40 == 0) break;
LAB_1000cf59e:
    plVar2 = (long *)local_48[2];
    *(long *)(*local_48 + 8) = local_48[1];
    *(long *)local_48[1] = *local_48;
    local_40 = local_40 + -1;
    operator_delete(local_48);
    if (plVar2 == (long *)0x0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pDisk","SerializationApp.cpp",
                    0x8f0,"BootCampSuspend");
    }
    (**(code **)(*plVar2 + 0x178))(&local_58,plVar2);
    local_59 = '\0';
    iVar3 = FUN_100562280(plVar2,&local_59);
    if (iVar3 < 0) {
      QString::toUtf8();
      FUN_1008e3970("","vm",0,
                    "Error : Failed to check whether disk \'%s\' is BootCamp, error 0x%X, skipping disk"
                    ,local_68 + *(long *)(local_68 + 0x10),iVar3);
      iVar4 = 0xb;
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000cf7c8;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
    else if (local_59 == '\0') {
      iVar4 = 10;
      if (1 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","vm",2,"Disk \'%s\' is not BootCamp disk, skipping disk",
                      local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000cf7c8;
          }
          QArrayData::deallocate(local_70,1,8);
        }
      }
    }
    else {
      FUN_100562190(local_78,plVar2);
      iVar3 = FUN_100563bb0(plVar2);
      iVar4 = 0;
      if (iVar3 < 0) {
        QString::toUtf8();
        FUN_1008e3970("","vm",0,
                      "Error : BootCamp disk \'%s\' suspend state save failed, error 0x%X, unable to suspend."
                      ,local_80 + *(long *)(local_80 + 0x10),iVar3);
        iVar4 = 0xb;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000cf6d0;
          }
          QArrayData::deallocate(local_80,1,8);
        }
      }
LAB_1000cf6d0:
      FUN_100562230(local_78);
    }
LAB_1000cf7c8:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000cf7f8;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1000cf7f8:
  } while (iVar4 != 0xb);
  FUN_1005a5960(lVar1);
  if (iVar3 < 0) {
    FUN_1008e3970("","vm",0,"Error : Boot Camp Vm suspend failed, error 0x%X",iVar3);
  }
  if (local_40 != 0) {
    *(undefined8 *)(*local_48 + 8) = *(undefined8 *)(local_50 + 8);
    **(long **)(local_50 + 8) = *local_48;
    local_40 = 0;
    while (local_48 != &local_50) {
      plVar2 = (long *)local_48[1];
      operator_delete(local_48);
      local_48 = plVar2;
    }
  }
  return iVar3;
}

