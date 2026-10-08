
long * FUN_100c4dce0(undefined8 param_1,int param_2,long param_3)

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
  FUN_100c26700(local_58);
  FUN_100c26700(local_70);
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
        lVar9 = FUN_100c26720();
        uVar7 = 3;
        lVar8 = 0;
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          lVar8 = FUN_100c27a20();
          lVar3 = 0;
          if (lVar8 == 0) {
LAB_100c4def6:
            lVar8 = lVar3;
            uVar7 = 3;
          }
          else {
            do {
              lVar5 = *(long *)(param_3 + 0x40);
              lVar3 = lVar8;
              if ((lVar5 == 0) || (lVar1 = *(long *)(param_3 + 0x48), lVar1 == 0)) {
                iVar4 = FUN_100c4dc00(param_3,lVar8,&local_38);
                bVar2 = false;
                if (iVar4 == 0) goto LAB_100c4def6;
              }
              else {
                *(undefined8 *)(param_3 + 0x40) = 0;
                *(undefined8 *)(param_3 + 0x48) = 0;
                bVar2 = true;
                local_40 = lVar1;
                local_38 = lVar5;
              }
              iVar4 = FUN_100c26610(*(undefined8 *)(param_3 + 0x20));
              if ((int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3 < param_2) {
                iVar4 = FUN_100c26610(*(undefined8 *)(param_3 + 0x20));
                param_2 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3;
              }
              lVar5 = FUN_100c26e20(param_1,param_2,local_58);
              if (((((lVar5 == 0) ||
                    (iVar4 = FUN_100c29cc0(local_70,*(undefined8 *)(param_3 + 0x38),local_40,
                                           *(undefined8 *)(param_3 + 0x20),lVar8), iVar4 == 0)) ||
                   (iVar4 = FUN_100c22b40(lVar9,local_70,local_58), iVar4 == 0)) ||
                  ((iVar4 = FUN_100c27160(lVar9,*(undefined8 *)(param_3 + 0x20)), 0 < iVar4 &&
                   (iVar4 = FUN_100c23090(lVar9,lVar9,*(undefined8 *)(param_3 + 0x20)), iVar4 == 0))
                  )) || (iVar4 = FUN_100c29cc0(lVar9,lVar9,local_38,*(undefined8 *)(param_3 + 0x20),
                                               lVar8), iVar4 == 0)) goto LAB_100c4def6;
              if ((*(int *)(local_40 + 8) != 0) && (*(int *)(lVar9 + 8) != 0)) {
                plVar6 = (long *)FUN_100c4dc10();
                if (plVar6 == (long *)0x0) goto LAB_100c4def6;
                *plVar6 = local_40;
                plVar6[1] = lVar9;
                goto LAB_100c4df2d;
              }
            } while (!bVar2);
            uVar7 = 0x6e;
          }
        }
      }
    }
  }
  FUN_100c62ee0(10,0x70,uVar7,"dsa_ossl.c",0xd1);
  FUN_100c266b0(local_40);
  FUN_100c266b0(lVar9);
  plVar6 = (long *)0x0;
LAB_100c4df2d:
  if (lVar8 != 0) {
    FUN_100c27ab0(lVar8);
  }
  FUN_100c26640(local_58);
  FUN_100c26640(local_70);
  if (local_38 != 0) {
    FUN_100c26640();
  }
  return plVar6;
}

