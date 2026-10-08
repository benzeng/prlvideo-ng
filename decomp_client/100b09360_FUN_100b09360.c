
void FUN_100b09360(long param_1,undefined8 param_2)

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
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  FUN_100dd8550(local_50,param_2,0);
  cVar2 = FUN_100dd86a0(local_50);
  if (cVar2 == '\0') {
    FUN_100df99c0("","pvsHostInfo",0,"Error creating partition properties");
    goto LAB_100b09651;
  }
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  local_68 = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0;
  local_54 = 0xff;
  local_78 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar2 = FUN_100dd87a0(local_50,&cf_BSDName,&local_70);
  if (cVar2 == '\0') {
    FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'BSD Name\' property");
  }
  else {
    cVar2 = FUN_100dd8900(local_50,&cf_Size,&local_68);
    if (cVar2 == '\0') {
      FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'Size\' property");
    }
    else {
      cVar2 = FUN_100dd8900(local_50,&cf_Base,&local_60);
      if (cVar2 == '\0') {
        FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'Base\' property");
      }
      else {
        cVar2 = FUN_100dd8910(local_50,&cf_PartitionID,&local_58);
        if (cVar2 == '\0') {
          FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'Partition ID\' property");
        }
        else {
          cVar2 = FUN_100dd87a0(local_50,&cf_Content,&local_78);
          if (cVar2 == '\0') {
            FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'Content\' property");
          }
          else {
            FUN_100dda110(local_40,&local_78);
            cVar2 = FUN_100deade0(local_40);
            lVar5 = 0;
            if (cVar2 == '\0') {
              bVar3 = FUN_100dd5c60(local_40);
            }
            else {
              do {
                iVar4 = QString::compare_helper
                                  (local_78 + *(long *)(local_78 + 0x10),
                                   *(undefined4 *)(local_78 + 4),
                                   *(undefined8 *)((long)&PTR_s_DOS_FAT_12_10223b648 + lVar5),
                                   0xffffffff,1);
                if (iVar4 == 0) {
                  bVar3 = (&DAT_10223b640)[lVar5];
                  break;
                }
                lVar5 = lVar5 + 0x10;
                bVar3 = 0xff;
              } while ((int)lVar5 != 0x140);
            }
            local_54 = (uint)bVar3;
            FUN_100b09710(*(long *)(param_1 + 0x10) + 0x30,&local_70);
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
      if ((bool)local_41) goto LAB_100b09621;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100b09621:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_41 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100b09651;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100b09651:
  FUN_100dd86b0(local_50);
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

