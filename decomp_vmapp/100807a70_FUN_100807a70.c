
ulong FUN_100807a70(int *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if (iVar4 < 0x49) {
    if (iVar4 == 0x11) {
      uVar1 = FUN_10080c0a0();
      if ((long)param_3 < (long)((ulong)uVar1 - 0x30)) {
        return 0;
      }
      *(int *)(*(long *)(param_1 + 0x22) + 0x288) = (int)param_3;
      return param_3;
    }
  }
  else {
    if (iVar4 < 0x4a) {
      lVar2 = FUN_100807bc0(param_1,param_4);
      uVar1 = (uint)(lVar2 != 0);
      goto LAB_100807bab;
    }
    if (iVar4 < 0x4b) {
      uVar1 = FUN_100807c90(param_1);
      goto LAB_100807bab;
    }
    if (iVar4 < 0x78) {
      if (iVar4 == 0x4b) {
        FUN_10080d4e0(param_1);
        FUN_10080ef10(param_1,0x20,0x2000,0);
        *(undefined4 *)(*(long *)(param_1 + 0x22) + 0x280) = 1;
        uVar1 = FUN_10080eb10(param_1);
        if (0 < (int)uVar1) {
          uVar3 = FUN_10080e280(param_1);
          FUN_10087db60(uVar3,0x2e,0,param_4);
          uVar1 = 1;
        }
        goto LAB_100807bab;
      }
      if (iVar4 == 0x77) {
        return (ulong)(*param_1 == 0xfeff);
      }
    }
    else {
      if (iVar4 == 0x78) {
        uVar1 = FUN_10080c0a0();
        if ((long)param_3 < (long)(ulong)uVar1) {
          return 0;
        }
        *(int *)(*(long *)(param_1 + 0x22) + 0x284) = (int)param_3;
        return 1;
      }
      if (iVar4 == 0x79) {
        uVar1 = FUN_10080c0a0();
        return (ulong)uVar1;
      }
    }
  }
  uVar1 = FUN_1007f7d90(param_1,param_2,param_3,param_4);
LAB_100807bab:
  return (long)(int)uVar1;
}

