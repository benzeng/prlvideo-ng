
void FUN_100402710(long param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long local_50;
  long local_38;
  
  if ((*(byte *)(param_2 + 0xc0) & 0xfc) == 0) {
    if (param_4 != 0) {
LAB_10040274e:
      do {
        uVar3 = *(ulong *)(param_2 + 0x88);
        if (uVar3 < param_4) {
          if (2 < DAT_1011b55f8) {
            FUN_1008e3970("","HddUtils",3,"[hdd %d] too big request size: %llx > %llx",
                          *(undefined4 *)(param_1 + 0x40),param_4,uVar3);
            uVar3 = *(ulong *)(param_2 + 0x88);
          }
          param_4 = uVar3;
          if (uVar3 == 0) {
            return;
          }
        }
        local_50 = param_3;
        if ((*(byte *)(param_2 + 0xa9) & 2) == 0) {
          uVar2 = FUN_10008d820(param_2 + 200,param_3,param_4 & 0xffffffff,&local_38);
          uVar3 = (ulong)uVar2;
          if (uVar2 == 0) {
            FUN_1008e3970("","HddUtils",0,"Can\'t mmap memory region? @%llx:%llx",param_3,param_4);
LAB_100402aec:
            *(byte *)(param_2 + 0xc0) = *(byte *)(param_2 + 0xc0) | 4;
            goto LAB_100402af5;
          }
        }
        else {
          local_38 = param_3;
          if ((int)param_4 == 0) goto LAB_10040274e;
          uVar3 = param_4 & 0xffffffff;
        }
        do {
          uVar9 = param_4;
LAB_100402830:
          uVar7 = uVar3;
          if (*(long *)(param_1 + 0x160) == 0) {
LAB_100402887:
            lVar8 = *(long *)(param_2 + 0xa0);
            if (lVar8 == 0) goto LAB_100402930;
          }
          else {
            plVar1 = *(long **)(param_2 + 0xa0);
            uVar2 = FUN_1004057d0(*(long *)(param_1 + 0x160),param_2,uVar3,local_38);
            if (0 < (int)uVar2) {
              uVar7 = (ulong)(int)uVar2;
              goto LAB_100402a83;
            }
            uVar7 = (ulong)-uVar2;
            if (-1 < (int)uVar2) {
              uVar7 = uVar3;
            }
            if ((plVar1 == (long *)0x0) ||
               (*(long *)(param_1 + 0x48) * *plVar1 + (ulong)*(uint *)(plVar1 + 10) ==
                *(long *)(param_2 + 0x90))) goto LAB_100402887;
            lVar8 = *(long *)(param_2 + 0xa0);
            if (lVar8 != 0) {
              if ((*(byte *)(lVar8 + 8) & 1) != 0) {
                *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + *(int *)(lVar8 + 0x50);
              }
              *(undefined4 *)(param_2 + 0xac) = 0;
              LOCK();
              *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
              UNLOCK();
              if (*(long *)(param_1 + 0x160) == 0) {
                (**(code **)(**(long **)(param_1 + 0x38) + 0x100))
                          (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 0xa0));
                *(undefined8 *)(param_2 + 0xa0) = 0;
              }
              else {
                FUN_100405340(*(long *)(param_1 + 0x160),*(undefined8 *)(param_2 + 0xa0));
                *(undefined8 *)(param_2 + 0xa0) = 0;
              }
            }
LAB_100402930:
            puVar4 = (ulong *)FUN_10070ade0();
            if (puVar4 == (ulong *)0x0) goto LAB_100402aec;
            *(ulong **)(param_2 + 0xa0) = puVar4;
            uVar2 = *(uint *)(param_2 + 0xa8);
            *(uint *)(puVar4 + 1) = uVar2;
            if (((uVar2 & 1) == 0) && ((*(uint *)(param_1 + 0x16c) & 2) != 0)) {
              *(uint *)(puVar4 + 1) = uVar2 | 0x2000;
            }
            uVar5 = *(ulong *)(param_2 + 0x90);
            uVar6 = *(ulong *)(param_1 + 0x48);
            if (uVar5 % uVar6 != 0) {
              FUN_1008e3970("","HddUtils",0,"ERROR: ReqSubmit() unaligned disk pos %llx",uVar5);
              uVar5 = *(ulong *)(param_2 + 0x90);
              uVar6 = *(ulong *)(param_1 + 0x48);
            }
            *puVar4 = uVar5 / uVar6;
            puVar4[2] = param_2;
            puVar4[3] = *(ulong *)(param_2 + 0x28);
            puVar4[9] = (ulong)FUN_100402b10;
            uVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x250))();
            puVar4[6] = uVar5;
            lVar8 = *(long *)(param_2 + 0xa0);
          }
          uVar2 = FUN_10070ba60(*(undefined8 *)(param_1 + 0x38),lVar8,local_38,uVar7);
          if (uVar2 == 0) {
            lVar8 = *(long *)(param_2 + 0xa0);
            if (lVar8 != 0) {
              if ((*(byte *)(lVar8 + 8) & 1) != 0) {
                *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + *(int *)(lVar8 + 0x50);
              }
              *(undefined4 *)(param_2 + 0xac) = 0;
              LOCK();
              *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
              UNLOCK();
              if (*(long *)(param_1 + 0x160) == 0) {
                (**(code **)(**(long **)(param_1 + 0x38) + 0x100))
                          (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 0xa0));
              }
              else {
                FUN_100405340(*(long *)(param_1 + 0x160),*(undefined8 *)(param_2 + 0xa0));
              }
              *(undefined8 *)(param_2 + 0xa0) = 0;
            }
            goto LAB_100402830;
          }
          uVar7 = (ulong)uVar2;
LAB_100402a83:
          *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + uVar7;
          *(long *)(param_2 + 0x88) = *(long *)(param_2 + 0x88) - uVar7;
          local_38 = local_38 + uVar7;
          param_3 = local_50 + uVar7;
          param_4 = uVar9 - uVar7;
          uVar2 = (int)uVar3 - uVar2;
          uVar3 = (ulong)uVar2;
          local_50 = param_3;
        } while (uVar2 != 0);
      } while (uVar9 != uVar7);
    }
  }
  else {
LAB_100402af5:
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  return;
}

