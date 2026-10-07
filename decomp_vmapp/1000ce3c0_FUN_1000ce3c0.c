
int FUN_1000ce3c0(long param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int unaff_R13D;
  QArrayData *local_a8;
  QArrayData *local_a0;
  char local_91;
  undefined1 local_90 [8];
  QArrayData *local_88;
  long local_80;
  long *local_78;
  long local_70;
  long *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Checking Boot Camp Vm suspend possibility");
  }
  if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x110) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmCfg","SerializationApp.cpp",
                  0x89f,"CanSuspendBootCamp");
  }
  lVar6 = CVmConfiguration::getVmSettings();
  if (lVar6 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmSettings",
                  "SerializationApp.cpp",0x8a1,"CanSuspendBootCamp");
  }
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getSystemFlags();
  local_58 = (QArrayData *)QString::fromAscii_helper("\\s",2);
  QRegExp::QRegExp((QRegExp *)&local_50,&local_58,1,0);
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar7 = QString::replace((QRegExp *)&local_48,&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ce537;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000ce537:
  local_60 = (QArrayData *)QString::fromAscii_helper("disp.allow_to_suspend_bootcamp_vm=1",0x23);
  iVar4 = QString::indexOf(uVar7,&local_60,0,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ce591;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000ce591:
  QRegExp::~QRegExp((QRegExp *)&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ce5ca;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000ce5ca:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ce5fa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000ce5fa:
  iVar5 = 0;
  FUN_1008e3970("","vm",0,"Allow BootCamp suspend flag %d",iVar4 == -1);
  if (iVar4 == -1) {
    FUN_100090a50(&local_68,*(undefined8 *)(param_1 + 0x2b0));
    if ((((local_68 == (long *)0x0) || (local_68[2] == 0)) &&
        (FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != hostHwInfoPtr.get()",
                       "SerializationApp.cpp",0x8aa,"CanSuspendBootCamp"), local_68 == (long *)0x0))
       || (local_68[2] == 0)) {
      iVar5 = -0x7fffffff;
      FUN_1008e3970("","vm",0,"Error : Failed to get host hardware info");
    }
    else {
      lVar6 = param_1 + 0x370;
      FUN_1005a5960(lVar6);
      FUN_100097260(*(undefined8 *)(param_1 + 0x2b0),lVar6,0,0,0);
      FUN_1005a8040(&local_80,lVar6);
      if (local_70 != 0) goto LAB_1000ce89b;
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != diskList.size()",
                    "SerializationApp.cpp",0x8b4,"CanSuspendBootCamp");
      do {
        unaff_R13D = iVar5;
        if (local_70 == 0) {
          FUN_1005a5960(lVar6);
          cVar3 = FUN_100565790();
          iVar5 = 0;
          if (cVar3 != '\0') {
            iVar5 = -0x7ffdffea;
            FUN_1008e3970("","vm",0,
                          "Error : Failed to suspend BootCamp VM, NTFS read/write software detected."
                         );
          }
          break;
        }
LAB_1000ce89b:
        plVar1 = (long *)local_78[2];
        *(long *)(*local_78 + 8) = local_78[1];
        *(long *)local_78[1] = *local_78;
        local_70 = local_70 + -1;
        operator_delete(local_78);
        if (plVar1 == (long *)0x0) {
          FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pDisk",
                        "SerializationApp.cpp",0x8ba,"CanSuspendBootCamp");
        }
        (**(code **)(*plVar1 + 0x178))(&local_88,plVar1);
        FUN_100562190(local_90,plVar1);
        local_91 = '\x01';
        lVar8 = 0;
        if (local_68 != (long *)0x0) {
          lVar8 = local_68[2];
        }
        iVar5 = FUN_100562500(plVar1,lVar8,&local_91);
        if (iVar5 < 0) {
          QString::toUtf8();
          FUN_1008e3970("","vm",0,
                        "Error : Failed to check if disk \'%s\' is NTFS only BootCamp disk, error 0x%X"
                        ,local_a0 + *(long *)(local_a0 + 0x10),iVar5);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000ceab9;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
LAB_1000ceab9:
          bVar2 = true;
          FUN_1005a5960(lVar6);
        }
        else {
          bVar2 = false;
          iVar5 = unaff_R13D;
          if (local_91 == '\0') {
            if (0 < DAT_1011b55f8) {
              QString::toUtf8();
              FUN_1008e3970("","vm",1,"Non-NTFS FS detected on BootCamp disk \'%s\'",
                            local_a8 + *(long *)(local_a8 + 0x10));
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000ce9eb;
                }
                QArrayData::deallocate(local_a8,1,8);
              }
            }
LAB_1000ce9eb:
            FUN_1005a5960(lVar6);
            iVar5 = -0x7ffdffeb;
            bVar2 = true;
          }
        }
        FUN_100562230(local_90);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000ceb02;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1000ceb02:
      } while (!bVar2);
      if (local_70 != 0) {
        *(undefined8 *)(*local_78 + 8) = *(undefined8 *)(local_80 + 8);
        **(long **)(local_80 + 8) = *local_78;
        local_70 = 0;
        while (local_78 != &local_80) {
          plVar1 = (long *)local_78[1];
          operator_delete(local_78);
          local_78 = plVar1;
        }
      }
    }
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  return iVar5;
}

