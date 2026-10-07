
int FUN_1007dce40(int *param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ushort uVar9;
  timespec *timeout;
  long lVar10;
  int iVar11;
  ushort uVar12;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 uVar13;
  char *in_stack_ffffffffffffff90;
  undefined4 uVar15;
  timespec local_40;
  undefined4 uVar14;
  
  param_1[6] = 0;
  uVar5 = FUN_1007d9ef0();
  if (uVar5 < param_2) {
    param_2 = uVar5;
  }
  timeout = (timespec *)0x0;
  if (-1 < (int)param_2) {
    local_40.tv_sec = (__darwin_time_t)((int)param_2 / 1000);
    local_40.tv_nsec = (long)(((int)param_2 % 1000) * 1000000);
    timeout = &local_40;
  }
  iVar6 = _kevent(*param_1,(kevent *)0x0,0,*(kevent **)(param_1 + 4),param_1[2],timeout);
  if (iVar6 < 0) {
    piVar8 = ___error();
    iVar11 = -*piVar8;
    FUN_1007d9ed0(param_1);
  }
  else {
    param_1[7] = 0;
    param_1[6] = iVar6;
    FUN_1007d9ef0(param_1);
    iVar11 = 0;
    if (iVar6 != 0) {
      lVar10 = 0x18;
      iVar11 = 0;
      do {
        uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
        uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
        lVar3 = *(long *)(param_1 + 4);
        puVar4 = *(undefined8 **)(lVar3 + lVar10);
        if (puVar4 != (undefined8 *)0x0) {
          uVar1 = *(ushort *)(lVar3 + -0xe + lVar10);
          uVar12 = uVar1 >> 0xb & 8 | (ushort)((short)uVar1 < 0) << 4;
          sVar2 = *(short *)(lVar3 + -0x10 + lVar10);
          if (sVar2 == -2) {
            if (-1 < (short)uVar1) {
              uVar12 = uVar12 | *(ushort *)((long)puVar4 + 0x14) & 4;
            }
          }
          else if (sVar2 == -1) {
            uVar9 = 1;
            if (-1 < (short)uVar1) {
              uVar9 = (ushort)(*(long *)(lVar3 + -8 + lVar10) != 0);
            }
            uVar12 = uVar12 | *(ushort *)((long)puVar4 + 0x14) & uVar9;
          }
          if (uVar12 == 0) {
            if (1 < (ushort)(uVar1 - 1)) {
              iVar7 = FUN_1008e38f0(&DAT_1011a6568);
              if (iVar7 != 0) {
                uVar13 = *(undefined8 *)(lVar3 + -8 + lVar10);
                FUN_1008e3970("","Std",0,
                              "nowake, filter %d, flags 0x%x, data %ld, entry_revents 0x%x",
                              (int)*(short *)(lVar3 + -0x10 + lVar10),
                              *(undefined2 *)(lVar3 + -0xe + lVar10),uVar13,
                              CONCAT44(uVar15,(uint)*(ushort *)((long)puVar4 + 0x14)));
                uVar14 = (undefined4)((ulong)uVar13 >> 0x20);
              }
              in_stack_ffffffffffffff90 = "pollset_poll";
              in_stack_ffffffffffffff88 = CONCAT44(uVar14,0x120);
              FUN_1008e3970("","Std",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != revents",
                            "pollset_mac.cpp",in_stack_ffffffffffffff88,"pollset_poll");
            }
          }
          else {
            param_1[7] = iVar11;
            iVar7 = *(int *)(lVar3 + -0x18 + lVar10);
            if ((iVar7 < 0) || (*(int *)(puVar4 + 2) != iVar7)) {
              FUN_1008e3970("","Std",0,
                            "pollset_poll: entry->fd != fd of fd < 0: entry->fd = %d, fd = %d");
              in_stack_ffffffffffffff90 = (char *)CONCAT44(uVar15,param_1[6]);
              in_stack_ffffffffffffff88 = CONCAT44(uVar14,iVar11);
              FUN_1008e3970("","Std",0,
                            "pollset_size = %d, count = %d, curr_event = %d, event_signalled = %d",
                            param_1[1],iVar6,in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
            }
            (*(code *)*puVar4)(puVar4,uVar12);
          }
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 0x20;
      } while (iVar6 != iVar11);
      param_1[6] = 0;
      iVar11 = iVar6;
    }
  }
  return iVar11;
}

