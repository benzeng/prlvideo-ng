
void FUN_10035b800(char *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 4) - 3U < 3) {
      puVar1 = &DAT_1011c5cb8;
      iVar3 = 0x8914;
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x18);
      if (iVar3 == 0) {
        if (*param_1 != '\0') {
          if (*(long *)(param_1 + 0x10) != 0) {
            (*DAT_1011c7540)();
          }
          uVar2 = (*DAT_1011c7598)(0x9117,0);
          *(undefined8 *)(param_1 + 0x10) = uVar2;
        }
        goto LAB_10035b828;
      }
      puVar1 = &DAT_1011c7460;
    }
    (*(code *)*puVar1)(iVar3);
  }
LAB_10035b828:
  param_1[0x28] = '\x02';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  return;
}

