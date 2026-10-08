
long * FUN_100c36060(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    FUN_100c62ee0(0x10,0x6c,0x6c,"ec_lib.c",0x50);
  }
  else if (*(long *)(param_1 + 8) == 0) {
    FUN_100c62ee0(0x10,0x6c,0x42,"ec_lib.c",0x54);
  }
  else {
    plVar2 = (long *)FUN_100bf3540(0xe8,"ec_lib.c",0x58);
    if (plVar2 == (long *)0x0) {
      FUN_100c62ee0(0x10,0x6c,0x41,"ec_lib.c",0x5a);
    }
    else {
      *plVar2 = param_1;
      plVar2[0xc] = 0;
      plVar2[1] = 0;
      FUN_100c26700(plVar2 + 2);
      FUN_100c26700(plVar2 + 5);
      plVar2[8] = 0;
      *(undefined4 *)(plVar2 + 9) = 4;
      plVar2[0xb] = 0;
      plVar2[10] = 0;
      iVar1 = (**(code **)(param_1 + 8))(plVar2);
      if (iVar1 != 0) {
        return plVar2;
      }
      FUN_100bf3910(plVar2);
    }
  }
  return (long *)0x0;
}

