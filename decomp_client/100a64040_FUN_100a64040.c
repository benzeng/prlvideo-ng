
void FUN_100a64040(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  int *piVar7;
  long *plVar8;
  string *psVar9;
  socklen_t local_20c;
  undefined1 local_208 [64];
  long local_1c8;
  int local_1c0;
  uint local_1b8 [34];
  string local_130;
  char local_12f [15];
  char *local_120;
  sockaddr local_118 [7];
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
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  psVar9 = (string *)(*(long *)(param_1 + 0x18) + 0x30);
  lVar5 = std::string::find((char)psVar9,0x2f);
  if ((lVar5 == -1) && (lVar5 = std::string::find((char)psVar9,0x2e), lVar5 == -1)) {
    FUN_100a65520(&local_130,"/tmp/",psVar9);
  }
  else {
    std::string::string(&local_130,psVar9);
  }
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
  local_a8.sa_len = '\0';
  local_a8.sa_family = '\0';
  local_a8.sa_data[0] = '\0';
  local_a8.sa_data[1] = '\0';
  local_a8.sa_data[2] = '\0';
  local_a8.sa_data[3] = '\0';
  local_a8.sa_data[4] = '\0';
  local_a8.sa_data[5] = '\0';
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
  iVar2 = _socket(1,1,0);
  if (iVar2 < 0) {
    piVar7 = ___error();
    FUN_100df99c0("","IpcServer",0,"socket() failed, err=%d",*piVar7);
    goto LAB_100a6456a;
  }
  uVar3 = _fcntl(iVar2,3,0);
  if ((int)uVar3 < 0) {
    piVar7 = ___error();
    FUN_100df99c0("","IpcServer",0,"getfl() failed, err=%d",*piVar7);
  }
  else if (((uVar3 & 4) == 0) && (iVar4 = _fcntl(iVar2,4,(ulong)(uVar3 | 4)), iVar4 < 0)) {
    piVar7 = ___error();
    FUN_100df99c0("","IpcServer",0,"setfl() failed, err=%d",*piVar7);
  }
  else {
    local_a8.sa_family = '\x01';
    pcVar6 = local_120;
    if (((byte)local_130 & 1) == 0) {
      pcVar6 = local_12f;
    }
    _strncpy(local_a8.sa_data,pcVar6,0x67);
    iVar4 = _bind(iVar2,&local_a8,0x6a);
    if (iVar4 < 0) {
      piVar7 = ___error();
      FUN_100df99c0("","IpcServer",0,"bind() failed, err=%d",*piVar7);
    }
    else {
      iVar4 = _listen(iVar2,0x10);
      if (iVar4 < 0) {
        piVar7 = ___error();
        FUN_100df99c0("","IpcServer",0,"listen() failed, err=%d",*piVar7);
      }
      else {
        pcVar6 = local_120;
        if (((byte)local_130 & 1) == 0) {
          pcVar6 = local_12f;
        }
        lVar5 = *(long *)(param_1 + 0x18);
        iVar4 = *(int *)(lVar5 + 0x58);
        if (iVar4 == 3) {
          *(undefined4 *)(lVar5 + 0x58) = 4;
          if (*(long *)(param_1 + 0x10) != 0) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            FUN_100aaf5d0();
            lVar5 = *(long *)(param_1 + 0x18);
            iVar4 = *(int *)(lVar5 + 0x58);
            goto LAB_100a642d5;
          }
LAB_100a642de:
          uVar3 = 1 << ((byte)iVar2 & 0x1f);
          do {
            local_1b8[0x1c] = 0;
            local_1b8[0x1d] = 0;
            local_1b8[0x1e] = 0;
            local_1b8[0x1f] = 0;
            local_1b8[0x18] = 0;
            local_1b8[0x19] = 0;
            local_1b8[0x1a] = 0;
            local_1b8[0x1b] = 0;
            local_1b8[0x14] = 0;
            local_1b8[0x15] = 0;
            local_1b8[0x16] = 0;
            local_1b8[0x17] = 0;
            local_1b8[0x10] = 0;
            local_1b8[0x11] = 0;
            local_1b8[0x12] = 0;
            local_1b8[0x13] = 0;
            local_1b8[0xc] = 0;
            local_1b8[0xd] = 0;
            local_1b8[0xe] = 0;
            local_1b8[0xf] = 0;
            local_1b8[8] = 0;
            local_1b8[9] = 0;
            local_1b8[10] = 0;
            local_1b8[0xb] = 0;
            local_1b8[4] = 0;
            local_1b8[5] = 0;
            local_1b8[6] = 0;
            local_1b8[7] = 0;
            local_1b8[0] = 0;
            local_1b8[1] = 0;
            local_1b8[2] = 0;
            local_1b8[3] = 0;
            piVar7 = *(int **)(lVar5 + 0x48);
            iVar4 = *piVar7;
            local_1b8[(ulong)(long)iVar4 >> 5] =
                 local_1b8[(ulong)(long)iVar4 >> 5] | 1 << ((byte)iVar4 & 0x1f);
            local_1b8[(ulong)(long)iVar2 >> 5] = local_1b8[(ulong)(long)iVar2 >> 5] | uVar3;
            iVar4 = *piVar7;
            if (iVar4 < iVar2) {
              iVar4 = iVar2;
            }
            iVar1 = *(int *)(lVar5 + 0x54);
            if (iVar1 < 0) {
              iVar4 = _select_1050(iVar4 + 1,local_1b8,0,0,0);
            }
            else {
              local_1c8 = (long)(iVar1 / 1000);
              local_1c0 = (iVar1 % 1000) * 1000;
              iVar4 = _select_1050(iVar4 + 1,local_1b8,0,0,&local_1c8);
            }
            if (iVar4 == 0) {
              FUN_100aafe50(local_208,*(long *)(param_1 + 0x18) + 8);
              lVar5 = *(long *)(param_1 + 0x18);
              iVar4 = 0xe;
              if (*(long *)(lVar5 + 0x18) == *(long *)(lVar5 + 0x20)) {
                *(undefined4 *)(lVar5 + 0x58) = 2;
                iVar4 = 0xf;
              }
              FUN_100aafde0(local_208);
              if (iVar4 == 0xf) break;
            }
            else if (iVar4 == -1) {
              piVar7 = ___error();
              if (*piVar7 != 4) {
LAB_100a64530:
                piVar7 = ___error();
                FUN_100df99c0("","IpcServer",0,"seletct() failed, err=%d",*piVar7);
                break;
              }
            }
            else {
              if (iVar4 < 0) goto LAB_100a64530;
              if ((*(int *)(*(long *)(param_1 + 0x18) + 0x58) == 4) &&
                 ((local_1b8[(ulong)(long)iVar2 >> 5] & uVar3) != 0)) {
                local_20c = 0x6a;
                iVar4 = _accept(iVar2,local_118,&local_20c);
                if (iVar4 < 0) {
                  ___error();
                  FUN_100df99c0("","IpcServer",0,"accept() failed, err=%d");
                }
                else {
                  plVar8 = operator_new(0x30);
                  FUN_100a657a0(plVar8,*(undefined8 *)(param_1 + 0x18),iVar4);
                  FUN_100ab0dd0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),plVar8);
                  (**(code **)(*plVar8 + 8))(plVar8);
                }
              }
            }
            lVar5 = *(long *)(param_1 + 0x18);
          } while (*(int *)(lVar5 + 0x58) == 4);
        }
        else {
LAB_100a642d5:
          if (iVar4 == 4) goto LAB_100a642de;
        }
        _remove(pcVar6);
      }
    }
  }
  _close(iVar2);
LAB_100a6456a:
  std::string::~string(&local_130);
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_100aaf5d0();
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

