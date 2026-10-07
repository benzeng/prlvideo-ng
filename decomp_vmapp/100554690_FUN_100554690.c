
undefined1 FUN_100554690(long param_1,undefined8 *param_2)

{
  QByteArray *this;
  QByteArray *this_00;
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 uVar5;
  uint *puVar6;
  int local_84;
  undefined1 local_80 [64];
  uint local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (*(long *)(param_1 + 8) != 0) {
    uVar5 = 0;
    FUN_1008e3970("","TransMem",0,"CSnapshotImpl::init() not clean");
    goto LAB_10055481a;
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x30) = param_2[3];
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[5];
  *(undefined8 *)(param_1 + 0x48) = param_2[6];
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  this = (QByteArray *)(param_1 + 0x58);
  QByteArray::operator=(this,(QByteArray *)(param_2 + 8));
  this_00 = (QByteArray *)(param_1 + 0x60);
  QByteArray::operator=(this_00,(QByteArray *)(param_2 + 9));
  uVar5 = 1;
  if (*(char *)(param_1 + 0x40) == '\0') goto LAB_10055481a;
  local_84 = 0;
  plVar4 = (long *)FUN_10060e060(param_1 + 0x41,&local_84);
  *(long **)(param_1 + 0x68) = plVar4;
  if (plVar4 != (long *)0x0) {
    local_84 = (**(code **)(*plVar4 + 0x30))(plVar4);
    if (-1 < local_84) {
      local_84 = (**(code **)(**(long **)(param_1 + 0x68) + 0x58))
                           (*(long **)(param_1 + 0x68),local_80);
      if (-1 < local_84) {
        if (local_40 < 0x11) {
          puVar6 = *(uint **)this;
          if ((local_40 <= puVar6[1]) && (local_40 <= *(uint *)(*(long *)this_00 + 4))) {
            plVar4 = *(long **)(param_1 + 0x68);
            pcVar3 = *(code **)(*plVar4 + 0x48);
            if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
              QByteArray::reallocData(this,puVar6[1] + 1,puVar6[2] >> 0x1f);
              puVar6 = *(uint **)this;
            }
            local_84 = (*pcVar3)(plVar4,(long)puVar6 + *(long *)(puVar6 + 4));
            if (-1 < local_84) {
              puVar6 = *(uint **)(param_1 + 0x60);
              plVar4 = *(long **)(param_1 + 0x68);
              pcVar3 = *(code **)(*plVar4 + 0x50);
              if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
                QByteArray::reallocData(this_00,puVar6[1] + 1,puVar6[2] >> 0x1f);
                puVar6 = *(uint **)this_00;
              }
              local_84 = (*pcVar3)(plVar4,(long)puVar6 + *(long *)(puVar6 + 4));
              if (-1 < local_84) {
                FUN_1008e3970("","TransMem",0,"CSnapshotImpl::init() encryption initialized");
                uVar5 = 1;
                goto LAB_10055481a;
              }
            }
            goto LAB_1005547dc;
          }
        }
        FUN_1008e3970("","TransMem",0,"CSnapshotImpl::init() unexpected block size %d");
      }
    }
  }
LAB_1005547dc:
  uVar5 = 0;
  FUN_1008e3970("","TransMem",0,"CSnapshotImpl::init() failed to initialize encryption engine (%d)",
                local_84);
  if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
    uVar5 = 0;
  }
LAB_10055481a:
  if (lVar1 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

