
void _xmlParseCharData(long *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  byte *local_30;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_24 = *(undefined4 *)(param_1[7] + 0x34);
  local_20 = *(undefined4 *)(param_1[7] + 0x38);
  if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
      (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
    FUN_100879c6f(param_1);
  }
  if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
    FUN_100879cbc(param_1);
  }
  if (param_2 == 0) {
    local_30 = *(byte **)(param_1[7] + 0x20);
    do {
      while( true ) {
        for (; *local_30 == 0x20; local_30 = local_30 + 1) {
        }
        if (*local_30 != 10) break;
        *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
        *(undefined4 *)(param_1[7] + 0x38) = 1;
        while (local_30 = local_30 + 1, *local_30 == 10) {
          *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
          *(undefined4 *)(param_1[7] + 0x38) = 1;
        }
      }
      if (*local_30 == 0x3c) {
        iVar3 = (int)local_30 - (int)*(undefined8 *)(param_1[7] + 0x20);
        if (iVar3 < 1) {
          return;
        }
        uVar1 = *(undefined8 *)(param_1[7] + 0x20);
        *(byte **)(param_1[7] + 0x20) = local_30;
        if ((*param_1 == 0) || (*(long *)(*param_1 + 0x90) == *(long *)(*param_1 + 0x88))) {
          if (*param_1 == 0) {
            return;
          }
          if (*(long *)(*param_1 + 0x88) == 0) {
            return;
          }
          (**(code **)(*param_1 + 0x88))(param_1[1],uVar1,iVar3);
          return;
        }
        iVar2 = FUN_10087b997(param_1,uVar1,iVar3,1);
        if (iVar2 == 0) {
          if (*(long *)(*param_1 + 0x88) == 0) {
            return;
          }
          (**(code **)(*param_1 + 0x88))(param_1[1],uVar1,iVar3);
          return;
        }
        if (*(long *)(*param_1 + 0x90) == 0) {
          return;
        }
        (**(code **)(*param_1 + 0x90))(param_1[1],uVar1,iVar3);
        return;
      }
      while( true ) {
        while( true ) {
          local_1c = *(int *)(param_1[7] + 0x38);
          while ((&DAT_101c9b920)[(int)(uint)*local_30] != '\0') {
            local_30 = local_30 + 1;
            local_1c = local_1c + 1;
          }
          *(int *)(param_1[7] + 0x38) = local_1c;
          if (*local_30 != 10) break;
          *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
          *(undefined4 *)(param_1[7] + 0x38) = 1;
          while (local_30 = local_30 + 1, *local_30 == 10) {
            *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
            *(undefined4 *)(param_1[7] + 0x38) = 1;
          }
        }
        if (*local_30 != 0x5d) break;
        if ((local_30[1] == 0x5d) && (local_30[2] == 0x3e)) {
          FUN_100877520(param_1,0x3e,0);
          *(byte **)(param_1[7] + 0x20) = local_30;
          return;
        }
        local_30 = local_30 + 1;
        *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      }
      iVar3 = (int)local_30 - (int)*(undefined8 *)(param_1[7] + 0x20);
      if (0 < iVar3) {
        if (((*param_1 == 0) || (*(long *)(*param_1 + 0x90) == *(long *)(*param_1 + 0x88))) ||
           ((**(char **)(param_1[7] + 0x20) != ' ' &&
            (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
             (**(char **)(param_1[7] + 0x20) != '\r')))))) {
          if (*param_1 != 0) {
            if (*(long *)(*param_1 + 0x88) != 0) {
              (**(code **)(*param_1 + 0x88))(param_1[1],*(undefined8 *)(param_1[7] + 0x20),iVar3);
            }
            local_24 = *(undefined4 *)(param_1[7] + 0x34);
            local_20 = *(undefined4 *)(param_1[7] + 0x38);
          }
        }
        else {
          uVar1 = *(undefined8 *)(param_1[7] + 0x20);
          *(byte **)(param_1[7] + 0x20) = local_30;
          iVar2 = FUN_10087b997(param_1,uVar1,iVar3,0);
          if (iVar2 == 0) {
            if (*(long *)(*param_1 + 0x88) != 0) {
              (**(code **)(*param_1 + 0x88))(param_1[1],uVar1,iVar3);
            }
          }
          else if (*(long *)(*param_1 + 0x90) != 0) {
            (**(code **)(*param_1 + 0x90))(param_1[1],uVar1,iVar3);
          }
          local_24 = *(undefined4 *)(param_1[7] + 0x34);
          local_20 = *(undefined4 *)(param_1[7] + 0x38);
        }
      }
      *(byte **)(param_1[7] + 0x20) = local_30;
      if ((*local_30 == 0xd) && (local_30[1] == 10)) {
        *(byte **)(param_1[7] + 0x20) = local_30 + 1;
        local_30 = local_30 + 2;
        *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
        *(undefined4 *)(param_1[7] + 0x38) = 1;
      }
      else {
        if (*local_30 == 0x3c) {
          return;
        }
        if (*local_30 == 0x26) {
          return;
        }
        if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
            (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
          FUN_100879c6f(param_1);
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100879cbc(param_1);
        }
        local_30 = *(byte **)(param_1[7] + 0x20);
      }
    } while (((0x1f < *local_30) && (-1 < (char)*local_30)) || (*local_30 == 9));
  }
  *(undefined4 *)(param_1[7] + 0x34) = local_24;
  *(undefined4 *)(param_1[7] + 0x38) = local_20;
  _xmlParseCharDataComplex(param_1,param_2);
  return;
}

