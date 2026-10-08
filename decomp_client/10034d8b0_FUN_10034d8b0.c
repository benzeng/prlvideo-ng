
void FUN_10034d8b0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319bf0(uVar2);
  local_28 = (QArrayData *)QString::fromAscii_helper("parallels.OSEvaluation.guest.win",0x20);
  uVar2 = FUN_10032d8b0(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034d931;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10034d931:
  iVar1 = FUN_10032c830(uVar2);
  if (iVar1 == 1) {
    FUN_10032cd60(&local_30,uVar2,0);
    if (0xf < (int)*(uint *)(local_30 + 4)) {
      if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
      }
      FUN_10034da40(param_1,*(undefined4 *)(local_30 + *(long *)(local_30 + 0x10)));
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return;
}

