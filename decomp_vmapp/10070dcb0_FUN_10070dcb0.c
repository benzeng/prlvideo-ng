
timespec * FUN_10070dcb0(long param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ssize_t sVar6;
  void *pvVar7;
  long *plVar8;
  timespec *timeoutp;
  long lVar9;
  long *plVar10;
  long *plVar11;
  timespec *ptVar12;
  __darwin_time_t _Stack_50;
  timespec local_48;
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = -((ulong)*(uint *)(param_1 + 0x28) * 8 + 0xf & 0xfffffffffffffff0);
  plVar8 = *(long **)(param_1 + 0x38);
  ptVar12 = (timespec *)0x0;
  local_38 = lVar9;
  if (plVar8 != (long *)0x0) {
    lVar5 = 0;
    do {
      ((aiocb **)((long)&local_48 + lVar3))[lVar5] = (aiocb *)(plVar8 + 3);
      lVar5 = lVar5 + 1;
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
    if ((int)lVar5 != 0) {
      local_48.tv_sec = 0;
      ptVar12 = (timespec *)0x0;
      local_48.tv_nsec = 0;
      if (-1 < param_2) {
        local_48.tv_nsec = (long)(param_2 * 1000000);
      }
      timeoutp = &local_48;
      if (param_2 < 0) {
        timeoutp = ptVar12;
      }
      *(undefined8 *)((long)&_Stack_50 + lVar3) = 0x10070dd49;
      iVar4 = _aio_suspend((aiocb **)((long)&local_48 + lVar3),(int)lVar5,timeoutp);
      if (iVar4 == 0) {
        plVar8 = *(long **)(param_1 + 0x38);
        ptVar12 = (timespec *)0x1;
        plVar10 = (long *)(param_1 + 0x38);
        if (plVar8 != (long *)0x0) {
          do {
            *(undefined8 *)((long)&_Stack_50 + lVar3) = 0x10070ddbc;
            iVar4 = _aio_error((aiocb *)(plVar8 + 3));
            if (iVar4 == 0x24) {
              plVar11 = (long *)*plVar8;
            }
            else {
              *plVar10 = *plVar8;
              *(undefined8 *)((long)&_Stack_50 + lVar3) = 0x10070ddd1;
              sVar6 = _aio_return((aiocb *)(plVar8 + 3));
              if (sVar6 < 0) {
                lVar9 = plVar8[1];
                *(int *)(lVar9 + 0x28) = -(int)sVar6;
                *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) | 8;
              }
              else {
                lVar9 = plVar8[1];
              }
              piVar1 = (int *)(lVar9 + 0x38);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                pvVar7 = (void *)plVar8[2];
                if (pvVar7 != (void *)0x0) {
                  if ((*(byte *)(lVar9 + 8) & 0xfd) == 0) {
                    uVar2 = *(undefined4 *)(lVar9 + 0x50);
                    *(undefined8 *)((long)&_Stack_50 + lVar3) = 0x10070de12;
                    FUN_10070b090(lVar9 + 0x50,pvVar7,0,uVar2);
                    pvVar7 = (void *)plVar8[2];
                  }
                  *(undefined8 *)((long)&_Stack_50 + lVar3) = 0x10070de1e;
                  _free(pvVar7);
                  plVar8[2] = 0;
                  lVar9 = plVar8[1];
                }
                *(undefined8 *)(lVar9 + 0x20) = 0;
                if (*(long *)(param_1 + 0x18) == 0) {
                  *(long *)(param_1 + 0x10) = lVar9;
                }
                else {
                  *(long *)(*(long *)(param_1 + 0x18) + 0x20) = lVar9;
                }
                *(long *)(param_1 + 0x18) = lVar9;
              }
              *plVar8 = *(long *)(param_1 + 0x30);
              *(long **)(param_1 + 0x30) = plVar8;
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
              plVar11 = (long *)*plVar10;
              plVar8 = plVar10;
            }
            plVar10 = plVar8;
            plVar8 = plVar11;
          } while (plVar11 != (long *)0x0);
          lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
      }
      goto LAB_10070dd7c;
    }
  }
  *(undefined8 *)((long)&_Stack_50 + lVar3) = 0x10070dd7c;
  FUN_1008e3970("","AbstractFile",0,"What do you want %u");
LAB_10070dd7c:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&_Stack_50 + lVar3) = &UNK_10070de7a;
    ___stack_chk_fail();
  }
  return ptVar12;
}

