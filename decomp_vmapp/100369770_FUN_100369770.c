
void FUN_100369770(long param_1,undefined4 param_2,int param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
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
  iVar1 = *(int *)(param_4 + 0xbb64);
  param_3 = param_3 * iVar1;
  (*DAT_1011c5770)(*(undefined4 *)(param_1 + 0x234));
  (*DAT_1011c5708)(0x8892,*(undefined4 *)(param_1 + 600));
  (*DAT_1011c57d8)(0x8892,param_3,param_6,0x88e0);
  FUN_100367930(param_1,*(undefined4 *)(param_1 + 600),param_5,0,iVar1,param_3,param_7);
  FUN_1003669b0(param_1);
  if (*(int *)(param_1 + 0x218) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100369848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5be8)(*(undefined4 *)(param_1 + 0x21c),0);
  return;
}

