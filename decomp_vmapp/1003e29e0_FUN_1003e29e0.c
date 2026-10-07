
void FUN_1003e29e0(long *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1[0xb] + 7);
  if ((*(byte *)(param_1[0xb] + 1) & 1) != 0) {
    if ((int)param_1[0xe] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e2a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x57311,param_1[0xc]);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001003e2a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x268))(param_1,0x37302,param_1[0xc]);
    return;
  }
  if (CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e2a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x268))(param_1,0x52600,param_1[0xc]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e2a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))();
  return;
}

