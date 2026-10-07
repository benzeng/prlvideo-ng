
undefined8 FUN_100717500(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long lVar8;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20);
  uVar2 = FUN_100714a30();
  if (uVar2 == 5) {
    pcVar7 = "parallels-server";
  }
  else if ((uVar2 & 0xfffffffd) == 4) {
    pcVar7 = "parallels-server-bare-metal";
  }
  else if (uVar2 == 9) {
    pcVar7 = "parallels-cloud-server-storage";
  }
  else if (uVar2 == 8) {
    pcVar7 = "parallels-desktop-enterprise";
  }
  else if (uVar2 == 7) {
    pcVar7 = "parallels-workstation";
  }
  else {
    pcVar7 = "virtuozzo";
  }
  ___sprintf_chk(&DAT_1011bdb70,0,0x40,"%s",pcVar7);
  lVar3 = FUN_100725aa0(&DAT_1011bdb70);
  if (lVar3 != 0) {
    uVar2 = FUN_100714a30();
    if (DAT_1011bdbb0 == '\0') {
      if ((uVar2 - 5 < 5) && (lVar8 = 0, (0x1dU >> (uVar2 - 5 & 0x1f) & 1) != 0)) {
        puVar6 = &DAT_1011bdbb0;
        do {
          if (uVar2 == 9) {
            uVar1 = *(undefined4 *)(&DAT_100b4a7f0 + lVar8);
          }
          else {
            if (uVar2 == 7) {
              puVar4 = &DAT_100b4a770;
            }
            else if (uVar2 == 5) {
              puVar4 = (undefined4 *)&DAT_100b4a6f0;
            }
            else {
              puVar4 = (undefined4 *)&DAT_100b4a870;
            }
            uVar1 = *(undefined4 *)(lVar8 + (long)puVar4);
          }
          ___sprintf_chk(puVar6,0,0xffffffffffffffff,"%c",uVar1);
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0x80);
      }
      else {
        puVar6 = &DAT_1011bdbb0;
        lVar8 = 0;
        do {
          if ((uVar2 & 0xfffffffd) == 4) {
            uVar1 = *(undefined4 *)((long)&DAT_100b4a8f0 + lVar8);
          }
          else {
            uVar1 = *(undefined4 *)(&DAT_100b4a930 + lVar8);
          }
          ___sprintf_chk(puVar6,0,0xffffffffffffffff,"%02x",uVar1);
          puVar6 = puVar6 + 2;
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0x40);
      }
    }
    lVar8 = FUN_100725aa0(&DAT_1011bdbb0);
    if (lVar8 != 0) {
      FUN_100724000(uVar5,lVar3);
      FUN_100724000(uVar5,lVar8);
      return 0;
    }
    FUN_100724b70(lVar3);
  }
  uVar5 = FUN_10071e690(0xfffffffe,0);
  return uVar5;
}

