
int FUN_10080c4e0(long param_1,void *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long local_148;
  long local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar11 = *(ulong *)((long)param_2 + 0x20);
  iVar4 = -1;
  local_38 = lVar8;
  if (*(long *)((long)param_2 + 0x18) + uVar11 <= *(ulong *)((long)param_2 + 8)) {
    uVar7 = 0x454c;
    if (0x454c < *(ulong *)(param_1 + 0x1b8)) {
      uVar7 = *(ulong *)(param_1 + 0x1b8);
    }
    if (*(ulong *)((long)param_2 + 8) <= uVar7) {
      iVar5 = -3;
      if (uVar11 == 0) goto LAB_10080c8be;
      local_140 = (ulong)CONCAT11((char)*(undefined2 *)((long)param_2 + 0x10),
                                  (char)((ushort)*(undefined2 *)((long)param_2 + 0x10) >> 8)) <<
                  0x30;
      local_148 = FUN_1008dfdc0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x260),&local_140);
      if (local_148 == 0) {
        pvVar6 = (void *)FUN_10080bf60(*(undefined8 *)((long)param_2 + 8),1);
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (pvVar6 != (void *)0x0) {
          _memcpy(pvVar6,param_2,0x58);
          *(undefined8 *)((long)pvVar6 + 0x20) = *(undefined8 *)((long)pvVar6 + 8);
          *(undefined8 *)((long)pvVar6 + 0x18) = 0;
          goto LAB_10080c605;
        }
      }
      else {
        pvVar6 = *(void **)(local_148 + 8);
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (*(long *)((long)pvVar6 + 8) == *(long *)((long)param_2 + 8)) {
LAB_10080c605:
          if (*(long *)((long)pvVar6 + 0x60) == 0) {
            do {
              uVar7 = uVar11 & 0xffffffff;
              if (0x100 < uVar11) {
                uVar7 = 0x100;
              }
              iVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0x16,local_138,uVar7,0);
              if (iVar4 < 1) goto LAB_10080c838;
              uVar11 = uVar11 - (long)iVar4;
            } while (uVar11 != 0);
          }
          else {
            iVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                              (param_1,0x16,
                               *(long *)((long)pvVar6 + 0x58) + *(long *)((long)param_2 + 0x18),
                               uVar11 & 0xffffffff,0);
            if ((long)iVar4 != uVar11) {
              iVar4 = -1;
            }
            if (iVar4 < 1) {
LAB_10080c838:
              lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
              if ((pvVar6 != (void *)0x0) && (local_148 == 0)) {
                if (*(int *)((long)pvVar6 + 0x28) != 0) {
                  FUN_10088bc70(*(undefined8 *)((long)pvVar6 + 0x30));
                  FUN_10088ae30(*(undefined8 *)((long)pvVar6 + 0x38));
                }
                if (*(long *)((long)pvVar6 + 0x58) != 0) {
                  FUN_10081e1a0();
                }
                if (*(long *)((long)pvVar6 + 0x60) != 0) {
                  FUN_10081e1a0();
                }
                FUN_10081e1a0(pvVar6);
              }
              goto LAB_10080c8b5;
            }
            uVar7 = *(ulong *)((long)param_2 + 0x18);
            uVar3 = uVar7;
            if ((long)uVar11 < 9) {
              for (; (long)uVar7 < (long)(uVar3 + uVar11); uVar7 = uVar7 + 1) {
                *(byte *)(*(long *)((long)pvVar6 + 0x60) + ((long)uVar7 >> 3)) =
                     *(byte *)(*(long *)((long)pvVar6 + 0x60) + ((long)uVar7 >> 3)) |
                     (byte)(1 << ((byte)uVar7 & 7));
                uVar3 = *(ulong *)((long)param_2 + 0x18);
              }
            }
            else {
              pbVar1 = (byte *)(*(long *)((long)pvVar6 + 0x60) + ((long)uVar7 >> 3));
              *pbVar1 = *pbVar1 | (&DAT_100b4ddba)[uVar7 & 7];
              lVar8 = *(long *)((long)param_2 + 0x18);
              lVar10 = lVar8 >> 3;
              while( true ) {
                lVar10 = lVar10 + 1;
                lVar9 = (long)(lVar8 + -1 + uVar11) >> 3;
                if (lVar9 <= lVar10) break;
                *(undefined1 *)(*(long *)((long)pvVar6 + 0x60) + lVar10) = 0xff;
                lVar8 = *(long *)((long)param_2 + 0x18);
              }
              pbVar1 = (byte *)(*(long *)((long)pvVar6 + 0x60) + lVar9);
              *pbVar1 = *pbVar1 | (&DAT_100b4ddc2)[lVar8 + uVar11 & 7];
            }
            uVar11 = *(ulong *)((long)param_2 + 8);
            if ((long)uVar11 < 1) {
              FUN_10081d560("d1_both.c",0x2e6,"((long)msg_hdr->msg_len) > 0");
              uVar11 = *(ulong *)((long)param_2 + 8);
            }
            lVar8 = (long)(uVar11 - 1) >> 3;
            if (*(char *)(*(long *)((long)pvVar6 + 0x60) + lVar8) == (&DAT_100b4ddc2)[uVar11 & 7]) {
              do {
                if (lVar8 < 1) {
                  FUN_10081e1a0();
                  *(undefined8 *)((long)pvVar6 + 0x60) = 0;
                  break;
                }
                pcVar2 = (char *)(*(long *)((long)pvVar6 + 0x60) + -1 + lVar8);
                lVar8 = lVar8 + -1;
              } while (*pcVar2 == -1);
            }
            if (local_148 == 0) {
              lVar8 = FUN_1008dfc30(&local_140,pvVar6);
              iVar4 = -1;
              local_148 = 0;
              if (lVar8 == 0) goto LAB_10080c838;
              lVar8 = FUN_1008dfd00(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x260),lVar8);
              if (lVar8 == 0) {
                FUN_10081d560("d1_both.c",0x2fb,"item != NULL");
              }
            }
          }
          lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
          iVar5 = -3;
          goto LAB_10080c8be;
        }
      }
    }
  }
LAB_10080c8b5:
  *param_3 = 0;
  iVar5 = iVar4;
LAB_10080c8be:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

