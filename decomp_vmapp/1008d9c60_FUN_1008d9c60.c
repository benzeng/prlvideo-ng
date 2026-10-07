
undefined8 FUN_1008d9c60(long param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_52 [13];
  undefined1 local_45 [13];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  sVar3 = _strlen(param_3);
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
  uVar6 = 0xffffffff;
  if (param_2 == (int *)0x0) goto LAB_1008d9e60;
  uVar6 = 0;
  if (*param_2 == 3) {
    if (*(undefined1 **)(param_2 + 6) != (undefined1 *)0x0) {
      **(undefined1 **)(param_2 + 6) = 0;
      cVar2 = *param_3;
      if (cVar2 != '\0') {
        pcVar1 = *(char **)(param_2 + 10);
        do {
          param_3 = param_3 + 1;
          pcVar4 = _strchr(pcVar1,(int)cVar2);
          uVar6 = 0;
          if (pcVar4 != (char *)0x0) {
            cVar2 = *pcVar1;
LAB_1008d9e31:
            **(char **)(param_2 + 6) = cVar2;
            break;
          }
          pcVar4 = *(char **)(param_2 + 0xc);
          pcVar5 = _strchr(pcVar4,(int)cVar2);
          if (pcVar5 != (char *)0x0) {
            cVar2 = *pcVar4;
            goto LAB_1008d9e31;
          }
          cVar2 = *param_3;
        } while (cVar2 != '\0');
      }
      goto LAB_1008d9e60;
    }
    uVar6 = 0x352;
LAB_1008d9e55:
    FUN_100887ce0(0x28,0x69,0x69,"ui_lib.c",uVar6);
    uVar6 = 0xffffffff;
  }
  else {
    if (1 < *param_2 - 1U) goto LAB_1008d9e60;
    FUN_1008823b0(local_45,0xd,"%d",param_2[8]);
    FUN_1008823b0(local_52,0xd,"%d",param_2[9]);
    if ((int)sVar3 < param_2[8]) {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
      uVar6 = 0x65;
      uVar7 = 0x337;
    }
    else {
      if ((int)sVar3 <= param_2[9]) {
        if (*(long *)(param_2 + 6) != 0) {
          FUN_10087d1f0(*(long *)(param_2 + 6),param_3,(long)param_2[9] + 1);
          uVar6 = 0;
          goto LAB_1008d9e60;
        }
        uVar6 = 0x346;
        goto LAB_1008d9e55;
      }
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
      uVar6 = 100;
      uVar7 = 0x33e;
    }
    FUN_100887ce0(0x28,0x69,uVar6,"ui_lib.c",uVar7);
    FUN_1008890a0(5,"You must type in ",local_45," to ",local_52," characters");
    uVar6 = 0xffffffff;
  }
LAB_1008d9e60:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

