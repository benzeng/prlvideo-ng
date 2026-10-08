
undefined4 FUN_100966ddf(long param_1,int *param_2)

{
  int *piVar1;
  undefined4 local_3c;
  int *local_18;
  int *local_10;
  
  piVar1 = param_2;
  if (*(int *)(param_1 + 0x44) == 0) {
LAB_100966f96:
    local_18 = piVar1;
    if (local_18 != (int *)0x0) {
      if ((((*local_18 == 4) || (*local_18 == 3)) || (*local_18 == 5)) ||
         (((*local_18 == 6 || (*local_18 == 8)) || ((*local_18 == 7 || (*local_18 == 0)))))) {
        return 0;
      }
      if (((((*local_18 == 0x11) || (*local_18 == 0x13)) ||
           ((*local_18 == 0x12 ||
            ((((*local_18 == 0x10 || (*local_18 == 0xf)) || (*local_18 == 0xe)) ||
             ((*local_18 == 0xd || (*local_18 == 0xc)))))))) ||
          ((*local_18 == 0xb || (*local_18 == 10)))) && (*(long *)(local_18 + 0xc) != 0)) {
        piVar1 = *(int **)(local_18 + 0xc);
        for (local_10 = piVar1; local_10 != (int *)0x0; local_10 = *(int **)(local_10 + 0x10)) {
          *(int **)(local_10 + 0xe) = local_18;
        }
      }
      else {
        if (local_18 == param_2) goto LAB_100966fa1;
        if (*(long *)(local_18 + 0x10) == 0) {
          do {
            local_18 = *(int **)(local_18 + 0xe);
            piVar1 = local_18;
            if (local_18 == (int *)0x0) break;
            if (local_18 == param_2) {
              return 1;
            }
            if (*(long *)(local_18 + 0x10) != 0) {
              piVar1 = *(int **)(local_18 + 0x10);
              break;
            }
          } while (local_18 != (int *)0x0);
        }
        else {
          piVar1 = *(int **)(local_18 + 0x10);
        }
      }
      goto LAB_100966f96;
    }
LAB_100966fa1:
    local_3c = 1;
  }
  else {
    local_3c = 0xffffffff;
  }
  return local_3c;
}

