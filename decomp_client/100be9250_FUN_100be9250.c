
int FUN_100be9250(undefined4 *param_1,long param_2,int param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  time_t tVar6;
  long lVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  int local_1a4;
  int *local_1a0;
  undefined4 local_198 [17];
  int local_154;
  undefined1 local_150 [280];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_1a0 = (int *)0x0;
  bVar2 = 1;
  local_38 = lVar7;
  if ((ulong)(param_2 + param_3) <= param_4) {
    bVar9 = param_3 != 0;
    uVar3 = FUN_100bd9d80(param_1,param_2,param_3,param_4,&local_1a0);
    bVar2 = 1;
    piVar8 = local_1a0;
    if (uVar3 < 2) {
      bVar10 = param_3 != 0;
      if (((local_1a0 != (int *)0x0) || (!bVar10)) ||
         (piVar8 = (int *)0x0, (*(byte *)(*(long *)(param_1 + 0x9c) + 0x41) & 1) != 0)) {
LAB_100be9429:
        if (piVar8 == (int *)0x0 && bVar10) {
          if (*(code **)(*(long *)(param_1 + 0x9c) + 0x60) != (code *)0x0) {
            local_1a4 = 1;
            local_1a0 = (int *)(**(code **)(*(long *)(param_1 + 0x9c) + 0x60))
                                         (param_1,param_2,param_3,&local_1a4);
            if (local_1a0 == (int *)0x0) {
              bVar2 = 0;
              goto LAB_100be953b;
            }
            lVar7 = *(long *)(param_1 + 0x9c);
            *(int *)(lVar7 + 0x90) = *(int *)(lVar7 + 0x90) + 1;
            if (local_1a4 != 0) {
              FUN_100bf2cf0(local_1a0 + 0x30,1,0xe,"ssl_sess.c",0x29c);
              lVar7 = *(long *)(param_1 + 0x9c);
            }
            if ((*(byte *)(lVar7 + 0x41) & 2) == 0) {
              FUN_100be9720(lVar7,local_1a0);
            }
          }
          bVar10 = true;
          piVar8 = local_1a0;
        }
        goto LAB_100be94f3;
      }
      local_198[0] = *param_1;
      local_154 = param_3;
      if (param_3 != 0) {
        ___memcpy_chk(local_150,param_2,(long)param_3,0x118);
        FUN_100bf2780(5,0xc,"ssl_sess.c",0x282);
        local_1a0 = (int *)FUN_100c60fc0(*(undefined8 *)(*(long *)(param_1 + 0x9c) + 0x20),local_198
                                        );
        if (local_1a0 != (int *)0x0) {
          FUN_100bf2cf0(local_1a0 + 0x30,1,0xe,"ssl_sess.c",0x286);
        }
        FUN_100bf2780(6,0xc,"ssl_sess.c",0x288);
        piVar8 = local_1a0;
        if (local_1a0 == (int *)0x0) {
          *(int *)(*(long *)(param_1 + 0x9c) + 0x80) =
               *(int *)(*(long *)(param_1 + 0x9c) + 0x80) + 1;
        }
        goto LAB_100be9429;
      }
      iVar4 = 0;
LAB_100be9701:
      lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100be956d;
    }
    if (uVar3 == 0xffffffff) goto LAB_100be953b;
    if (1 < uVar3 - 2) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    bVar9 = false;
    bVar10 = false;
LAB_100be94f3:
    if (piVar8 == (int *)0x0) {
LAB_100be952a:
      bVar2 = 0;
    }
    else {
      uVar3 = piVar8[0x1a];
      if (uVar3 != param_1[0x42]) goto LAB_100be952a;
      iVar4 = _memcmp(piVar8 + 0x1b,param_1 + 0x43,(ulong)uVar3);
      if (iVar4 == 0) {
        if ((uVar3 == 0) && ((param_1[0x50] & 1) != 0)) {
          FUN_100c62ee0(0x14,0xd9,0x115,"ssl_sess.c",0x2c7);
        }
        else {
          if (*(long *)(piVar8 + 0x38) == 0) {
            uVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x90))();
            *(undefined8 *)(local_1a0 + 0x38) = uVar5;
            bVar2 = 0;
            piVar8 = local_1a0;
            if (*(long *)(local_1a0 + 0x38) == 0) goto LAB_100be953b;
          }
          lVar7 = *(long *)(piVar8 + 0x32);
          bVar2 = 0;
          tVar6 = _time((time_t *)0x0);
          lVar1 = *(long *)(param_1 + 0x9c);
          if (tVar6 - *(long *)(local_1a0 + 0x34) <= lVar7) {
            *(int *)(lVar1 + 0x8c) = *(int *)(lVar1 + 0x8c) + 1;
            if (*(long *)(param_1 + 0x4c) != 0) {
              FUN_100be8ab0();
            }
            *(int **)(param_1 + 0x4c) = local_1a0;
            *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(local_1a0 + 0x2e);
            iVar4 = 1;
            goto LAB_100be9701;
          }
          *(int *)(lVar1 + 0x84) = *(int *)(lVar1 + 0x84) + 1;
          if (bVar10) {
            FUN_100be99b0(lVar1,local_1a0,1);
          }
        }
      }
      else {
        bVar2 = 0;
      }
    }
LAB_100be953b:
    if ((local_1a0 != (int *)0x0) && (FUN_100be8ab0(local_1a0), !bVar9)) {
      param_1[0x85] = 1;
    }
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  iVar4 = -(uint)bVar2;
LAB_100be956d:
  if (lVar7 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

