
ulong FUN_100b9c480(char *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_90;
  int iStack_8c;
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (DAT_1023118c8 == 0) {
    uVar6 = 0xfffffffa;
  }
  else {
    if ((param_1 != (char *)0x0) || (param_2 - 1U < 7)) {
      iVar2 = FUN_100bc14d0();
      if (iVar2 == 0) {
        if (lVar1 == local_38) {
          uVar6 = 0xfffffff8;
          goto LAB_100b9c563;
        }
      }
      else {
        uVar3 = FUN_100bc1030(DAT_1022cf508);
        uVar5 = (ulong)uVar3;
        if (uVar3 == 0) {
          if (param_2 - 1U < 7) {
            pcVar4 = (char *)FUN_100b93e00(param_2);
            if ((param_1 != (char *)0x0) && (iVar2 = _strncmp(pcVar4,param_1,0x50), iVar2 != 0)) {
              FUN_100bc10f0(DAT_1022cf508);
              if (lVar1 == local_38) {
                uVar6 = 0xfffffff9;
                goto LAB_100b9c563;
              }
              goto LAB_100b9c6a6;
            }
          }
          else {
            pcVar4 = (char *)FUN_100b93ce0(param_1);
          }
          if (pcVar4 == (char *)0x0) {
            uVar3 = FUN_100b9d470(0xfffffff9,0);
            uVar5 = (ulong)uVar3;
          }
          else {
            uVar5 = 0;
            if (*(int *)(pcVar4 + 0x54) != 0) {
              uVar3 = FUN_100b9e3d0(pcVar4);
              uVar5 = (ulong)uVar3;
              if (uVar3 == 0) {
                if (4 < *(int *)(pcVar4 + 0x54)) {
                  _local_90 = CONCAT44(*(int *)(pcVar4 + 0x54),*(undefined4 *)(pcVar4 + 0x50));
                  _memcpy(local_88,pcVar4,0x50);
                  FUN_100b93750(DAT_1022cf500,2,0x58,&local_90);
                }
                pcVar4[0x54] = '\0';
                pcVar4[0x55] = '\0';
                pcVar4[0x56] = '\0';
                pcVar4[0x57] = '\0';
                pcVar4[0x4e] = '\0';
                pcVar4[0x4c] = '\0';
                pcVar4[0x4d] = '\0';
                pcVar4[0x48] = '\0';
                pcVar4[0x49] = '\0';
                pcVar4[0x4a] = '\0';
                pcVar4[0x4b] = '\0';
                pcVar4[0x40] = '\0';
                pcVar4[0x41] = '\0';
                pcVar4[0x42] = '\0';
                pcVar4[0x43] = '\0';
                pcVar4[0x44] = '\0';
                pcVar4[0x45] = '\0';
                pcVar4[0x46] = '\0';
                pcVar4[0x47] = '\0';
                pcVar4[0x38] = '\0';
                pcVar4[0x39] = '\0';
                pcVar4[0x3a] = '\0';
                pcVar4[0x3b] = '\0';
                pcVar4[0x3c] = '\0';
                pcVar4[0x3d] = '\0';
                pcVar4[0x3e] = '\0';
                pcVar4[0x3f] = '\0';
                pcVar4[0x30] = '\0';
                pcVar4[0x31] = '\0';
                pcVar4[0x32] = '\0';
                pcVar4[0x33] = '\0';
                pcVar4[0x34] = '\0';
                pcVar4[0x35] = '\0';
                pcVar4[0x36] = '\0';
                pcVar4[0x37] = '\0';
                pcVar4[0x28] = '\0';
                pcVar4[0x29] = '\0';
                pcVar4[0x2a] = '\0';
                pcVar4[0x2b] = '\0';
                pcVar4[0x2c] = '\0';
                pcVar4[0x2d] = '\0';
                pcVar4[0x2e] = '\0';
                pcVar4[0x2f] = '\0';
                pcVar4[0x20] = '\0';
                pcVar4[0x21] = '\0';
                pcVar4[0x22] = '\0';
                pcVar4[0x23] = '\0';
                pcVar4[0x24] = '\0';
                pcVar4[0x25] = '\0';
                pcVar4[0x26] = '\0';
                pcVar4[0x27] = '\0';
                pcVar4[0x18] = '\0';
                pcVar4[0x19] = '\0';
                pcVar4[0x1a] = '\0';
                pcVar4[0x1b] = '\0';
                pcVar4[0x1c] = '\0';
                pcVar4[0x1d] = '\0';
                pcVar4[0x1e] = '\0';
                pcVar4[0x1f] = '\0';
                pcVar4[0x10] = '\0';
                pcVar4[0x11] = '\0';
                pcVar4[0x12] = '\0';
                pcVar4[0x13] = '\0';
                pcVar4[0x14] = '\0';
                pcVar4[0x15] = '\0';
                pcVar4[0x16] = '\0';
                pcVar4[0x17] = '\0';
                pcVar4[8] = '\0';
                pcVar4[9] = '\0';
                pcVar4[10] = '\0';
                pcVar4[0xb] = '\0';
                pcVar4[0xc] = '\0';
                pcVar4[0xd] = '\0';
                pcVar4[0xe] = '\0';
                pcVar4[0xf] = '\0';
                pcVar4[0] = '\0';
                pcVar4[1] = '\0';
                pcVar4[2] = '\0';
                pcVar4[3] = '\0';
                pcVar4[4] = '\0';
                pcVar4[5] = '\0';
                pcVar4[6] = '\0';
                pcVar4[7] = '\0';
                uVar5 = 0;
              }
            }
          }
          FUN_100bc10f0(DAT_1022cf508);
        }
        if (lVar1 == local_38) {
          return uVar5;
        }
      }
LAB_100b9c6a6:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    uVar6 = 0xfffffffd;
  }
LAB_100b9c563:
  uVar5 = FUN_100b9d470(uVar6,0);
  return uVar5;
}

