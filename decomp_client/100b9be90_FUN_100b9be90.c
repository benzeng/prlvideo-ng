
undefined8 FUN_100b9be90(long param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (DAT_1023118c8 == 0) {
    uVar2 = 0xfffffffa;
    goto LAB_100b9bf06;
  }
  iVar1 = FUN_100bc14d0();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff8;
    goto LAB_100b9bf06;
  }
  if ((param_1 == 0) || ((param_2 & 0xfffffffb) == 0)) {
    uVar2 = 0xfffffffd;
    goto LAB_100b9bf06;
  }
  iVar1 = FUN_100bc1030(DAT_1022cf508);
  if (iVar1 != 0) {
    uVar2 = FUN_100b9d560();
    return uVar2;
  }
  lVar3 = FUN_100b93ce0();
  if (lVar3 == 0) {
    FUN_100bc10f0(DAT_1022cf508);
    uVar2 = 0xfffffff9;
    goto LAB_100b9bf06;
  }
  uVar7 = param_2 & 0xff;
  uVar6 = *(uint *)(lVar3 + 0x54);
  if ((uVar7 != 7) && (uVar6 == uVar7)) goto LAB_100b9c026;
  if (((param_2 & 0x100000) == 0) || ((uVar7 != 7 || ((*(byte *)(lVar3 + 0xee) & 0x10) == 0)))) {
    if (uVar7 == 7) {
      uVar4 = 7;
      if ((int)uVar6 < 5) {
        uVar4 = 0;
      }
    }
    else if (uVar7 == 6) {
      uVar4 = 6;
      if (uVar6 != 5) {
        if (uVar6 != 7) goto LAB_100b9bfa9;
        uVar4 = 6;
        if ((*(byte *)(lVar3 + 0xee) & 0x10) != 0) {
          uVar4 = 0;
        }
      }
    }
    else {
LAB_100b9bfa9:
      uVar4 = 0;
      if ((int)uVar7 < (int)uVar6) {
        uVar4 = uVar7;
      }
    }
    if (uVar4 == uVar7) {
      uVar4 = *(uint *)(lVar3 + 0xec) & 0xf000000;
      uVar8 = *(uint *)(lVar3 + 0xec) & 0xf0ffffff;
      *(uint *)(lVar3 + 0xec) = uVar8;
      uVar6 = 0x1000000;
      if (param_4 != 1) {
        uVar6 = (uint)(param_4 == 2) << 0x19;
      }
      if (uVar7 == 6) {
        uVar5 = 0;
        uVar4 = uVar4 & ~uVar6;
        if (uVar4 != 0) {
          *(uint *)(lVar3 + 0xec) = uVar4 | uVar8;
          goto LAB_100b9bffc;
        }
      }
      else {
        uVar5 = 0;
        if (uVar7 == 7) {
          uVar5 = uVar6;
        }
        uVar5 = uVar4 | uVar5;
      }
      FUN_100b9c040(lVar3,uVar7,param_3,uVar5);
LAB_100b9c026:
      FUN_100bc10f0(DAT_1022cf508);
      return 0;
    }
  }
LAB_100b9bffc:
  FUN_100bc10f0(DAT_1022cf508);
  uVar2 = 0xfffffffd;
LAB_100b9bf06:
  uVar2 = FUN_100b9d470(uVar2,0);
  return uVar2;
}

