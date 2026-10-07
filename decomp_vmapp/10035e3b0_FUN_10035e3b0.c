
void FUN_10035e3b0(long param_1,long param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  void *local_50;
  
  uVar8 = (ulong)param_3;
  if (*(int *)(param_2 + 0x24) != 1) goto LAB_10035e60e;
  cVar1 = *(char *)(param_2 + 0xb4);
  if ((cVar1 == '\0') && ((*(ushort *)(param_2 + 0xb0) & 0x10) == 0)) {
    if (*(char *)(DAT_1011c8478 + 0x41) == '\0') {
      if ((0x18 < param_3 - 0x36) || ((0x1800007U >> (param_3 - 0x36 & 0x1f) & 1) == 0))
      goto LAB_10035e418;
    }
    else if (1 < param_3 - 0x4d) {
LAB_10035e418:
      if (*(char *)(DAT_1011c8478 + 0x42) == '\0') {
        if ((int)param_3 < 0xd) {
          if (param_3 == 5) {
            uVar8 = 2;
          }
        }
        else if ((int)param_3 < 0x18) {
          if (param_3 == 0xd) {
            uVar8 = 0xb;
          }
        }
        else if ((int)param_3 < 0x46) {
          if (param_3 == 0x18) {
            uVar8 = 0x16;
          }
          else if (param_3 == 0x40) {
            uVar8 = 0x3e;
          }
        }
        else if (param_3 == 0x46) {
          uVar8 = 0x44;
        }
        else if (param_3 == 0x4b) {
          uVar8 = 0x49;
        }
        goto LAB_10035e60e;
      }
    }
  }
  *(undefined1 *)(param_2 + 0xb4) = 1;
  if (cVar1 == '\0') {
    lVar4 = *(long *)(param_2 + 0x40);
    lVar10 = *(long *)(param_2 + 0x48);
    uVar6 = lVar10 - lVar4;
    if ((int)(uVar6 >> 3) != 0) {
      local_50 = (void *)0x0;
      uVar12 = uVar6 >> 3 & 0xffffffff;
      pvVar11 = (void *)0x0;
      if (uVar12 != 0) {
        pvVar11 = operator_new(uVar12 * 4);
        local_50 = (void *)((long)pvVar11 + uVar12 * 4);
        ___bzero(pvVar11,uVar12 * 4);
      }
      uVar12 = 0;
      if ((uVar6 & 0x7fffffff8) != 0) {
        do {
          plVar7 = (long *)0x0;
          if (uVar12 < (ulong)((long)uVar6 >> 3)) {
            plVar7 = *(long **)(lVar4 + uVar12 * 8);
          }
          *(undefined4 *)((long)pvVar11 + uVar12 * 4) = *(undefined4 *)((long)plVar7 + 0x1c);
          (*DAT_1011c5768)(*(undefined4 *)((long)plVar7 + 0x14),*(undefined4 *)((long)plVar7 + 0xc))
          ;
          (*DAT_1011c7728)(0x8c2a,(int)plVar7[3],0);
          (*DAT_1011c5768)(*(undefined4 *)((long)plVar7 + 0x14),0);
          (**(code **)(*plVar7 + 8))(plVar7);
          lVar4 = *(long *)(param_2 + 0x40);
          lVar10 = *(long *)(param_2 + 0x48);
          uVar6 = lVar10 - lVar4;
          uVar12 = uVar12 + 1;
        } while ((uint)uVar12 < (uint)(uVar6 >> 3));
      }
      if (lVar10 != lVar4) {
        *(ulong *)(param_2 + 0x48) = (~((lVar10 + -8) - lVar4) & 0xfffffffffffffff8U) + lVar10;
      }
      uVar6 = (long)local_50 - (long)pvVar11 >> 2;
      if (uVar6 == 0) {
        if (pvVar11 == (void *)0x0) goto LAB_10035e5ca;
      }
      else {
        uVar12 = 0;
        do {
          FUN_100381180(*(undefined8 *)(param_1 + 0x28),param_2,
                        *(undefined4 *)((long)pvVar11 + uVar12 * 4));
          (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                    (*(long **)(param_1 + 0x28),param_2,0,
                     (ulong)*(uint *)(param_2 + 0xc) /
                     (ulong)(byte)(&DAT_100b3ca17)[(ulong)*(uint *)((long)pvVar11 + uVar12 * 4) * 8]
                     ,uVar12);
          uVar12 = (ulong)((int)uVar12 + 1);
        } while (uVar12 < uVar6);
      }
      operator_delete(pvVar11);
    }
  }
LAB_10035e5ca:
  uVar9 = (uint)(byte)(&DAT_100b3ca17)[uVar8 * 8] * *(int *)(DAT_1011c8478 + 0x14);
  if ((uVar9 < *(uint *)(param_2 + 0xc)) && (*(uint *)(*(long *)(param_2 + 0x58) + 0x10) < uVar9)) {
    FUN_10038d680();
  }
LAB_10035e60e:
  FUN_100381180(*(undefined8 *)(param_1 + 0x28),param_2,uVar8);
  if ((((*(ushort *)(param_2 + 0xb0) & 0x40) != 0) && (*(char *)(DAT_1011c8478 + 0x6a) != '\0')) &&
     (iVar2 = *(int *)(param_2 + 0x1c), iVar2 != 0)) {
    iVar5 = 0;
    do {
      if (*(int *)(param_2 + 0x24) == 5) {
        bVar3 = (byte)iVar5 & 0x1f;
        uVar9 = *(uint *)(param_2 + 0x14) >> bVar3;
        if (*(uint *)(param_2 + 0x14) >> bVar3 == 0) {
          uVar9 = 1;
        }
      }
      else {
        uVar9 = FUN_10032df20(param_2);
      }
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
                (0,*(long **)(param_1 + 0x20),param_2,0,0,uVar9,iVar5,1,
                 (*(byte *)(**(long **)(param_2 + 0x40) + 0xac) & 2) >> 1,0);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return;
}

