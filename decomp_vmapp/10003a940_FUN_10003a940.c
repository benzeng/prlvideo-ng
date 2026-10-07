
undefined8 FUN_10003a940(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *local_150;
  uint local_148;
  int local_144;
  int local_140;
  long local_f8;
  undefined4 local_f0 [2];
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_a0 [64];
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_f8 = param_2;
  local_38 = lVar2;
  if (*(short *)(param_2 + 0x16) == 0) {
    uVar5 = 0xf0000003;
  }
  else {
    lVar4 = FUN_1002a6120(param_2,0,0);
    if (lVar4 == 0) {
      uVar5 = 0xf0000003;
    }
    else if (*(uint *)(lVar4 + 8) < 0x50) {
      uVar5 = 0xf0000003;
    }
    else {
      FUN_1002a5990(lVar4,0,&local_148,0x50);
      uVar5 = 0xf000001f;
      if (local_148 < 2) {
        if (*(ushort *)(param_2 + 0x16) < 2) {
          uVar5 = 0xf0000003;
        }
        else {
          lVar4 = FUN_1002a6120(param_2,1,1);
          if (lVar4 == 0) {
            uVar5 = 0xf0000003;
          }
          else if (*(uint *)(lVar4 + 8) < 0x50) {
            uVar5 = 0xf0000003;
          }
          else if (local_144 == 2) {
            QMutex::lock();
            if ((*(int *)(param_1 + 0x5c) != 1) || (uVar5 = 0, *(char *)(param_1 + 0x58) == '\0')) {
              uVar5 = 0xffffffff;
              FUN_100036f00(param_1 + 0x50,&local_f8);
            }
            QMutex::unlock();
          }
          else if (local_144 == 1) {
            QMutex::lock();
            iVar3 = *(int *)(param_1 + 0x60);
            if (local_140 == iVar3) {
              FUN_100036f00(param_1 + 0x48,&local_f8);
            }
            QMutex::unlock();
            uVar5 = 0xffffffff;
            if (local_140 != iVar3) {
              local_f0[0] = 1;
              local_e4 = 0;
              local_e0 = 0;
              local_e8 = iVar3;
              lVar4 = FUN_1002a6120(param_2,1,1);
              iVar3 = FUN_1002a5a50(lVar4,0,local_f0,0x50);
              uVar5 = 0xf000001c;
              if (iVar3 == 0x50) {
                *(undefined4 *)(lVar4 + 0x10) = 0x50;
                uVar5 = 0;
              }
            }
          }
          else {
            uVar5 = 0xf0000003;
            if (local_144 == 0) {
              FUN_1007d6bd0(&local_48);
              FUN_1007d6870(&local_58);
              local_50 = local_40;
              local_58 = local_48;
              local_60 = param_2;
              QMutex::lock();
              FUN_10003b060(param_1 + 0x40,&local_60);
              QMutex::unlock();
              FUN_1007ea6d0(&local_48,local_a0);
              FUN_100791380(&local_150,0x18981,0,local_a0,0x40,&DAT_1011ccb98,1);
              FUN_1004348e0(*(undefined8 *)(*(long *)(DAT_1011c3650 + 0x10) + 0x18),&local_150,0);
              if (local_150 != (long *)0x0) {
                LOCK();
                plVar1 = local_150 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)(*local_150 + 0x10))();
                }
              }
              uVar5 = 0xffffffff;
            }
          }
        }
      }
    }
  }
  if (lVar2 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

