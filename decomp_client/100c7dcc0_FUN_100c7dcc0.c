
undefined8 FUN_100c7dcc0(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  undefined8 local_58 [5];
  
  local_58[0] = param_3;
  iVar2 = FUN_100c608c0(*(undefined8 *)(*param_1 + 0x28));
  if (iVar2 == 0) {
    FUN_100bf2780(9,6,"x_crl.c",0x1b8);
    FUN_100c60880(*(undefined8 *)(*param_1 + 0x28));
    FUN_100bf2780(10,6,"x_crl.c",0x1ba);
  }
  iVar2 = FUN_100c60360(*(undefined8 *)(*param_1 + 0x28),local_58);
  if ((-1 < iVar2) && (iVar3 = FUN_100c60800(*(undefined8 *)(*param_1 + 0x28)), iVar2 < iVar3)) {
    if (param_4 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_100c60820(*(undefined8 *)(*param_1 + 0x28),iVar2);
        iVar3 = FUN_100c76010(*puVar4,param_3);
        if (iVar3 != 0) {
          return 0;
        }
        if (puVar4[3] == 0) goto LAB_100c7dee9;
        uVar1 = *(undefined8 *)(*param_1 + 0x10);
        iVar3 = FUN_100c60800();
        iVar6 = 0;
        if (0 < iVar3) {
          do {
            piVar5 = (int *)FUN_100c60820(puVar4[3],iVar6);
            if ((*piVar5 == 4) &&
               (iVar3 = FUN_100c92120(uVar1,*(undefined8 *)(piVar5 + 2)), iVar3 == 0))
            goto LAB_100c7dee9;
            iVar6 = iVar6 + 1;
            iVar3 = FUN_100c60800(puVar4[3]);
          } while (iVar6 < iVar3);
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(*(undefined8 *)(*param_1 + 0x28));
      } while (iVar2 < iVar3);
    }
    else {
      do {
        puVar4 = (undefined8 *)FUN_100c60820(*(undefined8 *)(*param_1 + 0x28),iVar2);
        iVar3 = FUN_100c76010(*puVar4,param_3);
        if (iVar3 != 0) {
          return 0;
        }
        if (puVar4[3] == 0) {
          iVar3 = FUN_100c92120(param_4,*(undefined8 *)(*param_1 + 0x10));
          if (iVar3 == 0) {
LAB_100c7dee9:
            if (param_2 != (undefined8 *)0x0) {
              *param_2 = puVar4;
            }
            if (*(int *)(puVar4 + 4) != 8) {
              return 1;
            }
            return 2;
          }
        }
        else {
          iVar3 = FUN_100c60800();
          iVar6 = 0;
          if (0 < iVar3) {
            do {
              piVar5 = (int *)FUN_100c60820(puVar4[3],iVar6);
              if ((*piVar5 == 4) &&
                 (iVar3 = FUN_100c92120(param_4,*(undefined8 *)(piVar5 + 2)), iVar3 == 0))
              goto LAB_100c7dee9;
              iVar6 = iVar6 + 1;
              iVar3 = FUN_100c60800(puVar4[3]);
            } while (iVar6 < iVar3);
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(*(undefined8 *)(*param_1 + 0x28));
      } while (iVar2 < iVar3);
    }
  }
  return 0;
}

