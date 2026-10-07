
bool FUN_10085a940(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (*(int *)param_3 == 0) {
    FUN_10084bbb0(param_1,0);
    return true;
  }
  FUN_10084ca60(param_4);
  lVar2 = FUN_10084cc20(param_4);
  uVar3 = FUN_10084cc20(param_4);
  lVar4 = FUN_10084cc20(param_4);
  if (lVar4 == 0) {
    bVar11 = false;
  }
  else {
    iVar1 = FUN_100858e10(lVar2,param_2,param_3);
    if (iVar1 == 0) {
      bVar11 = false;
    }
    else if (*(int *)(lVar2 + 8) == 0) {
      FUN_10084bbb0(param_1,0);
      bVar11 = true;
    }
    else {
      if ((*param_3 & 1) == 0) {
        uVar5 = FUN_10084cc20(param_4);
        uVar6 = FUN_10084cc20(param_4);
        lVar7 = FUN_10084cc20(param_4);
        if (lVar7 == 0) {
          bVar11 = false;
          goto LAB_10085acea;
        }
        iVar1 = *(int *)param_3;
        iVar9 = 0;
        do {
          iVar1 = FUN_10084f890(uVar5,iVar1,0,0);
          if (iVar1 == 0) {
            bVar11 = false;
            goto LAB_10085acea;
          }
          iVar1 = FUN_100858e10(uVar5,uVar5,param_3);
          bVar11 = false;
          if (iVar1 == 0) goto LAB_10085acea;
          FUN_10084bbb0(uVar3,0);
          lVar8 = FUN_10084b950(lVar4,uVar5);
          if (lVar8 == 0) goto LAB_10085acea;
          iVar1 = *(int *)param_3;
          iVar10 = 0;
          if (1 < iVar1) {
            do {
              bVar11 = false;
              iVar1 = FUN_100859620(uVar3,uVar3,param_3,param_4);
              if (iVar1 == 0) goto LAB_10085acea;
              iVar1 = FUN_100859620(uVar6,lVar4,param_3,param_4);
              if (((iVar1 == 0) ||
                  (iVar1 = FUN_1008593d0(lVar7,uVar6,lVar2,param_3,param_4), iVar1 == 0)) ||
                 (iVar1 = FUN_100858bf0(uVar3,uVar3,lVar7), iVar1 == 0)) {
                bVar11 = false;
                goto LAB_10085acea;
              }
              iVar1 = FUN_100858bf0(lVar4,uVar6,uVar5);
              if (iVar1 == 0) {
                bVar11 = false;
                goto LAB_10085acea;
              }
              iVar1 = *(int *)param_3;
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar1 + -1);
          }
          bVar11 = false;
          iVar9 = iVar9 + 1;
        } while ((iVar9 < 0x32) && (*(int *)(lVar4 + 8) == 0));
        if (*(int *)(lVar4 + 8) == 0) {
          FUN_100887ce0(3,0x87,0x71,"bn_gf2m.c",0x4a6);
          goto LAB_10085acea;
        }
      }
      else {
        lVar7 = FUN_10084b950(uVar3,lVar2);
        if (lVar7 == 0) {
          bVar11 = false;
          goto LAB_10085acea;
        }
        if (2 < *(int *)param_3) {
          iVar1 = 0;
          do {
            iVar9 = FUN_100859620(uVar3,uVar3,param_3,param_4);
            bVar11 = false;
            if (((iVar9 == 0) || (iVar9 = FUN_100859620(uVar3,uVar3,param_3,param_4), iVar9 == 0))
               || (iVar9 = FUN_100858bf0(uVar3,uVar3,lVar2), iVar9 == 0)) goto LAB_10085acea;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (*(int *)param_3 + -1) - (*(int *)param_3 + -1 >> 0x1f) >> 1);
        }
      }
      iVar1 = FUN_100859620(lVar4,uVar3,param_3,param_4);
      if (iVar1 == 0) {
        bVar11 = false;
      }
      else {
        iVar1 = FUN_100858bf0(lVar4,uVar3,lVar4);
        if (iVar1 == 0) {
          bVar11 = false;
        }
        else {
          iVar1 = FUN_10084bf00(lVar4,lVar2);
          if (iVar1 == 0) {
            lVar2 = FUN_10084b950(param_1,uVar3);
            bVar11 = lVar2 != 0;
          }
          else {
            FUN_100887ce0(3,0x87,0x74,"bn_gf2m.c",0x4b0);
            bVar11 = false;
          }
        }
      }
    }
  }
LAB_10085acea:
  FUN_10084cb40(param_4);
  return bVar11;
}

