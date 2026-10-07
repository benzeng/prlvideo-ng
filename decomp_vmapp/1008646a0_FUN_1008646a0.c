
bool FUN_1008646a0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_2 == 0)) || (*(long *)(param_1 + 8) == 0)) {
    FUN_100887ce0(0x10,0xe5,0x43,"ec_key.c",0x178);
    return false;
  }
  lVar2 = FUN_10084c820();
  if (lVar2 == 0) {
    return false;
  }
  lVar3 = FUN_10085b6e0(*(undefined8 *)(param_1 + 8));
  if (lVar3 == 0) {
    FUN_10084c8b0(lVar2);
    return false;
  }
  uVar4 = FUN_10084cc20(lVar2);
  uVar5 = FUN_10084cc20(lVar2);
  uVar6 = FUN_10085b870(*(undefined8 *)(param_1 + 8));
  iVar1 = FUN_10085b880(uVar6);
  if (iVar1 == 0x197) {
    iVar1 = FUN_10085c370(*(undefined8 *)(param_1 + 8),lVar3,param_2,param_3,lVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_10085c430(*(undefined8 *)(param_1 + 8),lVar3,uVar4,uVar5,lVar2);
LAB_1008647df:
      if (iVar1 != 0) {
        iVar1 = FUN_10084bf60(param_2,uVar4);
        if ((iVar1 == 0) && (iVar1 = FUN_10084bf60(param_3,uVar5), iVar1 == 0)) {
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_10085b080();
          }
          lVar7 = FUN_10085c130(lVar3,*(undefined8 *)(param_1 + 8));
          *(long *)(param_1 + 0x10) = lVar7;
          bVar8 = false;
          if (lVar7 != 0) {
            iVar1 = FUN_100864430(param_1);
            bVar8 = iVar1 != 0;
          }
          FUN_10084c8b0(lVar2);
          if (lVar3 == 0) {
            return bVar8;
          }
          goto LAB_10086482e;
        }
        FUN_100887ce0(0x10,0xe5,0x92,"ec_key.c",0x1a4);
      }
    }
  }
  else {
    iVar1 = FUN_10085c310(*(undefined8 *)(param_1 + 8),lVar3,param_2,param_3,lVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_10085c3d0(*(undefined8 *)(param_1 + 8),lVar3,uVar4,uVar5,lVar2);
      goto LAB_1008647df;
    }
  }
  FUN_10084c8b0(lVar2);
  bVar8 = false;
LAB_10086482e:
  FUN_10085b080(lVar3);
  return bVar8;
}

