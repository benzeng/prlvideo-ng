
undefined8 FUN_100873710(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *local_60;
  undefined8 local_58;
  int *local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  char *local_38;
  
  iVar1 = FUN_1008b1d10(0,&local_38,&local_44,&local_58,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_10089f9e0(0,&local_48,&local_50,local_58);
  if (*local_38 == '0') {
    lVar2 = FUN_1008a8b40(0,&local_38,(long)local_44);
    lVar8 = 0;
    lVar10 = 0;
    if (lVar2 != 0) {
      iVar1 = FUN_100885600(lVar2);
      lVar10 = 0;
      lVar8 = lVar2;
      if (iVar1 == 2) {
        piVar3 = (int *)FUN_100885620(lVar2,0);
        piVar4 = (int *)FUN_100885620(lVar2,1);
        if (*piVar3 == 0x10) {
          *param_2 = 2;
          local_50 = *(int **)(piVar3 + 2);
        }
        else {
          lVar10 = 0;
          if (local_48 != 0x10) goto LAB_100873942;
          *param_2 = 3;
        }
        lVar10 = 0;
        if (*piVar4 == 2) {
          lVar6 = *(long *)(piVar4 + 2);
          goto LAB_100873884;
        }
      }
    }
LAB_100873942:
    FUN_100887ce0(10,0x73,0x72,"dsa_ameth.c",0x110);
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    local_60 = local_38;
    lVar6 = FUN_1008a81c0(0,&local_38,(long)local_44);
    lVar8 = 0;
    lVar10 = 0;
    if (lVar6 == 0) goto LAB_100873942;
    if (*(int *)(lVar6 + 4) != 0x102) {
      lVar2 = 0;
      lVar8 = 0;
      lVar10 = lVar6;
      if (local_48 == 0x10) goto LAB_100873884;
      goto LAB_100873942;
    }
    *param_2 = 4;
    FUN_1008afe60(lVar6);
    lVar2 = 0;
    lVar6 = FUN_10089b140(0,&local_60,(long)local_44);
    lVar8 = 0;
    lVar10 = lVar6;
    if ((lVar6 == 0) || (local_48 != 0x10)) goto LAB_100873942;
LAB_100873884:
    local_40 = *(undefined8 *)(local_50 + 2);
    lVar5 = FUN_100872700(0,&local_40,(long)*local_50);
    lVar8 = lVar2;
    lVar10 = lVar6;
    if (lVar5 == 0) goto LAB_100873942;
    lVar6 = FUN_10089b5b0(lVar6,0);
    *(long *)(lVar5 + 0x38) = lVar6;
    if (lVar6 == 0) {
      uVar9 = 0x6d;
      uVar7 = 0xf8;
LAB_1008739e6:
      FUN_100887ce0(10,0x73,uVar9,"dsa_ameth.c",uVar7);
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_10084b520();
      *(long *)(lVar5 + 0x30) = lVar6;
      if (lVar6 == 0) {
        uVar9 = 0x41;
        uVar7 = 0xfd;
        goto LAB_1008739e6;
      }
      lVar6 = FUN_10084c820();
      if (lVar6 == 0) {
        uVar9 = 0x41;
        uVar7 = 0x101;
        goto LAB_1008739e6;
      }
      iVar1 = FUN_1008487a0(*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x28),
                            *(undefined8 *)(lVar5 + 0x38),*(undefined8 *)(lVar5 + 0x18),lVar6);
      if (iVar1 != 0) {
        FUN_100892130(param_1,0x74,lVar5);
        uVar9 = 1;
        goto LAB_100873974;
      }
      FUN_100887ce0(10,0x73,0x6d,"dsa_ameth.c",0x106);
    }
  }
  FUN_1008723f0(lVar5);
  uVar9 = 0;
LAB_100873974:
  FUN_10084c8b0(lVar6);
  if (lVar8 == 0) {
    FUN_1008afe60(lVar10);
  }
  else {
    FUN_100885590(lVar8,FUN_1008a89a0);
  }
  return uVar9;
}

