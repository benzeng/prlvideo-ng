
void FUN_100661460(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [15];
  undefined1 local_41;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_100787f50(local_50,param_2,0);
  cVar2 = FUN_1007880a0(local_50);
  if (cVar2 == '\0') {
    FUN_1008e3970("","pvsHostInfo",0,"Error creating partition properties");
    goto LAB_100661751;
  }
  local_70 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_68 = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0;
  local_54 = 0xff;
  local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_1007881a0(local_50,&cf_BSDName,&local_70);
  if (cVar2 == '\0') {
    FUN_1008e3970("","pvsHostInfo",0,"Failed to read \'BSD Name\' property");
  }
  else {
    cVar2 = FUN_100788300(local_50,&cf_Size,&local_68);
    if (cVar2 == '\0') {
      FUN_1008e3970("","pvsHostInfo",0,"Failed to read \'Size\' property");
    }
    else {
      cVar2 = FUN_100788300(local_50,&cf_Base,&local_60);
      if (cVar2 == '\0') {
        FUN_1008e3970("","pvsHostInfo",0,"Failed to read \'Base\' property");
      }
      else {
        cVar2 = FUN_100788310(local_50,&cf_PartitionID,&local_58);
        if (cVar2 == '\0') {
          FUN_1008e3970("","pvsHostInfo",0,"Failed to read \'Partition ID\' property");
        }
        else {
          cVar2 = FUN_1007881a0(local_50,&cf_Content,&local_78);
          if (cVar2 == '\0') {
            FUN_1008e3970("","pvsHostInfo",0,"Failed to read \'Content\' property");
          }
          else {
            FUN_1007d6920(local_40,&local_78);
            cVar2 = FUN_1007ea210(local_40);
            lVar5 = 0;
            if (cVar2 == '\0') {
              bVar3 = FUN_100785660(local_40);
            }
            else {
              do {
                iVar4 = QString::compare_helper
                                  (local_78 + *(long *)(local_78 + 0x10),
                                   *(undefined4 *)(local_78 + 4),
                                   *(undefined8 *)((long)&PTR_s_DOS_FAT_12_100bc97a8 + lVar5),
                                   0xffffffff,1);
                if (iVar4 == 0) {
                  bVar3 = (&DAT_100bc97a0)[lVar5];
                  break;
                }
                lVar5 = lVar5 + 0x10;
                bVar3 = 0xff;
              } while ((int)lVar5 != 0x140);
            }
            local_54 = (uint)bVar3;
            FUN_100661810(*(long *)(param_1 + 0x10) + 0x30,&local_70);
          }
        }
      }
    }
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_41 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100661721;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100661721:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_41 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100661751;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100661751:
  FUN_1007880b0(local_50);
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

