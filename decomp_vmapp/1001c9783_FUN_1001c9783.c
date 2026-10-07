
int FUN_1001c9783(char *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  sockaddr *psVar5;
  char *pcVar6;
  addrinfo *paVar7;
  __uint8_t *p_Var8;
  char *pcVar9;
  addrinfo local_b8;
  addrinfo *local_80;
  __uint8_t local_78 [2];
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  __uint8_t local_48 [2];
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38 [2];
  hostent *local_30;
  __uint8_t *local_28;
  int local_1c;
  int local_18;
  int local_14;
  addrinfo *local_10;
  
  local_28 = (__uint8_t *)0x0;
  _local_48 = 0;
  local_40 = 0;
  _local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  iVar2 = FUN_1001c7dd1();
  if (iVar2 == 0) {
    local_30 = _gethostbyname(param_1);
    if (local_30 == (hostent *)0x0) {
      ___xmlIOErr(10,0,"Failed to resolve host");
    }
    else {
      for (local_1c = 0; local_30->h_addr_list[local_1c] != (char *)0x0; local_1c = local_1c + 1) {
        if (local_30->h_addrtype == 2) {
          if (4 < (uint)local_30->h_length) {
            ___xmlIOErr(10,0,"address size mismatch\n");
            return -1;
          }
          pcVar6 = local_30->h_addr_list[local_1c];
          pcVar9 = (char *)local_38;
          for (lVar3 = (long)local_30->h_length; lVar3 != 0; lVar3 = lVar3 + -1) {
            *pcVar9 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar9 = pcVar9 + 1;
          }
          local_48 = (__uint8_t  [2])CONCAT11((char)local_30->h_addrtype,local_48[0]);
          _local_48 = CONCAT44(local_38[0],_local_48);
          uVar1 = FUN_1001c9bc8(param_2);
          _local_48 = CONCAT22(uVar1,local_48);
          local_28 = local_48;
        }
        else {
          iVar2 = FUN_1001c7dd1();
          if (iVar2 == 0) {
            return -1;
          }
          if (local_30->h_addrtype != 0x1e) {
            return -1;
          }
          if (0x10 < (uint)local_30->h_length) {
            ___xmlIOErr(10,0,"address size mismatch\n");
            return -1;
          }
          pcVar6 = local_30->h_addr_list[local_1c];
          pcVar9 = (char *)&local_58;
          for (lVar3 = (long)local_30->h_length; lVar3 != 0; lVar3 = lVar3 + -1) {
            *pcVar9 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar9 = pcVar9 + 1;
          }
          local_78 = (__uint8_t  [2])CONCAT11((char)local_30->h_addrtype,local_78[0]);
          local_70 = local_58;
          local_68 = local_50;
          uVar1 = FUN_1001c9bc8(param_2);
          _local_78 = CONCAT22(uVar1,local_78);
          local_28 = local_78;
        }
        iVar2 = FUN_1001c93fe(local_28);
        if (iVar2 != -1) {
          return iVar2;
        }
        local_18 = -1;
      }
    }
  }
  else {
    local_80 = (addrinfo *)0x0;
    paVar7 = &local_b8;
    for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
      paVar7->ai_flags = 0;
      paVar7->ai_family = 0;
      paVar7 = (addrinfo *)&paVar7->ai_socktype;
    }
    local_b8.ai_socktype = 1;
    local_14 = _getaddrinfo(param_1,(char *)0x0,&local_b8,&local_80);
    if (local_14 == 0) {
      local_14 = 0;
      for (local_10 = local_80; local_10 != (addrinfo *)0x0; local_10 = local_10->ai_next) {
        if ((local_10->ai_family == 2) || (local_10->ai_family == 0x1e)) {
          if (local_10->ai_family == 0x1e) {
            if (0x1c < local_10->ai_addrlen) {
              ___xmlIOErr(10,0,"address size mismatch\n");
              _freeaddrinfo(local_80);
              return -1;
            }
            psVar5 = local_10->ai_addr;
            p_Var8 = local_78;
            for (uVar4 = (ulong)local_10->ai_addrlen; uVar4 != 0; uVar4 = uVar4 - 1) {
              *p_Var8 = psVar5->sa_len;
              psVar5 = (sockaddr *)&psVar5->sa_family;
              p_Var8 = p_Var8 + 1;
            }
            uVar1 = FUN_1001c9bc8(param_2);
            _local_78 = CONCAT22(uVar1,local_78);
            local_28 = local_78;
          }
          else {
            if (0x10 < local_10->ai_addrlen) {
              ___xmlIOErr(10,0,"address size mismatch\n");
              _freeaddrinfo(local_80);
              return -1;
            }
            psVar5 = local_10->ai_addr;
            p_Var8 = local_48;
            for (uVar4 = (ulong)local_10->ai_addrlen; uVar4 != 0; uVar4 = uVar4 - 1) {
              *p_Var8 = psVar5->sa_len;
              psVar5 = (sockaddr *)&psVar5->sa_family;
              p_Var8 = p_Var8 + 1;
            }
            uVar1 = FUN_1001c9bc8(param_2);
            _local_48 = CONCAT22(uVar1,local_48);
            local_28 = local_48;
          }
          local_18 = FUN_1001c93fe(local_28);
          if (local_18 != -1) {
            _freeaddrinfo(local_80);
            return local_18;
          }
        }
      }
      if (local_80 != (addrinfo *)0x0) {
        _freeaddrinfo(local_80);
      }
    }
    else {
      ___xmlIOErr(10,0,"getaddrinfo failed\n");
    }
  }
  return -1;
}

