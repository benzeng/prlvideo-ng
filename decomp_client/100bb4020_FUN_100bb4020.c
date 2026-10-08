
bool FUN_100bb4020(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  FUN_100bb4190(param_5);
  lVar3 = FUN_100bb4250(param_5);
  bVar7 = false;
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_100bb8d30(lVar3,param_2,param_5);
    }
    else {
      iVar2 = FUN_100bb67a0(lVar3,param_2,param_3,param_5);
    }
    bVar7 = false;
    if (iVar2 != 0) {
      iVar2 = FUN_100bb9060(param_1,lVar3,param_4,param_5);
      bVar7 = iVar2 != 0;
    }
  }
  if (*(int *)(param_5 + 0x34) == 0) {
    uVar5 = *(int *)(param_5 + 0x28) - 1;
    *(uint *)(param_5 + 0x28) = uVar5;
    uVar5 = *(uint *)(*(long *)(param_5 + 0x20) + (ulong)uVar5 * 4);
    uVar1 = *(uint *)(param_5 + 0x30);
    if (uVar5 <= uVar1 && uVar1 - uVar5 != 0) {
      iVar2 = *(int *)(param_5 + 0x18);
      uVar4 = uVar1 - uVar5;
      *(uint *)(param_5 + 0x18) = iVar2 - (uVar1 - uVar5);
      if (uVar4 != 0) {
        uVar6 = iVar2 + 0xfU & 0xf;
        if ((uVar4 & 1) != 0) {
          if (uVar6 == 0) {
            *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
            uVar6 = 0xf;
          }
          else {
            uVar6 = uVar6 - 1;
          }
          uVar4 = uVar4 - 1;
        }
        if (uVar1 - 1 != uVar5) {
          do {
            if (uVar6 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              iVar2 = 0xf;
            }
            else {
              iVar2 = uVar6 - 1;
            }
            uVar4 = uVar4 - 2;
            if (iVar2 == 0) {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(*(long *)(param_5 + 8) + 0x180);
              uVar6 = 0xf;
            }
            else {
              uVar6 = iVar2 - 1;
            }
          } while (uVar4 != 0);
        }
      }
    }
    *(uint *)(param_5 + 0x30) = uVar5;
    *(undefined4 *)(param_5 + 0x38) = 0;
  }
  else {
    *(int *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + -1;
  }
  return bVar7;
}

