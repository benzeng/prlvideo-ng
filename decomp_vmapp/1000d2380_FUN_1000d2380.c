
undefined8 FUN_1000d2380(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 0) {
    *(int *)(param_1 + 500) = param_2;
  }
  else {
    uVar3 = param_2 / 10;
    if ((int)param_3 == 0x188a5) {
      uVar1 = *(uint *)(param_1 + 0x1fc);
      if (uVar1 == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_uiDeleteStepsCount",
                      "SerializationApp.cpp",0xa25,"DiskCallback");
        uVar1 = *(uint *)(param_1 + 0x1fc);
        if (uVar1 == 0) {
          return 1;
        }
      }
      uVar2 = *(int *)(param_1 + 0x200) * 100 + uVar3;
      uVar3 = uVar2 / uVar1;
      param_3 = (ulong)uVar2 % (ulong)uVar1;
    }
    if (*(uint *)(param_1 + 0x204) != uVar3) {
      FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),uVar3,param_3);
      *(uint *)(param_1 + 0x204) = uVar3;
    }
  }
  return 1;
}

