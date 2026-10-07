
undefined8 FUN_100872d70(long param_1,long param_2,long *param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 local_60 [24];
  undefined1 local_48 [8];
  int local_40;
  byte local_34;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (*(long *)(param_1 + 0x28) == 0)) {
    FUN_100887ce0(10,0x6b,0x65,"dsa_ossl.c",0xe6);
    return 0;
  }
  FUN_10084b500(local_48);
  FUN_10084b500(local_60);
  lVar5 = param_2;
  if (param_2 == 0) {
    lVar5 = FUN_10084c820();
    lVar7 = 0;
    if (lVar5 != 0) goto LAB_100872dd9;
  }
  else {
LAB_100872dd9:
    lVar6 = FUN_10084b520();
    lVar7 = lVar5;
    if (lVar6 != 0) {
      puVar9 = local_48;
      do {
        iVar2 = FUN_10084fb60(puVar9,*(undefined8 *)(param_1 + 0x20));
        if (iVar2 == 0) goto LAB_100872fb8;
      } while (local_40 == 0);
      uVar3 = *(uint *)(param_1 + 0x50);
      if ((uVar3 & 2) == 0) {
        local_34 = local_34 | 4;
      }
      if ((uVar3 & 1) == 0) {
LAB_100872e4d:
        if ((uVar3 & 2) != 0) goto LAB_100872eb6;
        lVar7 = FUN_10084b950(local_60,local_48);
        if (lVar7 != 0) {
          puVar9 = local_60;
          iVar2 = FUN_100847940(puVar9,puVar9,*(undefined8 *)(param_1 + 0x20));
          if (iVar2 != 0) {
            iVar2 = FUN_10084b410(puVar9);
            iVar4 = FUN_10084b410(*(undefined8 *)(param_1 + 0x20));
            if (iVar2 <= iVar4) {
              puVar9 = local_60;
              iVar2 = FUN_100847940(puVar9,puVar9,*(undefined8 *)(param_1 + 0x20));
              if (iVar2 == 0) goto LAB_100872fb8;
            }
LAB_100872eb6:
            pcVar1 = *(code **)(*(long *)(param_1 + 0x78) + 0x28);
            if (pcVar1 == (code *)0x0) {
              iVar2 = FUN_100848c40(lVar6,*(undefined8 *)(param_1 + 0x28),puVar9,
                                    *(undefined8 *)(param_1 + 0x18),lVar5);
            }
            else {
              iVar2 = (*pcVar1)(param_1,lVar6,*(undefined8 *)(param_1 + 0x28),puVar9,
                                *(undefined8 *)(param_1 + 0x18),lVar5,
                                *(undefined8 *)(param_1 + 0x58));
            }
            if (((iVar2 != 0) &&
                (iVar2 = FUN_100847f70(0,lVar6,lVar6,*(undefined8 *)(param_1 + 0x20),lVar5),
                iVar2 != 0)) &&
               (lVar7 = FUN_100851d20(0,local_48,*(undefined8 *)(param_1 + 0x20),lVar5), lVar7 != 0)
               ) {
              if (*param_3 != 0) {
                FUN_10084b440();
              }
              *param_3 = lVar7;
              if (*param_4 != 0) {
                FUN_10084b440();
              }
              *param_4 = lVar6;
              uVar8 = 1;
              goto LAB_100872fe8;
            }
          }
        }
      }
      else {
        lVar7 = FUN_100858270(param_1 + 0x58,8,*(undefined8 *)(param_1 + 0x18),lVar5);
        if (lVar7 != 0) {
          uVar3 = *(uint *)(param_1 + 0x50);
          goto LAB_100872e4d;
        }
      }
LAB_100872fb8:
      FUN_100887ce0(10,0x6b,3,"dsa_ossl.c",0x130);
      FUN_10084b440(lVar6);
      uVar8 = 0;
      goto LAB_100872fe8;
    }
  }
  lVar5 = lVar7;
  FUN_100887ce0(10,0x6b,3,"dsa_ossl.c",0x130);
  uVar8 = 0;
LAB_100872fe8:
  if (param_2 == 0) {
    FUN_10084c8b0(lVar5);
  }
  FUN_10084b440(local_48);
  FUN_10084b440(local_60);
  return uVar8;
}

