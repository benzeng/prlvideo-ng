
undefined8 FUN_1002ebf70(long param_1,undefined4 *param_2,void *param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  undefined4 uVar9;
  ushort uVar10;
  ulong uVar11;
  
  uVar10 = *(ushort *)(param_1 + 0x17c);
  uVar11 = (ulong)uVar10;
  uVar9 = 0x18;
  if (uVar10 == 0) {
    uVar9 = 9;
  }
  if (0 < DAT_1011c568c) {
    pcVar8 = "Connect";
    if (uVar10 != 0) {
      pcVar8 = "Authenticate";
    }
    FUN_1008e3970(&DAT_100b392f0,"USB",0,
                  "[BTH] Do%s (%02x-%02x-%02x-%02x-%02x-%02x, auth_hndl = %04x) ",pcVar8,
                  *(undefined1 *)((long)param_2 + 5),*(undefined1 *)(param_2 + 1),
                  *(undefined1 *)((long)param_2 + 3),*(undefined1 *)((long)param_2 + 2),
                  *(undefined1 *)((long)param_2 + 1),*(undefined1 *)param_2,uVar10);
  }
  lVar6 = 0;
  if (uVar10 == 0) {
    do {
      lVar5 = lVar6;
      if ((((*(long *)(param_1 + 0x68 + lVar6 * 8) == 0) ||
           (lVar5 = lVar6 + 1, *(long *)(param_1 + 0x70 + lVar6 * 8) == 0)) ||
          (lVar5 = lVar6 + 2, *(long *)(param_1 + 0x78 + lVar6 * 8) == 0)) ||
         (lVar5 = lVar6 + 3, *(long *)(param_1 + 0x80 + lVar6 * 8) == 0)) {
        uVar10 = (short)lVar5 + 0x10U & 0xfff;
        uVar11 = (ulong)uVar10;
        if (uVar10 != 0) {
          plVar4 = operator_new(0x30,(nothrow_t *)PTR_nothrow_100ba21c8);
          bVar1 = true;
          plVar7 = (long *)0x0;
          if (plVar4 != (long *)0x0) {
            *plVar4 = param_1;
            plVar4[1] = 0;
            *(ushort *)((long)plVar4 + 0x16) = uVar10;
            *(undefined1 *)(plVar4 + 3) = 0;
            *(undefined4 *)((long)plVar4 + 0x1c) = 1;
            plVar4[4] = (long)PTR_shared_null_100ba2180;
            QMutex::QMutex((QMutex *)(plVar4 + 5),0);
            *(undefined2 *)((long)plVar4 + 0x14) = *(undefined2 *)(param_2 + 1);
            *(undefined4 *)(plVar4 + 2) = *param_2;
            *(undefined4 *)((long)plVar4 + 0x1c) = 1;
            iVar3 = FUN_100252d90(*plVar4 + 0x40,plVar4 + 1,param_2);
            *(bool *)(plVar4 + 3) = iVar3 == 0;
            if (iVar3 == 0) {
              *(long **)(param_1 + -0x18 + uVar11 * 8) = plVar4;
              goto LAB_1002ec032;
            }
            bVar1 = false;
            plVar7 = plVar4;
          }
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970(&DAT_100b392f0,"USB",0,
                          "[BTH] Can\'t open bt device (%02x-%02x-%02x-%02x-%02x-%02x)",
                          *(undefined1 *)((long)param_2 + 5),*(undefined1 *)(param_2 + 1),
                          *(undefined1 *)((long)param_2 + 3),*(undefined1 *)((long)param_2 + 2),
                          *(undefined1 *)((long)param_2 + 1),*(undefined1 *)param_2);
          }
          if (!bVar1) {
            FUN_1002ec910();
            operator_delete(plVar7);
          }
          goto LAB_1002ec2cd;
        }
        break;
      }
      lVar6 = lVar6 + 4;
    } while (lVar6 < 0x20);
    if (DAT_1011c568c < 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      FUN_1008e3970(&DAT_100b392f0,"USB",0,
                    "[BTH] Can\'t find free lmp link (%02x-%02x-%02x-%02x-%02x-%02x)",
                    *(undefined1 *)((long)param_2 + 5),*(undefined1 *)(param_2 + 1),
                    *(undefined1 *)((long)param_2 + 3),*(undefined1 *)((long)param_2 + 2),
                    *(undefined1 *)((long)param_2 + 1),*(undefined1 *)param_2);
    }
  }
  else {
    plVar4 = *(long **)(param_1 + -0x18 + (uVar11 & 0xfff) * 8);
LAB_1002ec032:
    if (param_4 == 0) {
      uVar9 = 0;
    }
    else {
      cVar2 = FUN_100252f20(*plVar4 + 0x40,plVar4[1]);
      if (cVar2 == '\0') {
        if (-1 < DAT_1011c568c) {
          FUN_1008e3970(&DAT_100b392f0,"USB",0,
                        "[BTH] Start bt device pairing (%02x-%02x-%02x-%02x-%02x-%02x)",
                        *(undefined1 *)((long)param_2 + 5),*(undefined1 *)(param_2 + 1),
                        *(undefined1 *)((long)param_2 + 3),*(undefined1 *)((long)param_2 + 2),
                        *(undefined1 *)((long)param_2 + 1),*(undefined1 *)param_2);
        }
        _memcpy((void *)(param_1 + 0x168),param_3,(ulong)param_4);
        *(uint *)(param_1 + 0x178) = param_4;
        FUN_100252bf0(param_1 + 0x40);
        FUN_100252b70(param_1 + 0x40,plVar4[1],FUN_1002ec470,plVar4);
        return 0;
      }
      uVar9 = 0;
    }
  }
LAB_1002ec2cd:
  FUN_1002ec640(param_1,param_2,uVar11,uVar9);
  return 0;
}

