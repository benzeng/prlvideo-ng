
void FUN_1003020b0(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar7 = (uint)param_2;
  if (((uVar7 == 0) || ((char)param_3 == '\x01')) ||
     (((uVar7 - 0x400 < 0xd || (*(int *)(param_1 + 0x15a0) != 0)) &&
      (((uVar7 & 0xfffffff0) == 0x8ce0 || (*(int *)(param_1 + 0x15a0) == 0)))))) {
    uVar1 = *(uint *)(param_1 + 0x15a8);
    uVar4 = (ulong)uVar1;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
    if (uVar2 < 0x20) {
      uVar5 = 0x20;
      uVar4 = (ulong)uVar1;
      do {
        uVar5 = uVar5 >> 1;
        uVar4 = (ulong)((uint)uVar4 ^ (uint)uVar4 >> (sbyte)uVar5);
      } while (uVar2 < uVar5);
    }
    for (puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (uVar4 & 0xff) * 8);
        puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
      if (*puVar6 == uVar1) {
        lVar3 = *(long *)(puVar6 + 2);
        if (lVar3 == 0) {
          return;
        }
        if ((((char)param_3 == '\0') && (*(uint *)(lVar3 + 0x248) = uVar7, uVar7 != 0)) &&
           (*(int *)(param_1 + 0x15a0) == 0)) {
          if ((*(char *)(param_1 + 0x38) == '\0') ||
             ((uVar7 - 0x400 < 5 && (param_3 = 0x13, (0x13U >> (uVar7 - 0x400 & 0x1f) & 1) != 0))))
          {
            puVar6 = (uint *)(*(long *)(param_1 + 0x28) + 0x2c);
          }
          else {
            puVar6 = (uint *)(*(long *)(param_1 + 0x28) + 0x30);
          }
          param_2 = (ulong)*puVar6;
        }
        *(int *)(lVar3 + 0x24c) = (int)param_2;
                    /* WARNING: Could not recover jumptable at 0x0001003021a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)DAT_1011c4a88[0xed])(*DAT_1011c4a88,param_2,param_3,(code *)DAT_1011c4a88[0xed]);
        return;
      }
    }
  }
  return;
}

