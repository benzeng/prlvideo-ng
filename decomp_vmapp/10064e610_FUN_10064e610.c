
undefined4 FUN_10064e610(int param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  
  piVar1 = &DAT_100b48ee0;
  uVar2 = 0;
  while (((piVar1[-4] != param_1 || ((uVar3 = uVar2, uVar2 != 0x49 && (piVar1[-3] != param_2)))) &&
         ((piVar1[-1] != param_1 || ((uVar3 = uVar2 + 1, uVar2 != 0x48 && (*piVar1 != param_2)))))))
  {
    uVar2 = uVar2 + 2;
    piVar1 = piVar1 + 6;
    if (0x53 < uVar2) {
      return 0;
    }
  }
  return *(undefined4 *)(&UNK_100b48ed8 + uVar3 * 0xc);
}

