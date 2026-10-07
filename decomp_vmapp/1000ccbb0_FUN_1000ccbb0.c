
undefined8 FUN_1000ccbb0(undefined8 param_1,int param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = DAT_1011b69f0;
  if (param_2 < 0) {
    *(int *)(DAT_1011b69f0 + 500) = param_2;
  }
  else {
    uVar4 = param_2 / 10;
    if ((int)param_3 == 0x188a5) {
      uVar1 = *(uint *)(DAT_1011b69f0 + 0x1fc);
      if (uVar1 == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_uiDeleteStepsCount",
                      "SerializationApp.cpp",0xa25,"DiskCallback");
        uVar1 = *(uint *)(lVar2 + 0x1fc);
        if (uVar1 == 0) {
          return 1;
        }
      }
      uVar3 = *(int *)(lVar2 + 0x200) * 100 + uVar4;
      uVar4 = uVar3 / uVar1;
      param_3 = (ulong)uVar3 % (ulong)uVar1;
    }
    if (*(uint *)(lVar2 + 0x204) != uVar4) {
      FUN_1000bea50(*(undefined8 *)(lVar2 + 0x2b0),uVar4,param_3);
      *(uint *)(lVar2 + 0x204) = uVar4;
    }
  }
  return 1;
}

