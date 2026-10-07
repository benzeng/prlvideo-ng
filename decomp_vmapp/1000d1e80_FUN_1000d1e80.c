
int FUN_1000d1e80(long param_1,char param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  QArrayData *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_68 [14];
  char local_5a;
  char local_59;
  QArrayData *local_58;
  long local_50;
  long *local_48;
  long local_40;
  undefined1 local_31;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Removing Boot Camp Vm suspend state");
  }
  lVar1 = param_1 + 0x370;
  FUN_1005a5960(lVar1);
  iVar4 = 0;
  FUN_100097260(*(undefined8 *)(param_1 + 0x2b0),lVar1,0,0,0);
  FUN_1005a8040(&local_50,lVar1);
  if (local_40 != 0) goto LAB_1000d1f52;
  iVar4 = 0;
  FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != diskList.size()",
                "SerializationApp.cpp",0x974,"BootCampRemoveSuspend");
LAB_1000d1f47:
  do {
    if (local_40 == 0) {
      FUN_1005a5960(lVar1);
      if ((iVar4 < 0) && (0 < DAT_1011b55f8)) {
        FUN_1008e3970("","vm",1,"Warning : Boot Camp Vm suspend remove failed, error 0x%X",iVar4);
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
      return iVar4;
    }
LAB_1000d1f52:
    plVar2 = (long *)local_48[2];
    *(long *)(*local_48 + 8) = local_48[1];
    *(long *)local_48[1] = *local_48;
    local_40 = local_40 + -1;
    operator_delete(local_48);
    if (plVar2 == (long *)0x0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pDisk","SerializationApp.cpp",
                    0x97a,"BootCampRemoveSuspend");
    }
    (**(code **)(*plVar2 + 0x178))(&local_58,plVar2);
    local_59 = '\0';
    local_5a = '\0';
    FUN_100562280(plVar2,&local_59);
    FUN_1005637f0(plVar2,&local_5a);
    if ((local_59 != '\0') && (local_5a != '\0')) {
      FUN_100562190(local_68,plVar2);
      local_70 = 0;
      local_6c = 0;
      if (param_2 == '\0') {
        iVar3 = FUN_1005654b0(plVar2,&local_70);
      }
      else {
        iVar3 = FUN_100565620(plVar2,&local_70);
      }
      if ((iVar3 < 0) && (iVar4 = iVar3, 0 < DAT_1011b55f8)) {
        QString::toUtf8();
        FUN_1008e3970("","vm",1,
                      "Warning : Failed to remove/clear BootCamp disk \'%s\' suspend state error 0x%X"
                      ,local_78 + *(long *)(local_78 + 0x10),iVar3);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d2170;
          }
          QArrayData::deallocate(local_78,1,8);
        }
      }
LAB_1000d2170:
      FUN_100562230(local_68);
    }
  } while (*(int *)local_58 == -1);
  if (*(int *)local_58 != 0) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + -1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
    if ((bool)local_31) goto LAB_1000d1f47;
  }
  QArrayData::deallocate(local_58,2,8);
  goto LAB_1000d1f47;
}

