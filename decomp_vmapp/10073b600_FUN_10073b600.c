
byte FUN_10073b600(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  FUN_1007353b0(param_5);
  lVar4 = FUN_100735470(param_5);
  bVar2 = 0;
  if (lVar4 != 0) {
    if (param_2 == param_3) {
      iVar3 = FUN_100739f50(lVar4,param_2,param_5);
    }
    else {
      iVar3 = FUN_1007379c0(lVar4,param_2,param_3,param_5);
    }
    bVar2 = 0;
    if (iVar3 != 0) {
      iVar3 = FUN_1007366c0(0,param_1,lVar4,param_4,param_5);
      bVar9 = true;
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x10) == 0) {
          bVar9 = false;
        }
        else {
          if (*(int *)(param_4 + 0x10) == 0) {
            pcVar6 = FUN_100737900;
          }
          else {
            pcVar6 = FUN_100737670;
          }
          iVar3 = (*pcVar6)(param_1,param_1,param_4);
          bVar9 = iVar3 == 0;
        }
      }
      bVar2 = bVar9 ^ 1;
    }
  }
  if (*(int *)(param_5 + 0x34) == 0) {
    uVar7 = *(int *)(param_5 + 0x28) - 1;
    *(uint *)(param_5 + 0x28) = uVar7;
    uVar7 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar7 * 4);
    uVar1 = *(uint *)(param_5 + 0x30);
    if (uVar7 <= uVar1 && uVar1 - uVar7 != 0) {
      iVar3 = *(int *)(param_5 + 0x18);
      uVar5 = uVar1 - uVar7;
      *(uint *)(param_5 + 0x18) = iVar3 - (uVar1 - uVar7);
      if (uVar5 != 0) {
        uVar8 = iVar3 + 0xfU & 0xf;
        if ((uVar5 & 1) != 0) {
          if (uVar8 == 0) {
            *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
            uVar8 = 0xf;
          }
          else {
            uVar8 = uVar8 - 1;
          }
          uVar5 = uVar5 - 1;
        }
        if (uVar1 - 1 != uVar7) {
          do {
            if (uVar8 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              iVar3 = 0xf;
            }
            else {
              iVar3 = uVar8 - 1;
            }
            uVar5 = uVar5 - 2;
            if (iVar3 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              uVar8 = 0xf;
            }
            else {
              uVar8 = iVar3 - 1;
            }
          } while (uVar5 != 0);
        }
      }
    }
    *(uint *)(param_5 + 0x30) = uVar7;
    *(undefined4 *)(param_5 + 0x38) = 0;
  }
  else {
    *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
  }
  return bVar2;
}

