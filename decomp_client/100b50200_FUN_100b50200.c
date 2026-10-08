
undefined4 FUN_100b50200(int param_1,char *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  int local_1068;
  char *local_1064;
  char local_1058 [4096];
  char local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  DAT_1022cf3fc = _socket(2,2,0);
  uVar7 = 0xffffffff;
  if (-1 < DAT_1022cf3fc) {
    local_1068 = 0x1000;
    local_1064 = local_1058;
    uVar6 = 0;
    iVar2 = _ioctl(DAT_1022cf3fc,0xc00c6924,&local_1068);
    if (iVar2 < 0) {
      _close(DAT_1022cf3fc);
      DAT_1022cf3fc = -1;
    }
    else {
      uVar8 = (ulong)local_1068;
      if (0x1f < uVar8) {
        pcVar4 = local_1064;
        do {
          bVar1 = pcVar4[0x10];
          if ((pcVar4[0x11] == '\x12') && (pcVar4[0x16] == '\x06')) {
            local_48 = 0;
            uStack_40 = 0;
            local_58[0] = '\0';
            local_58[1] = '\0';
            local_58[2] = '\0';
            local_58[3] = '\0';
            local_58[4] = '\0';
            local_58[5] = '\0';
            local_58[6] = '\0';
            local_58[7] = '\0';
            local_58[8] = '\0';
            local_58[9] = '\0';
            local_58[10] = '\0';
            local_58[0xb] = '\0';
            local_58[0xc] = '\0';
            local_58[0xd] = '\0';
            local_58[0xe] = '\0';
            local_58[0xf] = '\0';
            _strncpy(local_58,pcVar4,0xf);
            iVar2 = _ioctl(DAT_1022cf3fc,0xc02069c1,local_58);
            iVar3 = -1;
            if ((-1 < iVar2) &&
               ((0x5056532f < (int)local_48 && (iVar3 = (int)local_48 + -0x50565330, 8 < iVar3)))) {
              iVar3 = -1;
            }
            if (iVar3 == param_1) {
              bVar1 = pcVar4[0x15];
              *(undefined2 *)(param_3 + 1) = *(undefined2 *)(pcVar4 + (ulong)bVar1 + 0x1c);
              *param_3 = *(undefined4 *)(pcVar4 + (ulong)bVar1 + 0x18);
              _strncpy(param_2,pcVar4,0x20);
              uVar6 = 1;
              break;
            }
          }
          uVar8 = uVar8 - ((ulong)bVar1 + 0x10);
          pcVar4 = pcVar4 + (ulong)bVar1 + 0x10;
          uVar6 = 0;
        } while (0x1f < uVar8);
      }
      _close(DAT_1022cf3fc);
      DAT_1022cf3fc = -1;
      lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
      uVar7 = uVar6;
    }
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

