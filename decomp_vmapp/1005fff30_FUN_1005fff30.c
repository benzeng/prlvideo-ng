
int FUN_1005fff30(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 0x40))(local_48);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    iVar2 = FUN_100600e60(param_1,param_2,local_48,param_3);
    if (-1 < iVar2) goto LAB_1005fffcc;
    FUN_1008e3970("Backup","vdisk",0,"Diff processing failed, err = 0x%X",iVar2);
  }
  else {
    iVar2 = FUN_100600910(param_1,local_48,param_3);
    if (-1 < iVar2) {
LAB_1005fffcc:
      lVar3 = *(long *)(param_2 + 0x30);
      uVar4 = (ulong)*(uint *)(lVar3 + 8);
      iVar2 = 0;
      if ((int)*(uint *)(lVar3 + 8) < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          uVar1 = *(undefined8 *)(lVar3 + 0x10 + ((int)uVar4 + lVar5) * 8);
          if (*(char *)(param_2 + 0x1c) == '\0') {
            iVar2 = FUN_100600e60(param_1,param_2,uVar1,param_3);
            if (iVar2 < 0) {
              FUN_1008e3970("Backup","vdisk",0,"Diff processing failed, err = 0x%X",iVar2);
              goto LAB_1006000f7;
            }
          }
          else {
            iVar2 = FUN_100600910(param_1,uVar1,param_3);
            if (iVar2 < 0) {
              FUN_1008e3970("Backup","vdisk",0,"Add all storages failed, err = 0x%X",iVar2);
LAB_1006000f7:
              FUN_1007d6a70(&local_60,uVar1);
              QString::toUtf8();
              FUN_1008e3970("Backup","vdisk",0,"snapshot %s processing failed, err = 0x%X",
                            local_58 + *(long *)(local_58 + 0x10),iVar2);
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_49 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_10060016e;
                }
                QArrayData::deallocate(local_58,1,8);
              }
LAB_10060016e:
              lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
              if (*(int *)local_60 == -1) goto LAB_1006001ab;
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_49 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_49) goto LAB_1006001ab;
              }
              QArrayData::deallocate(local_60,2,8);
              goto LAB_1006001ab;
            }
          }
          lVar5 = lVar5 + 1;
          lVar3 = *(long *)(param_2 + 0x30);
          uVar4 = (ulong)*(int *)(lVar3 + 8);
        } while (lVar5 < (long)((long)*(int *)(lVar3 + 0xc) - uVar4));
        lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
        iVar2 = 0;
      }
      goto LAB_1006001ab;
    }
    FUN_1008e3970("Backup","vdisk",0,"Add all storages failed, err = 0x%X",iVar2);
  }
  FUN_1008e3970("Backup","vdisk",0,"Backup snapshot processing failed, err = 0x%X",iVar2);
LAB_1006001ab:
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

