
void FUN_1003f36c0(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = param_1[0xb];
  if ((*(byte *)(lVar1 + 1) & 2) != 0) {
    uVar2 = (*(byte *)(lVar1 + 5) - 0x96) +
            (uint)*(byte *)(lVar1 + 4) * 0x4b + (uint)*(byte *)(lVar1 + 3) * 0x1194;
    *(uint *)(param_1[0xb] + 2) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003f36f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))();
  return;
}

