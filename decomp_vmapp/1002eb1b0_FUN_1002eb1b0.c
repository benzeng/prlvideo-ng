
undefined4 FUN_1002eb1b0(long *param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  undefined1 local_978 [2368];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  if (((0 < DAT_1011c568c) &&
      (FUN_1008e3970(&DAT_100b392f0,"USB",0,"[L2CAP]+HDR(len:%d, cid:%04x)",
                     *(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6)),
      *(short *)(param_2 + 4) != 0)) && (0 < DAT_1011c568c)) {
    FUN_1002da020(local_978,0x940,param_2 + 8);
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[L2CAP]+IN:%s",local_978);
  }
  uVar1 = *(ushort *)(param_2 + 6);
  if (uVar1 == 2) {
    uVar3 = 0;
    if (DAT_1011c568c < 1) goto switchD_1002eb33a_caseD_1;
    pcVar7 = "[L2CAP] Connectionless CID!";
    uVar3 = 0;
  }
  else {
    if (uVar1 == 1) {
      if (((0 < DAT_1011c568c) &&
          (FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]+HDR(code:%02x, id:%02x, len:%d)",
                         *(undefined1 *)(param_2 + 8),*(undefined1 *)(param_2 + 9),
                         *(undefined2 *)(param_2 + 10)), *(short *)(param_2 + 10) != 0)) &&
         (0 < DAT_1011c568c)) {
        FUN_1002da020(local_978,0x940,param_2 + 0xc);
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]+IN:%s",local_978);
      }
      uVar3 = 0;
      switch(*(undefined1 *)(param_2 + 8)) {
      case 1:
        break;
      case 2:
        uVar3 = FUN_1002ecdb0(param_1,param_2);
        break;
      default:
        uVar3 = FUN_1002eda20(param_1,param_2,0);
        break;
      case 4:
        uVar3 = FUN_1002ed590(param_1,param_2);
        break;
      case 5:
        uVar3 = 0;
        if (0 < DAT_1011c568c) {
          uVar3 = 0;
          FUN_1008e3970(&DAT_100b392f0,"USB",0,
                        "[C-FRAME]+CMD(scid:%04x, flags:%04x, result:%04x) %s",
                        *(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe),
                        *(undefined2 *)(param_2 + 0x10),"Configuration Response");
        }
        break;
      case 6:
        uVar3 = FUN_1002ed220(param_1,param_2);
        break;
      case 7:
        uVar3 = FUN_1002ed450(param_1,param_2);
        break;
      case 10:
        uVar3 = FUN_1002ed880(param_1,param_2);
      }
      goto switchD_1002eb33a_caseD_1;
    }
    if (0x3f < uVar1) {
      QMutex::lock();
      plVar2 = (long *)param_1[4];
      if (*(uint *)(plVar2 + 4) != 0) {
        uVar6 = *(uint *)((long)plVar2 + 0x24) ^ (uint)*(ushort *)(param_2 + 6);
        plVar4 = *(long **)(plVar2[1] + ((ulong)uVar6 % (ulong)*(uint *)(plVar2 + 4)) * 8);
        if (plVar4 != plVar2) {
          do {
            if ((*(uint *)(plVar4 + 1) == uVar6) &&
               (*(ushort *)(param_2 + 6) == *(ushort *)((long)plVar4 + 0xc))) {
              if (plVar4 != plVar2) {
                lVar5 = FUN_1002ee4c0(param_1 + 4);
                lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
                uVar3 = FUN_100253180(*param_1 + 0x40,*(undefined8 *)(lVar5 + 8),param_2 + 8,
                                      *(undefined2 *)(param_2 + 4));
                if (0 < DAT_1011c568c) {
                  FUN_1008e3970(&DAT_100b392f0,"USB",0,
                                "[L2CAP_DYN_CHN%04x(psm:%04x)] Pass Data to Dynamic Channel (%08x)",
                                *(undefined2 *)(lVar5 + 2),*(undefined2 *)(lVar5 + 4),uVar3);
                }
                QMutex::unlock();
                uVar3 = 0;
                goto switchD_1002eb33a_caseD_1;
              }
              break;
            }
            plVar4 = (long *)*plVar4;
          } while (plVar4 != plVar2);
        }
      }
      if (DAT_1011c568c < 1) {
        QMutex::unlock();
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
        uVar3 = 0x20;
      }
      else {
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[L2CAP] Invalid Dynamic CID!");
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
        QMutex::unlock();
        uVar3 = 0x20;
      }
      goto switchD_1002eb33a_caseD_1;
    }
    uVar3 = 0x20;
    if (DAT_1011c568c < 1) goto switchD_1002eb33a_caseD_1;
    pcVar7 = "[L2CAP] Unsupported CID!";
  }
  FUN_1008e3970(&DAT_100b392f0,"USB",0,pcVar7);
switchD_1002eb33a_caseD_1:
  if (lVar8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

