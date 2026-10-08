
void FUN_10077b2f0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if ((param_3 | 2) == 3) {
    lVar1 = FUN_10077a740();
    if (lVar1 != 0) {
      if (param_3 == 3) {
        uVar2 = FUN_10018c280(lVar1);
        uVar2 = FUN_100319ce0(uVar2);
        FUN_1003511a0(uVar2,1);
        return;
      }
      pvVar3 = operator_new(0x40);
      FUN_100227250(pvVar3,lVar1,0,0x1a,0);
      CAbstractTask::execute();
      return;
    }
  }
  return;
}

