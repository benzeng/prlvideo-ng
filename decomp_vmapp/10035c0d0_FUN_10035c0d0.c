
void FUN_10035c0d0(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar2 = *param_2;
  if (uVar2 == 2) {
    return;
  }
  puVar1 = param_2 + 0xe;
  lVar3 = *(long *)(param_2 + 0x12);
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x10);
  *(long *)(*(long *)(param_2 + 0x10) + 0x10) = lVar3;
  *(uint **)(param_2 + 0x12) = puVar1;
  *(long *)(param_2 + 0x10) = param_1 + 0x30;
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0x40);
  *(uint **)(*(long *)(param_1 + 0x40) + 8) = puVar1;
  *(uint **)(param_1 + 0x40) = puVar1;
  if ((uVar2 < 7) && ((0x43U >> (uVar2 & 0x1f) & 1) != 0)) {
    pcVar4 = (char *)FUN_10035bfc0(param_1);
    FUN_10035bc70(param_1,param_2);
    param_2[2] = 0;
    param_2[1] = 0;
    *(char **)(param_2 + 6) = pcVar4;
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    pcVar4[0x1c] = -1;
    pcVar4[0x1d] = -1;
    pcVar4[0x1e] = -1;
    pcVar4[0x1f] = -1;
    pcVar4[0x24] = '\x01';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = '\0';
    pcVar4[0x28] = '\x01';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    if (*(int *)(pcVar4 + 8) == 0) {
      pcVar4[0x28] = '\x02';
      pcVar4[0x29] = '\0';
      pcVar4[0x2a] = '\0';
      pcVar4[0x2b] = '\0';
      return;
    }
    if (*(int *)(pcVar4 + 0x18) != 0) {
      (*DAT_1011c7460)();
      pcVar4[0x28] = '\x02';
      pcVar4[0x29] = '\0';
      pcVar4[0x2a] = '\0';
      pcVar4[0x2b] = '\0';
      return;
    }
    if (*pcVar4 != '\0') {
      if (*(long *)(pcVar4 + 0x10) != 0) {
        (*DAT_1011c7540)();
      }
      uVar6 = (*DAT_1011c7598)(0x9117,0);
      *(undefined8 *)(pcVar4 + 0x10) = uVar6;
    }
    pcVar4[0x28] = '\x02';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    return;
  }
  lVar3 = *(long *)(param_2 + 4);
  if (lVar3 == 0) {
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  puVar1 = param_2 + 4;
  if (*(long *)(param_2 + 6) != 0) {
    FUN_10035bc70(param_1,param_2);
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    return;
  }
  pcVar4 = *(char **)(param_1 + 0x18);
  if (*(int *)(pcVar4 + 0x28) != 1) {
    pcVar4 = *(char **)(param_1 + 0x20);
    goto LAB_10035c299;
  }
  if (*(int *)(pcVar4 + 8) == 0) {
    pcVar4[0x28] = '\x02';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
  }
  else {
    if (*(int *)(pcVar4 + 4) - 3U < 3) {
      puVar5 = &DAT_1011c5cb8;
      iVar7 = 0x8914;
LAB_10035c21d:
      (*(code *)*puVar5)(iVar7);
    }
    else {
      if (*(int *)(pcVar4 + 4) != 0) goto LAB_10035c295;
      iVar7 = *(int *)(pcVar4 + 0x18);
      if (iVar7 != 0) {
        puVar5 = &DAT_1011c7460;
        goto LAB_10035c21d;
      }
      if (*pcVar4 != '\0') {
        if (*(long *)(pcVar4 + 0x10) != 0) {
          (*DAT_1011c7540)();
        }
        uVar6 = (*DAT_1011c7598)(0x9117,0);
        *(undefined8 *)(pcVar4 + 0x10) = uVar6;
      }
    }
    pcVar4[0x28] = '\x02';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    pcVar4 = *(char **)(param_1 + 0x18);
  }
LAB_10035c295:
  *(char **)(param_1 + 0x20) = pcVar4;
LAB_10035c299:
  if ((pcVar4 == (char *)0x0) || (0 < *(int *)(lVar3 + 0x20) - *(int *)(pcVar4 + 0x20))) {
    puVar1[0] = 0;
    puVar1[1] = 0;
  }
  else {
    *(char **)(param_2 + 6) = pcVar4;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}

