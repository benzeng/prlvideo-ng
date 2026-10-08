
undefined8 FUN_100c4e910(undefined8 param_1,undefined4 *param_2)

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
  
  iVar1 = FUN_100c8d290(0,&local_38,&local_44,&local_58,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_100c7af60(0,&local_48,&local_50,local_58);
  if (*local_38 == '0') {
    lVar2 = FUN_100c840c0(0,&local_38,(long)local_44);
    lVar8 = 0;
    lVar10 = 0;
    if (lVar2 != 0) {
      iVar1 = FUN_100c60800(lVar2);
      lVar10 = 0;
      lVar8 = lVar2;
      if (iVar1 == 2) {
        piVar3 = (int *)FUN_100c60820(lVar2,0);
        piVar4 = (int *)FUN_100c60820(lVar2,1);
        if (*piVar3 == 0x10) {
          *param_2 = 2;
          local_50 = *(int **)(piVar3 + 2);
        }
        else {
          lVar10 = 0;
          if (local_48 != 0x10) goto LAB_100c4eb42;
          *param_2 = 3;
        }
        lVar10 = 0;
        if (*piVar4 == 2) {
          lVar6 = *(long *)(piVar4 + 2);
          goto LAB_100c4ea84;
        }
      }
    }
LAB_100c4eb42:
    FUN_100c62ee0(10,0x73,0x72,"dsa_ameth.c",0x110);
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    local_60 = local_38;
    lVar6 = FUN_100c83740(0,&local_38,(long)local_44);
    lVar8 = 0;
    lVar10 = 0;
    if (lVar6 == 0) goto LAB_100c4eb42;
    if (*(int *)(lVar6 + 4) != 0x102) {
      lVar2 = 0;
      lVar8 = 0;
      lVar10 = lVar6;
      if (local_48 == 0x10) goto LAB_100c4ea84;
      goto LAB_100c4eb42;
    }
    *param_2 = 4;
    FUN_100c8b3e0(lVar6);
    lVar2 = 0;
    lVar6 = FUN_100c766c0(0,&local_60,(long)local_44);
    lVar8 = 0;
    lVar10 = lVar6;
    if ((lVar6 == 0) || (local_48 != 0x10)) goto LAB_100c4eb42;
LAB_100c4ea84:
    local_40 = *(undefined8 *)(local_50 + 2);
    lVar5 = FUN_100c4d900(0,&local_40,(long)*local_50);
    lVar8 = lVar2;
    lVar10 = lVar6;
    if (lVar5 == 0) goto LAB_100c4eb42;
    lVar6 = FUN_100c76b30(lVar6,0);
    *(long *)(lVar5 + 0x38) = lVar6;
    if (lVar6 == 0) {
      uVar9 = 0x6d;
      uVar7 = 0xf8;
LAB_100c4ebe6:
      FUN_100c62ee0(10,0x73,uVar9,"dsa_ameth.c",uVar7);
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_100c26720();
      *(long *)(lVar5 + 0x30) = lVar6;
      if (lVar6 == 0) {
        uVar9 = 0x41;
        uVar7 = 0xfd;
        goto LAB_100c4ebe6;
      }
      lVar6 = FUN_100c27a20();
      if (lVar6 == 0) {
        uVar9 = 0x41;
        uVar7 = 0x101;
        goto LAB_100c4ebe6;
      }
      iVar1 = FUN_100c239a0(*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x28),
                            *(undefined8 *)(lVar5 + 0x38),*(undefined8 *)(lVar5 + 0x18),lVar6);
      if (iVar1 != 0) {
        FUN_100c6d510(param_1,0x74,lVar5);
        uVar9 = 1;
        goto LAB_100c4eb74;
      }
      FUN_100c62ee0(10,0x73,0x6d,"dsa_ameth.c",0x106);
    }
  }
  FUN_100c4d5f0(lVar5);
  uVar9 = 0;
LAB_100c4eb74:
  FUN_100c27ab0(lVar6);
  if (lVar8 == 0) {
    FUN_100c8b3e0(lVar10);
  }
  else {
    FUN_100c60790(lVar8,FUN_100c83f20);
  }
  return uVar9;
}

