
undefined8 FUN_100883e90(long *param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = FUN_10087d330(&DAT_1011ae600);
  uVar3 = 0;
  lVar5 = 0;
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar5 = FUN_10087d330(&DAT_1011ae600);
    if (lVar5 != 0) {
      if (((param_2 == 0) || (iVar1 = FUN_10087db60(lVar2,0x88,param_2), iVar1 != 0)) &&
         ((param_4 == 0 || (iVar1 = FUN_10087db60(lVar5,0x88,param_4), iVar1 != 0)))) {
        iVar1 = FUN_10087db60(lVar2,0x8a,0,lVar5);
        uVar3 = 1;
        lVar4 = lVar2;
        if (iVar1 != 0) goto LAB_100883f6c;
      }
      FUN_10087d4e0(lVar2);
      lVar2 = lVar5;
    }
    FUN_10087d4e0(lVar2);
    uVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
  }
LAB_100883f6c:
  *param_1 = lVar4;
  *param_3 = lVar5;
  return uVar3;
}

