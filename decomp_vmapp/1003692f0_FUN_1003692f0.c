
void FUN_1003692f0(long param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_7 + 0x238);
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    break;
  case 2:
    param_4 = param_4 * 2;
    *(undefined4 *)(param_1 + 0x21c) = 1;
    break;
  case 3:
    param_4 = param_4 + 1;
    *(undefined4 *)(param_1 + 0x21c) = 3;
    break;
  case 4:
    param_4 = param_4 * 3;
    *(undefined4 *)(param_1 + 0x21c) = 4;
    break;
  case 5:
    param_4 = param_4 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 5;
    break;
  case 6:
    param_4 = param_4 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 6;
    break;
  default:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    param_4 = 0;
  }
  *(int *)(param_1 + 0x218) = param_4;
  FUN_1003662d0(param_1,param_6,param_7,param_8);
  FUN_1003669b0(param_1);
  lVar3 = *(long *)(param_7 + 0x230);
  iVar2 = **(int **)(lVar3 + 0x58);
  if (*(int *)(param_1 + 0x238) != iVar2) {
    *(int *)(param_1 + 0x238) = iVar2;
    (*DAT_1011c5708)(0x8893);
  }
  uVar4 = *(uint *)(lVar3 + 0xc) / uVar1 - param_3;
  if (*(uint *)(param_1 + 0x218) < uVar4) {
    uVar4 = *(uint *)(param_1 + 0x218);
  }
  *(uint *)(param_1 + 0x218) = uVar4;
  uVar5 = 0x1403;
  if (uVar1 != 2) {
    if (uVar1 != 4) {
      *(undefined4 *)(param_1 + 0x218) = 0;
      return;
    }
    uVar5 = 0x1405;
  }
  if (uVar4 == 0) {
    return;
  }
  FUN_10035c310(*(undefined8 *)(param_1 + 8));
  if (1 < *(uint *)(param_1 + 0x210)) {
                    /* WARNING: Could not recover jumptable at 0x0001003693fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5c30)(*(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x218),uVar5,
                     uVar1 * param_3,*(uint *)(param_1 + 0x210),param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100369462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5c20)(*(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x218),uVar5,
                   uVar1 * param_3,param_5);
  return;
}

