
undefined8 * FUN_10080fcc0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (param_1 == (int *)0x0) {
    FUN_100887ce0(0x14,0xa9,0xc4,"ssl_lib.c",0x6b3);
    return (undefined8 *)0x0;
  }
  iVar1 = FUN_100811cb0();
  if (iVar1 < 0) {
    FUN_100887ce0(0x14,0xa9,0x10d,"ssl_lib.c",0x6be);
    FUN_100887ce0(0x14,0xa9,0x41,"ssl_lib.c",0x774);
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_10081ddd0(0x2e0,"ssl_lib.c",0x6c1);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100887ce0(0x14,0xa9,0x41,"ssl_lib.c",0x774);
    return (undefined8 *)0x0;
  }
  ___bzero(puVar2,0x2e0);
  *puVar2 = param_1;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 8) = 2;
  puVar2[5] = 0x5000;
  puVar2[7] = 0;
  puVar2[6] = 0;
  uVar3 = (**(code **)(param_1 + 0x30))();
  puVar2[9] = uVar3;
  puVar2[0x30] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  *(undefined4 *)((long)puVar2 + 0x94) = 1;
  *(undefined4 *)(puVar2 + 0x32) = 0;
  puVar2[0x21] = 0;
  puVar2[0x14] = 0;
  puVar2[0x13] = 0;
  puVar2[0x25] = 0x19000;
  *(undefined4 *)(puVar2 + 0x27) = 0;
  puVar2[0x2f] = 0;
  puVar2[0x2a] = 0;
  puVar2[0x29] = 0;
  puVar2[0x28] = 0;
  lVar4 = FUN_100811d80();
  puVar2[0x26] = lVar4;
  if (lVar4 != 0) {
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x15] = 0;
    lVar4 = FUN_1008856e0(FUN_100810240,FUN_100810270);
    puVar2[4] = lVar4;
    if (lVar4 != 0) {
      lVar4 = FUN_1008bd7d0();
      puVar2[3] = lVar4;
      if (lVar4 != 0) {
        if (*param_1 == 2) {
          pcVar6 = "SSLv2";
        }
        else {
          pcVar6 = "ALL:!EXPORT:!aNULL:!eNULL:!SSLv2";
        }
        FUN_100815300(*puVar2,puVar2 + 1,puVar2 + 2,pcVar6);
        if ((puVar2[1] == 0) || (iVar1 = FUN_100885600(), iVar1 < 1)) {
          uVar3 = 0xa1;
          uVar7 = 0x707;
          goto LAB_100810220;
        }
        lVar4 = FUN_1008c0ed0();
        puVar2[0x31] = lVar4;
        if (lVar4 != 0) {
          lVar4 = FUN_100890b60("ssl2-md5");
          puVar2[0x1c] = lVar4;
          if (lVar4 == 0) {
            uVar3 = 0xf1;
            uVar7 = 0x710;
            goto LAB_100810220;
          }
          lVar4 = FUN_100890b60("ssl3-md5");
          puVar2[0x1d] = lVar4;
          if (lVar4 == 0) {
            uVar3 = 0xf2;
            uVar7 = 0x714;
            goto LAB_100810220;
          }
          lVar4 = FUN_100890b60("ssl3-sha1");
          puVar2[0x1e] = lVar4;
          if (lVar4 == 0) {
            uVar3 = 0xf3;
            uVar7 = 0x718;
            goto LAB_100810220;
          }
          lVar4 = FUN_100884e10();
          puVar2[0x22] = lVar4;
          if (lVar4 != 0) {
            FUN_10081f930(2,puVar2,puVar2 + 0x1a);
            puVar2[0x1f] = 0;
            if (*param_1 != 0xfeff) {
              uVar3 = FUN_100817340();
              puVar2[0x20] = uVar3;
            }
            *(undefined4 *)((long)puVar2 + 0x194) = 0x4000;
            puVar2[0x35] = 0;
            puVar2[0x34] = 0;
            iVar1 = FUN_100886f90(puVar2 + 0x36,0x10);
            if (((iVar1 < 1) || (iVar1 = FUN_100886f00(puVar2 + 0x38,0x10), iVar1 < 1)) ||
               (iVar1 = FUN_100886f00(puVar2 + 0x3a,0x10), iVar1 < 1)) {
              *(byte *)((long)puVar2 + 0x119) = *(byte *)((long)puVar2 + 0x119) | 0x40;
            }
            puVar2[0x57] = 0;
            puVar2[0x59] = 0;
            puVar2[0x3e] = 0;
            puVar2[0x3d] = 0;
            puVar2[0x43] = 0;
            puVar2[0x42] = 0;
            puVar2[0x41] = 0;
            FUN_10081bec0(puVar2);
            *(undefined4 *)(puVar2 + 0x44) = 0x20;
            puVar5 = (undefined8 *)FUN_10081ddd0(0x18,"ssl_lib.c",0x743);
            puVar2[0x46] = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = 0;
              *(undefined4 *)(puVar5 + 1) = 0;
              puVar5[2] = 0;
              puVar5 = (undefined8 *)FUN_10081ddd0(0x18,"ssl_lib.c",0x749);
              puVar2[0x45] = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = 0;
                *(undefined4 *)(puVar5 + 1) = 0;
                puVar5[2] = 0;
                puVar2[0x33] = 0;
                *(uint *)(puVar2 + 0x23) = *(uint *)(puVar2 + 0x23) | 0x1000004;
                return puVar2;
              }
              FUN_10081e1a0(puVar2[0x46]);
            }
          }
        }
      }
    }
  }
  uVar3 = 0x41;
  uVar7 = 0x774;
LAB_100810220:
  FUN_100887ce0(0x14,0xa9,uVar3,"ssl_lib.c",uVar7);
  FUN_10080e050(puVar2);
  return (undefined8 *)0x0;
}

