
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_100c5e5c0(undefined8 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  byte bVar11;
  char *pcVar12;
  socklen_t sVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  bool bVar17;
  int local_cc;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  ushort local_7e;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  sockaddr local_78;
  undefined8 local_68;
  undefined4 local_60;
  sockaddr local_58;
  undefined8 local_48;
  undefined4 local_40;
  
  pcVar8 = (char *)FUN_100c58250();
  pcVar9 = (char *)0x0;
  pcVar12 = pcVar8;
  if (pcVar8 == (char *)0x0) {
    return -1;
  }
  do {
    cVar1 = *pcVar12;
    pcVar15 = pcVar12;
    if (cVar1 != ':') {
      if (cVar1 == '\0') goto LAB_100c5e625;
      pcVar15 = pcVar9;
      if (cVar1 == '/') break;
    }
    pcVar12 = pcVar12 + 1;
    pcVar9 = pcVar15;
  } while( true );
  *pcVar12 = '\0';
LAB_100c5e625:
  pcVar12 = (char *)0x0;
  pcVar15 = pcVar8;
  if (pcVar9 != (char *)0x0) {
    *pcVar9 = '\0';
    pcVar15 = pcVar9 + 1;
    pcVar12 = pcVar8;
  }
  pcVar9 = pcVar12;
  if ((DAT_102316340 == (code *)0x0) &&
     ((DAT_102316340 = (code *)FUN_100c54800("getaddrinfo"), DAT_102316340 == (code *)0x0 ||
      (DAT_102316348 = (code *)FUN_100c54800("freeaddrinfo"), DAT_102316348 == (code *)0x0)))) {
    DAT_102316340 = (code *)0xffffffffffffffff;
LAB_100c5e776:
    iVar4 = FUN_100c5e320(pcVar15,&local_7e);
    local_cc = 0;
    iVar5 = -1;
    if (iVar4 == 0) goto LAB_100c5ec4b;
    local_58.sa_data[6] = '\0';
    local_58.sa_data[7] = '\0';
    local_58.sa_data[8] = '\0';
    local_58.sa_data[9] = '\0';
    local_58.sa_data[10] = '\0';
    local_58.sa_data[0xb] = '\0';
    local_58.sa_data[0xc] = '\0';
    local_58.sa_data[0xd] = '\0';
    local_40 = 0;
    local_48 = 0;
    uVar3 = local_7e << 8 | local_7e >> 8;
    local_58.sa_data[0] = (char)uVar3;
    local_58.sa_data[1] = (char)(uVar3 >> 8);
    local_58.sa_len = '\0';
    local_58.sa_family = '\x02';
    local_58.sa_data[2] = '\0';
    local_58.sa_data[3] = '\0';
    local_58.sa_data[4] = '\0';
    local_58.sa_data[5] = '\0';
    if ((pcVar9 == (char *)0x0) || (iVar4 = _strcmp(pcVar9,"*"), iVar4 == 0)) {
      local_58._0_8_ = local_58._0_8_ & 0xffffffff;
    }
    else {
      iVar4 = FUN_100c5e0e0(pcVar9,&local_7c);
      uVar14 = local_58._0_8_;
      if (iVar4 == 0) goto LAB_100c5ec4b;
      local_58.sa_data[3] = local_7b;
      local_58.sa_data[2] = local_7c;
      local_58.sa_data[4] = local_7a;
      local_58.sa_data[5] = local_79;
      local_58._0_4_ = SUB84(uVar14,0);
    }
    sVar13 = 0x10;
  }
  else {
    pcVar2 = DAT_102316340;
    if (DAT_102316340 == (code *)0xffffffffffffffff) goto LAB_100c5e776;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    local_b8 = 1;
    pcVar9 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      pcVar9 = _strchr(pcVar12,0x3a);
      if (pcVar9 == (char *)0x0) {
        pcVar9 = pcVar12;
        if ((*pcVar12 == '*') && (pcVar12[1] == '\0')) {
          local_b8 = CONCAT44(2,(undefined4)local_b8);
          pcVar9 = (char *)0x0;
        }
      }
      else {
        pcVar9 = (char *)0x0;
        if (pcVar12[1] != '\0') {
          pcVar9 = pcVar12;
        }
        local_b8 = CONCAT44(0x1e,(undefined4)local_b8);
      }
    }
    iVar4 = (*pcVar2)(pcVar9,pcVar15,&local_b8,&local_88);
    if (iVar4 != 0) goto LAB_100c5e776;
    sVar13 = 0x1c;
    if (*(uint *)(local_88 + 0x10) < 0x1d) {
      sVar13 = *(uint *)(local_88 + 0x10);
    }
    ___memcpy_chk(&local_58,*(undefined8 *)(local_88 + 0x20),(long)(int)sVar13,0x1c);
    (*DAT_102316348)(local_88);
  }
  iVar5 = _socket((uint)local_58.sa_family,1,6);
  local_cc = 0;
  if (iVar5 != -1) {
    local_cc = 0;
    if (pcVar9 == (char *)0x0) {
      do {
        if (param_2 == 2) {
          local_bc = 1;
          local_cc = _setsockopt(iVar5,0xffff,4,&local_bc,4);
          param_2 = 0;
        }
        iVar4 = _bind(iVar5,&local_58,sVar13);
        if (iVar4 != -1) goto LAB_100c5ec2f;
        piVar10 = ___error();
        iVar4 = *piVar10;
        if ((param_2 != 1) || (iVar4 != 0x30)) goto LAB_100c5ebcd;
        local_60 = local_40;
        local_68 = local_48;
        local_78.sa_len = local_58.sa_len;
        local_78.sa_family = local_58.sa_family;
        local_78.sa_data[0] = local_58.sa_data[0];
        local_78.sa_data[1] = local_58.sa_data[1];
        local_78.sa_data[2] = local_58.sa_data[2];
        local_78.sa_data[3] = local_58.sa_data[3];
        local_78.sa_data[4] = local_58.sa_data[4];
        local_78.sa_data[5] = local_58.sa_data[5];
        uVar14 = local_78._0_8_;
        local_78.sa_data[6] = local_58.sa_data[6];
        local_78.sa_data[7] = local_58.sa_data[7];
        local_78.sa_data[8] = local_58.sa_data[8];
        local_78.sa_data[9] = local_58.sa_data[9];
        local_78.sa_data[10] = local_58.sa_data[10];
        local_78.sa_data[0xb] = local_58.sa_data[0xb];
        local_78.sa_data[0xc] = local_58.sa_data[0xc];
        local_78.sa_data[0xd] = local_58.sa_data[0xd];
        local_78.sa_family = local_58.sa_family;
        local_78._0_8_ = uVar14;
        if (local_78.sa_family == '\x1e') {
          local_78.sa_data[6] = '\0';
          local_78.sa_data[7] = '\0';
          local_78.sa_data[8] = '\0';
          local_78.sa_data[9] = '\0';
          local_78.sa_data[10] = '\0';
          local_78.sa_data[0xb] = '\0';
          local_78.sa_data[0xc] = '\0';
          local_78.sa_data[0xd] = '\0';
          local_68 = 0x100000000000000;
          iVar4 = 0x1e;
        }
        else {
          bVar17 = local_78.sa_family != '\x02';
          if (bVar17) goto LAB_100c5ec4b;
          local_78._0_4_ = local_58._0_4_;
          local_78.sa_data[2] = '\x7f';
          local_78.sa_data[3] = '\0';
          local_78.sa_data[4] = '\0';
          local_78.sa_data[5] = '\x01';
          iVar4 = 2;
        }
        iVar6 = _socket(iVar4,1,6);
        iVar4 = 0x30;
        if (iVar6 == -1) goto LAB_100c5ebcd;
        iVar7 = _connect(iVar6,&local_78,sVar13);
        _close(iVar6);
        if (iVar7 != -1) goto LAB_100c5ebcd;
        _close(iVar5);
        iVar5 = _socket((uint)local_58.sa_family,1,6);
        param_2 = 2;
      } while (iVar5 != -1);
    }
    else {
      do {
        if (param_2 == 2) {
          local_bc = 1;
          local_cc = _setsockopt(iVar5,0xffff,4,&local_bc,4);
          param_2 = 0;
        }
        iVar4 = _bind(iVar5,&local_58,sVar13);
        if (iVar4 != -1) goto LAB_100c5ec2f;
        piVar10 = ___error();
        iVar4 = *piVar10;
        if ((param_2 != 1) || (iVar4 != 0x30)) goto LAB_100c5ebcd;
        local_60 = local_40;
        local_68 = local_48;
        local_78.sa_len = local_58.sa_len;
        local_78.sa_family = local_58.sa_family;
        local_78.sa_data[0] = local_58.sa_data[0];
        local_78.sa_data[1] = local_58.sa_data[1];
        local_78.sa_data[2] = local_58.sa_data[2];
        local_78.sa_data[3] = local_58.sa_data[3];
        local_78.sa_data[4] = local_58.sa_data[4];
        local_78.sa_data[5] = local_58.sa_data[5];
        local_78.sa_data[6] = local_58.sa_data[6];
        local_78.sa_data[7] = local_58.sa_data[7];
        local_78.sa_data[8] = local_58.sa_data[8];
        local_78.sa_data[9] = local_58.sa_data[9];
        local_78.sa_data[10] = local_58.sa_data[10];
        local_78.sa_data[0xb] = local_58.sa_data[0xb];
        local_78.sa_data[0xc] = local_58.sa_data[0xc];
        local_78.sa_data[0xd] = local_58.sa_data[0xd];
        iVar4 = _strcmp(pcVar9,"*");
        bVar11 = local_78.sa_family;
        if (iVar4 == 0) {
          if (local_78.sa_family == 2) {
            local_78.sa_data[2] = '\x7f';
            local_78.sa_data[3] = '\0';
            local_78.sa_data[4] = '\0';
            local_78.sa_data[5] = '\x01';
            bVar11 = 2;
          }
          else {
            bVar17 = local_78.sa_family != 0x1e;
            if (bVar17) goto LAB_100c5ec4b;
            local_78.sa_data[6] = '\0';
            local_78.sa_data[7] = '\0';
            local_78.sa_data[8] = '\0';
            local_78.sa_data[9] = '\0';
            local_78.sa_data[10] = '\0';
            local_78.sa_data[0xb] = '\0';
            local_78.sa_data[0xc] = '\0';
            local_78.sa_data[0xd] = '\0';
            local_68 = 0x100000000000000;
            bVar11 = 0x1e;
          }
        }
        iVar6 = _socket((uint)bVar11,1,6);
        iVar4 = 0x30;
        if (iVar6 == -1) goto LAB_100c5ebcd;
        iVar7 = _connect(iVar6,&local_78,sVar13);
        _close(iVar6);
        if (iVar7 != -1) goto LAB_100c5ebcd;
        _close(iVar5);
        iVar5 = _socket((uint)local_58.sa_family,1,6);
        param_2 = 2;
      } while (iVar5 != -1);
    }
  }
  piVar10 = ___error();
  FUN_100c62ee0(2,4,*piVar10,"b_sock.c",0x2d4);
  FUN_100c642a0(3,"port=\'",param_1,"\'");
  FUN_100c62ee0(0x20,0x69,0x76,"b_sock.c",0x2d6);
  iVar5 = -1;
  goto LAB_100c5ec4b;
LAB_100c5ec2f:
  iVar4 = _listen(iVar5,0x80);
  if (iVar4 != -1) {
    local_cc = 1;
    goto LAB_100c5ec4b;
  }
  piVar10 = ___error();
  FUN_100c62ee0(2,6,*piVar10,"b_sock.c",0x311);
  FUN_100c642a0(3,"port=\'",param_1,"\'");
  uVar14 = 0x77;
  uVar16 = 0x313;
  goto LAB_100c5ec25;
LAB_100c5ebcd:
  FUN_100c62ee0(2,6,iVar4,"b_sock.c",0x30b);
  FUN_100c642a0(3,"port=\'",param_1,"\'");
  uVar14 = 0x75;
  uVar16 = 0x30d;
LAB_100c5ec25:
  FUN_100c62ee0(0x20,0x69,uVar14,"b_sock.c",uVar16);
LAB_100c5ec4b:
  FUN_100bf3910(pcVar8);
  if (iVar5 == -1) {
    iVar5 = -1;
  }
  else if (local_cc == 0) {
    _close(iVar5);
    iVar5 = -1;
  }
  return iVar5;
}

