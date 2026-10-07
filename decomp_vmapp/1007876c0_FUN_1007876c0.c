
void FUN_1007876c0(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","HostUtils",3,"DiskEjectCallback: daDisk=%p daDissenter=%p pContext=%p",param_1
                  ,param_2,param_3);
  }
  if (param_2 == 0) {
    puVar2 = *(uint **)(param_3 + 0x10);
    uVar4 = *puVar2;
  }
  else {
    uVar1 = _DADissenterGetStatus(param_2);
    FUN_1008e3970("","HostUtils",0,"DiskEjectCallback() failed with error = %08X  force = %u",uVar1,
                  **(uint **)(param_3 + 0x10) & 2);
    puVar2 = *(uint **)(param_3 + 0x10);
    uVar4 = *puVar2;
    if ((uVar4 & 2) == 0) goto LAB_10078775e;
  }
  *puVar2 = uVar4 | 1;
LAB_10078775e:
  uVar3 = _CFRunLoopGetCurrent();
  _CFRunLoopStop(uVar3);
  return;
}

