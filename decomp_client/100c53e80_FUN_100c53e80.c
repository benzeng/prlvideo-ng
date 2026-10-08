
long * FUN_100c53e80(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (DAT_1023162a8 == 0) {
    DAT_1023162a8 = FUN_100c54860();
  }
  plVar2 = (long *)FUN_100bf3540(0x48,"dso_lib.c",0x6a);
  if (plVar2 == (long *)0x0) {
    FUN_100c62ee0(0x25,0x71,0x41,"dso_lib.c",0x6c);
  }
  else {
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
    lVar3 = FUN_100c60010();
    plVar2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_100c62ee0(0x25,0x71,0x41,"dso_lib.c",0x73);
    }
    else {
      if (param_1 == 0) {
        param_1 = DAT_1023162a8;
      }
      *plVar2 = param_1;
      *(undefined4 *)(plVar2 + 2) = 1;
      if (*(code **)(param_1 + 0x40) == (code *)0x0) {
        return plVar2;
      }
      iVar1 = (**(code **)(param_1 + 0x40))(plVar2);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    FUN_100bf3910(plVar2);
  }
  return (long *)0x0;
}

