
undefined4 FUN_100c4ae50(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  uVar2 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    iVar1 = FUN_100c26610();
    uVar2 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    iVar1 = FUN_100c26610();
    uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
  }
  if (param_4 != 0) {
    if (*(long *)(param_2 + 0x30) != 0) {
      iVar1 = FUN_100c26610();
      uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      iVar1 = FUN_100c26610();
      uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      iVar1 = FUN_100c26610();
      uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      iVar1 = FUN_100c26610();
      uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
    }
    if (*(long *)(param_2 + 0x50) != 0) {
      iVar1 = FUN_100c26610();
      uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
    }
    if (*(long *)(param_2 + 0x58) != 0) {
      iVar1 = FUN_100c26610();
      uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
    }
  }
  lVar5 = FUN_100bf3540(uVar2 + 10,"rsa_ameth.c",199);
  if (lVar5 == 0) {
    FUN_100c62ee0(4,0x92,0x41,"rsa_ameth.c",0xc9);
    return 0;
  }
  uVar4 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar4 = FUN_100c26610();
  }
  iVar1 = FUN_100c58c20(param_1,param_3,0x80);
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    if ((param_4 == 0) || (*(long *)(param_2 + 0x30) == 0)) {
      uVar7 = 0;
      iVar1 = FUN_100c5c0c0(param_1,"Public-Key: (%d bit)\n",uVar4);
      if (iVar1 < 1) goto LAB_100c4b1d6;
      pcVar8 = "Exponent:";
      pcVar6 = "Modulus:";
    }
    else {
      uVar7 = 0;
      iVar1 = FUN_100c5c0c0(param_1,"Private-Key: (%d bit)\n",uVar4);
      if (iVar1 < 1) goto LAB_100c4b1d6;
      pcVar8 = "publicExponent:";
      pcVar6 = "modulus:";
    }
    iVar1 = FUN_100c7f970(param_1,pcVar6,*(undefined8 *)(param_2 + 0x20),lVar5,param_3);
    if (iVar1 == 0) {
      uVar7 = 0;
    }
    else {
      iVar1 = FUN_100c7f970(param_1,pcVar8,*(undefined8 *)(param_2 + 0x28),lVar5,param_3);
      if (iVar1 == 0) {
        uVar7 = 0;
      }
      else {
        if (param_4 != 0) {
          iVar1 = FUN_100c7f970(param_1,"privateExponent:",*(undefined8 *)(param_2 + 0x30),lVar5,
                                param_3);
          if (iVar1 == 0) {
            uVar7 = 0;
            goto LAB_100c4b1d6;
          }
          iVar1 = FUN_100c7f970(param_1,"prime1:",*(undefined8 *)(param_2 + 0x38),lVar5,param_3);
          if (iVar1 == 0) {
            uVar7 = 0;
            goto LAB_100c4b1d6;
          }
          iVar1 = FUN_100c7f970(param_1,"prime2:",*(undefined8 *)(param_2 + 0x40),lVar5,param_3);
          if (iVar1 == 0) {
            uVar7 = 0;
            goto LAB_100c4b1d6;
          }
          iVar1 = FUN_100c7f970(param_1,"exponent1:",*(undefined8 *)(param_2 + 0x48),lVar5,param_3);
          if (iVar1 == 0) {
            uVar7 = 0;
            goto LAB_100c4b1d6;
          }
          iVar1 = FUN_100c7f970(param_1,"exponent2:",*(undefined8 *)(param_2 + 0x50),lVar5,param_3);
          if (iVar1 == 0) {
            uVar7 = 0;
            goto LAB_100c4b1d6;
          }
          iVar1 = FUN_100c7f970(param_1,"coefficient:",*(undefined8 *)(param_2 + 0x58),lVar5,param_3
                               );
          uVar7 = 0;
          if (iVar1 == 0) goto LAB_100c4b1d6;
        }
        uVar7 = 1;
      }
    }
  }
LAB_100c4b1d6:
  FUN_100bf3910(lVar5);
  return uVar7;
}

