
long * FUN_100c368e0(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if (param_1 == (long *)0x0) {
    FUN_100c62ee0(0x10,0x79,0x43,"ec_lib.c",0x29f);
  }
  else if (*(long *)(*param_1 + 0x48) == 0) {
    FUN_100c62ee0(0x10,0x79,0x42,"ec_lib.c",0x2a3);
  }
  else {
    plVar3 = (long *)FUN_100bf3540(0x58,"ec_lib.c",0x2a7);
    if (plVar3 == (long *)0x0) {
      FUN_100c62ee0(0x10,0x79,0x41,"ec_lib.c",0x2a9);
    }
    else {
      lVar1 = *param_1;
      *plVar3 = lVar1;
      iVar2 = (**(code **)(lVar1 + 0x48))(plVar3);
      if (iVar2 != 0) {
        return plVar3;
      }
      FUN_100bf3910(plVar3);
    }
  }
  return (long *)0x0;
}

