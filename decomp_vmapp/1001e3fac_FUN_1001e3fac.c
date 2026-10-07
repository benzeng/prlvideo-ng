
int FUN_1001e3fac(undefined8 param_1,undefined1 *param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_3c;
  undefined1 *local_28;
  int local_10;
  
  local_28 = param_2;
  do {
    switch(*local_28) {
    case 0:
      return 0;
    default:
      return -1;
    case 2:
      local_10 = 0;
      while( true ) {
        if (param_5 <= local_10) {
          if (param_5 < param_4) {
            *(undefined8 *)((long)param_5 * 8 + param_3) = *(undefined8 *)(local_28 + 0x20);
            local_3c = 1;
          }
          else {
            local_3c = -2;
          }
          return local_3c;
        }
        if (*(long *)((long)local_10 * 8 + param_3) == *(long *)(local_28 + 0x20)) break;
        local_10 = local_10 + 1;
      }
      return 0;
    case 3:
    case 4:
      iVar1 = FUN_1001e3fac(param_1,*(undefined8 *)(local_28 + 0x10),param_3,param_4,param_5);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar2 = FUN_1001e3fac(param_1,*(undefined8 *)(local_28 + 0x20),param_3,param_4,param_5 + iVar1
                           );
      if (iVar2 < 0) {
        return iVar2;
      }
      return iVar1 + iVar2;
    case 5:
      local_28 = *(undefined1 **)(local_28 + 0x10);
    }
  } while( true );
}

