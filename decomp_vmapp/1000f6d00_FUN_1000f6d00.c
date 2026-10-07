
void FUN_1000f6d00(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  QMutex::lock();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_4;
  if (puVar1 == *(undefined8 **)(param_1 + 0x20)) {
    FUN_1000f8400(param_1 + 0x10,&local_48);
  }
  else {
    puVar1[2] = CONCAT44(uStack_34,param_4);
    puVar1[1] = param_2;
    *puVar1 = param_3;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x18;
  }
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"CMachODumpBuilder::SetImage(%p, %u), base=%#llx",param_3,param_4,
                  param_2);
  }
  QMutex::unlock();
  return;
}

