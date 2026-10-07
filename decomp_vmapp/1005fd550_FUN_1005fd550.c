
int FUN_1005fd550(long param_1,long param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1005fc800();
  if (*(int *)(param_2 + 0x20) != -1) {
    FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "-1 == session.locationIndex","BackupFileListBuilder.cpp",0x275,"prepareLocations"
                 );
  }
  if (*(long *)(param_2 + 0x28) != 0xff) {
    FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "BLOCKS_TABLE::DirtyAll == session.locationBitMask","BackupFileListBuilder.cpp",
                  0x276,"prepareLocations");
  }
  *param_3 = 0;
  plVar6 = (long *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  }
  iVar3 = (**(code **)(*plVar6 + 0x198))(plVar6,&local_40);
  if (iVar3 < 0) {
    if (iVar3 == -0x7ffdd000) {
      *(undefined4 *)(param_2 + 0x20) = 0;
      *param_3 = 1;
      FUN_1005fbc60(&local_40,0,param_2,*(undefined8 *)(param_2 + 0x10));
      plVar6 = (long *)0x0;
      if (*(long *)(param_1 + 8) != 0) {
        plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x10);
      }
      iVar3 = (**(code **)(*plVar6 + 0x1a0))(plVar6,&local_40);
      if (iVar3 < 0) {
        FUN_1008e3970("Backup","vdisk",0,"Failed to set initial list of locations, err = 0x%X",iVar3
                     );
      }
      else {
LAB_1005fd984:
        iVar4 = *(int *)(param_2 + 0x20);
        if (iVar4 == -1) {
          FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "session.locationIndex != -1","BackupFileListBuilder.cpp",0x2bf,
                        "prepareLocations");
          iVar4 = *(int *)(param_2 + 0x20);
        }
        *(long *)(param_2 + 0x28) = 1L << ((byte)iVar4 & 0x3f);
      }
    }
    else {
      FUN_1008e3970("Backup","vdisk",0,"Failed to get list of locations, err = 0x%X",iVar3);
    }
    goto LAB_1005fd9df;
  }
  if (0 < (int)*(uint *)(local_40 + 4)) {
    lVar5 = 0;
    lVar7 = 0;
    do {
      iVar3 = FUN_1007ea6f0(local_40 + lVar5 + *(long *)(local_40 + 0x10),param_2);
      if (iVar3 == 0) {
        iVar3 = (int)lVar7;
        *(int *)(param_2 + 0x20) = iVar3;
        if (iVar3 == -1) goto LAB_1005fd683;
        uVar1 = *(undefined8 *)(param_2 + 0x10);
        if (1 < *(uint *)local_40) {
          if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
            local_40 = (QArrayData *)QArrayData::allocate(0x20,8,0,2);
          }
          else {
            FUN_1005fc970(&local_40,*(uint *)(local_40 + 4),*(uint *)(local_40 + 8) & 0x7fffffff,0);
          }
        }
        *(undefined8 *)(local_40 + (long)iVar3 * 0x20 + 0x10 + *(long *)(local_40 + 0x10)) = uVar1;
        plVar6 = (long *)0x0;
        if (*(long *)(param_1 + 8) != 0) {
          plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x10);
        }
        iVar3 = (**(code **)(*plVar6 + 0x1a0))(plVar6,&local_40);
        if (-1 < iVar3) {
          *(long *)(param_2 + 0x28) = 1L << ((byte)*(undefined4 *)(param_2 + 0x20) & 0x3f);
          goto LAB_1005fd984;
        }
        FUN_1008e3970("Backup","vdisk",0,"Failed to update timeout for location # %d, err = 0x%X",
                      *(undefined4 *)(param_2 + 0x20),iVar3);
        goto LAB_1005fd9df;
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar7 < (int)*(uint *)(local_40 + 4));
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
LAB_1005fd683:
  lVar5 = 0;
  if (0 < (int)*(uint *)(local_40 + 4)) {
    uVar8 = 0;
    do {
      cVar2 = FUN_1007ea210(local_40 + lVar5 + *(long *)(local_40 + 0x10));
      if (cVar2 != '\0') {
        *(int *)(param_2 + 0x20) = (int)uVar8;
        *param_3 = 1;
        if ((int)uVar8 == -1) goto LAB_1005fd6c5;
        FUN_1005fbc60(&local_40,uVar8 & 0xffffffff,param_2,*(undefined8 *)(param_2 + 0x10));
        plVar6 = (long *)0x0;
        if (*(long *)(param_1 + 8) != 0) {
          plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x10);
        }
        iVar3 = (**(code **)(*plVar6 + 0x1a0))(plVar6,&local_40);
        if (-1 < iVar3) goto LAB_1005fd984;
        FUN_1008e3970("Backup","vdisk",0,"Failed to update entry[%d], err = 0x%X",
                      *(undefined4 *)(param_2 + 0x20),iVar3);
        goto LAB_1005fd9df;
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 0x20;
    } while ((long)uVar8 < (long)(int)*(uint *)(local_40 + 4));
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  *param_3 = 1;
LAB_1005fd6c5:
  FUN_1007d6a70(&local_50,param_2);
  QString::toUtf8();
  FUN_1008e3970("Backup","vdisk",0,
                "No empty entries in list of locations. Failedto start for location [%s]",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005fd734;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1005fd734:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005fd764;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005fd764:
  iVar3 = -0x7ffdf000;
  FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                "BackupFileListBuilder.cpp",0x2ad,"prepareLocations");
LAB_1005fd9df:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,0x20,8);
  }
  return iVar3;
}

