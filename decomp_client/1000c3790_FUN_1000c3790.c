
void FUN_1000c3790(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_38;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = FUN_100152280();
  uVar2 = FUN_1001548f0(uVar2,param_1 + 0x10);
  uVar2 = FUN_10018c280(uVar2);
  uVar2 = FUN_100319bf0(uVar2);
  local_28 = (QArrayData *)QString::fromAscii_helper("parallels.ModernMix.guest.win",0x1d);
  lVar3 = FUN_10032d8b0(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000c3816;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000c3816:
  if ((lVar3 != 0) && (FUN_10032ca00(&local_30,lVar3), local_30 != 0)) {
    _PrlHandle_Free();
    iVar1 = FUN_10032c830(lVar3);
    if (iVar1 == 1) {
      FUN_10032cd60(&local_38,lVar3,0);
      if (((0x17 < *(int *)(local_38 + 4)) && (*(int *)(local_38 + *(long *)(local_38 + 0x10)) == 3)
          ) && (*(char *)(param_1 + 0x104) == '\0')) {
        *(undefined1 *)(param_1 + 0x104) = 1;
      }
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (*(int *)local_38 != 0) {
            return;
          }
          local_19 = 0;
        }
        QArrayData::deallocate(local_38,1,8);
      }
    }
    else {
      iVar1 = FUN_10032c830(lVar3);
      if ((iVar1 == 2) && (*(char *)(param_1 + 0x104) != '\0')) {
        *(undefined1 *)(param_1 + 0x104) = 0;
      }
    }
  }
  return;
}

