
int FUN_100602140(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  QArrayData *local_1160;
  QArrayData *local_1158;
  undefined1 local_1149;
  undefined1 local_1148 [4368];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1005aabe0(local_1148,*param_1);
  iVar3 = FUN_1005aad70(local_1148);
  if (iVar3 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"Cache init failed, err = 0x%X",iVar3);
  }
  else {
    lVar5 = *(long *)(param_2 + 0x30);
    uVar6 = (ulong)*(uint *)(lVar5 + 8);
    iVar3 = 0;
    if ((int)*(uint *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
      lVar7 = 0;
      do {
        uVar1 = *(undefined8 *)(lVar5 + 0x10 + ((int)uVar6 + lVar7) * 8);
        uVar4 = (**(code **)(*(long *)*param_1 + 0x2f8))();
        cVar2 = FUN_1005b15b0(local_1148,uVar1,uVar4);
        if (cVar2 == '\0') {
          FUN_1007d6a70(&local_1160,
                        *(undefined8 *)
                         (*(long *)(param_2 + 0x30) + 0x10 +
                         (*(int *)(*(long *)(param_2 + 0x30) + 8) + lVar7) * 8));
          QString::toUtf8();
          FUN_1008e3970("Backup","vdisk",0,"Unable open cache for {%s}",
                        local_1158 + *(long *)(local_1158 + 0x10));
          if (*(int *)local_1158 != -1) {
            if (*(int *)local_1158 != 0) {
              LOCK();
              *(int *)local_1158 = *(int *)local_1158 + -1;
              local_1149 = *(int *)local_1158 != 0;
              UNLOCK();
              if ((bool)local_1149) goto LAB_1006022d9;
            }
            QArrayData::deallocate(local_1158,1,8);
          }
LAB_1006022d9:
          iVar3 = -0x7ffdf000;
          if (*(int *)local_1160 == -1) break;
          if (*(int *)local_1160 != 0) {
            LOCK();
            *(int *)local_1160 = *(int *)local_1160 + -1;
            local_1149 = *(int *)local_1160 != 0;
            UNLOCK();
            if ((bool)local_1149) break;
          }
          QArrayData::deallocate(local_1160,2,8);
          break;
        }
        FUN_1005b1e90(local_1148);
        iVar3 = FUN_1005b36f0(local_1148,*(undefined8 *)(param_2 + 0x28));
        if (iVar3 < 0) {
          FUN_1008e3970("Backup","vdisk",0,"Cache init failed, err = 0x%X",iVar3);
          break;
        }
        FUN_1005b1e80(local_1148);
        lVar7 = lVar7 + 1;
        lVar5 = *(long *)(param_2 + 0x30);
        uVar6 = (ulong)*(int *)(lVar5 + 8);
        iVar3 = 0;
      } while (lVar7 < (long)((long)*(int *)(lVar5 + 0xc) - uVar6));
    }
  }
  FUN_1005aad60(local_1148);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

