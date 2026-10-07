
ulong FUN_100822900(undefined8 param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_248;
  undefined8 local_240;
  byte local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = FUN_10087d950(param_1,local_238,0x200);
  puVar1 = PTR___DefaultRuneLocale_100ba20c0;
  uVar6 = 0;
  if (iVar4 < 1) {
LAB_100822b56:
    if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return uVar6 & 0xffffffff;
  }
  local_248 = (byte *)0x0;
  uVar6 = 0;
LAB_100822960:
  local_238[(long)iVar4 + -1] = 0;
  local_240 = uVar6;
  if ((char)local_238[0] < '\0') {
    uVar5 = ___maskrune((uint)local_238[0],0x500);
  }
  else {
    uVar5 = *(uint *)(puVar1 + (ulong)local_238[0] * 4 + 0x3c) & 0x500;
  }
  pbVar10 = (byte *)((long)&local_240 + 7);
  uVar6 = local_240;
  if (uVar5 != 0) {
    do {
      do {
        bVar3 = pbVar10[1];
        pbVar10 = pbVar10 + 1;
      } while (bVar3 == 0x2e);
    } while (bVar3 - 0x30 < 10);
    if (bVar3 == 0) {
      pbVar8 = (byte *)0x0;
    }
    else {
      *pbVar10 = 0;
      do {
        pbVar9 = pbVar10;
        bVar3 = pbVar9[1];
        if ((char)bVar3 < '\0') {
          uVar5 = ___maskrune((uint)bVar3,0x4000);
        }
        else {
          uVar5 = *(uint *)(puVar1 + (ulong)bVar3 * 4 + 0x3c) & 0x4000;
        }
        pbVar10 = pbVar9 + 1;
      } while (uVar5 != 0);
      bVar3 = *pbVar10;
      pbVar2 = pbVar10;
      pbVar8 = (byte *)0x0;
      if (bVar3 != 0) {
LAB_100822a30:
        pbVar7 = pbVar2;
        if ((char)bVar3 < '\0') {
          uVar5 = ___maskrune((uint)bVar3,0x4000);
        }
        else {
          uVar5 = *(uint *)(puVar1 + (ulong)bVar3 * 4 + 0x3c) & 0x4000;
        }
        pbVar8 = pbVar10;
        if (uVar5 == 0) goto code_r0x000100822a61;
        if (*pbVar7 != 0) {
          *pbVar7 = 0;
          do {
            bVar3 = pbVar7[1];
            if ((char)bVar3 < '\0') {
              uVar5 = ___maskrune((uint)bVar3,0x4000);
            }
            else {
              uVar5 = *(uint *)(puVar1 + (ulong)bVar3 * 4 + 0x3c) & 0x4000;
            }
            pbVar7 = pbVar7 + 1;
          } while (uVar5 != 0);
          local_248 = (byte *)0x0;
          if (*pbVar7 != 0) {
            local_248 = pbVar7;
          }
          goto LAB_100822b03;
        }
        goto LAB_100822af0;
      }
    }
    goto LAB_100822b03;
  }
  goto LAB_100822b56;
code_r0x000100822a61:
  bVar3 = pbVar9[2];
  pbVar2 = pbVar9 + 2;
  pbVar9 = pbVar7;
  if (bVar3 == 0) goto LAB_100822af0;
  goto LAB_100822a30;
LAB_100822af0:
  local_248 = (byte *)0x0;
LAB_100822b03:
  uVar6 = local_240;
  if ((local_238[0] == 0) ||
     (iVar4 = FUN_100822b80(local_238,pbVar8,local_248), uVar6 = local_240, iVar4 == 0))
  goto LAB_100822b56;
  uVar6 = (ulong)((int)local_240 + 1);
  iVar4 = FUN_10087d950(param_1,local_238,0x200);
  if (iVar4 < 1) goto LAB_100822b56;
  goto LAB_100822960;
}

