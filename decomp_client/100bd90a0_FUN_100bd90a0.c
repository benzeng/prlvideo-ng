
undefined8 FUN_100bd90a0(int *param_1,ulong *param_2,long param_3,int param_4,undefined4 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined1 *puVar7;
  code *pcVar8;
  short sVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  byte local_39;
  void *local_38;
  
  puVar7 = (undefined1 *)*param_2;
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x4a8) = 0;
  param_1[0x85] = 0;
  *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & 0xfc;
  lVar13 = (long)param_4;
  if (puVar7 < (undefined1 *)(param_3 + -2 + lVar13)) {
    pcVar1 = (char *)(param_3 + lVar13);
    if (puVar7 + (ulong)CONCAT11(*puVar7,puVar7[1]) + 2 == pcVar1) {
      pcVar17 = puVar7 + 2;
      pcVar3 = (char *)(lVar13 + -4 + param_3);
      if (pcVar3 < pcVar17) {
        bVar11 = false;
        bVar10 = false;
      }
      else {
        bVar11 = false;
        bVar10 = false;
        pcVar18 = pcVar17;
        do {
          uVar19 = (uint)CONCAT11(pcVar18[2],pcVar18[3]);
          uVar14 = (ulong)uVar19;
          pcVar17 = pcVar18 + uVar14 + 4;
          if (pcVar1 < pcVar17) goto LAB_100bd95a8;
          cVar4 = *pcVar18;
          cVar5 = pcVar18[1];
          sVar9 = CONCAT11(cVar4,cVar5);
          pcVar2 = pcVar18 + 4;
          if (*(code **)(param_1 + 0x74) != (code *)0x0) {
            (**(code **)(param_1 + 0x74))
                      (param_1,1,CONCAT11(cVar4,cVar5),pcVar2,uVar14,*(undefined8 *)(param_1 + 0x76)
                      );
          }
          if (sVar9 < 0x3374) {
            if (cVar4 < '\0') {
              if (CONCAT11(cVar4,cVar5) != -0xff) goto LAB_100bd9480;
              iVar12 = FUN_100bf22e0(param_1,pcVar2,uVar14,param_5);
              bVar11 = true;
              if (iVar12 == 0) {
                return 0;
              }
            }
            else if (sVar9 < 0x23) {
              if (sVar9 < 0xb) {
                if (sVar9 == 0) {
                  if ((uVar19 != 0) || (bVar10 = true, *(long *)(param_1 + 0x78) == 0))
                  goto LAB_100bd9612;
                }
                else {
                  if (CONCAT11(cVar4,cVar5) != 5) goto LAB_100bd9480;
                  if (*param_1 != 0xfeff) {
                    if ((uVar19 != 0) || (param_1[0x7b] == -1)) goto LAB_100bd9600;
                    param_1[0x7c] = 1;
                  }
                }
              }
              else if (CONCAT11(cVar4,cVar5) == 0xb) {
                bVar6 = pcVar18[4];
                if ((bVar6 == 0) || ((uint)bVar6 != uVar19 - 1)) {
                  *param_5 = 0x32;
                  return 0;
                }
                if (param_1[0x2a] == 0) {
                  lVar13 = *(long *)(param_1 + 0x4c);
                  *(undefined8 *)(lVar13 + 0x120) = 0;
                  if (*(long *)(lVar13 + 0x128) != 0) {
                    FUN_100bf3910();
                  }
                  pvVar15 = (void *)FUN_100bf3540((uint)bVar6,"t1_lib.c",0x5e0);
                  lVar13 = *(long *)(param_1 + 0x4c);
                  *(void **)(lVar13 + 0x128) = pvVar15;
                  if (pvVar15 == (void *)0x0) goto LAB_100bd961b;
                  *(ulong *)(lVar13 + 0x120) = (ulong)bVar6;
                  _memcpy(pvVar15,pcVar18 + 5,(ulong)bVar6);
                }
              }
              else {
                if (CONCAT11(cVar4,cVar5) != 0xf) goto LAB_100bd9480;
                if (*pcVar2 == '\x02') {
                  *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) | 3;
                }
                else {
                  if (*pcVar2 != '\x01') {
                    *param_5 = 0x2f;
                    return 0;
                  }
                  *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) | 1;
                }
              }
            }
            else {
              if (CONCAT11(cVar4,cVar5) != 0x23) goto LAB_100bd9480;
              if ((*(code **)(param_1 + 0x94) != (code *)0x0) &&
                 (iVar12 = (**(code **)(param_1 + 0x94))(param_1,pcVar2,uVar14), iVar12 == 0)) {
LAB_100bd961b:
                *param_5 = 0x50;
                return 0;
              }
              uVar14 = FUN_100be4680(param_1,0x20,0);
              if ((uVar19 != 0) || ((uVar14 & 0x4000) != 0)) goto LAB_100bd9600;
              param_1[0x85] = 1;
            }
          }
          else if (CONCAT11(cVar4,cVar5) == 0x3374) {
            if (*(int *)(*(long *)(param_1 + 0x20) + 0x310) == 0) {
              pcVar8 = *(code **)(*(long *)(param_1 + 0x5c) + 0x2c8);
              if (pcVar8 == (code *)0x0) {
LAB_100bd9600:
                *param_5 = 0x6e;
                return 0;
              }
              uVar16 = 0;
              if (uVar19 != 0) {
                do {
                  if (pcVar18[(ulong)uVar16 + 4] == 0) goto LAB_100bd9580;
                  uVar16 = uVar16 + 1 + (uint)(byte)pcVar18[(ulong)uVar16 + 4];
                } while (uVar16 < uVar19);
              }
              if (uVar16 != uVar19) goto LAB_100bd9580;
              iVar12 = (*pcVar8)(param_1,&local_38,&local_39,pcVar2,uVar14,
                                 *(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x2d0));
              if (iVar12 != 0) {
LAB_100bd9609:
                *param_5 = 0x50;
                return 0;
              }
              pvVar15 = (void *)FUN_100bf3540(local_39,"t1_lib.c",0x649);
              *(void **)(param_1 + 0x9e) = pvVar15;
              if (pvVar15 == (void *)0x0) goto LAB_100bd9609;
              _memcpy(pvVar15,local_38,(ulong)local_39);
              *(byte *)(param_1 + 0xa0) = local_39;
              *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x4a8) = 1;
            }
          }
          else {
LAB_100bd9480:
            if (((CONCAT11(cVar4,cVar5) == 0xe) && (**(int **)(param_1 + 2) == 0xfeff)) &&
               (iVar12 = FUN_100be2aa0(param_1,pcVar2,uVar14,param_5), iVar12 != 0)) {
              return 0;
            }
          }
          pcVar18 = pcVar17;
        } while (pcVar17 <= pcVar3);
      }
      if (pcVar17 == pcVar1) {
        if (((bVar10) && (param_1[0x2a] == 0)) && (*(long *)(param_1 + 0x78) != 0)) {
          if (*(long *)(*(long *)(param_1 + 0x4c) + 0x118) != 0) goto LAB_100bd9580;
          lVar13 = FUN_100c58250();
          *(long *)(*(long *)(param_1 + 0x4c) + 0x118) = lVar13;
          if (lVar13 == 0) {
LAB_100bd9612:
            *param_5 = 0x70;
            return 0;
          }
        }
        *param_2 = (ulong)pcVar1;
LAB_100bd95a8:
        if (bVar11) {
          return 1;
        }
        goto LAB_100bd95b5;
      }
    }
LAB_100bd9580:
    *param_5 = 0x32;
  }
  else {
LAB_100bd95b5:
    if ((param_1[0x6a] & 0x40004U) != 0) {
      return 1;
    }
    *param_5 = 0x28;
    FUN_100c62ee0(0x14,0x12f,0x152,"t1_lib.c",0x696);
  }
  return 0;
}

