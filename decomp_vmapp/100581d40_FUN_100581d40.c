
undefined8 FUN_100581d40(long param_1,int param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  int local_838 [2];
  long local_830;
  int local_828;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    pcVar6 = "Illegal pointer or empty data";
  }
  else {
    if (param_4 != (long *)0x0) {
      plVar1 = (long *)param_4[4];
      (**(code **)(*plVar1 + 0xc0))
                (plVar1,(ulong)(param_3 * 1000) / (ulong)param_4[1] & 0xffffffff,
                 (ulong)(param_3 * 1000) % (ulong)param_4[1]);
      cVar4 = (**(code **)(*plVar1 + 0x30))(plVar1);
      if (cVar4 != '\0') {
        FUN_1008e3970("","vdisk",0,"Received termination signal");
        return 0x80021038;
      }
      local_838[1] = 1;
      plVar2 = (long *)plVar1[0xb];
      pcVar3 = *(code **)(*plVar2 + 0x3c8);
      local_838[0] = param_2;
      local_830 = param_1;
      local_828 = param_2;
      uVar5 = FUN_100575a30(plVar2,param_3 + *param_4);
      uVar5 = (*pcVar3)(plVar2,local_838,uVar5,(int)plVar1[0xc] == 0);
      return uVar5;
    }
    pcVar6 = "Illegal pointer to element in filter";
  }
  FUN_1008e3970("","vdisk",0,pcVar6);
  return 0x80000003;
}

