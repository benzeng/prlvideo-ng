
void FUN_100576f60(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  QArrayData *local_28;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xfffffffe;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(code **)(param_1 + 0x18) = FUN_1005770f0;
  *(long *)(param_1 + 0x10) = param_1;
  uVar3 = FUN_1007da520("devices.hdd.compact_move_threshold",0x10);
  *(undefined4 *)(param_1 + 100) = uVar3;
  if (2 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar4 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar4 = "Disabled";
    }
    else {
      pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",3,"[%p]%s: CompactContext constructed (%p) in state [%s]",uVar2,
                  local_28 + *(long *)(local_28 + 0x10),param_1,pcVar4);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return;
}

