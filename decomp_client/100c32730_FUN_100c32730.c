
bool FUN_100c32730(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  
  FUN_100c27c60(param_5);
  lVar5 = FUN_100c27e20(param_5);
  lVar6 = FUN_100c27e20(param_5);
  if (param_1 == 0) {
    param_1 = FUN_100c27e20(param_5);
  }
  if (param_2 == 0) {
    param_2 = FUN_100c27e20(param_5);
  }
  bVar8 = false;
  if ((((lVar5 != 0) && (lVar6 != 0)) && (param_1 != 0)) && (bVar8 = false, param_2 != 0)) {
    iVar1 = FUN_100c27100(param_3,param_4);
    if (iVar1 < 0) {
      FUN_100c26db0(param_1,0);
      lVar5 = FUN_100c26b50(param_2,param_3);
      FUN_100c27d40(param_5);
      return lVar5 != 0;
    }
    uVar2 = FUN_100c26610(param_3);
    uVar9 = *(int *)(param_4 + 0x30) * 2;
    if ((int)uVar9 < (int)uVar2) {
      uVar9 = uVar2;
    }
    uVar2 = uVar9;
    if (uVar9 != *(uint *)(param_4 + 0x34)) {
      FUN_100c27c60(param_5);
      lVar7 = FUN_100c27e20(param_5);
      uVar2 = 0xffffffff;
      if ((lVar7 != 0) && (iVar1 = FUN_100c27200(lVar7,uVar9), iVar1 != 0)) {
        iVar1 = FUN_100c23170(param_4 + 0x18,0,lVar7,param_4,param_5);
        uVar2 = -(uint)(iVar1 == 0) | uVar9;
      }
      FUN_100c27d40(param_5);
      *(uint *)(param_4 + 0x34) = uVar2;
    }
    if (uVar2 == 0xffffffff) {
      bVar8 = false;
    }
    else {
      iVar1 = FUN_100c2b450(lVar5,param_3,*(undefined4 *)(param_4 + 0x30));
      if (iVar1 == 0) {
        bVar8 = false;
      }
      else {
        iVar1 = FUN_100c297a0(lVar6,lVar5,param_4 + 0x18,param_5);
        if (iVar1 == 0) {
          bVar8 = false;
        }
        else {
          iVar1 = FUN_100c2b450(param_1,lVar6,uVar9 - *(int *)(param_4 + 0x30));
          if (iVar1 == 0) {
            bVar8 = false;
          }
          else {
            *(undefined4 *)(param_1 + 0x10) = 0;
            iVar1 = FUN_100c297a0(lVar6,param_4,param_1,param_5);
            if (iVar1 == 0) {
              bVar8 = false;
            }
            else {
              iVar1 = FUN_100c22be0(param_2,param_3,lVar6);
              if (iVar1 == 0) {
                bVar8 = false;
              }
              else {
                *(undefined4 *)(param_2 + 0x10) = 0;
                iVar1 = -1;
                do {
                  iVar3 = FUN_100c27100(param_2,param_4);
                  if (iVar3 < 0) {
                    uVar4 = 0;
                    if (*(int *)(param_2 + 8) != 0) {
                      uVar4 = *(undefined4 *)(param_3 + 0x10);
                    }
                    *(undefined4 *)(param_2 + 0x10) = uVar4;
                    *(uint *)(param_1 + 0x10) =
                         *(uint *)(param_4 + 0x10) ^ *(uint *)(param_3 + 0x10);
                    bVar8 = true;
                    goto LAB_100c32a13;
                  }
                  iVar1 = iVar1 + 1;
                  if (2 < iVar1) {
                    FUN_100c62ee0(3,0x82,0x65,"bn_recp.c",0xce);
                    bVar8 = false;
                    goto LAB_100c32a13;
                  }
                  iVar3 = FUN_100c22be0(param_2,param_2,param_4);
                  if (iVar3 == 0) {
                    bVar8 = false;
                    goto LAB_100c32a13;
                  }
                  iVar3 = FUN_100c2b920(param_1,1);
                } while (iVar3 != 0);
                bVar8 = false;
              }
            }
          }
        }
      }
    }
  }
LAB_100c32a13:
  FUN_100c27d40(param_5);
  return bVar8;
}

