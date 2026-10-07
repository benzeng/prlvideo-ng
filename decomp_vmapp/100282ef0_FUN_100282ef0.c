
undefined8 FUN_100282ef0(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  pcVar1 = (char *)param_1[0x1a];
  if (*pcVar1 == -0x6f) {
    uVar3 = *(uint *)(pcVar1 + 10);
    uVar2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = (uint)*(undefined8 *)(param_1[0x1a] + 2);
    uVar4 = (uint)((ulong)*(undefined8 *)(param_1[0x1a] + 2) >> 0x20);
    uVar5 = CONCAT44(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                     ,uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                      uVar4 << 0x18);
  }
  else {
    uVar2 = (uint)CONCAT11((char)*(undefined2 *)(pcVar1 + 7),
                           (char)((ushort)*(undefined2 *)(pcVar1 + 7) >> 8));
    uVar3 = *(uint *)(param_1[0x1a] + 2);
    uVar5 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
    ;
  }
  if ((ulong)param_1[0x59] < uVar2 + uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100282f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*param_1 + 0x58))(param_1,0x52100,param_1[0x1f],(char)param_1[0x20],0);
    return uVar6;
  }
  FUN_100283210(param_1 + 0x29,param_1[0x26],13000000);
  return 0;
}

