
ulong FUN_100282e40(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)param_1[0x1a] == '\x7f') {
                    /* WARNING: Could not recover jumptable at 0x000100282e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0x52000,param_1[0x1f],(char)param_1[0x20],0);
    return uVar2;
  }
  uVar1 = FUN_1004108c0((char *)param_1[0x1a],(char)param_1[0x1b],0,0,param_1[0x1f],
                        (char)param_1[0x20],param_1[0x59]);
  if (-1 < (int)uVar1) {
    FUN_100283210(param_1 + 0x29,param_1[0x26],13000000);
  }
  return (ulong)(uVar1 >> 0x1e & 2);
}

