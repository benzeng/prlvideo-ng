
undefined8
FUN_100c82230(long param_1,long *param_2,undefined8 param_3,char *param_4,uint param_5,
             undefined4 param_6,char param_7,char *param_8)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  char local_89;
  char *local_88;
  char *pcStack_80;
  undefined8 local_78;
  char *local_68;
  char local_5b;
  byte local_5a;
  char local_59;
  char *local_58;
  uint local_4c;
  char *local_48;
  char *local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  local_5b = '\0';
  if (param_1 == 0) {
    uVar6 = 0x7d;
    uVar10 = 0x2d4;
    goto LAB_100c8245d;
  }
  if (*param_4 == '\x05') {
    uVar11 = 0xffffffff;
    local_4c = param_5;
  }
  else {
    local_4c = *(uint *)(param_4 + 8);
    uVar11 = param_5;
  }
  if (local_4c == 0xfffffffc) {
    if (-1 < (int)uVar11) {
      uVar6 = 0x7f;
      uVar10 = 0x2e2;
      goto LAB_100c8245d;
    }
    if (param_7 != '\0') {
      uVar6 = 0x7e;
      uVar10 = 0x2e7;
      goto LAB_100c8245d;
    }
    local_68 = (char *)*param_2;
    iVar4 = FUN_100c82740(0,&local_4c,&local_89,0,0,&local_68,param_3,0xffffffff,0,0,param_8);
    if (iVar4 == 0) {
      FUN_100c62ee0(0xd,0x6c,0x3a,"tasn_dec.c",0x2ee);
      return 0;
    }
    if (local_89 != '\0') {
      local_4c = 0xfffffffd;
    }
  }
  if (uVar11 == 0xffffffff) {
    param_6 = 0;
    uVar11 = local_4c;
  }
  local_68 = (char *)*param_2;
  iVar4 = FUN_100c82740(&local_58,0,0,&local_5a,&local_59,&local_68,param_3,uVar11,param_6,
                        (int)param_7,param_8);
  if (iVar4 == -1) {
    return 0xffffffff;
  }
  if (iVar4 == 0) {
    uVar6 = 0x3a;
    uVar10 = 0x2fd;
LAB_100c8245d:
    FUN_100c62ee0(0xd,0x6c,uVar6,"tasn_dec.c",uVar10);
    return 0;
  }
  if (local_4c - 0x10 < 2) {
    if (local_59 == '\0') {
      uVar6 = 0x9c;
      uVar10 = 0x30f;
      goto LAB_100c8245d;
    }
LAB_100c8248b:
    pcVar9 = (char *)*param_2;
    if (local_5a == 0) {
      pcVar5 = local_68 + (long)local_58;
      pcStack_80 = (char *)0x0;
      local_58 = local_68 + ((long)local_58 - (long)pcVar9);
      local_68 = pcVar5;
      goto LAB_100c8269d;
    }
    if (0 < (long)local_58) {
      iVar4 = 1;
      pcVar5 = local_68;
      pcVar8 = local_58;
      bVar2 = local_5a;
      do {
        while (((1 < (long)pcVar8 && (*pcVar5 == '\0')) && (pcVar5[1] == '\0'))) {
          pcVar7 = pcVar5 + 2;
          if (iVar4 == 1) goto LAB_100c82627;
          iVar4 = iVar4 + -1;
          bVar1 = (long)pcVar8 < 3;
          pcVar5 = pcVar7;
          pcVar8 = pcVar8 + -2;
          if (bVar1) goto LAB_100c825a0;
        }
        local_48 = pcVar5;
        bVar3 = FUN_100c8abb0(&local_48,&local_40,local_34,local_38,pcVar8);
        if ((bVar3 & 0x80) == 0) {
          bVar2 = bVar3 & 1;
          if ((bVar3 & 1) != 0) {
            local_40 = pcVar5 + ((long)pcVar8 - (long)local_48);
          }
          bVar1 = false;
          param_8 = local_40;
          pcVar7 = local_48;
        }
        else {
          FUN_100c62ee0(0xd,0x68,0x66,"tasn_dec.c",0x4a5);
          bVar1 = true;
          pcVar7 = pcVar5;
        }
        if (bVar1) {
          uVar6 = 0x3a;
          uVar10 = 0x3fe;
          goto LAB_100c825bc;
        }
        if (bVar2 == 0) {
          pcVar7 = pcVar7 + (long)param_8;
        }
        else {
          iVar4 = iVar4 + 1;
        }
        pcVar8 = pcVar5 + ((long)pcVar8 - (long)pcVar7);
        pcVar5 = pcVar7;
      } while (0 < (long)pcVar8);
      if (iVar4 == 0) {
LAB_100c82627:
        local_58 = pcVar7 + -(long)pcVar9;
        local_68 = pcVar7;
        goto LAB_100c8269d;
      }
    }
LAB_100c825a0:
    uVar6 = 0x89;
    uVar10 = 0x408;
LAB_100c825bc:
    FUN_100c62ee0(0xd,0xbe,uVar6,"tasn_dec.c",uVar10);
    uVar6 = 0;
  }
  else {
    if (local_4c == 0xfffffffd) {
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
      goto LAB_100c8248b;
    }
    if (local_59 == '\0') {
      pcVar9 = local_68;
      local_68 = local_68 + (long)local_58;
    }
    else {
      if ((local_4c < 0xb) && ((0x466U >> (local_4c & 0x1f) & 1) != 0)) {
        uVar6 = 0xda;
        uVar10 = 0x322;
        goto LAB_100c8245d;
      }
      local_88 = (char *)0x0;
      pcStack_80 = (char *)0x0;
      local_78 = 0;
      uVar6 = 0;
      iVar4 = FUN_100c83030(&local_88,&local_68,local_58,(int)(char)local_5a,0);
      local_58 = local_88;
      if (iVar4 == 0) {
        local_5b = '\x01';
        goto LAB_100c826de;
      }
      iVar4 = FUN_100c58060(&local_88,local_88 + 1);
      if (iVar4 == 0) {
        uVar6 = 0x41;
        uVar10 = 0x335;
        goto LAB_100c8245d;
      }
      pcStack_80[(long)local_58] = '\0';
      local_5b = '\x01';
      pcVar9 = pcStack_80;
    }
LAB_100c8269d:
    iVar4 = FUN_100c82950(param_1,pcVar9,(ulong)local_58 & 0xffffffff,local_4c,&local_5b,param_4);
    uVar6 = 0;
    if (iVar4 != 0) {
      *param_2 = (long)local_68;
      uVar6 = 1;
    }
  }
  if (local_5b == '\0') {
    return uVar6;
  }
LAB_100c826de:
  if (pcStack_80 == (char *)0x0) {
    return uVar6;
  }
  FUN_100bf3910();
  return uVar6;
}

