
undefined1 FUN_1009d6080(long param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined1 local_138 [112];
  long local_c8;
  int local_c0;
  undefined4 local_b8 [2];
  uint local_b0 [30];
  int local_38;
  
  local_c8 = param_1 + 8;
  local_c0 = *(int *)(param_1 + 0x10);
  ___bzero(local_b8,0x84);
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 == 0) {
    uVar2 = __dyld_image_count();
    uVar8 = (ulong)uVar2;
  }
  else {
    uVar8 = (ulong)(*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 8)) >> 3;
  }
  uVar2 = (uint)uVar8;
  local_38 = 3;
  cVar1 = FUN_1009cf2f0(&local_c8,(uVar8 & 0xffffffff) * 0x6c + 8);
  if (cVar1 == '\0') {
    uVar5 = 0;
    goto LAB_1009d6224;
  }
  *param_2 = 4;
  *(ulong *)(param_2 + 1) = CONCAT44(local_c0,local_b8[0]);
  local_b0[0] = uVar2;
  if (*(long *)(param_1 + 0x48) == 0) {
    iVar7 = __dyld_image_count();
    if (0 < iVar7) {
      uVar3 = 0;
      do {
        lVar4 = __dyld_get_image_header(uVar3);
        if (*(int *)(lVar4 + 0xc) == 2) goto LAB_1009d6179;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar7);
    }
LAB_1009d6176:
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1009d19c0();
    if ((int)uVar3 < 0) goto LAB_1009d6176;
  }
LAB_1009d6179:
  cVar1 = FUN_1009d7220(param_1,uVar3,local_138);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_1009cf3f0(local_c8,local_c0 + 8,local_138,0x6c);
    uVar5 = 1;
    if (uVar2 != 0) {
      iVar7 = 1;
      uVar6 = 0;
      do {
        if (uVar3 != uVar6) {
          cVar1 = FUN_1009d7220(param_1,uVar6,local_138);
          if (cVar1 == '\0') {
            uVar5 = 0;
            goto LAB_1009d6224;
          }
          FUN_1009cf3f0(local_c8,iVar7 * 0x6c + 8 + local_c0,local_138,0x6c);
          iVar7 = iVar7 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
      uVar5 = 1;
    }
  }
LAB_1009d6224:
  if (local_38 != 2) {
    FUN_1009cf3f0(local_c8,local_c0,local_b0,8);
  }
  return uVar5;
}

