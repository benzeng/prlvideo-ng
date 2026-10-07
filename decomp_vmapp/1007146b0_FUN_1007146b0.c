
undefined8 FUN_1007146b0(undefined8 *param_1,char *param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  int local_1bc;
  char local_1b8 [88];
  long local_160;
  undefined1 local_158 [120];
  undefined1 local_e0 [168];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_1bc = 0;
  local_38 = lVar8;
  if (((param_1 == (undefined8 *)0x0) || (param_2 == (char *)0x0)) || (param_3 == (char *)0x0)) {
    uVar3 = 0xfffffffd;
  }
  else {
    FUN_10088ae60(local_e0);
    uVar3 = FUN_10088cc40();
    FUN_10088bc00(local_e0,uVar3,0,&DAT_10116db10,&DAT_10116db20);
    local_1b8[0x40] = '\0';
    local_1b8[0x41] = '\0';
    local_1b8[0x42] = '\0';
    local_1b8[0x43] = '\0';
    local_1b8[0x44] = '\0';
    local_1b8[0x45] = '\0';
    local_1b8[0x46] = '\0';
    local_1b8[0x47] = '\0';
    local_1b8[0x48] = '\0';
    local_1b8[0x49] = '\0';
    local_1b8[0x4a] = '\0';
    local_1b8[0x4b] = '\0';
    local_1b8[0x4c] = '\0';
    local_1b8[0x4d] = '\0';
    local_1b8[0x4e] = '\0';
    local_1b8[0x4f] = '\0';
    local_1b8[0x30] = '\0';
    local_1b8[0x31] = '\0';
    local_1b8[0x32] = '\0';
    local_1b8[0x33] = '\0';
    local_1b8[0x34] = '\0';
    local_1b8[0x35] = '\0';
    local_1b8[0x36] = '\0';
    local_1b8[0x37] = '\0';
    local_1b8[0x38] = '\0';
    local_1b8[0x39] = '\0';
    local_1b8[0x3a] = '\0';
    local_1b8[0x3b] = '\0';
    local_1b8[0x3c] = '\0';
    local_1b8[0x3d] = '\0';
    local_1b8[0x3e] = '\0';
    local_1b8[0x3f] = '\0';
    local_1b8[0x20] = '\0';
    local_1b8[0x21] = '\0';
    local_1b8[0x22] = '\0';
    local_1b8[0x23] = '\0';
    local_1b8[0x24] = '\0';
    local_1b8[0x25] = '\0';
    local_1b8[0x26] = '\0';
    local_1b8[0x27] = '\0';
    local_1b8[0x28] = '\0';
    local_1b8[0x29] = '\0';
    local_1b8[0x2a] = '\0';
    local_1b8[0x2b] = '\0';
    local_1b8[0x2c] = '\0';
    local_1b8[0x2d] = '\0';
    local_1b8[0x2e] = '\0';
    local_1b8[0x2f] = '\0';
    local_1b8[0x10] = '\0';
    local_1b8[0x11] = '\0';
    local_1b8[0x12] = '\0';
    local_1b8[0x13] = '\0';
    local_1b8[0x14] = '\0';
    local_1b8[0x15] = '\0';
    local_1b8[0x16] = '\0';
    local_1b8[0x17] = '\0';
    local_1b8[0x18] = '\0';
    local_1b8[0x19] = '\0';
    local_1b8[0x1a] = '\0';
    local_1b8[0x1b] = '\0';
    local_1b8[0x1c] = '\0';
    local_1b8[0x1d] = '\0';
    local_1b8[0x1e] = '\0';
    local_1b8[0x1f] = '\0';
    local_1b8[0] = '\0';
    local_1b8[1] = '\0';
    local_1b8[2] = '\0';
    local_1b8[3] = '\0';
    local_1b8[4] = '\0';
    local_1b8[5] = '\0';
    local_1b8[6] = '\0';
    local_1b8[7] = '\0';
    local_1b8[8] = '\0';
    local_1b8[9] = '\0';
    local_1b8[10] = '\0';
    local_1b8[0xb] = '\0';
    local_1b8[0xc] = '\0';
    local_1b8[0xd] = '\0';
    local_1b8[0xe] = '\0';
    local_1b8[0xf] = '\0';
    local_1b8[0x50] = 0;
    _strncpy(local_1b8,param_2,0x11);
    _strncpy(local_1b8 + 0x11,param_3,0x40);
    local_160 = 0;
    FUN_10088b440(local_e0,local_158,&local_1bc,local_1b8,0x51);
    local_160 = local_160 + local_1bc;
    FUN_10088b7e0(local_e0,local_158 + local_1bc,&local_1bc);
    local_160 = local_160 + local_1bc;
    FUN_10088b320(local_e0);
    _fseek((FILE *)*param_1,0,2);
    sVar4 = _fwrite(&local_160,0x80,1,(FILE *)*param_1);
    if (sVar4 != 1) {
      uVar3 = FUN_10071e690(0xfffffffc,0);
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_1007148d4;
    }
    iVar2 = _fileno((FILE *)*param_1);
    _fsync(iVar2);
    plVar5 = _malloc(0x20);
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (plVar5 != (long *)0x0) {
      pcVar6 = _strdup(local_1b8);
      plVar5[2] = (long)pcVar6;
      pcVar7 = _strdup(local_1b8 + 0x11);
      plVar5[3] = (long)pcVar7;
      if ((pcVar7 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
        plVar5[1] = (long)(param_1 + 1);
        lVar1 = param_1[1];
        *plVar5 = lVar1;
        *(long **)(lVar1 + 8) = plVar5;
        param_1[1] = plVar5;
        param_1[3] = plVar5;
        uVar3 = 0;
        goto LAB_1007148d4;
      }
      FUN_100713fa0(plVar5);
    }
    uVar3 = 0xfffffffe;
  }
  uVar3 = FUN_10071e690(uVar3,0);
LAB_1007148d4:
  if (lVar8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

