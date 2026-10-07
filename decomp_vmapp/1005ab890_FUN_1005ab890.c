
undefined1 FUN_1005ab890(long param_1,long *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar6;
  int local_2c;
  
  uVar6 = (undefined4)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar5 = 1;
  if (*param_2 != 0) {
    local_2c = 0;
    uVar2 = ((ulong)*(uint *)(param_1 + 0xcc) - 1) +
            (ulong)(uint)((int)param_2[7] * *(int *)(param_1 + 200)) + *(long *)(param_1 + 0x10c0);
    cVar4 = FUN_1007080a0(param_1 + 0x28,*param_2,*(int *)(param_1 + 200),&local_2c,
                          uVar2 - uVar2 % (ulong)*(uint *)(param_1 + 0xcc));
    uVar3 = *(uint *)(param_2 + 7);
    if ((cVar4 == '\0') || (local_2c != *(int *)(param_1 + 200))) {
      uVar5 = 0;
      FUN_1008e3970("","vdisk",0,"Unable to write group[%u] (written %u, expected %u), err = %u",
                    uVar3,local_2c,*(int *)(param_1 + 200),
                    CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x3c)));
    }
    else {
      if (*(long *)(param_1 + 0x10b8) == 0) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","isValid()","BlockGroup.cpp"
                      ,0x3ed,"setBit");
      }
      if (*(uint *)(param_1 + 0x10b0) <= uVar3) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                      "BlockGroup.cpp",0x3ee,"setBit");
      }
      puVar1 = (uint *)(*(long *)(param_1 + 0x10b8) + (ulong)(uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
    }
  }
  return uVar5;
}

