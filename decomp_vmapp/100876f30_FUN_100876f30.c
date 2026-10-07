
undefined8 FUN_100876f30(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  char *local_58;
  
  if (param_4 == 2) {
    lVar7 = *(long *)(param_2 + 0x28);
LAB_100876f6d:
    lVar5 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar7 = 0;
    lVar5 = 0;
    if (0 < param_4) goto LAB_100876f6d;
  }
  uVar10 = 0x43;
  lVar9 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    iVar1 = FUN_10084b410();
    lVar9 = 0;
    if (0xe < iVar1 + 0xeU) {
      uVar2 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (*(long *)(param_2 + 0x10) != 0) {
        iVar1 = FUN_10084b410();
        uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
        if (uVar2 < uVar3) {
          uVar2 = uVar3;
        }
      }
      if (lVar5 != 0) {
        iVar1 = FUN_10084b410();
        uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
        if (uVar2 < uVar3) {
          uVar2 = uVar3;
        }
      }
      if (lVar7 != 0) {
        iVar1 = FUN_10084b410();
        uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
        if (uVar2 < uVar3) {
          uVar2 = uVar3;
        }
      }
      if (param_4 == 2) {
        local_58 = "PKCS#3 DH Private-Key";
      }
      else {
        local_58 = "PKCS#3 DH Parameters";
        if (param_4 == 1) {
          local_58 = "PKCS#3 DH Public-Key";
        }
      }
      lVar6 = FUN_10081ddd0(uVar2 + 10,"dh_ameth.c",0x15b);
      uVar10 = 0x41;
      lVar9 = 0;
      if (lVar6 != 0) {
        FUN_10087da20(param_1,param_3,0x80);
        uVar4 = FUN_10084b410(*(undefined8 *)(param_2 + 8));
        iVar1 = FUN_100880ec0(param_1,"%s: (%d bit)\n",local_58,uVar4);
        uVar10 = 7;
        lVar9 = lVar6;
        if (0 < iVar1) {
          param_3 = param_3 + 4;
          iVar1 = FUN_1008a43f0(param_1,"private-key:",lVar7,lVar6,param_3);
          if ((((iVar1 != 0) &&
               (iVar1 = FUN_1008a43f0(param_1,"public-key:",lVar5,lVar6,param_3), iVar1 != 0)) &&
              (iVar1 = FUN_1008a43f0(param_1,"prime:",*(undefined8 *)(param_2 + 8),lVar6,param_3),
              iVar1 != 0)) &&
             (iVar1 = FUN_1008a43f0(param_1,"generator:",*(undefined8 *)(param_2 + 0x10),lVar6,
                                    param_3), iVar1 != 0)) {
            uVar8 = 1;
            if (*(long *)(param_2 + 0x18) == 0) goto LAB_1008771cc;
            FUN_10087da20(param_1,param_3,0x80);
            iVar1 = FUN_100880ec0(param_1,"recommended-private-length: %d bits\n",
                                  *(undefined4 *)(param_2 + 0x18));
            if (0 < iVar1) goto LAB_1008771cc;
          }
        }
      }
    }
  }
  FUN_100887ce0(5,100,uVar10,"dh_ameth.c",0x179);
  uVar8 = 0;
LAB_1008771cc:
  if (lVar9 != 0) {
    FUN_10081e1a0(lVar9);
  }
  return uVar8;
}

