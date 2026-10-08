
long FUN_100cab040(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100bf3540(0x20,"conf_def.c",0x85);
  if (lVar2 != 0) {
    iVar1 = (**(code **)(param_1 + 0x10))(lVar2);
    if (iVar1 == 0) {
      FUN_100bf3910(lVar2);
      lVar2 = 0;
    }
  }
  return lVar2;
}

