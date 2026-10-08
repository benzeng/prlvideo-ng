
bool FUN_100c38fe0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  iVar5 = FUN_100c377d0(param_1,param_3);
  if (iVar5 != 0) {
    FUN_100c26db0(param_2 + 0x38,0);
    *(undefined4 *)(param_2 + 0x50) = 0;
    return true;
  }
  pcVar3 = *(code **)(*param_1 + 0x100);
  pcVar4 = *(code **)(*param_1 + 0x108);
  lVar11 = 0;
  if ((param_4 == 0) && (lVar11 = FUN_100c27a20(), param_4 = lVar11, lVar11 == 0)) {
    return false;
  }
  FUN_100c27c60(param_4);
  uVar6 = FUN_100c27e20(param_4);
  uVar7 = FUN_100c27e20(param_4);
  uVar8 = FUN_100c27e20(param_4);
  lVar9 = FUN_100c27e20(param_4);
  if (lVar9 == 0) {
    bVar12 = false;
    goto LAB_100c394fa;
  }
  plVar2 = param_1 + 0xd;
  if (*(int *)(param_3 + 0x50) == 0) {
    if ((int)param_1[0x19] == 0) {
      iVar5 = (*pcVar4)(param_1,uVar6,param_3 + 8,param_4);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = FUN_100c29e70(uVar7,uVar6,plVar2);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = FUN_100c29bb0(uVar6,uVar6,uVar7,plVar2);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = (*pcVar4)(param_1,uVar7,param_3 + 0x38,param_4);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = (*pcVar4)(param_1,uVar7,uVar7,param_4);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = (*pcVar3)(param_1,uVar7,uVar7,param_1 + 0x13,param_4);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = FUN_100c29bb0(uVar7,uVar7,uVar6,plVar2);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
    }
    else {
      iVar5 = (*pcVar4)(param_1,uVar7,param_3 + 0x38,param_4);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = FUN_100c29bb0(uVar6,param_3 + 8,uVar7,plVar2);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = FUN_100c29c80(uVar8,param_3 + 8,uVar7,plVar2);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = (*pcVar3)(param_1,uVar7,uVar6,uVar8,param_4);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = FUN_100c29e70(uVar6,uVar7,plVar2);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
      iVar5 = FUN_100c29bb0(uVar7,uVar6,uVar7,plVar2);
      if (iVar5 == 0) {
        bVar12 = false;
        goto LAB_100c394fa;
      }
    }
  }
  else {
    iVar5 = (*pcVar4)(param_1,uVar6,param_3 + 8,param_4);
    if (iVar5 == 0) {
      bVar12 = false;
      goto LAB_100c394fa;
    }
    iVar5 = FUN_100c29e70(uVar7,uVar6,plVar2);
    if (iVar5 == 0) {
      bVar12 = false;
      goto LAB_100c394fa;
    }
    iVar5 = FUN_100c29bb0(uVar6,uVar6,uVar7,plVar2);
    if (iVar5 == 0) {
      bVar12 = false;
      goto LAB_100c394fa;
    }
    iVar5 = FUN_100c29bb0(uVar7,uVar6,param_1 + 0x13,plVar2);
    if (iVar5 == 0) {
      bVar12 = false;
      goto LAB_100c394fa;
    }
  }
  lVar1 = param_3 + 0x20;
  if (*(int *)(param_3 + 0x50) == 0) {
    iVar5 = (*pcVar3)(param_1,uVar6,lVar1,param_3 + 0x38,param_4);
    if (iVar5 == 0) {
      bVar12 = false;
      goto LAB_100c394fa;
    }
  }
  else {
    lVar10 = FUN_100c26b50(uVar6,lVar1);
    if (lVar10 == 0) {
      bVar12 = false;
      goto LAB_100c394fa;
    }
  }
  iVar5 = FUN_100c29e70(param_2 + 0x38,uVar6,plVar2);
  if (iVar5 == 0) {
    bVar12 = false;
  }
  else {
    *(undefined4 *)(param_2 + 0x50) = 0;
    iVar5 = (*pcVar4)(param_1,lVar9,lVar1,param_4);
    if (iVar5 == 0) {
      bVar12 = false;
    }
    else {
      iVar5 = (*pcVar3)(param_1,uVar8,param_3 + 8,lVar9,param_4);
      if (iVar5 == 0) {
        bVar12 = false;
      }
      else {
        iVar5 = FUN_100c29f80(uVar8,uVar8,2,plVar2);
        if (iVar5 == 0) {
          bVar12 = false;
        }
        else {
          iVar5 = FUN_100c29e70(uVar6,uVar8,plVar2);
          if (iVar5 == 0) {
            bVar12 = false;
          }
          else {
            lVar1 = param_2 + 8;
            iVar5 = (*pcVar4)(param_1,lVar1,uVar7,param_4);
            if (iVar5 == 0) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_100c29c80(lVar1,lVar1,uVar6,plVar2);
              if (iVar5 == 0) {
                bVar12 = false;
              }
              else {
                iVar5 = (*pcVar4)(param_1,uVar6,lVar9,param_4);
                if (iVar5 == 0) {
                  bVar12 = false;
                }
                else {
                  iVar5 = FUN_100c29f80(lVar9,uVar6,3,plVar2);
                  if (iVar5 == 0) {
                    bVar12 = false;
                  }
                  else {
                    iVar5 = FUN_100c29c80(uVar6,uVar8,lVar1,plVar2);
                    if (iVar5 == 0) {
                      bVar12 = false;
                    }
                    else {
                      iVar5 = (*pcVar3)(param_1,uVar6,uVar7,uVar6,param_4);
                      bVar12 = false;
                      if (iVar5 != 0) {
                        iVar5 = FUN_100c29c80(param_2 + 0x20,uVar6,lVar9,plVar2);
                        bVar12 = iVar5 != 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_100c394fa:
  FUN_100c27d40(param_4);
  if (lVar11 != 0) {
    FUN_100c27ab0();
  }
  return bVar12;
}

