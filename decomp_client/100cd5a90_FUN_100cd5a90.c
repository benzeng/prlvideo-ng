
undefined1 FUN_100cd5a90(long param_1,undefined8 *param_2,char param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  undefined4 uStack_2c;
  
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
    FUN_100df99c0("","hid",0,"[CHIDHostHook] m_pView is NULL. Mouse event was not sent.");
  }
  else {
    if (param_3 == '\0') {
      uVar3 = ~*(uint *)(param_2 + 6) & *(uint *)(param_1 + 0x18);
    }
    else {
      uVar3 = *(uint *)(param_2 + 6) | *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar3;
    plVar1 = (long *)(*(long *)(param_1 + 0x348) + 0xf0);
    *plVar1 = *plVar1 + 1;
    local_38 = param_2[5];
    local_40 = param_2[4];
    local_48 = param_2[3];
    local_50 = param_2[2];
    local_60 = *param_2;
    local_58 = param_2[1];
    _local_30 = CONCAT44((int)((ulong)param_2[6] >> 0x20),uVar3);
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_60);
    uVar4 = 1;
  }
  QMutex::unlock();
  return uVar4;
}

