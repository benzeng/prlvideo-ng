
bool FUN_100c3f8a0(long param_1,long param_2,long param_3)

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
    FUN_100c62ee0(0x10,0xe5,0x43,"ec_key.c",0x178);
    return false;
  }
  lVar2 = FUN_100c27a20();
  if (lVar2 == 0) {
    return false;
  }
  lVar3 = FUN_100c368e0(*(undefined8 *)(param_1 + 8));
  if (lVar3 == 0) {
    FUN_100c27ab0(lVar2);
    return false;
  }
  uVar4 = FUN_100c27e20(lVar2);
  uVar5 = FUN_100c27e20(lVar2);
  uVar6 = FUN_100c36a70(*(undefined8 *)(param_1 + 8));
  iVar1 = FUN_100c36a80(uVar6);
  if (iVar1 == 0x197) {
    iVar1 = FUN_100c37570(*(undefined8 *)(param_1 + 8),lVar3,param_2,param_3,lVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_100c37630(*(undefined8 *)(param_1 + 8),lVar3,uVar4,uVar5,lVar2);
LAB_100c3f9df:
      if (iVar1 != 0) {
        iVar1 = FUN_100c27160(param_2,uVar4);
        if ((iVar1 == 0) && (iVar1 = FUN_100c27160(param_3,uVar5), iVar1 == 0)) {
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_100c36280();
          }
          lVar7 = FUN_100c37330(lVar3,*(undefined8 *)(param_1 + 8));
          *(long *)(param_1 + 0x10) = lVar7;
          bVar8 = false;
          if (lVar7 != 0) {
            iVar1 = FUN_100c3f630(param_1);
            bVar8 = iVar1 != 0;
          }
          FUN_100c27ab0(lVar2);
          if (lVar3 == 0) {
            return bVar8;
          }
          goto LAB_100c3fa2e;
        }
        FUN_100c62ee0(0x10,0xe5,0x92,"ec_key.c",0x1a4);
      }
    }
  }
  else {
    iVar1 = FUN_100c37510(*(undefined8 *)(param_1 + 8),lVar3,param_2,param_3,lVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_100c375d0(*(undefined8 *)(param_1 + 8),lVar3,uVar4,uVar5,lVar2);
      goto LAB_100c3f9df;
    }
  }
  FUN_100c27ab0(lVar2);
  bVar8 = false;
LAB_100c3fa2e:
  FUN_100c36280(lVar3);
  return bVar8;
}

