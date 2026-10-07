
char * FUN_1007130d0(char *param_1,byte *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  char local_af [2];
  undefined1 local_ad;
  uint local_ac;
  undefined1 local_a8 [48];
  byte local_78 [64];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  local_38 = lVar1;
  FUN_10088a650(local_a8);
  uVar3 = FUN_100891710();
  iVar2 = FUN_10088a6e0(local_a8,uVar3);
  if (iVar2 == 0) {
    puVar4 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar4 = "EVP_DigestInit() failed";
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,PTR_typeinfo_100ba22a8,0);
  }
  if ((*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
    uVar5 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
    pbVar6 = *(byte **)(param_2 + 0x10);
  }
  iVar2 = FUN_10088a910(local_a8,pbVar6,uVar5);
  if (iVar2 == 0) {
    puVar4 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar4 = "EVP_DigestUpdate() failed";
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,PTR_typeinfo_100ba22a8,0);
  }
  local_ac = 0;
  iVar2 = FUN_10088a920(local_a8,local_78,&local_ac);
  if (iVar2 == 0) {
    puVar4 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar4 = "EVP_DigestFinal failed";
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,PTR_typeinfo_100ba22a8,0);
  }
  if (local_ac != 0) {
    lVar7 = 0;
    do {
      _snprintf(local_af,3,"%02x",(ulong)local_78[lVar7]);
      local_ad = 0;
      std::string::append(param_1);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < local_ac);
  }
  FUN_10088aa50(local_a8);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

