
undefined1 FUN_1005b2bb0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  QArrayData *local_30;
  undefined1 local_21;
  
  (**(code **)(*(long *)*param_1 + 0x178))(&local_30);
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b2c07;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005b2c07:
  if (iVar1 == 0) {
    if (DAT_1011b55f8 < 3) {
      return 0;
    }
    pcVar4 = "Disk isn\'t opened yet";
  }
  else {
    cVar2 = (**(code **)(*(long *)*param_1 + 0xd8))();
    if (cVar2 == '\0') {
      if (DAT_1011b55f8 < 3) {
        return 0;
      }
      pcVar4 = "Disk isn\'t compactable";
    }
    else {
      cVar2 = FUN_10057d550(*param_1);
      if (cVar2 == '\0') {
        uVar3 = FUN_1005aff80(param_1 + 9,param_2);
        return uVar3;
      }
      if (DAT_1011b55f8 < 3) {
        return 0;
      }
      pcVar4 = "Cache file disabled by default";
    }
  }
  FUN_1008e3970("","vdisk",3,pcVar4);
  return 0;
}

