
int FUN_1000cfc10(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined1 local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  char local_61;
  QArrayData *local_60;
  int local_58;
  undefined1 local_54;
  long local_50;
  long *local_48;
  long local_40;
  undefined1 local_31;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Resuming Boot Camp Vm");
  }
  lVar1 = param_1 + 0x370;
  FUN_1005a5960(lVar1);
  iVar3 = 0;
  FUN_100097260(*(undefined8 *)(param_1 + 0x2b0),lVar1,0,0,0);
  FUN_1005a8040(&local_50,lVar1);
  if (local_40 != 0) goto LAB_1000cfcdc;
  FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != diskList.size()",
                "SerializationApp.cpp",0x927,"BootCampResume");
  do {
    if (local_40 == 0) break;
LAB_1000cfcdc:
    local_58 = 0;
    local_54 = 0;
    plVar2 = (long *)local_48[2];
    *(long *)(*local_48 + 8) = local_48[1];
    *(long *)local_48[1] = *local_48;
    local_40 = local_40 + -1;
    operator_delete(local_48);
    if (plVar2 == (long *)0x0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pDisk","SerializationApp.cpp",
                    0x92f,"BootCampResume");
    }
    (**(code **)(*plVar2 + 0x178))(&local_60,plVar2);
    local_61 = '\0';
    iVar3 = FUN_100562280(plVar2,&local_61);
    if (iVar3 < 0) {
      QString::toUtf8();
      FUN_1008e3970("","vm",0,
                    "Error : Failed to check whether disk \'%s\' is BootCamp, error 0x%X, skipping disk"
                    ,local_70 + *(long *)(local_70 + 0x10),iVar3);
      iVar5 = 0xb;
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d0074;
        }
        QArrayData::deallocate(local_70,1,8);
      }
    }
    else if (local_61 == '\0') {
      iVar5 = 10;
      if (1 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","vm",2,"Disk \'%s\' is not BootCamp disk, skipping disk",
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d0074;
          }
          QArrayData::deallocate(local_78,1,8);
        }
      }
    }
    else {
      FUN_100562190(local_80,plVar2);
      iVar3 = FUN_100565340(plVar2,&local_58);
      if (iVar3 < 0) {
        QString::toUtf8();
        FUN_1008e3970("","vm",0,
                      "Error : BootCamp disk \'%s\' suspend state validation failed, error 0x%X, unable to resume."
                      ,local_88 + *(long *)(local_88 + 0x10),iVar3);
        iVar5 = 0xb;
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d006b;
          }
          QArrayData::deallocate(local_88,1,8);
        }
      }
      else if (local_58 < 0) {
        QString::toUtf8();
        FUN_1008e3970("","vm",0,
                      "Error : BootCamp disk \'%s\' suspend state violation detected 0x%X, unable to resume."
                      ,local_90 + *(long *)(local_90 + 0x10),local_58);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d0061;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_1000d0061:
        iVar5 = 0xb;
        iVar3 = local_58;
      }
      else {
        iVar4 = FUN_1005654b0(plVar2,&local_58);
        iVar5 = 0;
        if ((iVar4 < 0) && (0 < DAT_1011b55f8)) {
          QString::toUtf8();
          FUN_1008e3970("","vm",1,
                        "Warning : BootCamp disk \'%s\' suspend state clear failed, error 0x%X, continuing."
                        ,local_98 + *(long *)(local_98 + 0x10),iVar4);
          iVar5 = 0;
          if (*(int *)local_98 != -1) {
            iVar5 = 0;
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000d006b;
            }
            QArrayData::deallocate(local_98,1,8);
          }
        }
      }
LAB_1000d006b:
      FUN_100562230(local_80);
    }
LAB_1000d0074:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d00a4;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1000d00a4:
  } while (iVar5 != 0xb);
  FUN_1005a5960(lVar1);
  if (iVar3 < 0) {
    FUN_1008e3970("","vm",0,"Error : Boot Camp Vm resume failed, error 0x%X",iVar3);
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

