
bool FUN_100a64890(long param_1,void *param_2,size_t param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  void *local_180;
  iovec local_178;
  msghdr local_168;
  uint local_138 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_40;
  
  pcVar7 = "sendmsg";
  if (param_4 != '\0') {
    pcVar7 = "recvmsg";
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    local_180 = param_2;
    do {
      while( true ) {
        if ((param_3 == 0) || (lVar4 = *(long *)(param_1 + 0x20), *(int *)(lVar4 + 0x58) != 4))
        goto LAB_100a64ace;
        local_48 = 0;
        uStack_40 = 0;
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
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        iVar2 = *(int *)(param_1 + 0x10);
        puVar5 = (uint *)((long)&local_b8 + ((ulong)(long)iVar2 >> 5) * 4);
        *puVar5 = *puVar5 | 1 << ((byte)iVar2 & 0x1f);
        piVar3 = *(int **)(lVar4 + 0x48);
        iVar1 = *piVar3;
        puVar5 = (uint *)((long)&local_b8 + ((ulong)(long)iVar1 >> 5) * 4);
        *puVar5 = *puVar5 | 1 << ((byte)iVar1 & 0x1f);
        iVar1 = *(int *)(param_1 + 0xc);
        iVar6 = *piVar3;
        if (iVar6 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 <= iVar1) {
          iVar6 = iVar1;
        }
        if (param_4 == '\0') {
          local_138[0x1c] = 0;
          local_138[0x1d] = 0;
          local_138[0x1e] = 0;
          local_138[0x1f] = 0;
          local_138[0x18] = 0;
          local_138[0x19] = 0;
          local_138[0x1a] = 0;
          local_138[0x1b] = 0;
          local_138[0x14] = 0;
          local_138[0x15] = 0;
          local_138[0x16] = 0;
          local_138[0x17] = 0;
          local_138[0x10] = 0;
          local_138[0x11] = 0;
          local_138[0x12] = 0;
          local_138[0x13] = 0;
          local_138[0xc] = 0;
          local_138[0xd] = 0;
          local_138[0xe] = 0;
          local_138[0xf] = 0;
          local_138[8] = 0;
          local_138[9] = 0;
          local_138[10] = 0;
          local_138[0xb] = 0;
          local_138[4] = 0;
          local_138[5] = 0;
          local_138[6] = 0;
          local_138[7] = 0;
          local_138[0] = 0;
          local_138[1] = 0;
          local_138[2] = 0;
          local_138[3] = 0;
          local_138[(ulong)(long)iVar1 >> 5] =
               local_138[(ulong)(long)iVar1 >> 5] | 1 << ((byte)iVar1 & 0x1f);
          puVar5 = local_138;
        }
        else {
          puVar5 = (uint *)((long)&local_b8 + ((ulong)(long)iVar1 >> 5) * 4);
          *puVar5 = *puVar5 | 1 << ((byte)iVar1 & 0x1f);
          puVar5 = (uint *)0x0;
        }
        iVar2 = _select_1050(iVar6 + 1,&local_b8,puVar5,0,0);
        if (iVar2 != -1) break;
        piVar3 = ___error();
        if (*piVar3 != 4) {
LAB_100a64ae6:
          piVar3 = ___error();
          if (*piVar3 == 0x20) {
            return false;
          }
          piVar3 = ___error();
          FUN_100df99c0("","IpcServer",0,"select() failed, err=%d",*piVar3);
          return false;
        }
        if (*(char *)(param_1 + 0x28) == '\0') goto LAB_100a64ace;
      }
      if (iVar2 < 0) goto LAB_100a64ae6;
      if (*(char *)(param_1 + 0x28) == '\0') {
        return false;
      }
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x58) != 4) {
        return false;
      }
      local_178.iov_base = local_180;
      local_168.msg_control = (void *)0x0;
      local_168.msg_controllen = 0;
      local_168.msg_flags = 0;
      local_168.msg_name = (void *)0x0;
      local_168.msg_namelen = 0;
      local_168._12_4_ = 0;
      local_168.msg_iov = &local_178;
      local_168.msg_iovlen = 1;
      local_168._28_4_ = 0;
      local_178.iov_len = param_3;
      if (param_4 == '\0') {
        lVar4 = _sendmsg(*(int *)(param_1 + 0xc),&local_168,0);
      }
      else {
        lVar4 = _recvmsg(*(int *)(param_1 + 0xc),&local_168,0);
      }
      if (lVar4 == -1) {
        piVar3 = ___error();
        if (*piVar3 != 4) {
LAB_100a64b1a:
          piVar3 = ___error();
          if (*piVar3 == 0x20) {
            return false;
          }
          if (DAT_10230ffd0 < 1) {
            return false;
          }
          piVar3 = ___error();
          FUN_100df99c0("","IpcServer",1,"%s() failed, err=%d",pcVar7,*piVar3);
          return false;
        }
      }
      else {
        if (lVar4 < 0) goto LAB_100a64b1a;
        if (lVar4 == 0) {
          return false;
        }
        local_180 = (void *)((long)local_180 + lVar4);
        param_3 = param_3 - lVar4;
      }
    } while (*(char *)(param_1 + 0x28) != '\0');
  }
LAB_100a64ace:
  return param_3 == 0;
}

