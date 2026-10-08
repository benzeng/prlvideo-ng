
bool FUN_100c43df0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  
  FUN_100c63270();
  lVar10 = 0;
  if ((param_5 == 0) && (lVar10 = FUN_100c27a20(), param_5 = lVar10, lVar10 == 0)) {
    return false;
  }
  FUN_100c27c60(param_5);
  uVar5 = FUN_100c27e20(param_5);
  plVar6 = (long *)FUN_100c27e20(param_5);
  uVar7 = FUN_100c27e20(param_5);
  puVar8 = (undefined8 *)FUN_100c27e20(param_5);
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = param_1 + 0xd;
    iVar3 = FUN_100c29ab0(uVar7,param_3,plVar1,param_5);
    if (iVar3 != 0) {
      if (*(long *)(*param_1 + 0x120) == 0) {
        iVar3 = (**(code **)(*param_1 + 0x108))(param_1,plVar6,param_3,param_5);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*param_1 + 0x100))(param_1,uVar5,plVar6,param_3,param_5);
          goto LAB_100c43f2f;
        }
      }
      else {
        iVar3 = FUN_100c29da0(plVar6,param_3,plVar1,param_5);
        if (iVar3 != 0) {
          iVar3 = FUN_100c29cc0(uVar5,plVar6,param_3,plVar1,param_5);
LAB_100c43f2f:
          if (iVar3 != 0) {
            if ((int)param_1[0x19] == 0) {
              pcVar2 = *(code **)(*param_1 + 0x120);
              if (pcVar2 == (code *)0x0) {
                iVar3 = (**(code **)(*param_1 + 0x100))(param_1,plVar6,param_1 + 0x13,uVar7,param_5)
                ;
              }
              else {
                iVar3 = (*pcVar2)();
                if (iVar3 == 0) goto LAB_100c440a6;
                iVar3 = FUN_100c29cc0(plVar6,plVar6,uVar7,plVar1,param_5);
              }
              if (iVar3 != 0) {
                iVar3 = FUN_100c29bb0(uVar5,uVar5,plVar6,plVar1);
                goto LAB_100c4400b;
              }
            }
            else {
              iVar3 = FUN_100c29e70(plVar6,uVar7,plVar1);
              if ((iVar3 != 0) && (iVar3 = FUN_100c29bb0(plVar6,plVar6,uVar7,plVar1), iVar3 != 0)) {
                iVar3 = FUN_100c29c80(uVar5,uVar5,plVar6,plVar1);
LAB_100c4400b:
                if (iVar3 != 0) {
                  plVar11 = param_1 + 0x16;
                  if (((*(code **)(*param_1 + 0x120) == (code *)0x0) ||
                      (iVar3 = (**(code **)(*param_1 + 0x120))
                                         (param_1,plVar6,param_1 + 0x16,param_5), plVar11 = plVar6,
                      iVar3 != 0)) &&
                     (iVar3 = FUN_100c29bb0(uVar5,uVar5,plVar11,plVar1), iVar3 != 0)) {
                    lVar9 = FUN_100c2c580(puVar8,uVar5,plVar1,param_5);
                    if (lVar9 == 0) {
                      uVar4 = FUN_100c637f0();
                      if ((uVar4 & 0xff000fff) == 0x300006f) {
                        FUN_100c63270();
                        uVar5 = 0x6e;
                        uVar7 = 0xa3;
                      }
                      else {
                        uVar5 = 3;
                        uVar7 = 0xa6;
                      }
                      FUN_100c62ee0(0x10,0xa9,uVar5,"ecp_oct.c",uVar7);
                      bVar12 = false;
                      goto LAB_100c440ad;
                    }
                    if (*(int *)(puVar8 + 1) < 1) {
                      bVar12 = false;
                      if (param_4 == 0) goto LAB_100c441b7;
                      if (*(int *)(puVar8 + 1) == 0) {
                        iVar3 = FUN_100c2c2c0(uVar7,plVar1,param_5);
                        if (iVar3 != -2) {
                          if (iVar3 == 1) {
                            FUN_100c62ee0(0x10,0xa9,0x6d,"ecp_oct.c",0xb4);
                          }
                          else {
                            FUN_100c62ee0(0x10,0xa9,0x6e,"ecp_oct.c",0xba);
                          }
                        }
                        goto LAB_100c440ad;
                      }
LAB_100c44125:
                      bVar12 = false;
                      iVar3 = FUN_100c22be0(puVar8,plVar1,puVar8);
                      if (iVar3 == 0) goto LAB_100c440ad;
                      if (0 < *(int *)(puVar8 + 1)) goto LAB_100c44147;
                      if (param_4 == 0) goto LAB_100c441b7;
                    }
                    else {
                      if ((bool)(*(byte *)*puVar8 & 1) != (param_4 != 0)) goto LAB_100c44125;
LAB_100c44147:
                      if ((param_4 != 0) == (bool)(*(byte *)*puVar8 & 1)) {
LAB_100c441b7:
                        iVar3 = FUN_100c37510(param_1,param_2,uVar7,puVar8,param_5);
                        bVar12 = iVar3 != 0;
                        goto LAB_100c440ad;
                      }
                    }
                    bVar12 = false;
                    FUN_100c62ee0(0x10,0xa9,0x44,"ecp_oct.c",0xc2);
                    goto LAB_100c440ad;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_100c440a6:
  bVar12 = false;
LAB_100c440ad:
  FUN_100c27d40(param_5);
  if (lVar10 != 0) {
    FUN_100c27ab0(lVar10);
  }
  return bVar12;
}

