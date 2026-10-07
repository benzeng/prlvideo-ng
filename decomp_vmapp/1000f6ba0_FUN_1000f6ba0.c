
void FUN_1000f6ba0(long param_1,int param_2,ushort param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar4 = param_1 + 0xbcf0;
  uVar2 = param_5;
  iVar3 = param_2;
  QMutex::lock();
  local_48 = param_4;
  local_40 = param_5;
  local_38 = param_6;
  if ((param_2 == 0x8a) && (*(ushort *)(param_1 + 8) <= param_3)) {
    FUN_1008e3970("","vm",0,"CMachODumpBuilder::SetMem(%u, %u) - vcpu is out of range",0x8a);
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 == *(undefined8 **)(param_1 + 0x20)) {
      FUN_1000f8400(param_1 + 0x10,&local_48);
    }
    else {
      puVar1[2] = CONCAT44(uStack_34,param_6);
      puVar1[1] = param_5;
      *puVar1 = param_4;
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x18;
    }
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",3,"CMachODumpBuilder::SetMem(%u, %u) added %#llx[%#x], addr=%#llx",iVar3
                    ,param_3,uVar2,param_6,param_4,uVar2,iVar3,lVar4);
    }
  }
  QMutex::unlock();
  return;
}

