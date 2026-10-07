
void FUN_100369900(long param_1,undefined4 param_2,int param_3,int param_4,int param_5,long param_6,
                  long param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(param_7 + 0x238);
  iVar2 = *(int *)(param_6 + 0x24);
  iVar6 = param_4 % iVar2 + iVar2;
  if (param_4 % iVar2 == 0) {
    iVar6 = 0;
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
  *(int *)(param_1 + 0x218) = param_3;
  FUN_100367000(param_1,param_7,param_8);
  FUN_1003669b0(param_1);
  lVar4 = *(long *)(param_7 + 0x230);
  iVar3 = **(int **)(lVar4 + 0x58);
  if (*(int *)(param_1 + 0x238) != iVar3) {
    *(int *)(param_1 + 0x238) = iVar3;
    (*DAT_1011c5708)(0x8893);
  }
  uVar5 = (uint)(*(int *)(lVar4 + 0xc) - param_5) / uVar1;
  if (*(uint *)(param_1 + 0x218) < uVar5) {
    uVar5 = *(uint *)(param_1 + 0x218);
  }
  *(uint *)(param_1 + 0x218) = uVar5;
  uVar7 = 0x1403;
  if (uVar1 != 2) {
    if (uVar1 != 4) {
      *(undefined4 *)(param_1 + 0x218) = 0;
      return;
    }
    uVar7 = 0x1405;
  }
  if (uVar5 == 0) {
    return;
  }
  FUN_10035c310(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000100369a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5c20)(*(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x218),uVar7,
                   (long)param_5,(param_4 - iVar6) / iVar2);
  return;
}

