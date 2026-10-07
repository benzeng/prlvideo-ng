
long * FUN_100872ae0(undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  long local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = 0;
  FUN_10084b500(local_58);
  FUN_10084b500(local_70);
  uVar7 = 0x65;
  lVar9 = 0;
  if (*(long *)(param_3 + 0x18) == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(param_3 + 0x20) == 0) {
      lVar8 = 0;
    }
    else {
      lVar9 = 0;
      lVar8 = 0;
      if (*(long *)(param_3 + 0x28) != 0) {
        lVar9 = FUN_10084b520();
        uVar7 = 3;
        lVar8 = 0;
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          lVar8 = FUN_10084c820();
          lVar3 = 0;
          if (lVar8 == 0) {
LAB_100872cf6:
            lVar8 = lVar3;
            uVar7 = 3;
          }
          else {
            do {
              lVar5 = *(long *)(param_3 + 0x40);
              lVar3 = lVar8;
              if ((lVar5 == 0) || (lVar1 = *(long *)(param_3 + 0x48), lVar1 == 0)) {
                iVar4 = FUN_100872a00(param_3,lVar8,&local_38);
                bVar2 = false;
                if (iVar4 == 0) goto LAB_100872cf6;
              }
              else {
                *(undefined8 *)(param_3 + 0x40) = 0;
                *(undefined8 *)(param_3 + 0x48) = 0;
                bVar2 = true;
                local_40 = lVar1;
                local_38 = lVar5;
              }
              iVar4 = FUN_10084b410(*(undefined8 *)(param_3 + 0x20));
              if ((int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3 < param_2) {
                iVar4 = FUN_10084b410(*(undefined8 *)(param_3 + 0x20));
                param_2 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3;
              }
              lVar5 = FUN_10084bc20(param_1,param_2,local_58);
              if (((((lVar5 == 0) ||
                    (iVar4 = FUN_10084eac0(local_70,*(undefined8 *)(param_3 + 0x38),local_40,
                                           *(undefined8 *)(param_3 + 0x20),lVar8), iVar4 == 0)) ||
                   (iVar4 = FUN_100847940(lVar9,local_70,local_58), iVar4 == 0)) ||
                  ((iVar4 = FUN_10084bf60(lVar9,*(undefined8 *)(param_3 + 0x20)), 0 < iVar4 &&
                   (iVar4 = FUN_100847e90(lVar9,lVar9,*(undefined8 *)(param_3 + 0x20)), iVar4 == 0))
                  )) || (iVar4 = FUN_10084eac0(lVar9,lVar9,local_38,*(undefined8 *)(param_3 + 0x20),
                                               lVar8), iVar4 == 0)) goto LAB_100872cf6;
              if ((*(int *)(local_40 + 8) != 0) && (*(int *)(lVar9 + 8) != 0)) {
                plVar6 = (long *)FUN_100872a10();
                if (plVar6 == (long *)0x0) goto LAB_100872cf6;
                *plVar6 = local_40;
                plVar6[1] = lVar9;
                goto LAB_100872d2d;
              }
            } while (!bVar2);
            uVar7 = 0x6e;
          }
        }
      }
    }
  }
  FUN_100887ce0(10,0x70,uVar7,"dsa_ossl.c",0xd1);
  FUN_10084b4b0(local_40);
  FUN_10084b4b0(lVar9);
  plVar6 = (long *)0x0;
LAB_100872d2d:
  if (lVar8 != 0) {
    FUN_10084c8b0(lVar8);
  }
  FUN_10084b440(local_58);
  FUN_10084b440(local_70);
  if (local_38 != 0) {
    FUN_10084b440();
  }
  return plVar6;
}

