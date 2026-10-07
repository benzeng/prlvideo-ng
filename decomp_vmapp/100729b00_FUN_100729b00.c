
char FUN_100729b00(long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  char cVar12;
  undefined8 *puVar13;
  
  cVar12 = '\x01';
  if ((param_1 != 0) && (plVar1 = *(long **)(param_1 + 8), plVar1 != (long *)0x0)) {
    puVar3 = param_2;
    if (param_2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
      if (puVar3 == (undefined8 *)0x0) {
        return '\x02';
      }
      *(undefined4 *)(puVar3 + 7) = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    puVar4 = (undefined8 *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    puVar13 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puVar4 + 0x14) = 1;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar13 = puVar4;
    }
    puVar5 = (undefined8 *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puVar5 + 0x14) = 1;
      *(undefined4 *)(puVar5 + 2) = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar4 = puVar5;
    }
    plVar6 = (long *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    plVar10 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      *(undefined4 *)((long)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar6[1] = 0;
      *plVar6 = 0;
      plVar10 = plVar6;
    }
    puVar7 = (undefined8 *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    puVar5 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puVar7 + 0x14) = 1;
      *(undefined4 *)(puVar7 + 2) = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar5 = puVar7;
    }
    if (puVar5 == (undefined8 *)0x0 ||
        (plVar10 == (long *)0x0 || (puVar4 == (undefined8 *)0x0 || puVar13 == (undefined8 *)0x0))) {
      cVar12 = (puVar5 == (undefined8 *)0x0 ||
               (plVar10 == (long *)0x0 ||
               (puVar4 == (undefined8 *)0x0 || puVar13 == (undefined8 *)0x0))) + '\x01';
      plVar6 = (long *)0x0;
    }
    else {
      cVar12 = '\x01';
      plVar6 = (long *)0x0;
      if (*(long *)(*plVar1 + 0x48) != 0) {
        plVar8 = (long *)FUN_10081ddd0(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe);
        plVar6 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          lVar9 = *plVar1;
          *plVar8 = lVar9;
          iVar2 = (**(code **)(lVar9 + 0x48))(plVar8);
          if (iVar2 == 0) {
            FUN_10081e1a0(plVar8);
            plVar6 = (long *)0x0;
          }
          else {
            lVar9 = FUN_10072d5c0(plVar10,plVar1 + 2);
            plVar6 = plVar8;
            if ((lVar9 != 0) && ((int)plVar10[1] != 0)) {
              iVar2 = FUN_10073ec50(puVar13,plVar10);
              while (iVar2 != 0) {
                if (*(int *)(puVar13 + 1) != 0) {
                  iVar2 = FUN_10073f000(plVar1,plVar8,puVar13,0,0,puVar3);
                  if (iVar2 == 0) break;
                  pcVar11 = *(code **)(*plVar1 + 0x88);
                  if ((((pcVar11 == (code *)0x0) || (*plVar1 != *plVar8)) ||
                      (iVar2 = (*pcVar11)(plVar1,plVar8,puVar5,0,puVar3), iVar2 == 0)) ||
                     (iVar2 = FUN_1007366c0(0,puVar4,puVar5), iVar2 == 0)) break;
                  if (*(int *)(puVar4 + 2) != 0) {
                    pcVar11 = FUN_100737670;
                    if ((int)plVar10[2] == 0) {
                      pcVar11 = FUN_100737900;
                    }
                    iVar2 = (*pcVar11)(puVar4,puVar4);
                    if (iVar2 == 0) break;
                  }
                  if (*(int *)(puVar4 + 1) != 0) {
                    lVar9 = FUN_100735740(puVar13,puVar13,plVar10,puVar3);
                    if (lVar9 != 0) {
                      if (*param_4 != 0) {
                        FUN_10072d9d0();
                      }
                      if (*param_3 != 0) {
                        FUN_10072d9d0();
                      }
                      *param_4 = (long)puVar4;
                      *param_3 = (long)puVar13;
                      cVar12 = '\0';
                      goto LAB_100729e91;
                    }
                    break;
                  }
                }
                iVar2 = FUN_10073ec50(puVar13,plVar10);
              }
            }
          }
        }
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      FUN_10072d9d0(puVar13);
    }
    plVar8 = plVar6;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_10072d9d0(puVar4);
    }
LAB_100729e91:
    if (param_2 == (undefined8 *)0x0) {
      FUN_100729fd0(puVar3);
    }
    if (plVar10 != (long *)0x0) {
      if ((*plVar10 != 0) && ((*(byte *)((long)plVar10 + 0x14) & 2) == 0)) {
        FUN_10081e1a0();
      }
      if ((*(byte *)((long)plVar10 + 0x14) & 1) == 0) {
        *plVar10 = 0;
      }
      else {
        FUN_10081e1a0(plVar10);
      }
    }
    if (plVar8 != (long *)0x0) {
      if (*(code **)(*plVar8 + 0x50) != (code *)0x0) {
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      FUN_10081e1a0(plVar8);
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_10072d9d0();
    }
  }
  return cVar12;
}

