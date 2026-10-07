
ulong FUN_10080f090(long *param_1,undefined4 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)param_3;
  switch(param_2) {
  case 0x10:
    param_1[0x29] = param_4;
    return 1;
  default:
                    /* WARNING: Could not recover jumptable at 0x00010080f0c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x88))();
    return uVar2;
  case 0x14:
    uVar2 = FUN_100885f80(param_1[4]);
    return uVar2;
  case 0x15:
    return (long)(int)param_1[0xd];
  case 0x16:
    return (long)(int)param_1[0xe];
  case 0x17:
    return (long)*(int *)((long)param_1 + 0x6c);
  case 0x18:
    return (long)*(int *)((long)param_1 + 0x74);
  case 0x19:
    return (long)*(int *)((long)param_1 + 0x7c);
  case 0x1a:
    return (long)(int)param_1[0xf];
  case 0x1b:
    return (long)*(int *)((long)param_1 + 0x8c);
  case 0x1c:
    return (long)(int)param_1[0x12];
  case 0x1d:
    return (long)(int)param_1[0x10];
  case 0x1e:
    return (long)*(int *)((long)param_1 + 0x84);
  case 0x1f:
    return (long)(int)param_1[0x11];
  case 0x20:
    param_3 = param_3 | param_1[0x23];
    break;
  case 0x21:
    param_3 = param_3 | param_1[0x24];
    goto LAB_10080f1bb;
  case 0x28:
    return (long)(int)param_1[0x27];
  case 0x29:
    lVar1 = param_1[0x27];
    *(undefined4 *)(param_1 + 0x27) = uVar3;
    return (long)(int)lVar1;
  case 0x2a:
    uVar2 = param_1[5];
    param_1[5] = param_3;
    return uVar2;
  case 0x2b:
    return param_1[5];
  case 0x2c:
    lVar1 = param_1[8];
    *(undefined4 *)(param_1 + 8) = uVar3;
    return (long)(int)lVar1;
  case 0x2d:
    return (long)(int)param_1[8];
  case 0x32:
    return param_1[0x25];
  case 0x33:
    uVar2 = param_1[0x25];
    param_1[0x25] = param_3;
    return uVar2;
  case 0x34:
    if (0x3e00 < param_3 - 0x200) {
      return 0;
    }
    *(undefined4 *)((long)param_1 + 0x194) = uVar3;
    return 1;
  case 0x4d:
    param_3 = ~param_3 & param_1[0x23];
    break;
  case 0x4e:
    param_3 = ~param_3 & param_1[0x24];
LAB_10080f1bb:
    param_1[0x24] = param_3;
    return param_3;
  }
  param_1[0x23] = param_3;
  return param_3;
}

