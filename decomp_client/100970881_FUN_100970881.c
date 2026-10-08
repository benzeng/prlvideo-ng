
long FUN_100970881(long param_1,long param_2)

{
  int iVar1;
  long local_18;
  
  local_18 = param_2;
  do {
    if (local_18 == 0) {
      return 0;
    }
    if ((((*(int *)(local_18 + 8) != 8) && (*(int *)(local_18 + 8) != 7)) &&
        (*(int *)(local_18 + 8) != 0x13)) && (*(int *)(local_18 + 8) != 0x14)) {
      if ((*(int *)(local_18 + 8) != 3) && (*(int *)(local_18 + 8) != 4)) {
        return local_18;
      }
      if (((*(uint *)(param_1 + 0x38) >> 2 & 1) == 0) &&
         (iVar1 = FUN_100965e95(*(undefined8 *)(local_18 + 0x50)), iVar1 == 0)) {
        return local_18;
      }
    }
    local_18 = *(long *)(local_18 + 0x30);
  } while( true );
}

