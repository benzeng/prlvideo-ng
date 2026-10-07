
undefined4 * FUN_100863430(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 local_38;
  
  local_38 = *param_2;
  puVar4 = (undefined4 *)FUN_1008a5f10(0,&local_38,param_3,&DAT_100bdca70);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_100887ce0(0x10,0x92,0x10,"ec_asn1.c",0x400);
    return (undefined4 *)0x0;
  }
  if (((param_1 == (undefined8 *)0x0) ||
      (puVar5 = (undefined4 *)*param_1, puVar5 == (undefined4 *)0x0)) &&
     (puVar5 = (undefined4 *)FUN_100863e40(), puVar5 == (undefined4 *)0x0)) {
    FUN_100887ce0(0x10,0x92,0x41,"ec_asn1.c",0x406);
  }
  else {
    lVar7 = *(long *)(puVar4 + 4);
    lVar6 = *(long *)(puVar5 + 2);
    if (lVar7 != 0) {
      if (lVar6 != 0) {
        FUN_10085b0c0(lVar6);
        lVar7 = *(long *)(puVar4 + 4);
      }
      lVar6 = FUN_100861d80(lVar7);
      *(long *)(puVar5 + 2) = lVar6;
    }
    if (lVar6 == 0) {
      uVar8 = 0x10;
      uVar10 = 0x413;
    }
    else {
      *puVar5 = *puVar4;
      puVar9 = *(undefined4 **)(puVar4 + 2);
      if (puVar9 == (undefined4 *)0x0) {
        uVar8 = 0x7d;
        uVar10 = 0x422;
      }
      else {
        lVar7 = FUN_10084bc20(*(undefined8 *)(puVar9 + 2),*puVar9,*(undefined8 *)(puVar5 + 6));
        *(long *)(puVar5 + 6) = lVar7;
        if (lVar7 == 0) {
          uVar8 = 3;
          uVar10 = 0x41e;
        }
        else {
          if (*(long *)(puVar5 + 4) != 0) {
            FUN_10085b210();
          }
          lVar7 = FUN_10085b6e0(*(undefined8 *)(puVar5 + 2));
          *(long *)(puVar5 + 4) = lVar7;
          if (lVar7 == 0) {
            uVar8 = 0x10;
            uVar10 = 0x42a;
          }
          else {
            piVar1 = *(int **)(puVar4 + 6);
            if (piVar1 == (int *)0x0) {
              iVar3 = FUN_10085c790(*(undefined8 *)(puVar5 + 2),lVar7,*(undefined8 *)(puVar5 + 6),0,
                                    0,0);
              if (iVar3 != 0) {
                *(byte *)(puVar5 + 8) = *(byte *)(puVar5 + 8) | 2;
LAB_10086365e:
                if (param_1 != (undefined8 *)0x0) {
                  *param_1 = puVar5;
                }
                *param_2 = local_38;
                puVar9 = puVar5;
                goto LAB_1008636c8;
              }
              uVar8 = 0x10;
              uVar10 = 0x445;
            }
            else {
              iVar3 = *piVar1;
              if ((long)iVar3 < 1) {
                uVar8 = 100;
                uVar10 = 0x438;
              }
              else {
                pbVar2 = *(byte **)(piVar1 + 2);
                puVar5[9] = *pbVar2 & 0xfe;
                iVar3 = FUN_10086a2a0(*(undefined8 *)(puVar5 + 2),lVar7,pbVar2,(long)iVar3,0);
                if (iVar3 != 0) goto LAB_10086365e;
                uVar8 = 0x10;
                uVar10 = 0x43f;
              }
            }
          }
        }
      }
    }
    FUN_100887ce0(0x10,0x92,uVar8,"ec_asn1.c",uVar10);
    if ((param_1 != (undefined8 *)0x0) &&
       (puVar9 = (undefined4 *)0x0, (undefined4 *)*param_1 == puVar5)) goto LAB_1008636c8;
    FUN_100863f80(puVar5);
  }
  puVar9 = (undefined4 *)0x0;
LAB_1008636c8:
  FUN_1008a4c40(puVar4,&DAT_100bdca70);
  return puVar9;
}

