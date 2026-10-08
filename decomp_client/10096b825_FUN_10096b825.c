
void FUN_10096b825(undefined8 param_1,int *param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  int *local_38;
  int *local_28;
  long local_10;
  
  local_28 = (int *)0x0;
  local_38 = param_2;
  do {
    if (local_38 == (int *)0x0) {
      return;
    }
    if ((*local_38 == 0xb) || (*local_38 == 0xd)) {
      if ((short)local_38[0x18] != -3) {
        *(undefined2 *)(local_38 + 0x18) = 0xfffd;
        FUN_10096b825(param_1,*(undefined8 *)(local_38 + 0xc),local_38);
      }
    }
    else if (*local_38 == 1) {
      *(int **)(local_38 + 0xe) = param_3;
      if ((param_3 != (int *)0x0) &&
         (((((*param_3 == 9 || (*param_3 == 8)) || (*param_3 == 0x12)) ||
           ((*param_3 == 0x13 || (*param_3 == 0x10)))) || (*param_3 == 0xf)))) {
        *param_3 = 1;
        return;
      }
      if ((param_3 == (int *)0x0) || (*param_3 != 0x11)) {
        local_28 = local_38;
      }
      else {
        local_28 = (int *)FUN_10096b779(param_1,local_38,param_3,local_28);
      }
    }
    else if (*local_38 == 0) {
      *(int **)(local_38 + 0xe) = param_3;
      if ((param_3 != (int *)0x0) && ((*param_3 == 0x10 || (*param_3 == 0xf)))) {
        *param_3 = 0;
        return;
      }
      if ((param_3 == (int *)0x0) || ((*param_3 != 0x12 && (*param_3 != 0x13)))) {
        local_28 = local_38;
      }
      else {
        local_28 = (int *)FUN_10096b779(param_1,local_38,param_3,local_28);
      }
    }
    else {
      *(int **)(local_38 + 0xe) = param_3;
      if (*(long *)(local_38 + 0xc) != 0) {
        FUN_10096b825(param_1,*(undefined8 *)(local_38 + 0xc),local_38);
      }
      if ((*local_38 != 7) && (*(long *)(local_38 + 0x12) != 0)) {
        FUN_10096b825(param_1,*(undefined8 *)(local_38 + 0x12),local_38);
      }
      if (*(long *)(local_38 + 0x14) != 0) {
        FUN_10096b825(param_1,*(undefined8 *)(local_38 + 0x14),local_38);
      }
      if (*local_38 == 4) {
        while ((*(long *)(local_38 + 0xc) != 0 &&
               (iVar2 = FUN_100966ddf(param_1,*(undefined8 *)(local_38 + 0xc)), iVar2 == 1))) {
          lVar1 = *(long *)(local_38 + 0xc);
          *(undefined8 *)(local_38 + 0xc) = *(undefined8 *)(lVar1 + 0x40);
          *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(local_38 + 0x12);
          *(long *)(local_38 + 0x12) = lVar1;
        }
        lVar1 = *(long *)(local_38 + 0xc);
        while ((local_10 = lVar1, local_10 != 0 && (*(long *)(local_10 + 0x40) != 0))) {
          lVar1 = *(long *)(local_10 + 0x40);
          iVar2 = FUN_100966ddf(param_1,lVar1);
          if (iVar2 == 1) {
            *(undefined8 *)(local_10 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
            *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(local_38 + 0x12);
            *(long *)(local_38 + 0x12) = lVar1;
            lVar1 = local_10;
          }
        }
      }
      if ((*local_38 == 0x12) || (*local_38 == 0x13)) {
        if (*(long *)(local_38 + 0xc) == 0) {
          *local_38 = 0;
        }
        else if (*(long *)(*(long *)(local_38 + 0xc) + 0x40) == 0) {
          if ((param_3 == (int *)0x0) && (local_28 == (int *)0x0)) {
            *local_38 = -1;
          }
          else if (local_28 == (int *)0x0) {
            *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(local_38 + 0xc);
            *(undefined8 *)(*(long *)(local_38 + 0xc) + 0x40) = *(undefined8 *)(local_38 + 0x10);
            local_38 = *(int **)(local_38 + 0xc);
          }
          else {
            *(undefined8 *)(*(long *)(local_38 + 0xc) + 0x40) = *(undefined8 *)(local_38 + 0x10);
            *(undefined8 *)(local_28 + 0x10) = *(undefined8 *)(local_38 + 0xc);
            local_38 = *(int **)(local_38 + 0xc);
          }
        }
      }
      if (((*local_38 == 2) && (*(long *)(local_38 + 0xc) != 0)) &&
         (**(int **)(local_38 + 0xc) == 1)) {
        local_28 = (int *)FUN_10096b779(param_1,local_38,param_3,local_28);
      }
      else if (*local_38 == 1) {
        if ((param_3 != (int *)0x0) &&
           (((((*param_3 == 9 || (*param_3 == 8)) || (*param_3 == 0x12)) ||
             ((*param_3 == 0x13 || (*param_3 == 0x10)))) || (*param_3 == 0xf)))) {
          *param_3 = 1;
          return;
        }
        if ((param_3 == (int *)0x0) || (*param_3 != 0x11)) {
          local_28 = local_38;
        }
        else {
          local_28 = (int *)FUN_10096b779(param_1,local_38,param_3,local_28);
        }
      }
      else if (*local_38 == 0) {
        if ((param_3 != (int *)0x0) && ((*param_3 == 0x10 || (*param_3 == 0xf)))) {
          *param_3 = 0;
          return;
        }
        if ((param_3 == (int *)0x0) ||
           (((*param_3 != 0x12 && (*param_3 != 0x13)) && (*param_3 != 0x11)))) {
          local_28 = local_38;
        }
        else {
          local_28 = (int *)FUN_10096b779(param_1,local_38,param_3,local_28);
        }
      }
      else {
        local_28 = local_38;
      }
    }
    local_38 = *(int **)(local_38 + 0x10);
  } while( true );
}

