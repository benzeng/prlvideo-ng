
void FUN_1004ee070(long param_1,undefined4 param_2)

{
  long lVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  QMutex::lock();
  local_38 = 0;
  lVar1 = *(long *)(param_1 + 0x50);
  local_48 = (long ***)&local_48;
  local_40 = (long ***)&local_48;
  if (lVar1 != 0) {
    local_48 = *(long ****)(param_1 + 0x40);
    local_40 = *(long ****)(param_1 + 0x48);
    ppplVar2 = (long ***)*local_40;
    ppplVar2[1] = local_48[1];
    *local_48[1] = (long *)ppplVar2;
    *local_40 = (long **)&local_48;
    local_48[1] = (long **)&local_48;
    *(undefined8 *)(param_1 + 0x50) = 0;
    local_38 = lVar1;
  }
  FUN_1004ef7f0(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  QMutex::unlock();
  for (pppplVar4 = (long ****)local_40; pppplVar4 != &local_48; pppplVar4 = (long ****)pppplVar4[1])
  {
    FUN_1004c07d0(pppplVar4[2],pppplVar4[3],param_2);
  }
  if (local_38 != 0) {
    ppplVar2 = (long ***)*local_40;
    ppplVar2[1] = local_48[1];
    *local_48[1] = (long *)ppplVar2;
    local_38 = 0;
    pppplVar4 = (long ****)local_40;
    while (pppplVar4 != &local_48) {
      pppplVar3 = (long ****)pppplVar4[1];
      operator_delete(pppplVar4);
      pppplVar4 = pppplVar3;
    }
  }
  return;
}

