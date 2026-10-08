
undefined4 FUN_100bf7790(char *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_68 [2];
  undefined1 *local_60;
  undefined1 local_58 [8];
  char *local_50;
  
  iVar7 = 0;
  iVar6 = 0x391;
  local_50 = param_1;
  if (DAT_1023160d8 == 0) {
    iVar2 = 0;
    puVar5 = (uint *)0x0;
  }
  else {
    local_68[0] = 2;
    local_60 = local_58;
    lVar3 = FUN_100c60fc0(DAT_1023160d8,local_68);
    iVar7 = 0;
    iVar2 = 0;
    puVar5 = (uint *)0x0;
    if (lVar3 != 0) {
      return *(undefined4 *)(*(long *)(lVar3 + 8) + 0x10);
    }
  }
  do {
    iVar1 = iVar6;
    if (iVar1 <= iVar7) {
      if (iVar2 != 0) {
        return 0;
      }
      break;
    }
    iVar6 = (iVar1 + iVar7) / 2;
    puVar5 = (uint *)(&DAT_101da3770 + (long)iVar6 * 4);
    iVar2 = _strcmp(local_50,(&PTR_s_undefined_102242b88)
                             [(ulong)*(uint *)(&DAT_101da3770 + (long)iVar6 * 4) * 5]);
  } while ((iVar2 < 0) || (iVar7 = iVar6 + 1, iVar6 = iVar1, 0 < iVar2));
  uVar4 = 0;
  if (puVar5 != (uint *)0x0) {
    uVar4 = *(undefined4 *)(&DAT_102242b90 + (ulong)*puVar5 * 0x28);
  }
  return uVar4;
}

