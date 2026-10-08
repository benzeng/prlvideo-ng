
undefined8 FUN_100c4e220(undefined8 param_1,int param_2,long *param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  if (((*(long *)(param_4 + 0x18) == 0) || (*(long *)(param_4 + 0x20) == 0)) ||
     (*(long *)(param_4 + 0x28) == 0)) {
    uVar6 = 0x65;
    uVar7 = 0x143;
LAB_100c4e2c5:
    FUN_100c62ee0(10,0x71,uVar6,"dsa_ossl.c",uVar7);
    return 0xffffffff;
  }
  iVar2 = FUN_100c26610();
  if (((iVar2 != 0xa0) && (iVar2 != 0xe0)) && (iVar2 != 0x100)) {
    uVar6 = 0x66;
    uVar7 = 0x14a;
    goto LAB_100c4e2c5;
  }
  iVar3 = FUN_100c26610(*(undefined8 *)(param_4 + 0x18));
  if (10000 < iVar3) {
    uVar6 = 0x67;
    uVar7 = 0x14f;
    goto LAB_100c4e2c5;
  }
  FUN_100c26700(local_48);
  FUN_100c26700(local_60);
  FUN_100c26700(local_78);
  lVar4 = FUN_100c27a20();
  if (lVar4 == 0) {
    FUN_100c62ee0(10,0x71,3,"dsa_ossl.c",0x196);
    uVar6 = 0xffffffff;
    goto LAB_100c4e551;
  }
  lVar5 = *param_3;
  uVar6 = 0;
  uVar7 = 0;
  if (((*(int *)(lVar5 + 8) == 0) || (*(int *)(lVar5 + 0x10) != 0)) ||
     ((iVar3 = FUN_100c27100(lVar5,*(undefined8 *)(param_4 + 0x20)), -1 < iVar3 ||
      (((lVar5 = param_3[1], uVar6 = uVar7, *(int *)(lVar5 + 8) == 0 ||
        (*(int *)(lVar5 + 0x10) != 0)) ||
       (iVar3 = FUN_100c27100(lVar5,*(undefined8 *)(param_4 + 0x20)), -1 < iVar3)))))) {
LAB_100c4e527:
    FUN_100c62ee0(10,0x71,3,"dsa_ossl.c",0x196);
  }
  else {
    lVar5 = FUN_100c2cf20(local_60,param_3[1],*(undefined8 *)(param_4 + 0x20),lVar4);
    uVar6 = 0xffffffff;
    if (lVar5 == 0) goto LAB_100c4e527;
    iVar3 = iVar2 >> 3;
    if (param_2 < iVar2 >> 3) {
      iVar3 = param_2;
    }
    lVar5 = FUN_100c26e20(param_1,iVar3,local_48);
    if (((lVar5 == 0) ||
        (iVar2 = FUN_100c29cc0(local_48,local_48,local_60,*(undefined8 *)(param_4 + 0x20),lVar4),
        iVar2 == 0)) ||
       ((iVar2 = FUN_100c29cc0(local_60,*param_3,local_60,*(undefined8 *)(param_4 + 0x20),lVar4),
        iVar2 == 0 ||
        ((lVar5 = 0, (*(byte *)(param_4 + 0x50) & 1) != 0 &&
         (lVar5 = FUN_100c33470(param_4 + 0x58,8,*(undefined8 *)(param_4 + 0x18),lVar4), lVar5 == 0)
         ))))) goto LAB_100c4e527;
    pcVar1 = *(code **)(*(long *)(param_4 + 0x78) + 0x20);
    if (pcVar1 == (code *)0x0) {
      iVar2 = FUN_100c33600(local_78,*(undefined8 *)(param_4 + 0x28),local_48,
                            *(undefined8 *)(param_4 + 0x30),local_60,*(undefined8 *)(param_4 + 0x18)
                            ,lVar4,lVar5);
    }
    else {
      iVar2 = (*pcVar1)(param_4,local_78,*(undefined8 *)(param_4 + 0x28),local_48,
                        *(undefined8 *)(param_4 + 0x30),local_60,*(undefined8 *)(param_4 + 0x18),
                        lVar4,lVar5);
    }
    if ((iVar2 == 0) ||
       (iVar2 = FUN_100c23170(0,local_48,local_78,*(undefined8 *)(param_4 + 0x20),lVar4), iVar2 == 0
       )) goto LAB_100c4e527;
    iVar2 = FUN_100c27100(local_48,*param_3);
    uVar6 = 1;
    if (iVar2 != 0) {
      FUN_100c62ee0(10,0x71,3,"dsa_ossl.c",0x196);
      uVar6 = 0;
    }
  }
  FUN_100c27ab0(lVar4);
LAB_100c4e551:
  FUN_100c266b0(local_48);
  FUN_100c266b0(local_60);
  FUN_100c266b0(local_78);
  return uVar6;
}

