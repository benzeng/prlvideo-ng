
int FUN_100c622d0(char *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  int *piVar7;
  ssize_t sVar8;
  socklen_t sVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  int local_1bc;
  byte local_1aa [258];
  sockaddr local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8.sa_data[6] = '\0';
  local_a8.sa_data[7] = '\0';
  local_a8.sa_data[8] = '\0';
  local_a8.sa_data[9] = '\0';
  local_a8.sa_data[10] = '\0';
  local_a8.sa_data[0xb] = '\0';
  local_a8.sa_data[0xc] = '\0';
  local_a8.sa_data[0xd] = '\0';
  local_40 = 0;
  local_48 = 0;
  local_a8.sa_len = '\0';
  local_a8.sa_family = '\x01';
  local_a8.sa_data[0] = '\0';
  local_a8.sa_data[1] = '\0';
  local_a8.sa_data[2] = '\0';
  local_a8.sa_data[3] = '\0';
  local_a8.sa_data[4] = '\0';
  local_a8.sa_data[5] = '\0';
  local_38 = lVar12;
  sVar6 = _strlen(param_1);
  iVar2 = -1;
  if (sVar6 < 0x68) {
    FUN_100c583f0(local_a8.sa_data,param_1,0x68);
    sVar6 = _strlen(param_1);
    iVar1 = _socket(1,1,0);
    if (iVar1 != -1) {
      sVar9 = (int)sVar6 + 2;
      iVar2 = _connect(iVar1,&local_a8,sVar9);
      if (iVar2 != 0) {
        do {
          piVar7 = ___error();
          iVar3 = *piVar7;
          if (2 < iVar3 - 0x23U) {
            if (iVar3 == 0x38) break;
            iVar2 = 0;
            if (iVar3 != 4) goto LAB_100c62598;
          }
          iVar2 = _connect(iVar1,&local_a8,sVar9);
        } while (iVar2 != 0);
      }
      iVar2 = 0;
      if (0 < param_3) {
        local_1bc = 0;
        while( true ) {
          local_1aa[0] = 1;
          local_1aa[1] = (byte)param_3;
          if (0xfe < param_3) {
            local_1aa[1] = 0xff;
          }
          iVar3 = 0;
          do {
            while( true ) {
              sVar8 = _write(iVar1,local_1aa + iVar3,(long)(2 - iVar3));
              if (-1 < (int)sVar8) break;
              piVar7 = ___error();
              if ((*piVar7 != 4) && (iVar2 = -1, *piVar7 != 0x23)) goto LAB_100c62598;
            }
            iVar3 = (int)sVar8 + iVar3;
            iVar4 = 0;
          } while (iVar3 != 2);
          do {
            while( true ) {
              sVar8 = _read(iVar1,local_1aa,1);
              iVar3 = (int)sVar8;
              iVar2 = local_1bc;
              if (iVar3 == 0) goto LAB_100c62598;
              if (0 < iVar3) break;
              piVar7 = ___error();
              if ((*piVar7 != 4) && (iVar2 = -1, *piVar7 != 0x23)) goto LAB_100c62598;
            }
            iVar4 = iVar3 + iVar4;
          } while (iVar4 != 1);
          uVar5 = (uint)local_1aa[0];
          if (local_1aa[0] == 0) break;
          pbVar11 = local_1aa + 2;
          if (param_2 != 0) {
            pbVar11 = (byte *)(local_1bc + param_2);
          }
          uVar10 = 0;
          do {
            while( true ) {
              sVar8 = _read(iVar1,pbVar11 + (int)uVar10,(long)(int)(uVar5 - uVar10));
              iVar3 = (int)sVar8;
              iVar2 = local_1bc;
              if (iVar3 == 0) goto LAB_100c62598;
              if (0 < iVar3) break;
              piVar7 = ___error();
              if ((*piVar7 != 4) && (iVar2 = -1, *piVar7 != 0x23)) goto LAB_100c62598;
              uVar5 = (uint)local_1aa[0];
              if (uVar5 == uVar10) goto LAB_100c62550;
            }
            uVar10 = iVar3 + uVar10;
            uVar5 = (uint)local_1aa[0];
          } while (uVar5 != uVar10);
LAB_100c62550:
          param_3 = param_3 - uVar10;
          if (param_2 == 0) {
            FUN_100c61fd0(local_1aa + 2,uVar10);
          }
          iVar2 = uVar10 + local_1bc;
          local_1bc = iVar2;
          if (param_3 < 1) break;
        }
      }
LAB_100c62598:
      _close(iVar1);
      lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
    }
  }
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

