
undefined4 FUN_10093378d(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int *local_28;
  int *local_10;
  
  local_28 = param_2;
  do {
    while( true ) {
      if (local_28 == (int *)0x0) {
        return 0;
      }
      if (*local_28 == 0x10) break;
LAB_1009338eb:
      local_28 = *(int **)(local_28 + 2);
    }
    local_10 = local_28;
    if (*(long *)(local_28 + 8) == 0) {
LAB_1009337f4:
      if (((local_10[0x12] ^ 1U) & 1) != 0) {
        if ((*(long *)(local_10 + 0xe) != 0) &&
           (iVar1 = FUN_10093378d(param_1,*(undefined8 *)(local_10 + 0xe),local_10 + 0x14),
           iVar1 == -1)) {
          return 0xffffffff;
        }
        local_10[0x12] = local_10[0x12] | 1;
      }
      if (*(long *)(local_10 + 0x14) != 0) {
        if (*param_3 == 0) {
          lVar2 = FUN_10092259c(param_1,*(undefined8 *)(param_1 + 0x40),0x15,
                                *(undefined8 *)(*(long *)(local_10 + 0x14) + 0x18));
          *param_3 = lVar2;
          iVar1 = FUN_10093284d(param_1,param_3,*(undefined8 *)(local_10 + 0x14));
          if (iVar1 == -1) {
            return 0xffffffff;
          }
          *(undefined4 *)(*param_3 + 0x28) = *(undefined4 *)(*(long *)(local_10 + 0x14) + 0x28);
          *(undefined8 *)(*param_3 + 0x18) = *(undefined8 *)(*(long *)(local_10 + 0x14) + 0x18);
        }
        else {
          iVar1 = FUN_100933126(param_1,*param_3,*(undefined8 *)(local_10 + 0x14));
          if (iVar1 == -1) {
            return 0xffffffff;
          }
        }
      }
      goto LAB_1009338eb;
    }
    if (*(long *)(local_28 + 0x18) != 0) {
      local_10 = *(int **)(local_28 + 0x18);
      goto LAB_1009337f4;
    }
    local_28 = *(int **)(local_28 + 2);
  } while( true );
}

