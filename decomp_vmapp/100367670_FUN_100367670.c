
void FUN_100367670(long param_1,undefined4 param_2,int param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
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
  uVar2 = 0;
  FUN_100367930(param_1,0,param_5,0,*(int *)(param_4 + 0xbb64),param_3 * *(int *)(param_4 + 0xbb64),
                param_7);
  if (*(char *)(DAT_1011c8478 + 0x32) != '\0') {
    param_6 = FUN_100367320(param_1,param_2,param_4,param_6);
  }
  (*DAT_1011c5770)(0);
  uVar1 = *(uint *)(param_1 + 0x220);
  (*DAT_1011c5708)(0x8892,0);
  for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)uVar2 * 0x20;
      (*DAT_1011c72b0)(uVar2,*(undefined4 *)(param_1 + 0x20 + lVar3),
                       *(undefined4 *)(param_1 + 0x1c + lVar3),
                       *(undefined1 *)(param_1 + 0x24 + lVar3),
                       *(undefined4 *)(param_1 + 0x18 + lVar3),
                       *(int *)(param_1 + 0x14 + lVar3) + param_6);
      (*DAT_1011c7200)(uVar2,0);
      (*DAT_1011c5c90)(uVar2);
      *(undefined8 *)(param_1 + 0x28 + lVar3) = 0;
      *(undefined8 *)(param_1 + 0x20 + lVar3) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar3) = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar3) = 0;
    }
    uVar2 = uVar2 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x230);
  if (uVar2 != 0) {
    iVar4 = 0;
    do {
      if ((uVar2 & 1) != 0) {
        (*DAT_1011c7180)(0,0,0,DAT_100b39678,iVar4);
      }
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x228);
  if (uVar2 != 0) {
    uVar1 = 0;
    do {
      if ((uVar2 & 1) != 0) {
        (*DAT_1011c5bd8)(uVar1);
        lVar3 = (ulong)uVar1 * 0x20;
        *(undefined8 *)(param_1 + 0x28 + lVar3) = 0;
        *(undefined8 *)(param_1 + 0x20 + lVar3) = 0;
        *(undefined8 *)(param_1 + 0x18 + lVar3) = 0;
        *(undefined8 *)(param_1 + 0x10 + lVar3) = 0;
      }
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
  }
  if (*(int *)(param_1 + 0x218) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100367884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5be8)(*(undefined4 *)(param_1 + 0x21c),0);
    return;
  }
  return;
}

