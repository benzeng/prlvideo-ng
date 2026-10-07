
void FUN_1003f2ed0(long *param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar2 = (char *)param_1[0xb];
  if (*pcVar2 == -0x47) {
    uVar1 = ((byte)pcVar2[5] - 0x96) + (uint)(byte)pcVar2[4] * 0x4b + (uint)(byte)pcVar2[3] * 0x1194
    ;
    uVar3 = ((byte)pcVar2[8] - 0x96) + (uint)(byte)pcVar2[7] * 0x4b + (uint)(byte)pcVar2[6] * 0x1194
    ;
    uVar4 = uVar3 - uVar1;
    if (uVar3 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001003f2f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  else {
    uVar4 = *(uint *)(param_1[0xb] + 5);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
  }
  if (uVar4 != 0) {
    FUN_1003e3180();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003f2f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))();
  return;
}

