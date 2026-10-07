
void FUN_100367ef0(long param_1,undefined4 param_2,uint param_3,int param_4,int param_5,long param_6
                  ,long param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = *(uint *)(param_7 + 0x238);
  iVar2 = *(int *)(param_6 + 0x24);
  if (param_4 < 0) {
    iVar1 = (int)((long)param_4 % (long)iVar2);
    uVar6 = (ulong)(uint)(iVar1 + iVar2);
    if (iVar1 == 0) {
      uVar6 = (long)param_4 % (long)iVar2 & 0xffffffff;
    }
    iVar2 = ((int)uVar6 - param_4) / iVar2;
  }
  else {
    uVar6 = (ulong)(uint)(param_4 + *(int *)(param_6 + 0x20));
    iVar2 = 0;
  }
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    break;
  case 2:
    param_3 = param_3 * 2;
    *(undefined4 *)(param_1 + 0x21c) = 1;
    break;
  case 3:
    param_3 = param_3 + 1;
    *(undefined4 *)(param_1 + 0x21c) = 3;
    break;
  case 4:
    param_3 = param_3 * 3;
    *(undefined4 *)(param_1 + 0x21c) = 4;
    break;
  case 5:
    param_3 = param_3 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 5;
    break;
  case 6:
    param_3 = param_3 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 6;
    break;
  default:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    param_3 = 0;
  }
  *(uint *)(param_1 + 0x218) = param_3;
  FUN_100367000(param_1,param_7,param_8,uVar6);
  if (*(char *)(DAT_1011c8478 + 0x32) != '\0') {
    FUN_100366800(param_1,param_2,param_6);
  }
  FUN_1003669b0(param_1);
  lVar7 = *(long *)(param_7 + 0x230);
  iVar1 = **(int **)(lVar7 + 0x58);
  if (*(int *)(param_1 + 0x238) != iVar1) {
    *(int *)(param_1 + 0x238) = iVar1;
    (*DAT_1011c5708)(0x8893);
  }
  uVar3 = (uint)(*(int *)(lVar7 + 0xc) - param_5) / uVar5;
  if (*(uint *)(param_1 + 0x218) < uVar3) {
    uVar3 = *(uint *)(param_1 + 0x218);
  }
  *(uint *)(param_1 + 0x218) = uVar3;
  if (iVar2 == 0) {
    uVar4 = FUN_100367dd0(param_1,uVar5,param_5);
    lVar7 = (long)param_5;
  }
  else {
    uVar4 = FUN_100367c10(param_1,uVar3,iVar2,uVar5,param_5);
    lVar7 = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x218);
  if (uVar5 != param_3) {
    switch(*(undefined4 *)(param_1 + 0x21c)) {
    case 0:
      break;
    case 1:
    case 10:
      uVar5 = uVar5 & 0xfffffffe;
      break;
    default:
      uVar5 = 0;
      break;
    case 3:
    case 0xb:
      if (uVar5 < 2) {
        uVar5 = 0;
      }
      break;
    case 4:
    case 0xc:
      uVar5 = (uVar5 / 3) * 3;
      break;
    case 5:
    case 6:
    case 0xd:
      if (uVar5 < 3) {
        uVar5 = 0;
      }
    }
    *(uint *)(param_1 + 0x218) = uVar5;
    param_3 = uVar5;
  }
  if (param_3 != 0) {
    FUN_10035c310(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001003680bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5c18)(*(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x218),uVar4,lVar7);
    return;
  }
  return;
}

