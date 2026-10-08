
long FUN_100c564e0(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 local_50 [8];
  
  lVar3 = 0;
  if (*param_1 != 0) {
    FUN_100c64500();
    FUN_100bf2780(9,0x1e,"eng_table.c",0x103);
    lVar3 = 0;
    if (*param_1 != 0) {
      local_50[0] = param_2;
      lVar2 = FUN_100c60fc0(*param_1,local_50);
      lVar3 = 0;
      if (lVar2 != 0) {
        if ((*(long *)(lVar2 + 0x10) == 0) || (iVar1 = FUN_100c55610(), iVar1 == 0)) {
          if (*(int *)(lVar2 + 0x18) == 0) {
            lVar3 = FUN_100c60820(*(undefined8 *)(lVar2 + 8),0);
            while (lVar3 != 0) {
              if (((0 < *(int *)(lVar3 + 0xb0)) || (((byte)DAT_1023162d0 & 1) == 0)) &&
                 (iVar1 = FUN_100c55610(lVar3), iVar1 != 0)) {
                if ((*(long *)(lVar2 + 0x10) != lVar3) && (iVar1 = FUN_100c55610(lVar3), iVar1 != 0)
                   ) {
                  if (*(long *)(lVar2 + 0x10) != 0) {
                    FUN_100c55660(*(long *)(lVar2 + 0x10),0);
                  }
                  *(long *)(lVar2 + 0x10) = lVar3;
                }
                break;
              }
              lVar3 = FUN_100c60820(*(undefined8 *)(lVar2 + 8));
            }
          }
          else {
            lVar3 = *(long *)(lVar2 + 0x10);
          }
        }
        else {
          lVar3 = *(long *)(lVar2 + 0x10);
        }
        *(undefined4 *)(lVar2 + 0x18) = 1;
      }
    }
    FUN_100bf2780(10,0x1e,"eng_table.c",0x14a);
    FUN_100c64530();
  }
  return lVar3;
}

