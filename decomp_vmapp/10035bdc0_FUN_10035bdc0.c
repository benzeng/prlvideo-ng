
void FUN_10035bdc0(long param_1,uint *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((*param_2 | 4) == 6) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x12);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x10);
  *(long *)(*(long *)(param_2 + 0x10) + 0x10) = lVar1;
  *(uint **)(param_2 + 0x10) = param_2 + 0xe;
  *(uint **)(param_2 + 0x12) = param_2 + 0xe;
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 != (char *)0x0) {
    if (*(long *)(param_2 + 6) == 0) {
      do {
        if (*(int *)(pcVar3 + 0x28) == 1) {
          if (*(int *)(pcVar3 + 8) == 0) {
            pcVar3[0x28] = '\x02';
            pcVar3[0x29] = '\0';
            pcVar3[0x2a] = '\0';
            pcVar3[0x2b] = '\0';
            break;
          }
          if (*(int *)(pcVar3 + 4) - 3U < 3) {
            puVar2 = &DAT_1011c5cb8;
            iVar5 = 0x8914;
LAB_10035be5e:
            (*(code *)*puVar2)(iVar5);
          }
          else {
            if (*(int *)(pcVar3 + 4) != 0) break;
            iVar5 = *(int *)(pcVar3 + 0x18);
            if (iVar5 != 0) {
              puVar2 = &DAT_1011c7460;
              goto LAB_10035be5e;
            }
            if (*pcVar3 != '\0') {
              if (*(long *)(pcVar3 + 0x10) != 0) {
                (*DAT_1011c7540)();
              }
              uVar4 = (*DAT_1011c7598)(0x9117,0);
              *(undefined8 *)(pcVar3 + 0x10) = uVar4;
              pcVar3[0x28] = '\x02';
              pcVar3[0x29] = '\0';
              pcVar3[0x2a] = '\0';
              pcVar3[0x2b] = '\0';
              break;
            }
          }
          pcVar3[0x28] = '\x02';
          pcVar3[0x29] = '\0';
          pcVar3[0x2a] = '\0';
          pcVar3[0x2b] = '\0';
          break;
        }
        pcVar3 = *(char **)(pcVar3 + 0x38);
      } while (pcVar3 != (char *)0x0);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
    FUN_10035bc70(param_1,param_2);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  pcVar3 = *(char **)(param_1 + 0x18);
  if (pcVar3 != (char *)0x0) {
    if (*(int *)(pcVar3 + 0x28) == 1) {
      if (*(int *)(pcVar3 + 8) == 0) {
        pcVar3[0x28] = '\x02';
        pcVar3[0x29] = '\0';
        pcVar3[0x2a] = '\0';
        pcVar3[0x2b] = '\0';
LAB_10035bf32:
        *(char **)(param_1 + 0x20) = pcVar3;
      }
      else {
        if (*(int *)(pcVar3 + 4) - 3U < 3) {
          puVar2 = &DAT_1011c5cb8;
          iVar5 = 0x8914;
LAB_10035befa:
          (*(code *)*puVar2)(iVar5);
        }
        else {
          if (*(int *)(pcVar3 + 4) != 0) goto LAB_10035bf32;
          iVar5 = *(int *)(pcVar3 + 0x18);
          if (iVar5 != 0) {
            puVar2 = &DAT_1011c7460;
            goto LAB_10035befa;
          }
          if (*pcVar3 != '\0') {
            if (*(long *)(pcVar3 + 0x10) != 0) {
              (*DAT_1011c7540)();
            }
            uVar4 = (*DAT_1011c7598)(0x9117,0);
            *(undefined8 *)(pcVar3 + 0x10) = uVar4;
          }
        }
        pcVar3[0x28] = '\x02';
        pcVar3[0x29] = '\0';
        pcVar3[0x2a] = '\0';
        pcVar3[0x2b] = '\0';
        pcVar3 = *(char **)(param_1 + 0x18);
        *(char **)(param_1 + 0x20) = pcVar3;
        if (pcVar3 == (char *)0x0) goto LAB_10035bf3d;
      }
    }
    if (*(int *)(pcVar3 + 0x28) != 2) goto LAB_10035bf5d;
  }
LAB_10035bf3d:
  pcVar3 = (char *)FUN_10035bfc0(param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(char **)(lVar1 + 0x38) = pcVar3;
    *(long *)(pcVar3 + 0x30) = lVar1;
  }
  *(char **)(param_1 + 0x18) = pcVar3;
LAB_10035bf5d:
  param_2[2] = 0;
  param_2[1] = 0;
  *(char **)(param_2 + 4) = pcVar3;
  return;
}

