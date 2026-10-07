
void FUN_10035c3a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  if (pcVar3 == (char *)0x0) {
    return;
  }
  if (*(int *)(pcVar3 + 0x28) != 1) {
    return;
  }
  if (*(int *)(pcVar3 + 8) == 0) {
    pcVar3[0x28] = '\x02';
    pcVar3[0x29] = '\0';
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    goto LAB_10035c402;
  }
  if (*(int *)(pcVar3 + 4) - 3U < 3) {
    puVar1 = &DAT_1011c5cb8;
    iVar4 = 0x8914;
LAB_10035c3d6:
    (*(code *)*puVar1)(iVar4);
  }
  else {
    if (*(int *)(pcVar3 + 4) != 0) goto LAB_10035c402;
    iVar4 = *(int *)(pcVar3 + 0x18);
    if (iVar4 != 0) {
      puVar1 = &DAT_1011c7460;
      goto LAB_10035c3d6;
    }
    if (*pcVar3 != '\0') {
      if (*(long *)(pcVar3 + 0x10) != 0) {
        (*DAT_1011c7540)();
      }
      uVar2 = (*DAT_1011c7598)(0x9117,0);
      *(undefined8 *)(pcVar3 + 0x10) = uVar2;
    }
  }
  pcVar3[0x28] = '\x02';
  pcVar3[0x29] = '\0';
  pcVar3[0x2a] = '\0';
  pcVar3[0x2b] = '\0';
  pcVar3 = *(char **)(param_1 + 0x18);
LAB_10035c402:
  *(char **)(param_1 + 0x20) = pcVar3;
  return;
}

