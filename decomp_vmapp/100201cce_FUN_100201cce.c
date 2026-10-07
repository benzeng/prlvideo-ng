
int FUN_100201cce(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *local_20;
  int *local_18;
  
  local_20 = param_3;
  do {
    if (local_20 == (undefined8 *)0x0) {
      return 0;
    }
    for (local_18 = (int *)local_20[1]; (local_18 != (int *)0x0 && (*local_18 != 1));
        local_18 = *(int **)(local_18 + 0x1c)) {
      if (local_18 == param_2) {
        FUN_1001ea46a(param_1,0xbbb,0,param_2,0,"The union type definition is circular",0);
        return 0xbbb;
      }
      if ((((uint)local_18[0x16] >> 7 & 1) != 0) && ((((uint)local_18[0x16] >> 0x10 ^ 1) & 1) != 0))
      {
        local_18[0x16] = local_18[0x16] | 0x10000;
        uVar2 = FUN_1002015f9(local_18);
        iVar1 = FUN_100201cce(param_1,param_2,uVar2);
        local_18[0x16] = local_18[0x16] ^ 0x10000;
        if (iVar1 != 0) {
          return iVar1;
        }
      }
    }
    local_20 = (undefined8 *)*local_20;
  } while( true );
}

