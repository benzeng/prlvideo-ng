
undefined8 FUN_100bc6ed0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  int local_240;
  int local_23c;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [24];
  undefined1 local_200 [288];
  undefined1 local_e0 [168];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  if (*(int *)(param_1 + 0x48) == 0x21f0) {
    lVar3 = *(long *)(param_1 + 0x270);
    iVar5 = FUN_100bee0e0(*(undefined8 *)(param_1 + 0x130),0);
    if (((iVar5 != 0) && (iVar5 < 0xff01)) &&
       (puVar7 = (undefined1 *)FUN_100bf3540(iVar5,"s3_srvr.c",0xd49), puVar7 != (undefined1 *)0x0))
    {
      FUN_100c66060(local_e0);
      FUN_100c01970(local_200);
      local_230 = puVar7;
      iVar6 = FUN_100bee0e0(*(undefined8 *)(param_1 + 0x130),&local_230);
      if ((iVar6 != 0) &&
         (local_238 = puVar7, lVar8 = FUN_100beeba0(0,&local_238,(long)iVar5), lVar8 != 0)) {
        *(undefined4 *)(lVar8 + 0x44) = 0;
        uVar9 = FUN_100bee0e0(lVar8,0);
        iVar6 = (int)uVar9;
        if ((iVar6 == 0) || (iVar5 < iVar6)) {
          FUN_100be8ab0(lVar8);
        }
        else {
          local_230 = puVar7;
          iVar5 = FUN_100bee0e0(lVar8,&local_230);
          FUN_100be8ab0(lVar8);
          if ((iVar5 != 0) &&
             (iVar5 = FUN_100c57f60(*(undefined8 *)(param_1 + 0x50),(long)(iVar6 + 0x8a)),
             iVar5 != 0)) {
            local_230 = *(undefined1 **)(*(long *)(param_1 + 0x50) + 8);
            *local_230 = 4;
            local_230 = local_230 + 4;
            if (*(code **)(lVar3 + 0x1e0) == (code *)0x0) {
              iVar5 = FUN_100c62100(local_218,0x10);
              if (0 < iVar5) {
                uVar10 = FUN_100c69f30();
                iVar5 = FUN_100c66e00(local_e0,uVar10,0,lVar3 + 0x1d0,local_218);
                if (iVar5 != 0) {
                  uVar10 = FUN_100c6ca20();
                  iVar5 = FUN_100c015e0(local_200,lVar3 + 0x1c0,0x10,uVar10,0);
                  if (iVar5 != 0) {
                    local_228 = *(undefined8 *)(lVar3 + 0x1b0);
                    local_220 = *(undefined8 *)(lVar3 + 0x1b8);
                    goto LAB_100bc7150;
                  }
                }
              }
            }
            else {
              iVar5 = (**(code **)(lVar3 + 0x1e0))
                                (param_1,&local_228,local_218,local_e0,local_200,1);
              if (-1 < iVar5) {
LAB_100bc7150:
                if (*(int *)(param_1 + 0xa8) == 0) {
                  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x130) + 0xcb);
                }
                else {
                  uVar4 = 0;
                }
                *local_230 = uVar4;
                if (*(int *)(param_1 + 0xa8) == 0) {
                  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x130) + 0xca);
                }
                else {
                  uVar4 = 0;
                }
                local_230[1] = uVar4;
                if (*(int *)(param_1 + 0xa8) == 0) {
                  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x130) + 0xc9);
                }
                else {
                  uVar4 = 0;
                }
                local_230[2] = uVar4;
                if (*(int *)(param_1 + 0xa8) == 0) {
                  uVar4 = *(undefined1 *)(*(long *)(param_1 + 0x130) + 200);
                }
                else {
                  uVar4 = 0;
                }
                local_230[3] = uVar4;
                puVar1 = local_230 + 6;
                *(undefined8 *)(local_230 + 0xe) = local_220;
                *(undefined8 *)(local_230 + 6) = local_228;
                puVar11 = local_230 + 0x16;
                local_230 = puVar11;
                iVar5 = FUN_100c6fa50(local_e0);
                _memcpy(puVar11,local_218,(long)iVar5);
                iVar5 = FUN_100c6fa50(local_e0);
                local_230 = local_230 + iVar5;
                iVar5 = FUN_100c66640(local_e0,local_230,&local_23c,puVar7,uVar9);
                if (iVar5 != 0) {
                  local_230 = local_230 + local_23c;
                  iVar5 = FUN_100c66d90(local_e0,local_230,&local_23c);
                  if (iVar5 != 0) {
                    local_230 = local_230 + local_23c;
                    iVar5 = FUN_100c019b0(local_200,puVar1,(long)local_230 - (long)puVar1);
                    if ((iVar5 != 0) &&
                       (iVar5 = FUN_100c019d0(local_200,local_230,&local_240), iVar5 != 0)) {
                      FUN_100c66520(local_e0);
                      FUN_100c01b10(local_200);
                      lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 8);
                      local_23c = (local_240 + (int)local_230) - (int)lVar3;
                      *(char *)(lVar3 + 1) = (char)((uint)(local_23c + 0xfffffc) >> 0x10);
                      *(char *)(lVar3 + 2) = (char)((uint)(local_23c + 0xfffc) >> 8);
                      *(char *)(lVar3 + 3) = (char)local_23c + -4;
                      *(char *)(lVar3 + 8) = (char)((uint)(local_23c + 0xfff6) >> 8);
                      *(char *)(lVar3 + 9) = (char)local_23c + -10;
                      local_230 = (undefined1 *)(lVar3 + 10);
                      *(int *)(param_1 + 0x60) = local_23c;
                      *(undefined4 *)(param_1 + 0x48) = 0x21f1;
                      *(undefined4 *)(param_1 + 100) = 0;
                      FUN_100bf3910(puVar7);
                      goto LAB_100bc7414;
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_100bf3910(puVar7);
      FUN_100c66520(local_e0);
      FUN_100c01b10(local_200);
    }
    *(undefined4 *)(param_1 + 0x48) = 5;
    uVar9 = 0xffffffff;
  }
  else {
LAB_100bc7414:
    uVar9 = FUN_100bd30a0(param_1,0x16);
  }
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

