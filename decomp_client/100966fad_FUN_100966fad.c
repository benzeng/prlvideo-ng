
long FUN_100966fad(long param_1,int *param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  long local_58;
  long local_38;
  int *local_28;
  int *local_20;
  int local_18;
  int local_14;
  
  local_38 = 0;
  local_18 = 0;
  local_14 = 0;
  piVar1 = param_2;
  if (*(int *)(param_1 + 0x44) == 0) {
LAB_100967264:
    local_28 = piVar1;
    if (local_28 != (int *)0x0) {
      if (((param_3 == 0) && ((*local_28 == 4 || (*local_28 == 3)))) ||
         ((param_3 == 1 && (*local_28 == 9)))) {
        if (local_38 == 0) {
          local_14 = 10;
          lVar2 = (*(code *)_xmlMalloc)(0x58);
          if (lVar2 == 0) {
            FUN_100960bbc(param_1,"getting element list\n");
            return 0;
          }
        }
        else {
          lVar2 = local_38;
          if (local_14 <= local_18) {
            local_14 = local_14 * 2;
            lVar2 = (*(code *)_xmlRealloc)(local_38,(long)(local_14 + 1) * 8);
            if (lVar2 == 0) {
              FUN_100960bbc(param_1,"getting element list\n");
              (*(code *)_xmlFree)(local_38);
              return 0;
            }
          }
        }
        local_38 = lVar2;
        *(int **)((long)local_18 * 8 + local_38) = local_28;
        local_18 = local_18 + 1;
        *(undefined8 *)((long)local_18 * 8 + local_38) = 0;
LAB_10096712b:
        if (local_28 == param_2) goto LAB_10096726f;
        if (*(long *)(local_28 + 0x10) == 0) {
          do {
            local_28 = *(int **)(local_28 + 0xe);
            piVar1 = local_28;
            if (local_28 == (int *)0x0) break;
            if (local_28 == param_2) {
              return local_38;
            }
            if (*(long *)(local_28 + 0x10) != 0) {
              piVar1 = *(int **)(local_28 + 0x10);
              break;
            }
          } while (local_28 != (int *)0x0);
        }
        else {
          piVar1 = *(int **)(local_28 + 0x10);
        }
      }
      else {
        if ((((((((*local_28 != 0x11) && (*local_28 != 0x13)) && (*local_28 != 0x12)) &&
               ((*local_28 != 0x10 && (*local_28 != 0xf)))) &&
              ((*local_28 != 0xe && ((*local_28 != 0xd && (*local_28 != 0xb)))))) &&
             (*local_28 != 10)) && (*local_28 != 0xc)) || (*(long *)(local_28 + 0xc) == 0))
        goto LAB_10096712b;
        piVar1 = *(int **)(local_28 + 0xc);
        for (local_20 = piVar1; local_20 != (int *)0x0; local_20 = *(int **)(local_20 + 0x10)) {
          *(int **)(local_20 + 0xe) = local_28;
        }
      }
      goto LAB_100967264;
    }
LAB_10096726f:
    local_58 = local_38;
  }
  else {
    local_58 = 0;
  }
  return local_58;
}

