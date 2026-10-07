
int * FUN_100206fd1(long param_1,int *param_2)

{
  bool bVar1;
  int *local_38;
  int *local_20;
  
  local_20 = (int *)0x0;
  local_38 = param_2;
  do {
    while( true ) {
      if (local_38 == (int *)0x0) {
        return (int *)0x0;
      }
      bVar1 = false;
      if (*local_38 == 0x10) break;
LAB_1002070c9:
      local_38 = *(int **)(local_38 + 2);
    }
    if (*(long *)(local_38 + 0x18) == 0) {
LAB_100207077:
      if (*(long *)(local_38 + 0xe) != 0) {
        local_20 = (int *)FUN_100206fd1(param_1,*(undefined8 *)(local_38 + 0xe));
      }
      if (bVar1) {
        *(uint *)(*(long *)(local_38 + 0x18) + 0x48) =
             *(uint *)(*(long *)(local_38 + 0x18) + 0x48) ^ 4;
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      goto LAB_1002070c9;
    }
    if (*(long *)(local_38 + 0x18) == param_1) {
      return local_38;
    }
    if ((*(uint *)(*(long *)(local_38 + 0x18) + 0x48) >> 2 & 1) == 0) {
      *(uint *)(*(long *)(local_38 + 0x18) + 0x48) =
           *(uint *)(*(long *)(local_38 + 0x18) + 0x48) | 4;
      bVar1 = true;
      goto LAB_100207077;
    }
    local_38 = *(int **)(local_38 + 2);
  } while( true );
}

