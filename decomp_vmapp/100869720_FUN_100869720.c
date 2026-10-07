
bool FUN_100869720(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  
  FUN_100888070();
  bVar10 = false;
  lVar9 = 0;
  if ((param_5 == 0) && (param_5 = FUN_10084c820(), lVar9 = param_5, param_5 == 0)) {
    return false;
  }
  FUN_10084ca60(param_5);
  uVar3 = FUN_10084cc20(param_5);
  lVar4 = FUN_10084cc20(param_5);
  uVar5 = FUN_10084cc20(param_5);
  puVar6 = (undefined8 *)FUN_10084cc20(param_5);
  if (puVar6 == (undefined8 *)0x0) goto LAB_1008699ac;
  plVar8 = param_1 + 0x10;
  iVar1 = FUN_100858e10(lVar4,param_3,plVar8);
  if (iVar1 == 0) {
    bVar10 = false;
    goto LAB_1008699ac;
  }
  if (*(int *)(lVar4 + 8) == 0) {
    iVar1 = FUN_10085a710(uVar5,param_1 + 0x16,plVar8,param_5);
joined_r0x00010086990b:
    bVar10 = false;
    if (iVar1 == 0) goto LAB_1008699ac;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar3,lVar4,param_5);
    if (iVar1 == 0) {
      bVar10 = false;
      goto LAB_1008699ac;
    }
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar3,param_1 + 0x16,uVar3,param_5);
    if (iVar1 == 0) {
      bVar10 = false;
      goto LAB_1008699ac;
    }
    iVar1 = FUN_100858bf0(uVar3,param_1 + 0x13,uVar3);
    if (iVar1 == 0) {
      bVar10 = false;
      goto LAB_1008699ac;
    }
    iVar1 = FUN_100858bf0(uVar3,lVar4,uVar3);
    if (iVar1 == 0) {
      bVar10 = false;
      goto LAB_1008699ac;
    }
    iVar1 = FUN_10085a940(puVar6,uVar3,plVar8,param_5);
    if (iVar1 == 0) {
      uVar2 = FUN_1008885f0();
      bVar10 = false;
      if ((uVar2 & 0xff000fff) == 0x3000074) {
        FUN_100888070();
        FUN_100887ce0(0x10,0xa4,0x6e,"ec2_oct.c",0x8d);
      }
      else {
        FUN_100887ce0(0x10,0xa4,3,"ec2_oct.c",0x90);
      }
      goto LAB_1008699ac;
    }
    bVar7 = 0;
    if (0 < *(int *)(puVar6 + 1)) {
      bVar7 = *(byte *)*puVar6 & 1;
    }
    iVar1 = (**(code **)(*param_1 + 0x100))(param_1,uVar5,lVar4,puVar6,param_5);
    if (iVar1 == 0) {
      bVar10 = false;
      goto LAB_1008699ac;
    }
    if ((param_4 != 0 ^ bVar7) == 1) {
      iVar1 = FUN_100858bf0(uVar5,uVar5,lVar4);
      goto joined_r0x00010086990b;
    }
  }
  iVar1 = FUN_10085c370(param_1,param_2,lVar4,uVar5,param_5);
  bVar10 = iVar1 != 0;
LAB_1008699ac:
  FUN_10084cb40(param_5);
  if (lVar9 != 0) {
    FUN_10084c8b0(lVar9);
  }
  return bVar10;
}

